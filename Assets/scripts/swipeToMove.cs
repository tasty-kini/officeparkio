using System.Collections;
using System.Collections.Generic;
using Tastypill.Debug;
using UnityEngine;

public class swipeToMove : MonoBehaviour
{
    public DebugFloat peddleSpeed = 50f;
    public DebugFloat ddrag = 2f;
    public DebugFloat drotationSpeed = 4f;
    public DebugFloat dminTouchForce = 3f;
    public DebugFloat dmaxVelocity = 40f;
    public DebugFloat dInputSoftener = 5f;
    public DebugFloat dInputClamp = 2.5f;
    //public DebugFloat dKickBurst = 5f;
    public DebugFloat dkickDetermineForce = 30;
    public DebugFloat dsmallKickForce = 15;
    public DebugFloat dbigKickForce = 20;
    public DebugFloat dkickCD = .5f;
    public float burstForce, burstMultiplier, burstMin, burstMax;
    public Rigidbody rb;
    public bool isRotating;
    public Animator anim;
    public Vector3 startTouch, endTouch, curTouch;
    public float touchDistance, minTouchDistance;
    public bool isAlive;
    float touchStartTime, touchEndTime, touchMultiplier;
    public float maxTouchTime, minTouchMultiplier;
    Vector3 newDelta;
    public float rotSpeed, minTouch;
    public float maxVelocity; // fastest player can move

    public float inputSoftener, inputClamp; //softener: number that touchmagnitude is divided by. clamp: clamp big input to this number
    public bool needToSlerp;
    public float slerpT, slerpTStamp;
    public float kickDetermineForce, kickCDTime, kickCDStamp, kickForce, bigKickForce;
    public bool canKick;
    // Start is called before the first frame update
    void Start()
    {
        isAlive = true;
        rb = GetComponent<Rigidbody>();
        canKick = true;
        DebugMenu.instance.CreateDebugSlider("peddle speed", Color.black, peddleSpeed, 100, 0);
        DebugMenu.instance.CreateDebugSlider("player drag", Color.black, ddrag, 5, 0);
        DebugMenu.instance.CreateDebugSlider("rotation speed", Color.black, drotationSpeed, 10, 0);
        DebugMenu.instance.CreateDebugSlider("min touch value", Color.black, dminTouchForce, 10, 0);
        DebugMenu.instance.CreateDebugSlider("input softener", Color.black, dInputSoftener, 10, 0);
        DebugMenu.instance.CreateDebugSlider("input clamp", Color.black, dInputClamp, 10, 0);
        DebugMenu.instance.CreateDebugSlider("max velocity", Color.black, dmaxVelocity, 100, 0);
        DebugMenu.instance.CreateDebugSlider("small kick force", Color.black, dsmallKickForce, 100, 0);
        DebugMenu.instance.CreateDebugSlider("big kick force", Color.black, dbigKickForce, 100, 0);
        DebugMenu.instance.CreateDebugSlider("kick determining vector", Color.black, dkickDetermineForce, 100, 0);
        DebugMenu.instance.CreateDebugSlider("kick cooldown", Color.black, dkickCD, 2, 0);



    }

    // Update is called once per frame


    void Update()
    {
        updateDebugs();

        
        //quickLook();
        if (needToSlerp)
        {
           if(Time.time >= slerpTStamp)
            {
                needToSlerp = false;
            }
            else
            {
                quickLook();
            }
            
        }
        if(!canKick)
        {
            if(Time.time >= kickCDStamp)
            {
                canKick = true;
            }
        }

        if (Input.touchCount > 0 && isAlive)
        {

            if (Input.GetTouch(0).phase == TouchPhase.Began) // beginning touch
            {
                startTouch = new Vector3(Input.GetTouch(0).deltaPosition.x, 0, Input.GetTouch(0).deltaPosition.y);
                newDelta = Vector3.zero; //reset touch delta
                touchStartTime = Time.time; // start keep track of how long touch has been active
            }

            Vector2 playerInput = Input.GetTouch(0).deltaPosition; // find vector of player touch 
           // Debug.Log("player input: " + playerInput.magnitude);
            if(playerInput.magnitude == 0)
            {
                //Debug.Log("zero input: " + newDelta);
            }


            if(playerInput.magnitude > kickDetermineForce)
            {
                if(canKick)
                {
                    
                    if (playerInput.magnitude > inputClamp) playerInput = playerInput.normalized * inputClamp; //clamp big values
                    newDelta = new Vector3(playerInput.x, 0, playerInput.y);
                    kickForward(newDelta, 1);

                }
                
            }
            

            if (playerInput.magnitude > minTouch) //ensure big enough touch is made
            {
                playerInput /= inputSoftener; // soften touch value

                if (playerInput.magnitude > inputClamp) playerInput = playerInput.normalized * inputClamp; //clamp big values
                newDelta = new Vector3(playerInput.x, 0, playerInput.y);
            }
            Debug.Log(newDelta);

            peddleForward(newDelta.normalized); // smooth movement towards touch
                
                quickLook(); //rotate player to look at touch


            if (Input.GetTouch(0).phase == TouchPhase.Ended) // 
            {
                endTouch = new Vector3(Input.GetTouch(0).deltaPosition.x, 0, Input.GetTouch(0).deltaPosition.y);
                touchEndTime = Time.time; //record touch time
                if(canKick)
                {
                    kickForward(newDelta, 2);   //kick player forward based on touch length
                    quickLook();
                }
               
                
            }

        }
        if (rb.velocity.magnitude > maxVelocity)
        {
            //rb.velocity.magnitude = maxVelocity;
        }

    }

