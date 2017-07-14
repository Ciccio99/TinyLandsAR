#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct  PlaceTargetWithMouse_t2469125921  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::surfaceOffset
	float ___surfaceOffset_2;
	// UnityEngine.GameObject UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::setTargetOn
	GameObject_t1756533147 * ___setTargetOn_3;

public:
	inline static int32_t get_offset_of_surfaceOffset_2() { return static_cast<int32_t>(offsetof(PlaceTargetWithMouse_t2469125921, ___surfaceOffset_2)); }
	inline float get_surfaceOffset_2() const { return ___surfaceOffset_2; }
	inline float* get_address_of_surfaceOffset_2() { return &___surfaceOffset_2; }
	inline void set_surfaceOffset_2(float value)
	{
		___surfaceOffset_2 = value;
	}

	inline static int32_t get_offset_of_setTargetOn_3() { return static_cast<int32_t>(offsetof(PlaceTargetWithMouse_t2469125921, ___setTargetOn_3)); }
	inline GameObject_t1756533147 * get_setTargetOn_3() const { return ___setTargetOn_3; }
	inline GameObject_t1756533147 ** get_address_of_setTargetOn_3() { return &___setTargetOn_3; }
	inline void set_setTargetOn_3(GameObject_t1756533147 * value)
	{
		___setTargetOn_3 = value;
		Il2CppCodeGenWriteBarrier(&___setTargetOn_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
