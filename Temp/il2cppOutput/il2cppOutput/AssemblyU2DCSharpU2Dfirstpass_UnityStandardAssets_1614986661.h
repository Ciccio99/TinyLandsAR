#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t1026402524;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.Mudguard
struct  Mudguard_t1614986661  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.Mudguard::carController
	CarController_t1026402524 * ___carController_2;
	// UnityEngine.Quaternion UnityStandardAssets.Vehicles.Car.Mudguard::m_OriginalRotation
	Quaternion_t4030073918  ___m_OriginalRotation_3;

public:
	inline static int32_t get_offset_of_carController_2() { return static_cast<int32_t>(offsetof(Mudguard_t1614986661, ___carController_2)); }
	inline CarController_t1026402524 * get_carController_2() const { return ___carController_2; }
	inline CarController_t1026402524 ** get_address_of_carController_2() { return &___carController_2; }
	inline void set_carController_2(CarController_t1026402524 * value)
	{
		___carController_2 = value;
		Il2CppCodeGenWriteBarrier(&___carController_2, value);
	}

	inline static int32_t get_offset_of_m_OriginalRotation_3() { return static_cast<int32_t>(offsetof(Mudguard_t1614986661, ___m_OriginalRotation_3)); }
	inline Quaternion_t4030073918  get_m_OriginalRotation_3() const { return ___m_OriginalRotation_3; }
	inline Quaternion_t4030073918 * get_address_of_m_OriginalRotation_3() { return &___m_OriginalRotation_3; }
	inline void set_m_OriginalRotation_3(Quaternion_t4030073918  value)
	{
		___m_OriginalRotation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
