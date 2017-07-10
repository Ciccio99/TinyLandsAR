﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class GeneralManager : MonoBehaviour {

    public ARPlaneManager m_ARPlaneManager;
    public ARTouchManager m_ARTouchManager;
    public ARTerrainManager m_ARTerrainManager;
	
    private void Start() {
//        m_ARTouchManager.ARTouchPlaneUpdateEvent += UpdateOnTouch;
        m_ARTouchManager.ARTouchBeganUpdateEvent += RayCheck;
        m_ARTouchManager.ARTouchMovedUpdateEvent += m_ARTerrainManager.OnTerrainManipulationMoved;
        m_ARTouchManager.ARTouchEndedUpdateEvent += m_ARTerrainManager.OnTerrainManipulationEnd;
//        m_ARTouchManager.ARTouchBeganUpdateEvent += m_ARTerrainManager.ScreenTerrainTouch;
    }
        
    /*
        Checks which gameobjects have been hit.
    */
    private void RayCheck(Touch touchEvent) {
        Ray ray = Camera.main.ScreenPointToRay (touchEvent.position);
        RaycastHit rayHit;
        if (Physics.Raycast (ray.origin, ray.direction, out rayHit, 20f)) {
            GameObject hitGO = rayHit.collider.gameObject;
            if (hitGO.CompareTag ("Terrain")) {
                // Old function call that would increase the mesh's y component at the selected point
                m_ARTerrainManager.ExtractManipulationData(rayHit.point, touchEvent);
                // New Delegate that will allow various touch phases to manipulate the 
//                TerrainManipulationUpdateEvent(touchEvent, rayHit.point);
            } else if (hitGO.CompareTag("TerrainPlane")) {
                m_ARTerrainManager.CreateTerrainAnchorObject (m_ARPlaneManager.m_PlaneAnchorObject.anchor);
            }

        }
    }
}