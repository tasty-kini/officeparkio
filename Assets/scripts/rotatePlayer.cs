using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotatePlayer : MonoBehaviour
{
    public Camera myCam;
    public float camHeight;
    // Start is called before the first frame update
    void Start()
    {
        camHeight = myCam.transform.position.y;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButton("Fire1"))
        {
            //Debug.Log("touch");
            lookAtTouch();
            //PlayerLookAtClick(Input.mousePosition);

        }
    }

    public void lookAtTouch()
    {
        Vector3 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition + new Vector3(0, 0, camHeight));
        mousePosition.y = this.transform.position.y;
        //Debug.Log(mousePosition);
        transform.LookAt(mousePosition);
        /*Vector3 mousePosition = Input.mousePosition;
        mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);
        mousePosition.z = camHeight;
        Debug.Log(mousePosition);
        transform.LookAt(mousePosition);
        Vector3 MouseWorldPosition = myCam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, 0c);
        transform.LookAt(MouseWorldPosition);
        transform.rotation = Quaternion.Euler(new Vector3(0, transform.rotation.eulerAngles.y, 0));*/
        /*Vector3 mousePosition = Input.mousePosition;
        mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);
        Debug.Log(mousePosition);
        Vector3 targetPosition = new Vector3(mousePosition.x, transform.position.y, mousePosition.z);
        transform.LookAt(targetPosition);*/
        //Vector3 mousePosition = Input.mousePosition;
        //transform.position = Camera.main.ScreenToWorldPoint(mousePosition);

    }

    

}
