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
// EnvironmentManager
struct EnvironmentManager_t2263979904;
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
	// EnvironmentManager MapGenerator::m_EnvironmentManager
	EnvironmentManager_t2263979904 * ___m_EnvironmentManager_3;
	// MapGenerator/DrawMode MapGenerator::drawMode
	int32_t ___drawMode_4;
	// System.Int32 MapGenerator::levelOfDetail
	int32_t ___levelOfDetail_6;
	// System.Single MapGenerator::noiseScale
	float ___noiseScale_7;
	// System.Int32 MapGenerator::octaves
	int32_t ___octaves_8;
	// System.Single MapGenerator::persistance
	float ___persistance_9;
	// System.Single MapGenerator::lacunarity
	float ___lacunarity_10;
	// System.Int32 MapGenerator::seed
	int32_t ___seed_11;
	// UnityEngine.Vector2 MapGenerator::offset
	Vector2_t2243707579  ___offset_12;
	// System.Single MapGenerator::meshHeightMultiplier
	float ___meshHeightMultiplier_13;
	// UnityEngine.AnimationCurve MapGenerator::meshHeightCurve
	AnimationCurve_t3306541151 * ___meshHeightCurve_14;
	// System.Boolean MapGenerator::autoUpdate
	bool ___autoUpdate_15;
	// TerrainType[] MapGenerator::regions
	TerrainTypeU5BU5D_t4293736632* ___regions_16;

public:
	inline static int32_t get_offset_of_m_TerrainMaterial_2() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___m_TerrainMaterial_2)); }
	inline Material_t193706927 * get_m_TerrainMaterial_2() const { return ___m_TerrainMaterial_2; }
	inline Material_t193706927 ** get_address_of_m_TerrainMaterial_2() { return &___m_TerrainMaterial_2; }
	inline void set_m_TerrainMaterial_2(Material_t193706927 * value)
	{
		___m_TerrainMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TerrainMaterial_2, value);
	}

	inline static int32_t get_offset_of_m_EnvironmentManager_3() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___m_EnvironmentManager_3)); }
	inline EnvironmentManager_t2263979904 * get_m_EnvironmentManager_3() const { return ___m_EnvironmentManager_3; }
	inline EnvironmentManager_t2263979904 ** get_address_of_m_EnvironmentManager_3() { return &___m_EnvironmentManager_3; }
	inline void set_m_EnvironmentManager_3(EnvironmentManager_t2263979904 * value)
	{
		___m_EnvironmentManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_EnvironmentManager_3, value);
	}

	inline static int32_t get_offset_of_drawMode_4() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___drawMode_4)); }
	inline int32_t get_drawMode_4() const { return ___drawMode_4; }
	inline int32_t* get_address_of_drawMode_4() { return &___drawMode_4; }
	inline void set_drawMode_4(int32_t value)
	{
		___drawMode_4 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_6() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___levelOfDetail_6)); }
	inline int32_t get_levelOfDetail_6() const { return ___levelOfDetail_6; }
	inline int32_t* get_address_of_levelOfDetail_6() { return &___levelOfDetail_6; }
	inline void set_levelOfDetail_6(int32_t value)
	{
		___levelOfDetail_6 = value;
	}

	inline static int32_t get_offset_of_noiseScale_7() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___noiseScale_7)); }
	inline float get_noiseScale_7() const { return ___noiseScale_7; }
	inline float* get_address_of_noiseScale_7() { return &___noiseScale_7; }
	inline void set_noiseScale_7(float value)
	{
		___noiseScale_7 = value;
	}

	inline static int32_t get_offset_of_octaves_8() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___octaves_8)); }
	inline int32_t get_octaves_8() const { return ___octaves_8; }
	inline int32_t* get_address_of_octaves_8() { return &___octaves_8; }
	inline void set_octaves_8(int32_t value)
	{
		___octaves_8 = value;
	}

	inline static int32_t get_offset_of_persistance_9() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___persistance_9)); }
	inline float get_persistance_9() const { return ___persistance_9; }
	inline float* get_address_of_persistance_9() { return &___persistance_9; }
	inline void set_persistance_9(float value)
	{
		___persistance_9 = value;
	}

	inline static int32_t get_offset_of_lacunarity_10() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___lacunarity_10)); }
	inline float get_lacunarity_10() const { return ___lacunarity_10; }
	inline float* get_address_of_lacunarity_10() { return &___lacunarity_10; }
	inline void set_lacunarity_10(float value)
	{
		___lacunarity_10 = value;
	}

	inline static int32_t get_offset_of_seed_11() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___seed_11)); }
	inline int32_t get_seed_11() const { return ___seed_11; }
	inline int32_t* get_address_of_seed_11() { return &___seed_11; }
	inline void set_seed_11(int32_t value)
	{
		___seed_11 = value;
	}

	inline static int32_t get_offset_of_offset_12() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___offset_12)); }
	inline Vector2_t2243707579  get_offset_12() const { return ___offset_12; }
	inline Vector2_t2243707579 * get_address_of_offset_12() { return &___offset_12; }
	inline void set_offset_12(Vector2_t2243707579  value)
	{
		___offset_12 = value;
	}

	inline static int32_t get_offset_of_meshHeightMultiplier_13() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___meshHeightMultiplier_13)); }
	inline float get_meshHeightMultiplier_13() const { return ___meshHeightMultiplier_13; }
	inline float* get_address_of_meshHeightMultiplier_13() { return &___meshHeightMultiplier_13; }
	inline void set_meshHeightMultiplier_13(float value)
	{
		___meshHeightMultiplier_13 = value;
	}

	inline static int32_t get_offset_of_meshHeightCurve_14() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___meshHeightCurve_14)); }
	inline AnimationCurve_t3306541151 * get_meshHeightCurve_14() const { return ___meshHeightCurve_14; }
	inline AnimationCurve_t3306541151 ** get_address_of_meshHeightCurve_14() { return &___meshHeightCurve_14; }
	inline void set_meshHeightCurve_14(AnimationCurve_t3306541151 * value)
	{
		___meshHeightCurve_14 = value;
		Il2CppCodeGenWriteBarrier(&___meshHeightCurve_14, value);
	}

	inline static int32_t get_offset_of_autoUpdate_15() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___autoUpdate_15)); }
	inline bool get_autoUpdate_15() const { return ___autoUpdate_15; }
	inline bool* get_address_of_autoUpdate_15() { return &___autoUpdate_15; }
	inline void set_autoUpdate_15(bool value)
	{
		___autoUpdate_15 = value;
	}

	inline static int32_t get_offset_of_regions_16() { return static_cast<int32_t>(offsetof(MapGenerator_t237211197, ___regions_16)); }
	inline TerrainTypeU5BU5D_t4293736632* get_regions_16() const { return ___regions_16; }
	inline TerrainTypeU5BU5D_t4293736632** get_address_of_regions_16() { return &___regions_16; }
	inline void set_regions_16(TerrainTypeU5BU5D_t4293736632* value)
	{
		___regions_16 = value;
		Il2CppCodeGenWriteBarrier(&___regions_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
