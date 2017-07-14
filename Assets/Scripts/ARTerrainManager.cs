/*
    Author: Alberto Scicali
    ARTerrainManager controls the spawning and manipulation of the current spawned terrain object. It keeps track of one terrain at a time and 
    maintains the variables for the currently spawned terrain.
*/

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
    private float m_MinTerrainHeight;
    private float m_TallestMeshHeight;
    private ManipPhase m_CurrentManipPhase;
    private Vector2 m_StartTouchPosition;
    private Vector2 m_TouchDirection;
    private List<TerrainPoint> m_TerrainPoints;
    private MapGenerator m_MapGenerator;

    /*
        Initialize certain variables as soon as the object is instantiated
    */
    private void Awake() {
        m_TerrainSpawned = false;
        m_CurrentManipPhase = ManipPhase.NONE;
        m_TerrainPoints = new List<TerrainPoint> ();
        m_TerrainAnchorObject = new TerrainAnchorObject ();
    }
       
    /*
        Creates and stores the terrain object for future use. Also calls necessary functions set the shader. 
        When a terrain is generated the UpdateTerrainAnchor function is subcribed to the ARAnchorUpdatedEvent delegate - 
        this allows the terrain object to be continously remmapped in the AR space so that it maintains the AR look.
    */
    public void CreateTerrainAnchorObject(ARPlaneAnchor anchorData) {
        if (m_TerrainSpawned) {
            DestroyCurrentTerrainAnchorObject ();
        }

        m_TerrainAnchorObject = new TerrainAnchorObject(GameObject.Instantiate(m_TerrainPrefab), anchorData);
        m_MapGenerator = m_TerrainAnchorObject.terrainObject.GetComponent<MapGenerator> ();
        m_MapGenerator.GenerateMap ();
        UnityARUtility.UpdateObjectWithAnchorTransform (m_TerrainAnchorObject.terrainObject, m_TerrainAnchorObject.anchor, m_TerrainScale);
        // Set the shader height after resize
        SetShaderHeightBoundaries ();
        UnityARSessionNativeInterface.ARAnchorUpdatedEvent += UpdateTerrainAnchor;
        m_TerrainSpawned = true;
    }

    /*
        Destroys the currently spawned terrain object
    */
    public void DestroyCurrentTerrainAnchorObject() {
        UnityARSessionNativeInterface.ARAnchorUpdatedEvent -= UpdateTerrainAnchor;
        Destroy (m_TerrainAnchorObject.terrainObject);
        m_TerrainSpawned = false;
    }

    /*
        Updates the position of the terrain object based on the provided anchordata (The anchor data only affects the terrain if it has the 
        same anchorID that is associated with the terrain.
    */
	public void UpdateTerrainAnchor(ARPlaneAnchor anchorData) {
		if (anchorData.identifier == m_TerrainAnchorObject.anchor.identifier) {
			UnityARUtility.UpdateObjectWithAnchorTransform (m_TerrainAnchorObject.terrainObject, m_TerrainAnchorObject.anchor, m_TerrainScale);
        }
	}

    /*
        Event function that manipulates the vertices on the terrain object when a touch event move phase is detected and called
        @param The touchEvent information
    */
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
                    if (vertices [tPoint.index].y < m_MinTerrainHeight) {
                        vertices [tPoint.index].y = m_MinTerrainHeight;
                    }
                }
                // Modify the clostest vertex
                mf.mesh.vertices = vertices;
            }
        }
    }


    /*
        Clean up function when the touch phase ended event is called. Changes the current state, clears the stores
        vetex points of the mesh, sets the collider equal to the newly updated mesh.
        Updating the collider is necessary, otherwise the raycasting system used to detect which vertex point will
        be manipulated will not work properly. Also updating a collider is expensive so we do it at the end once the final
        terrain mesh has been decided.
        @param The touch event information
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

    /*
        Event function called when the touch phase begin event is called. This finds and stored the vertices that
        will be manipulated.
        @param The hit point, used as the center in which we manipulate vertices
        @param The touch event information
    */
    public void ExtractManipulationData(Vector3 hitPoint, Touch touchEvent) {
        GameObject terrainGO = m_TerrainAnchorObject.terrainGOChild;
        MeshFilter mf = terrainGO.GetComponent<MeshFilter> ();

        if (mf != null) {
            // DO NOT READ DIRECTLY FROM SHARED MESH, causes the system to lag. Create a copy and read vertex info from copy
            Vector3[] vertices = mf.mesh.vertices;

            // Go through all verticed and find the closest mesh vertex to the rayHit point
            for (int i = 0; i < vertices.Length; i++) {
                Vector3 vert = terrainGO.transform.localToWorldMatrix.MultiplyPoint3x4 (vertices [i]);

                // Equation to find the distance of a point from another point, uze the z component because we want the flat distances
                // of center to point, without height interfering with the point selected.
                // Essentially we're projecting a circle onto the map rather than using a sphere at the point of touch
                float distance = Mathf.Sqrt (Mathf.Pow ((vert.x - hitPoint.x), 2) + Mathf.Pow ((vert.z - hitPoint.z), 2));
                if (distance <= m_TerrainSelectRadius) {
                    m_TerrainPoints.Add (new TerrainPoint (i, Mathf.Lerp(1f, m_TerrainCurveValue, distance / m_TerrainSelectRadius)));
                }
            }

            // Set the needed variables to later manipulate the mesh
            m_StartTouchPosition = touchEvent.position;
        }
        m_CurrentManipPhase = ManipPhase.MOVED;
    }


    /*
        This sets the shader height boundaries necessary to properly color the terrain regions based on height. 
        This is typically called after any scaling is applied scaling or translation is applied to the terrain.
        Also sets the minTerrainheight variable which prevent vertices from being placed below the floor.
    */
    public void SetShaderHeightBoundaries() {
        // Get Tallest & lowest point
        GameObject terrainGO = m_TerrainAnchorObject.terrainGOChild;
        MeshFilter mf = terrainGO.GetComponent<MeshFilter> ();
        float tallestDist = Mathf.NegativeInfinity;
        float minHeight = Mathf.Infinity;

        if (mf != null) {
            Vector3[] vertices = mf.sharedMesh.vertices;
            for (int i = 0; i < vertices.Length; i++) {
                Vector3 vert = terrainGO.transform.localToWorldMatrix.MultiplyPoint3x4 (vertices [i]);
                if (vert.y > tallestDist)
                    tallestDist = vert.y;
                if (vert.y < minHeight)
                    minHeight = vert.y;
            }
        }

        m_MinTerrainHeight = minHeight;

        // Set the max height on shader
        m_TerrainMaterial.SetFloat ("_MaxHeight", tallestDist);
        m_TerrainMaterial.SetFloat ("_MinHeight", minHeight);
        terrainGO.GetComponent<Renderer> ().material = m_TerrainMaterial;
    }
        
}

/*
    Struct used to hold the terrain object container, the terrain mesh child, and the associated arAnchor
*/
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

/*
    TerrainPoint struct that holds the index of the and value with which to manipulate the mesh by
*/
public struct TerrainPoint {
    public int index { get; set; }
    public float distDenom { get; set;}

    public TerrainPoint(int i, float d) {
        index = i;
        distDenom = d;
    }

}