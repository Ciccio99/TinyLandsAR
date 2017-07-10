﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3485013746.h"

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Water.WaterBase
struct  WaterBase_t4291487940  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material UnityStandardAssets.Water.WaterBase::sharedMaterial
	Material_t193706927 * ___sharedMaterial_2;
	// UnityStandardAssets.Water.WaterQuality UnityStandardAssets.Water.WaterBase::waterQuality
	int32_t ___waterQuality_3;
	// System.Boolean UnityStandardAssets.Water.WaterBase::edgeBlend
	bool ___edgeBlend_4;

public:
	inline static int32_t get_offset_of_sharedMaterial_2() { return static_cast<int32_t>(offsetof(WaterBase_t4291487940, ___sharedMaterial_2)); }
	inline Material_t193706927 * get_sharedMaterial_2() const { return ___sharedMaterial_2; }
	inline Material_t193706927 ** get_address_of_sharedMaterial_2() { return &___sharedMaterial_2; }
	inline void set_sharedMaterial_2(Material_t193706927 * value)
	{
		___sharedMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___sharedMaterial_2, value);
	}

	inline static int32_t get_offset_of_waterQuality_3() { return static_cast<int32_t>(offsetof(WaterBase_t4291487940, ___waterQuality_3)); }
	inline int32_t get_waterQuality_3() const { return ___waterQuality_3; }
	inline int32_t* get_address_of_waterQuality_3() { return &___waterQuality_3; }
	inline void set_waterQuality_3(int32_t value)
	{
		___waterQuality_3 = value;
	}

	inline static int32_t get_offset_of_edgeBlend_4() { return static_cast<int32_t>(offsetof(WaterBase_t4291487940, ___edgeBlend_4)); }
	inline bool get_edgeBlend_4() const { return ___edgeBlend_4; }
	inline bool* get_address_of_edgeBlend_4() { return &___edgeBlend_4; }
	inline void set_edgeBlend_4(bool value)
	{
		___edgeBlend_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
