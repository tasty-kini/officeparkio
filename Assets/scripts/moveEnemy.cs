using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveEnemy : MonoBehaviour
{
    // Start is called before the first frame update
    public float moveSpeed, rotateSpeed;
    public Rigidbody rb;
    public float changeTime, changeTimeStamp;
    public GameObject target;
    Vector3 targetLocation;
    public bool isAgro;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        if(isAgro)
        {
            lookAtTarget();
            moveForward();
        }
        else
        {
            moveForward();
        }
        
    }
    public void moveForward()
    {
        rb.AddForce(transform.forward * moveSpeed);
    }

    public void lookAtTarget()
    {
        transform.LookAt(target.transform.position);
  

    }

    public void newRoamTarget()
    {
        //targetLocation = this.transform.position + new Vector3(transform.forward * )
    }

    public void randomMove()
    {

        

        // Determine which direction to rotate towards
        Vector3 targetDirection = targetLocation - transform.position;

        // The step size is equal to speed times frame time.
        float singleStep = rotateSpeed * Time.deltaTime;

        // Rotate the forward vector towards the target direction by one step
        Vector3 newDirection = Vector3.RotateTowards(transform.forward, targetDirection, singleStep, 0.0f);

        // Draw a ray pointing at our target in
        Debug.DrawRay(transform.position, newDirection, Color.red);

        // Calculate a rotation a step closer to the target and applies rotation to this object
        transform.rotation = Quaternion.LookRotation(newDirection);
    }
}
