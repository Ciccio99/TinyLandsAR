using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapGenerator : MonoBehaviour {
    public Material m_TerrainMaterial;
	public enum DrawMode
	{
		NoiseMap, ColorMap, DrawMesh
	};

    public DrawMode drawMode = DrawMode.DrawMesh;

	const int MAP_CHUNK_SIZE = 241;
	[Range(0,6)]
	public int levelOfDetail;
	public float noiseScale;

	public int octaves;
	[Range(0,1)]
	public float persistance;
	public float lacunarity;

	public int seed;
	public Vector2 offset;
	public float meshHeightMultiplier = 30f;
	public AnimationCurve meshHeightCurve;

	public bool autoUpdate;

	public TerrainType[] regions;

	private void Start() {
		GenerateMap ();
	}

	public void GenerateMap() {
		float[,] noiseMap = Noise.GenerateNoiseMap (MAP_CHUNK_SIZE, MAP_CHUNK_SIZE, seed, noiseScale, octaves, persistance, lacunarity, offset);


		Color[] colorMap = new Color[MAP_CHUNK_SIZE * MAP_CHUNK_SIZE];
		for (int y = 0; y < MAP_CHUNK_SIZE; y++) {
			for (int x = 0; x < MAP_CHUNK_SIZE; x++) {
				float currentHight = noiseMap [x, y];
				for (int i = 0; i < regions.Length; i++) {
					if (currentHight <= regions [i].height) {
						colorMap [y * MAP_CHUNK_SIZE + x] = regions [i].color;
						break;
					}
				}
			}
		}

		MapDisplay display = GameObject.FindObjectOfType<MapDisplay> ();
		if (drawMode == DrawMode.NoiseMap) {
			display.DrawTexture (TextureGenerator.TextureFromHeightMap (noiseMap));
		} else if (drawMode == DrawMode.ColorMap) {
			display.DrawTexture (TextureGenerator.TextureFromColorMap (colorMap, MAP_CHUNK_SIZE, MAP_CHUNK_SIZE));
		} else if (drawMode == DrawMode.DrawMesh) {
			display.DrawMesh (MeshGenerator.GenerateTerrainMesh (noiseMap, meshHeightMultiplier, meshHeightCurve, levelOfDetail), TextureGenerator.TextureFromColorMap (colorMap, MAP_CHUNK_SIZE, MAP_CHUNK_SIZE));
		}

        // Get Tallest Point
        GameObject terrainGO = transform.GetChild(0).gameObject;
        MeshFilter mf = terrainGO.GetComponent<MeshFilter> ();
        float tallestDist = Mathf.NegativeInfinity;
        float minHeight = Mathf.Infinity;

        if (mf != null) {
            // #### This can be changes to not make an entire copy of the vrtex array to make it more efficient ####
            Vector3[] vertices = mf.sharedMesh.vertices;
            for (int i = 0; i < vertices.Length; i++) {
                Vector3 vert = terrainGO.transform.localToWorldMatrix.MultiplyPoint3x4 (vertices [i]);
                if (vert.y > tallestDist)
                    tallestDist = vert.y;
                if (vert.y < minHeight)
                    minHeight = vert.y;
            }

            // Set the needed variables to later manipulate the mesh
            Debug.Log ("Tallest point: " + tallestDist);
        }
        // Set the max height on shader
        m_TerrainMaterial.SetFloat ("_MaxHeight", tallestDist);
        m_TerrainMaterial.SetFloat ("_MinHeight", minHeight);
        terrainGO.GetComponent<Renderer> ().material = m_TerrainMaterial;
	}

	void OnValidate() {

		if (lacunarity < 1) {
			lacunarity = 1;
		}

		if (octaves < 0) {
			octaves = 0;
		}

	}
}

[System.Serializable]
public struct TerrainType {
	public string name;
	public float height;
	public Color color;

}
