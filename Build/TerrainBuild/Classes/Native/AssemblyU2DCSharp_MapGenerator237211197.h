#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MapGenerator_DrawMode4000039049.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// TerrainType[]
struct TerrainTypeU5BU5D_t4293736632;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapGenerator
struct  MapGenerator_t237211197  : public MonoBehaviour_t1158329972
{
public:
	// MapGenerator/DrawMode MapGenerator::drawMode
	int32_t ___drawMode_2;
	// System.Int32 MapGenerator::levelOfDetail
	int32_t ___levelOfDetail_4;
	// System.Single MapGenerator::noiseScale
	float ___noiseScale_5;
	// System.Int32 MapGenerator::octaves
	int32_t ___octaves_6;
	// System.Single MapGenerator::persistance
	float ___persistance_7;
	// System.Single MapGenerator::lacunarity
	float ___lacunarity_8;
	// System.Int32 MapGenerator::seed
	int32_t ___seed_9;
	// UnityEngine.Vector2 MapGenerator::offset
	Vector2_t2243707579  ___offset_10;
	// System.Single MapGenerator::meshHeightMultiplier
	float ___meshHeightMultiplier_11;
	// UnityEngine.AnimationCurve MapGenerator::meshHeightCurve
	AnimationCurve_t3306541151 * ___meshHeightCurve_12;
	// System.Boolean MapGenerator::autoUpdate
	bool ___autoUpdate_13;
	// TerrainType[] MapGenerator::regions
	TerrainTypeU5BU5D_t4293736632* ___regions_14;

public:
	inline static int32_t get_offset_of_drawMode_2() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___drawMode_2)); }
	inline int32_t get_drawMode_2() const { return ___drawMode_2; }
	inline int32_t* get_address_of_drawMode_2() { return &___drawMode_2; }
	inline void set_drawMode_2(int32_t value)
	{
		___drawMode_2 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_4() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___levelOfDetail_4)); }
	inline int32_t get_levelOfDetail_4() const { return ___levelOfDetail_4; }
	inline int32_t* get_address_of_levelOfDetail_4() { return &___levelOfDetail_4; }
	inline void set_levelOfDetail_4(int32_t value)
	{
		___levelOfDetail_4 = value;
	}

	inline static int32_t get_offset_of_noiseScale_5() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___noiseScale_5)); }
	inline float get_noiseScale_5() const { return ___noiseScale_5; }
	inline float* get_address_of_noiseScale_5() { return &___noiseScale_5; }
	inline void set_noiseScale_5(float value)
	{
		___noiseScale_5 = value;
	}

	inline static int32_t get_offset_of_octaves_6() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___octaves_6)); }
	inline int32_t get_octaves_6() const { return ___octaves_6; }
	inline int32_t* get_address_of_octaves_6() { return &___octaves_6; }
	inline void set_octaves_6(int32_t value)
	{
		___octaves_6 = value;
	}

	inline static int32_t get_offset_of_persistance_7() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___persistance_7)); }
	inline float get_persistance_7() const { return ___persistance_7; }
	inline float* get_address_of_persistance_7() { return &___persistance_7; }
	inline void set_persistance_7(float value)
	{
		___persistance_7 = value;
	}

	inline static int32_t get_offset_of_lacunarity_8() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___lacunarity_8)); }
	inline float get_lacunarity_8() const { return ___lacunarity_8; }
	inline float* get_address_of_lacunarity_8() { return &___lacunarity_8; }
	inline void set_lacunarity_8(float value)
	{
		___lacunarity_8 = value;
	}

	inline static int32_t get_offset_of_seed_9() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___seed_9)); }
	inline int32_t get_seed_9() const { return ___seed_9; }
	inline int32_t* get_address_of_seed_9() { return &___seed_9; }
	inline void set_seed_9(int32_t value)
	{
		___seed_9 = value;
	}

	inline static int32_t get_offset_of_offset_10() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___offset_10)); }
	inline Vector2_t2243707579  get_offset_10() const { return ___offset_10; }
	inline Vector2_t2243707579 * get_address_of_offset_10() { return &___offset_10; }
	inline void set_offset_10(Vector2_t2243707579  value)
	{
		___offset_10 = value;
	}

	inline static int32_t get_offset_of_meshHeightMultiplier_11() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___meshHeightMultiplier_11)); }
	inline float get_meshHeightMultiplier_11() const { return ___meshHeightMultiplier_11; }
	inline float* get_address_of_meshHeightMultiplier_11() { return &___meshHeightMultiplier_11; }
	inline void set_meshHeightMultiplier_11(float value)
	{
		___meshHeightMultiplier_11 = value;
	}

	inline static int32_t get_offset_of_meshHeightCurve_12() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___meshHeightCurve_12)); }
	inline AnimationCurve_t3306541151 * get_meshHeightCurve_12() const { return ___meshHeightCurve_12; }
	inline AnimationCurve_t3306541151 ** get_address_of_meshHeightCurve_12() { return &___meshHeightCurve_12; }
	inline void set_meshHeightCurve_12(AnimationCurve_t3306541151 * value)
	{
		___meshHeightCurve_12 = value;
		Il2CppCodeGenWriteBarrier(&___meshHeightCurve_12, value);
	}

	inline static int32_t get_offset_of_autoUpdate_13() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___autoUpdate_13)); }
	inline bool get_autoUpdate_13() const { return ___autoUpdate_13; }
	inline bool* get_address_of_autoUpdate_13() { return &___autoUpdate_13; }
	inline void set_autoUpdate_13(bool value)
	{
		___autoUpdate_13 = value;
	}

	inline static int32_t get_offset_of_regions_14() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___regions_14)); }
	inline TerrainTypeU5BU5D_t4293736632* get_regions_14() const { return ___regions_14; }
	inline TerrainTypeU5BU5D_t4293736632** get_address_of_regions_14() { return &___regions_14; }
	inline void set_regions_14(TerrainTypeU5BU5D_t4293736632* value)
	{
		___regions_14 = value;
		Il2CppCodeGenWriteBarrier(&___regions_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