    public void kickForward(Vector3 newDir, int num)
    {
        if(num == 1) // small kick
        {
            Debug.Log("small kick");
            rb.AddForce(newDir * kickForce, ForceMode.VelocityChange);
        }
        else // big kick
        {
            float touchTime = touchEndTime - touchStartTime;
            Debug.Log("big kick");
            if (touchTime > maxTouchTime)
            {
                touchMultiplier = maxTouchTime / touchTime;
                if (touchMultiplier < minTouchMultiplier)
                {
                    touchMultiplier = minTouchMultiplier;
                }
            }
            else
            {
                touchMultiplier = 1;
            }
            rb.AddForce(newDir * bigKickForce * touchMultiplier, ForceMode.VelocityChange);
        }
        kickCDStamp = Time.time + kickCDTime;
        canKick = false;
    }


   /* public void kickForward(Vector3 newDir) // burst of speed based on swipe distance and time when player lets go of big swipe
    {
        touchDistance = Vector3.Distance(startTouch, endTouch);
        //Debug.Log(touchDistance);
        float touchTime = touchEndTime - touchStartTime;
        //Debug.Log(touchTime);
         //mutliply current speed by percetage of touch time to maxtime
         if(touchTime > maxTouchTime)
        {
            touchMultiplier = maxTouchTime / touchTime;
            if(touchMultiplier < minTouchMultiplier)
            {
                touchMultiplier = minTouchMultiplier;
            }
        }
        else
        {
            touchMultiplier = 1;
        }
         

        burstMultiplier = touchDistance;
        if(burstMultiplier < burstMin)
        {
            burstMultiplier = burstMin;
        }
        if (burstMultiplier > burstMax)
        {
            burstMultiplier = burstMax;
        }
        //burstMultiplier = touchDistance;


        if(rb.velocity.magnitude < maxVelocity)
        {
            rb.AddForce(newDir * burstForce * burstMultiplier * touchMultiplier, ForceMode.VelocityChange);
            slerpTStamp = Time.time + slerpT;
            needToSlerp = true;
        }
        else
        {
            return;
        }
        
    }*/

    public void peddleForward(Vector3 newDir) // slow constant movement
    {

        rb.AddForce(newDir * peddleSpeed * Time.deltaTime, ForceMode.VelocityChange);
       /* if(rb.velocity.magnitude < maxVelocity)
        {
            rb.AddForce(newDir * peddleSpeed * Time.deltaTime, ForceMode.VelocityChange);
        }
        else
        {
            return;
        }*/
    }

    public void quickLook()
    {
        
        Quaternion newLook = Quaternion.LookRotation(newDelta);
        if(transform.rotation != newLook)
        {
            //Debug.Log("rotating " + Time.time);
            transform.rotation = Quaternion.Lerp(transform.rotation, newLook, rotSpeed * Time.deltaTime);
        }
        else
        {
            //Debug.Log("nothing");
        }

    }

    public void updateDebugs()
    {

        rb.drag = ddrag;
        rotSpeed = drotationSpeed;
        minTouch = dminTouchForce;
        maxVelocity = dmaxVelocity;
        inputSoftener = dInputSoftener;
        inputClamp = dInputClamp;
        kickForce = dsmallKickForce;
        bigKickForce = dbigKickForce;
        kickDetermineForce = dkickDetermineForce;
        kickCDTime = dkickCD;
        //burstForce = dKickBurst;

    }

}
