using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fallFromObstacles : MonoBehaviour
{

    public float fallOffVel, maxVel;
    public GameObject myHuman;
    public float exForce, exRadius;
    public bool isPlayer, timeToDie;
    public float basicProbability, extraChance;
    public float myVel;
    public bool onColCD;
    public float colCDTime, colCDTimestamp;
    public float bumpForce;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    void FixedUpdate()
    {
        myVel = GetComponent<Rigidbody>().velocity.magnitude;

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnCollisionEnter(Collision collision)
    {
        //Debug.Log(collision.gameObject.tag);
        if (!onColCD)
        {
            if (isPlayer)
            {
                
                if (collision.gameObject.tag == "Player") //when colliding with other players, bump both of them 
                {
                    //if high enough speed, do bump
                    doBump(collision.gameObject);
                }
                if (collision.gameObject.tag == "obstacle") //when obstacles, see if they can fall off
                {
                    //if high enough speed, try to fall
                    newCalculateProbability(collision);
                }

            }
            else
            {
                if(collision.gameObject.tag == "Player") //when colliding with other players, bump both of them 
                {

                }
                if (collision.gameObject.tag == "obstacle") //when obstacles, see if they can fall off
                {

                }
            }
        }
    }

    public void goOnCD()
    {
        colCDTimestamp = Time.time + colCDTime;
        onColCD = true;
    }

    public void newCalculateProbability(Collision c)
    {
        float chance = basicProbability + (extraChance * (c.relativeVelocity.magnitude / maxVel));
        if (chance > basicProbability + extraChance)
        {
            chance = basicProbability + extraChance;
            //Debug.Log("chance to fall: " + chance);
        }
        //Debug.Log("chance to fall: " + chance);
        float ranChance = Random.Range(1, 101);
        //Debug.Log("random number is " + ranChance);
        if (ranChance <= chance)
        {
            //timeToDie = true;
            startDeath();
            //deathTimer = Time.time + deathTime;
        }
    }

    public void startDeath()
    {
        timeToDie = true; ;

        if (isPlayer)
        {
            GetComponent<swipeToMove>().isAlive = false;
            myHuman.GetComponent<ragdollController>().startPlayerRagdoll();
        }
        else
        {
            GetComponent<enemySwiper>().isAlive = false;
            myHuman.GetComponent<ragdollController>().startEnemyRagdoll();
        }

    }

    public void doBump(GameObject o)
    {
        if(isPlayer)
        {
            Debug.Log("bump " + transform.rotation.eulerAngles * bumpForce);
            o.GetComponent<Rigidbody>().AddForce(transform.rotation.eulerAngles * bumpForce, ForceMode.VelocityChange);
            GetComponent<Rigidbody>().AddForce(transform.rotation.eulerAngles * -bumpForce, ForceMode.VelocityChange);

        }
        
    }
}
