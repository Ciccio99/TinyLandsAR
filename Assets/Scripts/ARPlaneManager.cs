using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ARPlaneManager : MonoBehaviour {
	public GameObject m_PlanePrefab;
    public ARTerrainManager m_ARTerrainManager;

	public PlaneAnchorObject m_PlaneAnchorObject;

	private void Start() {
		m_PlaneAnchorObject = new PlaneAnchorObject ();

		UnityARSessionNativeInterface.ARAnchorUpdatedEvent += UpdateCurrentPlaneAnchor;
	}

	public void UpdateCurrentPlaneAnchor(ARPlaneAnchor arPlaneAnchor) {
        if (m_ARTerrainManager.m_TerrainAnchorObject.anchor.identifier != arPlaneAnchor.identifier) {
            if (m_PlaneAnchorObject.planeObject == null) {
                m_PlaneAnchorObject.planeObject = GameObject.Instantiate (m_PlanePrefab);
            }
            m_PlaneAnchorObject.anchor = arPlaneAnchor;

            UnityARUtility.UpdatePlaneWithAnchorTransform (m_PlaneAnchorObject.planeObject, m_PlaneAnchorObject.anchor);
        }       
	}

    public void DestroyCurrentPlaneObject() {
        if (m_PlaneAnchorObject.planeObject != null) {
            Destroy (m_PlaneAnchorObject.planeObject);
        }
    }
}

public struct PlaneAnchorObject {
	public GameObject planeObject { get; set;}
	public ARPlaneAnchor anchor { get; set;}

	public PlaneAnchorObject(GameObject go, ARPlaneAnchor planeAnchor) {
		planeObject = go;
		anchor = planeAnchor;
	}
}
