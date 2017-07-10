using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TerrainGenerator : MonoBehaviour {

	public int depth = 20;
	public float scale = 10;

	public int width = 256;
	public int height = 256;

	public float offsetX = 100f;
	public float offsetY = 100f;

	public int m_Resolution = 256;

	private Terrain m_Terrain;
	private float[,] m_HeightMap;

	void Start() {
		offsetX = Random.Range (0f, 9999f);
		offsetY = Random.Range (0f, 9999f);

	}

	void Update() {
		m_Terrain = GetComponent<Terrain>();
		m_Terrain.terrainData = GenerateTerrain(m_Terrain.terrainData);
	}

	TerrainData GenerateTerrain (TerrainData terrainData) {
		terrainData.heightmapResolution = m_Resolution + 1;
		terrainData.size = new Vector3(width, depth, height);
		m_HeightMap = GenerateHeights ();
		terrainData.SetHeights(0, 0, m_HeightMap);
		return terrainData;
	}

	private float[,] GenerateHeights() {
		float[,] heights = new float[width, height];
		for(int x = 0; x < width; x++) {
			for (int y = 0; y < height; y++) {
				heights[x, y] = CalculateHeight(x, y);
			}
		}
		return heights;
	}

	float CalculateHeight(int x, int y) {
		float xCoord = (float) x / width * scale;
		float yCoord = (float) y / height * scale;
		xCoord += offsetX;
		yCoord += offsetY;

		return Mathf.PerlinNoise(xCoord, yCoord);
	}

	public void RaiseHeightPoint(int x, int y) {
		if (m_HeightMap [x, y] < 1f)
			m_HeightMap [x, y] += 0.01f;
		
		m_Terrain.terrainData.SetHeights (0, 0, m_HeightMap);
	}

	public void LowerHeightAtPoint(int x, int y) {
		if (m_HeightMap [x, y] > 0f)
			m_HeightMap [x, y] -= -.01f;
		
		m_Terrain.terrainData.SetHeights (0, 0, m_HeightMap);
	}

	

}
