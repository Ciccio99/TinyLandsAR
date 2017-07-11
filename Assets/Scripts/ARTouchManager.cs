using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using TMPro;

public class ARTouchManager : MonoBehaviour {
	
	// Update is called once per frame
	void Update () {
		if (Input.touchCount > 0 )
		{
			var touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began) {
                ARTouchBeganUpdateEvent (touch);
                var screenPosition = Camera.main.ScreenToViewportPoint (touch.position);
                ARPoint point = new ARPoint {
                    x = screenPosition.x,
                    y = screenPosition.y
                };

                List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, 
                                           ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent);

                if (hitResults.Count > 0) {
                    foreach (var hitResult in hitResults) {
                        Vector3 position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
                        ARTouchPlaneUpdateEvent (hitResult.anchorIdentifier, position);
                        break;
                    }
                }

            } else if (touch.phase == TouchPhase.Moved) {
                ARTouchMovedUpdateEvent (touch);
            } else if (touch.phase == TouchPhase.Ended) {
                ARTouchEndedUpdateEvent (touch);
            }

		}
	}

    public delegate void ARTouchPlaneUpdate(string anchorIdentifier, Vector3 touchPosition);
	public event ARTouchPlaneUpdate ARTouchPlaneUpdateEvent;

    public delegate void ARTouchBeganUpdate(Touch touchEvent);
    public event ARTouchBeganUpdate ARTouchBeganUpdateEvent;

    public delegate void ARTouchMovedUpdate(Touch touchEvent);
    public event ARTouchMovedUpdate ARTouchMovedUpdateEvent;

    public delegate void ARTouchEndedUpdate(Touch touchEvent);
    public event ARTouchEndedUpdate ARTouchEndedUpdateEvent;


}
