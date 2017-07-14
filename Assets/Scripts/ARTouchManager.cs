/*
    Author: Alberto Scicali

    This class manages the input controls and calls the apporopriate delegates for different phases of a touch.
*/


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using TMPro;

public class ARTouchManager : MonoBehaviour {
	
	void Update () {
        TouchLoop ();
	}

    /*
        Controls which delegate event should be called based on the the phase of the input touch
    */
    private void TouchLoop () {
        if (Input.touchCount > 0 )
        {
            var touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began) {
                ARTouchBeganUpdateEvent (touch);
            } else if (touch.phase == TouchPhase.Moved) {
                ARTouchMovedUpdateEvent (touch);
            } else if (touch.phase == TouchPhase.Ended) {
                ARTouchEndedUpdateEvent (touch);
            }

        }
    }

    // Event Delegate for the begin touch phase
    public delegate void ARTouchBeganUpdate(Touch touchEvent);
    public event ARTouchBeganUpdate ARTouchBeganUpdateEvent;

    // Event delegate for the move touch phase
    public delegate void ARTouchMovedUpdate(Touch touchEvent);
    public event ARTouchMovedUpdate ARTouchMovedUpdateEvent;

    // Event Delegate for the touch ended phase
    public delegate void ARTouchEndedUpdate(Touch touchEvent);
    public event ARTouchEndedUpdate ARTouchEndedUpdateEvent;


}
