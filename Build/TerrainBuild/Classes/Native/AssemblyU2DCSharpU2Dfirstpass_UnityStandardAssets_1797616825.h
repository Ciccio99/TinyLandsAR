#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityStandardAssets.Water.PlanarReflection
struct PlanarReflection_t2931543887;
// UnityStandardAssets.Water.WaterBase
struct WaterBase_t4291487940;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Water.WaterTile
struct  WaterTile_t1797616825  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Water.PlanarReflection UnityStandardAssets.Water.WaterTile::reflection
	PlanarReflection_t2931543887 * ___reflection_2;
	// UnityStandardAssets.Water.WaterBase UnityStandardAssets.Water.WaterTile::waterBase
	WaterBase_t4291487940 * ___waterBase_3;

public:
	inline static int32_t get_offset_of_reflection_2() { return static_cast<int32_t>(offsetof(WaterTile_t1797616825, ___reflection_2)); }
	inline PlanarReflection_t2931543887 * get_reflection_2() const { return ___reflection_2; }
	inline PlanarReflection_t2931543887 ** get_address_of_reflection_2() { return &___reflection_2; }
	inline void set_reflection_2(PlanarReflection_t2931543887 * value)
	{
		___reflection_2 = value;
		Il2CppCodeGenWriteBarrier(&___reflection_2, value);
	}

	inline static int32_t get_offset_of_waterBase_3() { return static_cast<int32_t>(offsetof(WaterTile_t1797616825, ___waterBase_3)); }
	inline WaterBase_t4291487940 * get_waterBase_3() const { return ___waterBase_3; }
	inline WaterBase_t4291487940 ** get_address_of_waterBase_3() { return &___waterBase_3; }
	inline void set_waterBase_3(WaterBase_t4291487940 * value)
	{
		___waterBase_3 = value;
		Il2CppCodeGenWriteBarrier(&___waterBase_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
