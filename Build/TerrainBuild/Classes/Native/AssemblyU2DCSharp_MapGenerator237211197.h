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

// UnityEngine.Material
struct Material_t193706927;
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
	// UnityEngine.Material MapGenerator::m_TerrainMaterial
	Material_t193706927 * ___m_TerrainMaterial_2;
	// MapGenerator/DrawMode MapGenerator::drawMode
	int32_t ___drawMode_3;
	// System.Int32 MapGenerator::levelOfDetail
	int32_t ___levelOfDetail_5;
	// System.Single MapGenerator::noiseScale
	float ___noiseScale_6;
	// System.Int32 MapGenerator::octaves
	int32_t ___octaves_7;
	// System.Single MapGenerator::persistance
	float ___persistance_8;
	// System.Single MapGenerator::lacunarity
	float ___lacunarity_9;
	// System.Int32 MapGenerator::seed
	int32_t ___seed_10;
	// UnityEngine.Vector2 MapGenerator::offset
	Vector2_t2243707579  ___offset_11;
	// System.Single MapGenerator::meshHeightMultiplier
	float ___meshHeightMultiplier_12;
	// UnityEngine.AnimationCurve MapGenerator::meshHeightCurve
	AnimationCurve_t3306541151 * ___meshHeightCurve_13;
	// System.Boolean MapGenerator::autoUpdate
	bool ___autoUpdate_14;
	// TerrainType[] MapGenerator::regions
	TerrainTypeU5BU5D_t4293736632* ___regions_15;

public:
	inline static int32_t get_offset_of_m_TerrainMaterial_2() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___m_TerrainMaterial_2)); }
	inline Material_t193706927 * get_m_TerrainMaterial_2() const { return ___m_TerrainMaterial_2; }
	inline Material_t193706927 ** get_address_of_m_TerrainMaterial_2() { return &___m_TerrainMaterial_2; }
	inline void set_m_TerrainMaterial_2(Material_t193706927 * value)
	{
		___m_TerrainMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TerrainMaterial_2, value);
	}

	inline static int32_t get_offset_of_drawMode_3() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___drawMode_3)); }
	inline int32_t get_drawMode_3() const { return ___drawMode_3; }
	inline int32_t* get_address_of_drawMode_3() { return &___drawMode_3; }
	inline void set_drawMode_3(int32_t value)
	{
		___drawMode_3 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_5() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___levelOfDetail_5)); }
	inline int32_t get_levelOfDetail_5() const { return ___levelOfDetail_5; }
	inline int32_t* get_address_of_levelOfDetail_5() { return &___levelOfDetail_5; }
	inline void set_levelOfDetail_5(int32_t value)
	{
		___levelOfDetail_5 = value;
	}

	inline static int32_t get_offset_of_noiseScale_6() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___noiseScale_6)); }
	inline float get_noiseScale_6() const { return ___noiseScale_6; }
	inline float* get_address_of_noiseScale_6() { return &___noiseScale_6; }
	inline void set_noiseScale_6(float value)
	{
		___noiseScale_6 = value;
	}

	inline static int32_t get_offset_of_octaves_7() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___octaves_7)); }
	inline int32_t get_octaves_7() const { return ___octaves_7; }
	inline int32_t* get_address_of_octaves_7() { return &___octaves_7; }
	inline void set_octaves_7(int32_t value)
	{
		___octaves_7 = value;
	}

	inline static int32_t get_offset_of_persistance_8() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___persistance_8)); }
	inline float get_persistance_8() const { return ___persistance_8; }
	inline float* get_address_of_persistance_8() { return &___persistance_8; }
	inline void set_persistance_8(float value)
	{
		___persistance_8 = value;
	}

	inline static int32_t get_offset_of_lacunarity_9() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___lacunarity_9)); }
	inline float get_lacunarity_9() const { return ___lacunarity_9; }
	inline float* get_address_of_lacunarity_9() { return &___lacunarity_9; }
	inline void set_lacunarity_9(float value)
	{
		___lacunarity_9 = value;
	}

	inline static int32_t get_offset_of_seed_10() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___seed_10)); }
	inline int32_t get_seed_10() const { return ___seed_10; }
	inline int32_t* get_address_of_seed_10() { return &___seed_10; }
	inline void set_seed_10(int32_t value)
	{
		___seed_10 = value;
	}

	inline static int32_t get_offset_of_offset_11() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___offset_11)); }
	inline Vector2_t2243707579  get_offset_11() const { return ___offset_11; }
	inline Vector2_t2243707579 * get_address_of_offset_11() { return &___offset_11; }
	inline void set_offset_11(Vector2_t2243707579  value)
	{
		___offset_11 = value;
	}

	inline static int32_t get_offset_of_meshHeightMultiplier_12() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___meshHeightMultiplier_12)); }
	inline float get_meshHeightMultiplier_12() const { return ___meshHeightMultiplier_12; }
	inline float* get_address_of_meshHeightMultiplier_12() { return &___meshHeightMultiplier_12; }
	inline void set_meshHeightMultiplier_12(float value)
	{
		___meshHeightMultiplier_12 = value;
	}

	inline static int32_t get_offset_of_meshHeightCurve_13() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___meshHeightCurve_13)); }
	inline AnimationCurve_t3306541151 * get_meshHeightCurve_13() const { return ___meshHeightCurve_13; }
	inline AnimationCurve_t3306541151 ** get_address_of_meshHeightCurve_13() { return &___meshHeightCurve_13; }
	inline void set_meshHeightCurve_13(AnimationCurve_t3306541151 * value)
	{
		___meshHeightCurve_13 = value;
		Il2CppCodeGenWriteBarrier(&___meshHeightCurve_13, value);
	}

	inline static int32_t get_offset_of_autoUpdate_14() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___autoUpdate_14)); }
	inline bool get_autoUpdate_14() const { return ___autoUpdate_14; }
	inline bool* get_address_of_autoUpdate_14() { return &___autoUpdate_14; }
	inline void set_autoUpdate_14(bool value)
	{
		___autoUpdate_14 = value;
	}

	inline static int32_t get_offset_of_regions_15() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___regions_15)); }
	inline TerrainTypeU5BU5D_t4293736632* get_regions_15() const { return ___regions_15; }
	inline TerrainTypeU5BU5D_t4293736632** get_address_of_regions_15() { return &___regions_15; }
	inline void set_regions_15(TerrainTypeU5BU5D_t4293736632* value)
	{
		___regions_15 = value;
		Il2CppCodeGenWriteBarrier(&___regions_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
