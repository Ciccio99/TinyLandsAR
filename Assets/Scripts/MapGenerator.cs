/*
    Author: Alberto Scicali
    Based on the videos on Sebastian Lague

    Generates the map in which the mesh terrain is based on
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapGenerator : MonoBehaviour {
    public Material m_TerrainMaterial;
    public EnvironmentManager m_EnvironmentManager;
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
		//GenerateMap ();
	}


    /*
        Generates the map portion of the terrain. This must be called before calling the enrionment manager functions and before applying
        the terrain shader height boundaries.
    */
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
            
        m_EnvironmentManager.SpawnEnvironment (gameObject);
	}

    // Ensures these values aren't set lower than they should be
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
