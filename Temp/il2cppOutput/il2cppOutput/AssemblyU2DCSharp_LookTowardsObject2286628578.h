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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LookTowardsObject
struct  LookTowardsObject_t2286628578  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform LookTowardsObject::m_TransformToLookAt
	Transform_t3275118058 * ___m_TransformToLookAt_2;

public:
	inline static int32_t get_offset_of_m_TransformToLookAt_2() { return static_cast<int32_t>(offsetof(LookTowardsObject_t2286628578, ___m_TransformToLookAt_2)); }
	inline Transform_t3275118058 * get_m_TransformToLookAt_2() const { return ___m_TransformToLookAt_2; }
	inline Transform_t3275118058 ** get_address_of_m_TransformToLookAt_2() { return &___m_TransformToLookAt_2; }
	inline void set_m_TransformToLookAt_2(Transform_t3275118058 * value)
	{
		___m_TransformToLookAt_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TransformToLookAt_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
