using System.Collections;
using System.Collections.Generic;
using Tastypill.Debug;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public Rigidbody rb;

    public DebugFloat maxDragDistance;
    public DebugFloat maxSpeed, accelerationSpeed = 1f, decelerationSpeed = 1f, rotationSpeed = 4f, dashForce = 50f, dashMaxSpeed = 200f, dashSwipeLength = 300, kickCD = .25f;

    private Vector2 tapStartPosition;

    private float moveSpeed;

    private Vector3 lastPlayerInput;

    public bool canKick = true;
    private float kickCDStamp;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
        DebugMenu.instance.CreateDebugSlider("Max Drag Dist", Color.black, maxDragDistance, 400, 0);
        DebugMenu.instance.CreateDebugSlider("Max Speed", Color.black, maxSpeed, 80, 0);
        DebugMenu.instance.CreateDebugSlider("Acceleration Speed", Color.black, accelerationSpeed, 300, 0);
        DebugMenu.instance.CreateDebugSlider("Deceleration Speed", Color.black, decelerationSpeed, 100, 0);
        DebugMenu.instance.CreateDebugSlider("Rotation Speed", Color.black, rotationSpeed, 10, 0);
        DebugMenu.instance.CreateDebugSlider("dash Force", Color.black, dashForce, 150, 0);
        DebugMenu.instance.CreateDebugSlider("dash swipe length", Color.black, dashSwipeLength, 500, 100);
        DebugMenu.instance.CreateDebugSlider("dash cooldown", Color.black, kickCD, 1, 0);
    }

    private void FixedUpdate()
    {
        if(Time.fixedTime >= kickCDStamp)
            {
                canKick = true;
            }


        if (Input.touchCount > 0)
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began)
            {
                tapStartPosition = Input.GetTouch(0).position;
            }

            Vector2 currentTapLocation = Input.GetTouch(0).position;
            Vector2 inputDiff = currentTapLocation - tapStartPosition; // difference between original touch and current touch, based on screen location

            //Debug.Log("input dif before maxDrag: " + inputDiff.magnitude);
            
            if (inputDiff.magnitude > maxDragDistance) //if the player moves their finger too far away from original touch
            {
                //Debug.Log("change start");
                tapStartPosition = currentTapLocation - inputDiff.normalized * maxDragDistance; //change the new "start" touch location for more accurate measurements
            }

            if (Input.GetTouch(0).phase == TouchPhase.Ended) 
             {
                if (inputDiff.magnitude >= dashSwipeLength)
                {
                   //doKick();
                }
             }

            if (inputDiff.magnitude >= dashSwipeLength)
                {
                    if(canKick)
                    {
                        doKick(new Vector3(inputDiff.x, 0, inputDiff.y).normalized);
                    }  
                }

            float t = inputDiff.magnitude / maxDragDistance; //percentage of max speed, max drag distance is edge of joystick
            float targetMoveSpeed = Mathf.Lerp(0f, maxSpeed, t); // target speed is based on the above percentage and maxspeed
            moveSpeed = targetMoveSpeed;
            //moveSpeed = Mathf.MoveTowards(moveSpeed, targetMoveSpeed, accelerationSpeed * Time.fixedDeltaTime); //start to acceleratate towards target speed, but not faster than acceration speed * time
            Vector3 targetMoveVector = new Vector3(inputDiff.x, 0f, inputDiff.y).normalized * moveSpeed; //targetmovevector is the movement vector based on direction and speed;
            lastPlayerInput = Vector3.MoveTowards(lastPlayerInput, targetMoveVector, accelerationSpeed * Time.fixedDeltaTime); // lerps to target vector based on current, at acceleraton speed

            
        }
        else
        {

            //decelerate if not touching
            moveSpeed = Mathf.MoveTowards(moveSpeed, 0f, Time.fixedDeltaTime * decelerationSpeed);
            Vector3 targetMoveVector = lastPlayerInput.normalized * moveSpeed;
            lastPlayerInput = Vector3.MoveTowards(lastPlayerInput, targetMoveVector, accelerationSpeed * Time.fixedDeltaTime);
        }

        //Debug.Log("last player input: " + lastPlayerInput.magnitude);
        rb.MovePosition(transform.position + lastPlayerInput * Time.fixedDeltaTime);
        Quaternion newLook = Quaternion.LookRotation(lastPlayerInput);
        rb.MoveRotation(Quaternion.Lerp(transform.rotation, newLook, rotationSpeed * Time.deltaTime)); 

    }

    public void doKick(Vector3 newDir)
    {
        rb.AddForce(newDir * dashForce, ForceMode.VelocityChange);
        kickCDStamp = Time.fixedTime + kickCD;
        canKick = false;
    }
}
