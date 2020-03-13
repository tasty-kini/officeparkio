using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class movePlayer : MonoBehaviour
{
    public float moveSpeed;
    public Rigidbody rb;
    public bool clikToMove;
    public Animator anim;


    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();

    }

    // Update is called once per frame
    void Update()
    {
        if(clikToMove)
        {

            if (Input.GetButtonDown("Fire1"))
            {
                anim.SetBool("moving", true);

            }

            if (Input.GetButton("Fire1"))
            {
                moveForward();

            }

            if (Input.GetButtonUp("Fire1"))
            {
                //Debug.Log("button up");
                anim.SetBool("moving", false);

            }

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
}
