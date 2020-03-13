using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Tastypill.Debug;

public class followPlayer : MonoBehaviour
{
    public DebugFloat camHeight = 57;
    public DebugFloat xRot = 44;
    public DebugFloat yRot = 0;
    public DebugFloat xOffset = 4;
    public DebugFloat zOffset = -53f;
    public DebugButton toggleFollow;
    public GameObject myPlayer, myRagdoll;
    public Vector3 camOffset;
    public bool isWatchingRagdoll, lookingAtTarget;
    public DebugFloat lerpSpeed = 10;
    //public float frameSize;
    // Start is called before the first frame update
    void Start()
    {
        DebugMenu.instance.CreateDebugSlider("Camera Height", Color.green, camHeight, 200, 0);
        DebugMenu.instance.CreateDebugSlider("Camera X offset", Color.green, xOffset, 300, -300);
        DebugMenu.instance.CreateDebugSlider("Camera Z offset", Color.green, zOffset, 300, -300);
        DebugMenu.instance.CreateDebugSlider("Camera X rotation", Color.green, xRot, 180, -180);
        DebugMenu.instance.CreateDebugSlider("Camera Y Rotation", Color.green, yRot, 180, -180);
        DebugMenu.instance.CreateDebugSlider("Camera move Speed", Color.green, lerpSpeed, 50, 1);
        //DebugMenu.instance.CreateDebugButton("Look at Player", toggleLookAt, Color.blue);

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        //followP();
        
       
        

        if (isWatchingRagdoll)
        {
            watchRogdoll();
        }
        else
        {
            followP();

        }

        if (lookingAtTarget)
        {
            transform.LookAt(myPlayer.transform.position);
        }
        else
        {
            updateDebugRot();
        }
    }

    public void followP()
    {

        camOffset.y = camHeight;
        camOffset.x = xOffset;
        camOffset.z = zOffset;
        transform.position = Vector3.Lerp(transform.position, myPlayer.transform.position + camOffset, lerpSpeed * Time.fixedDeltaTime);
        //this.transform.position = myPlayer.transform.position + camOffset;

    }
    public void watchRogdoll()
    {
        camOffset.y = camHeight;
        //transform.LookAt(myRagdoll.transform);
        this.transform.position = myRagdoll.transform.position + camOffset;

    }

    public void updateDebugRot()
    {
        transform.eulerAngles = new Vector3(xRot, yRot, 0);
    }

    public void toggleLookAt()
    {
        lookingAtTarget = !lookingAtTarget;
    }
}
