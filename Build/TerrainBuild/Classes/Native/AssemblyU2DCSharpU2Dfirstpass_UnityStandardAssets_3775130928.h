#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_V877028010.h"

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t406219171;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.LandingGear
struct  LandingGear_t3775130928  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.LandingGear::raiseAtAltitude
	float ___raiseAtAltitude_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.LandingGear::lowerAtAltitude
	float ___lowerAtAltitude_3;
	// UnityStandardAssets.Vehicles.Aeroplane.LandingGear/GearState UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_State
	int32_t ___m_State_4;
	// UnityEngine.Animator UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Animator
	Animator_t69676727 * ___m_Animator_5;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Rigidbody
	Rigidbody_t4233889191 * ___m_Rigidbody_6;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Plane
	AeroplaneController_t406219171 * ___m_Plane_7;

public:
	inline static int32_t get_offset_of_raiseAtAltitude_2() { return static_cast<int32_t>(offsetof(LandingGear_t3775130928, ___raiseAtAltitude_2)); }
	inline float get_raiseAtAltitude_2() const { return ___raiseAtAltitude_2; }
	inline float* get_address_of_raiseAtAltitude_2() { return &___raiseAtAltitude_2; }
	inline void set_raiseAtAltitude_2(float value)
	{
		___raiseAtAltitude_2 = value;
	}

	inline static int32_t get_offset_of_lowerAtAltitude_3() { return static_cast<int32_t>(offsetof(LandingGear_t3775130928, ___lowerAtAltitude_3)); }
	inline float get_lowerAtAltitude_3() const { return ___lowerAtAltitude_3; }
	inline float* get_address_of_lowerAtAltitude_3() { return &___lowerAtAltitude_3; }
	inline void set_lowerAtAltitude_3(float value)
	{
		___lowerAtAltitude_3 = value;
	}

	inline static int32_t get_offset_of_m_State_4() { return static_cast<int32_t>(offsetof(LandingGear_t3775130928, ___m_State_4)); }
	inline int32_t get_m_State_4() const { return ___m_State_4; }
	inline int32_t* get_address_of_m_State_4() { return &___m_State_4; }
	inline void set_m_State_4(int32_t value)
	{
		___m_State_4 = value;
	}

	inline static int32_t get_offset_of_m_Animator_5() { return static_cast<int32_t>(offsetof(LandingGear_t3775130928, ___m_Animator_5)); }
	inline Animator_t69676727 * get_m_Animator_5() const { return ___m_Animator_5; }
	inline Animator_t69676727 ** get_address_of_m_Animator_5() { return &___m_Animator_5; }
	inline void set_m_Animator_5(Animator_t69676727 * value)
	{
		___m_Animator_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_5, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody_6() { return static_cast<int32_t>(offsetof(LandingGear_t3775130928, ___m_Rigidbody_6)); }
	inline Rigidbody_t4233889191 * get_m_Rigidbody_6() const { return ___m_Rigidbody_6; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Rigidbody_6() { return &___m_Rigidbody_6; }
	inline void set_m_Rigidbody_6(Rigidbody_t4233889191 * value)
	{
		___m_Rigidbody_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_6, value);
	}

	inline static int32_t get_offset_of_m_Plane_7() { return static_cast<int32_t>(offsetof(LandingGear_t3775130928, ___m_Plane_7)); }
	inline AeroplaneController_t406219171 * get_m_Plane_7() const { return ___m_Plane_7; }
	inline AeroplaneController_t406219171 ** get_address_of_m_Plane_7() { return &___m_Plane_7; }
	inline void set_m_Plane_7(AeroplaneController_t406219171 * value)
	{
		___m_Plane_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Plane_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
