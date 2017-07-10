using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.iOS;

public static class ARAnchorManager {
	
	static ARAnchorManager() {
	}

	/*
		Function that is subscribed to the ARAnchorUpdatedEvent. Called whenever anchor update occur.
		Calls the CurrentAnchorUpdated delegate to notify any subscribed function that an update has occured;
		@param arPlaneAnchor | The Anchor plane data
	*/

	// Delegate for other functions to subscribe to; this will be called whenever the current
	// non-terrain anchor is updated
	public delegate void CurrentAnchorUpdated(ARPlaneAnchor arPlaneAnchor);
	// This is the event for the delegate
	public static event CurrentAnchorUpdated CurrentAnchorUpdatedEvent;

}
