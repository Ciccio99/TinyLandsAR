/*
    Author: Alberto Scicali
    Controls the spawning of the environment detail. At the moment only clouds are spawned from this.
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmentManager : MonoBehaviour {
    
    [Range(0, 40)]
    public int m_NumberOfCloudsToSpawn;
    public GameObject[] m_CloudPrefabs;

    /*
        Called the spawning functions of various environment details
        @param The TerraiContainer in which to spawn the objects into
    */
    public void SpawnEnvironment(GameObject terrainContainer) {
        SpawnClouds (terrainContainer);
    }

    /*
        Instantiates the specified number of clouds into a cloud container inside the terrain container
        @param terrainc container to spawn into.
    */
    private void SpawnClouds(GameObject terrainContainer) {
        GameObject terrainGo = terrainContainer.transform.GetChild (0).gameObject;

        // Created a container for the clouds
        GameObject cloudsContainer = new GameObject ("CloudsContainer");
        cloudsContainer.transform.parent = terrainContainer.transform;
        cloudsContainer.transform.position = Vector3.zero;

        if (cloudsContainer != null) {
            Bounds bounds = terrainGo.GetComponent<Renderer> ().bounds;
            Vector3 extents = terrainGo.GetComponent<Renderer> ().bounds.extents;

            for (int i = 0; i < m_NumberOfCloudsToSpawn; i++) {
                float xPos = Random.Range (-extents.x, extents.x);
                float yPos = Random.Range (bounds.max.y, bounds.max.y + (bounds.max.y * 1.10f));
                float zPos = Random.Range (-extents.z, extents.z);
                Vector3 rotation = new Vector3 (0, Random.Range (0, 361), 0);
                Vector3 cloudPos = new Vector3 (xPos, yPos, zPos);
                // Spawn specified number of clouds, choose the cloud models randomly
                GameObject cloud = GameObject.Instantiate (m_CloudPrefabs [Random.Range (0, 4)], cloudPos, Quaternion.Euler(rotation));
                cloud.transform.parent = cloudsContainer.transform;
            }
        } else {
            Debug.Log ("CloudsContainer child not found");
        }       
    }
}
