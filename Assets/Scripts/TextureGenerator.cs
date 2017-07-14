/*
    Author: Alberto Scicali
    Based on the videos of Sebastian Lague

    Generates textures for the map based on the heightmaps or colormaps
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextureGenerator {

    /*
        Creates and returns a texture based on the passed in properties
        @param colorMap | RGB colored array
        @param width | map width
        @param height | map height
        @return Final texture2D
    */
	public static Texture2D TextureFromColorMap(Color[] colorMap, int width, int height) {
		Texture2D texture = new Texture2D (width, height);
		texture.filterMode = FilterMode.Point;
		texture.wrapMode = TextureWrapMode.Clamp;	
		texture.SetPixels (colorMap);
		texture.Apply ();
		return texture;
	}

    /*
        Produce texture from passed in heightmap
        @param heightMap, 2d float array heightmap
        @return Texture2D
    */
	public static Texture2D TextureFromHeightMap(float[,] heightMap) {
		int width = heightMap.GetLength (0);
		int height = heightMap.GetLength (1);

		Texture2D texture = new Texture2D (width, height);

		Color[] colorMap = new Color[width * height];
		for (int y = 0; y < height; y++) {
			for (int x = 0; x < width; x++) {
				colorMap [y * width + x] = Color.Lerp (Color.black, Color.white, heightMap [x, y]); 
			}
		}

		return TextureFromColorMap (colorMap, width, height);
	}

}