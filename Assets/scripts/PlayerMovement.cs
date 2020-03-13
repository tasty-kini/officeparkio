using System.Collections;
using System.Collections.Generic;
using Tastypill.Debug;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public Rigidbody rb;

    public DebugFloat maxDragDistance;
    public DebugFloat maxSpeed, accelerationSpeed = 1f, decelerationSpeed = 1f;

    private Vector2 tapStartPosition;

    private float moveSpeed;

    private Vector3 lastPlayerInput;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
        DebugMenu.instance.CreateDebugSlider("Max Drag Dist", Color.black, maxDragDistance, 400, 0);
        DebugMenu.instance.CreateDebugSlider("Max Speed", Color.black, maxSpeed, 80, 0);
        DebugMenu.instance.CreateDebugSlider("Acceleration Speed", Color.black, accelerationSpeed, 100, 0);
        DebugMenu.instance.CreateDebugSlider("Deceleration Speed", Color.black, decelerationSpeed, 100, 0);
    }

    private void FixedUpdate()
    {
        if (Input.touchCount > 0)
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began)
            {
                tapStartPosition = Input.GetTouch(0).position;
            }

            Vector2 currentTapLocation = Input.GetTouch(0).position;
            Vector2 inputDiff = currentTapLocation - tapStartPosition; // difference between original touch and current touch, based on screen location

            if (inputDiff.magnitude > maxDragDistance) // if the player moves their finger too far away from original touch
            {
                tapStartPosition = currentTapLocation - inputDiff.normalized * maxDragDistance; // change the new "start" touch location for more accurate measurements
            }

            float t = inputDiff.magnitude / maxDragDistance; 
            float targetMoveSpeed = Mathf.Lerp(0f, maxSpeed, t);
            moveSpeed = Mathf.MoveTowards(moveSpeed, targetMoveSpeed, accelerationSpeed * Time.fixedDeltaTime);
            Vector3 targetMoveVector = new Vector3(inputDiff.x, 0f, inputDiff.y).normalized * moveSpeed;
            lastPlayerInput = Vector3.MoveTowards(lastPlayerInput, targetMoveVector, accelerationSpeed * Time.fixedDeltaTime);
        }
        else
        {
            moveSpeed = Mathf.MoveTowards(moveSpeed, 0f, Time.fixedDeltaTime * decelerationSpeed);
            Vector3 targetMoveVector = lastPlayerInput.normalized * moveSpeed;
            lastPlayerInput = Vector3.MoveTowards(lastPlayerInput, targetMoveVector, accelerationSpeed * Time.fixedDeltaTime);
        }

        rb.MovePosition(transform.position + lastPlayerInput * Time.fixedDeltaTime);
    }
}
