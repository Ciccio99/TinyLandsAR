#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.CarSelfRighting
struct  CarSelfRighting_t2466572932  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityStandardAssets.Vehicles.Car.CarSelfRighting::m_WaitTime
	float ___m_WaitTime_2;
	// System.Single UnityStandardAssets.Vehicles.Car.CarSelfRighting::m_VelocityThreshold
	float ___m_VelocityThreshold_3;
	// System.Single UnityStandardAssets.Vehicles.Car.CarSelfRighting::m_LastOkTime
	float ___m_LastOkTime_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Car.CarSelfRighting::m_Rigidbody
	Rigidbody_t4233889191 * ___m_Rigidbody_5;

public:
	inline static int32_t get_offset_of_m_WaitTime_2() { return static_cast<int32_t>(offsetof(CarSelfRighting_t2466572932, ___m_WaitTime_2)); }
	inline float get_m_WaitTime_2() const { return ___m_WaitTime_2; }
	inline float* get_address_of_m_WaitTime_2() { return &___m_WaitTime_2; }
	inline void set_m_WaitTime_2(float value)
	{
		___m_WaitTime_2 = value;
	}

	inline static int32_t get_offset_of_m_VelocityThreshold_3() { return static_cast<int32_t>(offsetof(CarSelfRighting_t2466572932, ___m_VelocityThreshold_3)); }
	inline float get_m_VelocityThreshold_3() const { return ___m_VelocityThreshold_3; }
	inline float* get_address_of_m_VelocityThreshold_3() { return &___m_VelocityThreshold_3; }
	inline void set_m_VelocityThreshold_3(float value)
	{
		___m_VelocityThreshold_3 = value;
	}

	inline static int32_t get_offset_of_m_LastOkTime_4() { return static_cast<int32_t>(offsetof(CarSelfRighting_t2466572932, ___m_LastOkTime_4)); }
	inline float get_m_LastOkTime_4() const { return ___m_LastOkTime_4; }
	inline float* get_address_of_m_LastOkTime_4() { return &___m_LastOkTime_4; }
	inline void set_m_LastOkTime_4(float value)
	{
		___m_LastOkTime_4 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_5() { return static_cast<int32_t>(offsetof(CarSelfRighting_t2466572932, ___m_Rigidbody_5)); }
	inline Rigidbody_t4233889191 * get_m_Rigidbody_5() const { return ___m_Rigidbody_5; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Rigidbody_5() { return &___m_Rigidbody_5; }
	inline void set_m_Rigidbody_5(Rigidbody_t4233889191 * value)
	{
		___m_Rigidbody_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
