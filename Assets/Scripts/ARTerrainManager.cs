using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ARTerrainManager : MonoBehaviour {

    public float m_TerrainScale = 0.1f;
    public GameObject m_TerrainPrefab;
    public int m_TerrainLayerMask = 8;
    public TerrainAnchorObject m_TerrainAnchorObject;
    public float m_TerrainModifyRate;
    [Range(0.01f, 0.10f)]
    public float m_TerrainSelectRadius = 0.06f;
    [Range(1.0f, 10.0f)]
    public float m_TerrainCurveValue;
    public Material m_TerrainMaterial;
  
    [HideInInspector]
    public bool m_TerrainSpawned;

    public enum ManipPhase { BEGAN, MOVED, ENDED, NONE }
    private ManipPhase m_CurrentManipPhase;
    private float m_TallestMeshHeight;
    private Vector2 m_StartTouchPosition;
    private Vector2 m_TouchDirection;
    private List<TerrainPoint> m_TerrainPoints;
    private MapGenerator m_MapGenerator;




    private void Awake() {
        m_TerrainSpawned = false;
        m_CurrentManipPhase = ManipPhase.NONE;
        m_TerrainPoints = new List<TerrainPoint> ();
        m_TerrainAnchorObject = new TerrainAnchorObject ();
    }
       

    public void CreateTerrainAnchorObject(ARPlaneAnchor anchorData) {
        if (m_TerrainSpawned) {
            DestroyCurrentTerrainAnchorObject ();
        }

        m_TerrainAnchorObject = new TerrainAnchorObject(GameObject.Instantiate(m_TerrainPrefab), anchorData);
        m_MapGenerator = m_TerrainAnchorObject.terrainObject.GetComponent<MapGenerator> ();
        m_MapGenerator.GenerateMap ();
        UnityARUtility.UpdateObjectWithAnchorTransform (m_TerrainAnchorObject.terrainObject, m_TerrainAnchorObject.anchor, m_TerrainScale);
        // Set the shader height after resize
        m_MapGenerator.SetShaderHeightBoundaries ();
        UnityARSessionNativeInterface.ARAnchorUpdatedEvent += UpdateTerrainAnchor;
        m_TerrainSpawned = true;
    }

    public void DestroyCurrentTerrainAnchorObject() {
        UnityARSessionNativeInterface.ARAnchorUpdatedEvent -= UpdateTerrainAnchor;
        Destroy (m_TerrainAnchorObject.terrainObject);
        m_TerrainSpawned = false;
    }

	public void UpdateTerrainAnchor(ARPlaneAnchor anchorData) {
		if (anchorData.identifier == m_TerrainAnchorObject.anchor.identifier) {
			UnityARUtility.UpdateObjectWithAnchorTransform (m_TerrainAnchorObject.terrainObject, m_TerrainAnchorObject.anchor, m_TerrainScale);
        }
	}

    public void OnTerrainManipulationMoved(Touch touchEvent) {
        if (m_CurrentManipPhase == ManipPhase.MOVED) {
            GameObject terrainGO = m_TerrainAnchorObject.terrainGOChild;
            MeshFilter mf = terrainGO.GetComponent<MeshFilter> ();

            if (mf != null) {
                // #### This can be changes to not make an entire copy of the vrtex array to make it more efficient ####
                Vector3[] vertices = mf.mesh.vertices;
                m_TouchDirection = touchEvent.position - m_StartTouchPosition;
                float modification = (float)m_TouchDirection.y / m_TerrainModifyRate;

                //vertices [m_VerticesManipIndex].y += modification;

                foreach (TerrainPoint tPoint in m_TerrainPoints) {
                    vertices [tPoint.index].y += modification / tPoint.distDenom;
                }
                // Modify the clostest vertex
                mf.mesh.vertices = vertices;
            }
        }
    }


    /*
        On the end of terrain manipulation apply the new mesh to the collider so that it can be
        raycasted against
    */
    public void OnTerrainManipulationEnd(Touch touchEvent) {
        m_CurrentManipPhase = ManipPhase.ENDED;

        // Clear previously stored terrain points that were being manipulated;
        m_TerrainPoints.Clear ();

        GameObject terrainGO = m_TerrainAnchorObject.terrainGOChild;
        MeshFilter mf = terrainGO.GetComponent<MeshFilter> ();
        if (mf != null) {
            mf.gameObject.GetComponent<MeshCollider> ().sharedMesh = mf.sharedMesh;
        }
    }

    public void ExtractManipulationData(Vector3 hitPoint, Touch touchEvent) {
        GameObject terrainGO = m_TerrainAnchorObject.terrainGOChild;
        MeshFilter mf = terrainGO.GetComponent<MeshFilter> ();

        if (mf != null) {
            // DO NOT READ DIRECTLY FROM SHARED MESH, causes the system to lag. Create a copy and read vertex info from copy
            Vector3[] vertices = mf.mesh.vertices;

            // Go through all verticed and find the closest mesh vertex to the rayHit point
            for (int i = 0; i < vertices.Length; i++) {
                Vector3 vert = terrainGO.transform.localToWorldMatrix.MultiplyPoint3x4 (vertices [i]);
                float magnitude = Vector3.Magnitude (hitPoint - vert);

                if (magnitude <= m_TerrainSelectRadius) {
                    m_TerrainPoints.Add (new TerrainPoint (i, vert, Mathf.Lerp(1f, m_TerrainCurveValue, magnitude / m_TerrainSelectRadius)));
                }
            }

            // Set the needed variables to later manipulate the mesh
            m_StartTouchPosition = touchEvent.position;
        }
        m_CurrentManipPhase = ManipPhase.MOVED;
    }
        
}

public struct TerrainAnchorObject {
	public GameObject terrainObject { get; set;}
    public GameObject terrainGOChild { get; set;}
	public ARPlaneAnchor anchor { get; set;}
    
	public TerrainAnchorObject(GameObject go, ARPlaneAnchor planeAnchor) {
		terrainObject = go;
        terrainGOChild = go.transform.GetChild (0).gameObject;
		anchor = planeAnchor;
	}
}

public struct TerrainPoint {
    public int index { get; set; }
    public Vector3 point { get; set;}
    public float distDenom { get; set;}

    public TerrainPoint(int i, Vector3 p, float d) {
        index = i;
        point = p;
        distDenom = d;
    }

}