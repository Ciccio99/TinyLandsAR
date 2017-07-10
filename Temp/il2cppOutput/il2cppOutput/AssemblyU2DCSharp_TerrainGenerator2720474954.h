#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Terrain
struct Terrain_t59182933;
// System.Single[0...,0...]
struct SingleU5B0___U2C0___U5D_t577127398;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TerrainGenerator
struct  TerrainGenerator_t2720474954  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 TerrainGenerator::depth
	int32_t ___depth_2;
	// System.Single TerrainGenerator::scale
	float ___scale_3;
	// System.Int32 TerrainGenerator::width
	int32_t ___width_4;
	// System.Int32 TerrainGenerator::height
	int32_t ___height_5;
	// System.Single TerrainGenerator::offsetX
	float ___offsetX_6;
	// System.Single TerrainGenerator::offsetY
	float ___offsetY_7;
	// System.Int32 TerrainGenerator::m_Resolution
	int32_t ___m_Resolution_8;
	// UnityEngine.Terrain TerrainGenerator::m_Terrain
	Terrain_t59182933 * ___m_Terrain_9;
	// System.Single[0...,0...] TerrainGenerator::m_HeightMap
	SingleU5B0___U2C0___U5D_t577127398* ___m_HeightMap_10;

public:
	inline static int32_t get_offset_of_depth_2() { return static_cast<int32_t>(offsetof(TerrainGenerator_t2720474954, ___depth_2)); }
	inline int32_t get_depth_2() const { return ___depth_2; }
	inline int32_t* get_address_of_depth_2() { return &___depth_2; }
	inline void set_depth_2(int32_t value)
	{
		___depth_2 = value;
	}

	inline static int32_t get_offset_of_scale_3() { return static_cast<int32_t>(offsetof(TerrainGenerator_t2720474954, ___scale_3)); }
	inline float get_scale_3() const { return ___scale_3; }
	inline float* get_address_of_scale_3() { return &___scale_3; }
	inline void set_scale_3(float value)
	{
		___scale_3 = value;
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(TerrainGenerator_t2720474954, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(TerrainGenerator_t2720474954, ___height_5)); }
	inline int32_t get_height_5() const { return ___height_5; }
	inline int32_t* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(int32_t value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_offsetX_6() { return static_cast<int32_t>(offsetof(TerrainGenerator_t2720474954, ___offsetX_6)); }
	inline float get_offsetX_6() const { return ___offsetX_6; }
	inline float* get_address_of_offsetX_6() { return &___offsetX_6; }
	inline void set_offsetX_6(float value)
	{
		___offsetX_6 = value;
	}

	inline static int32_t get_offset_of_offsetY_7() { return static_cast<int32_t>(offsetof(TerrainGenerator_t2720474954, ___offsetY_7)); }
	inline float get_offsetY_7() const { return ___offsetY_7; }
	inline float* get_address_of_offsetY_7() { return &___offsetY_7; }
	inline void set_offsetY_7(float value)
	{
		___offsetY_7 = value;
	}

	inline static int32_t get_offset_of_m_Resolution_8() { return static_cast<int32_t>(offsetof(TerrainGenerator_t2720474954, ___m_Resolution_8)); }
	inline int32_t get_m_Resolution_8() const { return ___m_Resolution_8; }
	inline int32_t* get_address_of_m_Resolution_8() { return &___m_Resolution_8; }
	inline void set_m_Resolution_8(int32_t value)
	{
		___m_Resolution_8 = value;
	}

	inline static int32_t get_offset_of_m_Terrain_9() { return static_cast<int32_t>(offsetof(TerrainGenerator_t2720474954, ___m_Terrain_9)); }
	inline Terrain_t59182933 * get_m_Terrain_9() const { return ___m_Terrain_9; }
	inline Terrain_t59182933 ** get_address_of_m_Terrain_9() { return &___m_Terrain_9; }
	inline void set_m_Terrain_9(Terrain_t59182933 * value)
	{
		___m_Terrain_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Terrain_9, value);
	}

	inline static int32_t get_offset_of_m_HeightMap_10() { return static_cast<int32_t>(offsetof(TerrainGenerator_t2720474954, ___m_HeightMap_10)); }
	inline SingleU5B0___U2C0___U5D_t577127398* get_m_HeightMap_10() const { return ___m_HeightMap_10; }
	inline SingleU5B0___U2C0___U5D_t577127398** get_address_of_m_HeightMap_10() { return &___m_HeightMap_10; }
	inline void set_m_HeightMap_10(SingleU5B0___U2C0___U5D_t577127398* value)
	{
		___m_HeightMap_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_HeightMap_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
