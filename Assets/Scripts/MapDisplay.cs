﻿/*
    Author: Alberto Scicali
    Based on the videos of Sebastion Lague
    Holds functions to set the terrain texture or to set a mesh to the terrain
*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapDisplay : MonoBehaviour {

	public Renderer textureRender;
	public MeshFilter meshFilter;
	public MeshRenderer meshRenderer;

    /*
        Sets the texture to the correct material and size
        @param Texture to apply
    */
	public void DrawTexture(Texture2D texture) {
		

		textureRender.sharedMaterial.mainTexture = texture;
		textureRender.transform.localScale = new Vector3 (texture.width, 1, texture.height);
	}

    /*
        Sets the mesh to the given meshData and sets the material to the given texture
        @param MeshData holding the necessary mesh info
        @param Texture for the map
    */
	public void DrawMesh(MeshData meshData, Texture2D texture) {
		meshFilter.sharedMesh = meshData.CreateMesh ();
		meshRenderer.sharedMaterial.mainTexture = texture;
        meshFilter.gameObject.GetComponent<MeshCollider> ().sharedMesh = meshFilter.sharedMesh;
	}
}
