#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t1026402524;
// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.BrakeLight
struct  BrakeLight_t365691561  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.BrakeLight::car
	CarController_t1026402524 * ___car_2;
	// UnityEngine.Renderer UnityStandardAssets.Vehicles.Car.BrakeLight::m_Renderer
	Renderer_t257310565 * ___m_Renderer_3;

public:
	inline static int32_t get_offset_of_car_2() { return static_cast<int32_t>(offsetof(BrakeLight_t365691561, ___car_2)); }
	inline CarController_t1026402524 * get_car_2() const { return ___car_2; }
	inline CarController_t1026402524 ** get_address_of_car_2() { return &___car_2; }
	inline void set_car_2(CarController_t1026402524 * value)
	{
		___car_2 = value;
		Il2CppCodeGenWriteBarrier(&___car_2, value);
	}

	inline static int32_t get_offset_of_m_Renderer_3() { return static_cast<int32_t>(offsetof(BrakeLight_t365691561, ___m_Renderer_3)); }
	inline Renderer_t257310565 * get_m_Renderer_3() const { return ___m_Renderer_3; }
	inline Renderer_t257310565 ** get_address_of_m_Renderer_3() { return &___m_Renderer_3; }
	inline void set_m_Renderer_3(Renderer_t257310565 * value)
	{
		___m_Renderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
