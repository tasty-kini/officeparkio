using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class agroCol : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            //float angleOfRaycast = 
            //Vector3 v = new Vector3(Mathf.Cos(angleOfRaycast * Mathf.Deg2Rad), 0, Mathf.Sin(angleOfRaycast * Mathf.Deg2Rad));
            //RaycastHit inf = new RaycastHit();
            Vector3 v = other.transform.position - transform.position;
            if(Physics.Raycast(transform.position, v, Vector3.Distance(other.transform.position, transform.position), LayerMask.GetMask("wall")))
            {
                //transform.parent.GetComponent<enemySwiper>().becomeAgro(other.gameObject);
                Debug.Log("cant agro, wall in way");
            }
            else
            {
                transform.parent.GetComponent<enemySwiper>().becomeAgro(other.gameObject);
            }

                
        }
    }
    public void OnTriggerStay(Collider other)
    {
        if (other.tag == "Player")
        {
            //transform.parent.GetComponent<enemySwiper>().becomeAgro(other.gameObject);
        }
    }
}
