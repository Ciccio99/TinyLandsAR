#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityStandardAssets.Water.WaterBase
struct WaterBase_t4291487940;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Water.SpecularLighting
struct  SpecularLighting_t2824122729  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityStandardAssets.Water.SpecularLighting::specularLight
	Transform_t3275118058 * ___specularLight_2;
	// UnityStandardAssets.Water.WaterBase UnityStandardAssets.Water.SpecularLighting::m_WaterBase
	WaterBase_t4291487940 * ___m_WaterBase_3;

public:
	inline static int32_t get_offset_of_specularLight_2() { return static_cast<int32_t>(offsetof(SpecularLighting_t2824122729, ___specularLight_2)); }
	inline Transform_t3275118058 * get_specularLight_2() const { return ___specularLight_2; }
	inline Transform_t3275118058 ** get_address_of_specularLight_2() { return &___specularLight_2; }
	inline void set_specularLight_2(Transform_t3275118058 * value)
	{
		___specularLight_2 = value;
		Il2CppCodeGenWriteBarrier(&___specularLight_2, value);
	}

	inline static int32_t get_offset_of_m_WaterBase_3() { return static_cast<int32_t>(offsetof(SpecularLighting_t2824122729, ___m_WaterBase_3)); }
	inline WaterBase_t4291487940 * get_m_WaterBase_3() const { return ___m_WaterBase_3; }
	inline WaterBase_t4291487940 ** get_address_of_m_WaterBase_3() { return &___m_WaterBase_3; }
	inline void set_m_WaterBase_3(WaterBase_t4291487940 * value)
	{
		___m_WaterBase_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_WaterBase_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
