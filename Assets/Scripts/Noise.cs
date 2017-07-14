/*
    Author: Alberto Scicali
    Based on the videos of Sebastian Lague

    Noise class that generates perlin noise based on the given properties
*/


using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Noise {

    /*
        Generates a noise map with the passed in variables
        @param mapWidth | width of the map
        @param mapHeight | Height of the map
        @param seed | Seed for pseudo randomness
        @param scale | Sets size of the noise
        @param octaves | Sets the number of layer of perlin noise to stacks
        @param persistance | Amplitude multiplier
        @param Lacunarity | The texture/size of the holes in the perlin noise
        @param offset | used to shift the noise to sample different parts of the perlin noise
    */
	public static float[,] GenerateNoiseMap(int mapWidth, int mapHeight, int seed, float scale, int octaves, float persistance, float lacunarity, Vector2 offset) {
		float[,] noiseMap = new float[mapWidth, mapHeight];

		System.Random prng = new System.Random (seed);
		Vector2[] octaveOffsets = new Vector2[octaves];

		for (int i = 0; i < octaves; i++) {
			float offSetX = prng.Next (-10000, 10000) + offset.x;
			float offSetY = prng.Next (-10000, 10000) + offset.y;

			octaveOffsets [i] = new Vector2 (offSetX, offSetY);
		}

		if (scale <= 0)
			scale = 0.0001f;

		float maxNoiseHeight = float.MinValue;
		float minNoiseHeight = float.MaxValue;

		float halfWidth = mapWidth / 2f;
		float halfHeight = mapHeight / 2f;

		for (int y = 0; y < mapHeight; y++) {
			for (int x = 0; x < mapWidth; x++) {

				float amplitude = 1;
				float frequency = 1;
				float noiseHeight = 0;

				for (int i = 0; i < octaves; i++) {

					float sampleX = (x - halfWidth) / scale * frequency + octaveOffsets[i].x;
					float sampleY = (y - halfHeight) / scale * frequency + octaveOffsets[i].y;

					float perlinValue = Mathf.PerlinNoise (sampleX, sampleY) * 2 - 1;
					noiseHeight += perlinValue * amplitude;

					amplitude *= persistance;
					frequency *= lacunarity;
				}

				if (noiseHeight > maxNoiseHeight)
					maxNoiseHeight = noiseHeight;
				else if (noiseHeight < minNoiseHeight)
					minNoiseHeight = noiseHeight;

				noiseMap [x, y] = noiseHeight;
			}
		}

		for (int y = 0; y < mapHeight; y++) {
			for (int x = 0; x < mapWidth; x++) {
				noiseMap[x,y] = Mathf.InverseLerp(minNoiseHeight, maxNoiseHeight, noiseMap[x, y]);
			}
		}

		return noiseMap;
	}
}
