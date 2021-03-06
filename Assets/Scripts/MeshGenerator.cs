﻿/*
    Author: Alberto Scicali
    Based ont he videos of Sebastian Lague
    Generates the terrain mesh data
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class MeshGenerator {

    /*
        Generates the MeshData struct for a terrain objects
        @param HeightMap with which ti base the initial vertices heights
        @param Multiplier to expand the heights from 0-1 to a more visible height
        @param Curve used to Keep oceans flat until the sand region is reached
        @param sets the max number of vertices that the mesh can be composed of
    */
	public static MeshData GenerateTerrainMesh(float [,] heightMap, float heightMultiplier, AnimationCurve heightCurve, int levelOfDetail) {
		int width = heightMap.GetLength (0);
		int height = heightMap.GetLength (1);
		float topLeftX = (width - 1) / -2f;
		float topLeftZ = (height - 2) / 2f;

		int meshSimplificationIncrement = (levelOfDetail == 0) ? 1 : levelOfDetail * 2;
		int verticesPerLine = (width - 1) / meshSimplificationIncrement + 1;

		MeshData meshData = new MeshData (verticesPerLine, verticesPerLine);

		int vertexIndex = 0;

		for (int y = 0; y < height; y+= meshSimplificationIncrement) {
			for (int x = 0; x < width; x+= meshSimplificationIncrement) {

				meshData.vertices [vertexIndex] = new Vector3 (topLeftX + x, heightCurve.Evaluate(heightMap[x, y]) * heightMultiplier, topLeftZ - y);

                meshData.uvs [vertexIndex] = new Vector2 (x / (float)width, y / (float)height);

				if (x < width - 1 && y < height - 1) {
					meshData.AddTriangle (vertexIndex, vertexIndex + verticesPerLine + 1, vertexIndex + verticesPerLine);
					meshData.AddTriangle (vertexIndex + verticesPerLine + 1, vertexIndex, vertexIndex + 1);
				}

				vertexIndex++;
			}
		}

		return meshData;
	}
}


/*
    MeshData struct that holds the data for the terrain meshes, as well as the functions to 
    add triangles and to the mesh and to create the overall mesh
*/
public class MeshData {
	public Vector3[] vertices;
	public int[] triangles;
	public Vector2[] uvs;

	int triangleIndex;

	public MeshData(int meshWidth, int meshHeight) {
		vertices = new Vector3[meshWidth * meshHeight];
		uvs = new Vector2[meshWidth * meshHeight];
		triangles = new int[(meshWidth-1) * (meshHeight-1) * 6];
	}

	public void AddTriangle(int a, int b, int c) {
		triangles [triangleIndex] = a;
		triangles [triangleIndex + 1] = b;
		triangles [triangleIndex + 2] = c;

		triangleIndex += 3;
	}

	public Mesh CreateMesh() {
		Mesh mesh = new Mesh ();
		mesh.vertices = vertices;
		mesh.triangles = triangles;
		mesh.uv = uvs;
		mesh.RecalculateNormals ();
		return mesh;
	}
}
