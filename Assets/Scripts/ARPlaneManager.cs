/*
    Author: Alberto Scicali
    Custom Implementation of the plane manager that tracks a single instantiated plane and updates that plane to display new planes when discovering the room
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ARPlaneManager : MonoBehaviour {
	public GameObject m_PlanePrefab;
    public ARTerrainManager m_ARTerrainManager;

	public PlaneAnchorObject m_PlaneAnchorObject;

    /*
        Instantiates the planeanchorobejct struct and subscribes the anchor update function to the anchor update delegate
    */
	private void Start() {
		m_PlaneAnchorObject = new PlaneAnchorObject ();

		UnityARSessionNativeInterface.ARAnchorUpdatedEvent += UpdateCurrentPlaneAnchor;
	}

    /*
        Updates the current anchor with the passed in anchor plane data.
        @param arPlaneAnchor | Anchor information
    */
	public void UpdateCurrentPlaneAnchor(ARPlaneAnchor arPlaneAnchor) {
        if (m_ARTerrainManager.m_TerrainAnchorObject.anchor.identifier != arPlaneAnchor.identifier) {
            if (m_PlaneAnchorObject.planeObject == null) {
                m_PlaneAnchorObject.planeObject = GameObject.Instantiate (m_PlanePrefab);
            }
            m_PlaneAnchorObject.anchor = arPlaneAnchor;

            UnityARUtility.UpdatePlaneWithAnchorTransform (m_PlaneAnchorObject.planeObject, m_PlaneAnchorObject.anchor);
        }       
	}

    /*
        Destorys the currently instantiated plane object within the singleton struct
    */
    public void DestroyCurrentPlaneObject() {
        if (m_PlaneAnchorObject.planeObject != null) {
            Destroy (m_PlaneAnchorObject.planeObject);
        }
    }
}

/*
    Struct to maintain a plane and its associated anchor data
*/
public struct PlaneAnchorObject {
	public GameObject planeObject { get; set;}
	public ARPlaneAnchor anchor { get; set;}

	public PlaneAnchorObject(GameObject go, ARPlaneAnchor planeAnchor) {
		planeObject = go;
		anchor = planeAnchor;
	}
}
