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
		m_PlaneAnchorObject.planeObject = GameObject.Instantiate (m_PlanePrefab);

		UnityARSessionNativeInterface.ARAnchorUpdatedEvent += UpdateCurrentPlaneAnchor;
	}

	public void UpdateCurrentPlaneAnchor(ARPlaneAnchor arPlaneAnchor) {
		m_PlaneAnchorObject.anchor = arPlaneAnchor;

        if (m_ARTerrainManager.m_TerrainAnchorObject.anchor.identifier != arPlaneAnchor.identifier)
            UnityARUtility.UpdatePlaneWithAnchorTransform (m_PlaneAnchorObject.planeObject, m_PlaneAnchorObject.anchor);
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
