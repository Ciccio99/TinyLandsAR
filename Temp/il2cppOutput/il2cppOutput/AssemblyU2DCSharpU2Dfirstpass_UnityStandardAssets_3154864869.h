#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t2107922160;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t3525149852;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct RigidbodyFirstPersonController_t3033016132;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.FirstPerson.HeadBob
struct  HeadBob_t3154864869  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.HeadBob::Camera
	Camera_t189460977 * ___Camera_2;
	// UnityStandardAssets.Utility.CurveControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::motionBob
	CurveControlledBob_t2107922160 * ___motionBob_3;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Characters.FirstPerson.HeadBob::jumpAndLandingBob
	LerpControlledBob_t3525149852 * ___jumpAndLandingBob_4;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController UnityStandardAssets.Characters.FirstPerson.HeadBob::rigidbodyFirstPersonController
	RigidbodyFirstPersonController_t3033016132 * ___rigidbodyFirstPersonController_5;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::StrideInterval
	float ___StrideInterval_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.HeadBob::RunningStrideLengthen
	float ___RunningStrideLengthen_7;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.HeadBob::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_8;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.HeadBob::m_OriginalCameraPosition
	Vector3_t2243707580  ___m_OriginalCameraPosition_9;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(HeadBob_t3154864869, ___Camera_2)); }
	inline Camera_t189460977 * get_Camera_2() const { return ___Camera_2; }
	inline Camera_t189460977 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(Camera_t189460977 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_motionBob_3() { return static_cast<int32_t>(offsetof(HeadBob_t3154864869, ___motionBob_3)); }
	inline CurveControlledBob_t2107922160 * get_motionBob_3() const { return ___motionBob_3; }
	inline CurveControlledBob_t2107922160 ** get_address_of_motionBob_3() { return &___motionBob_3; }
	inline void set_motionBob_3(CurveControlledBob_t2107922160 * value)
	{
		___motionBob_3 = value;
		Il2CppCodeGenWriteBarrier(&___motionBob_3, value);
	}

	inline static int32_t get_offset_of_jumpAndLandingBob_4() { return static_cast<int32_t>(offsetof(HeadBob_t3154864869, ___jumpAndLandingBob_4)); }
	inline LerpControlledBob_t3525149852 * get_jumpAndLandingBob_4() const { return ___jumpAndLandingBob_4; }
	inline LerpControlledBob_t3525149852 ** get_address_of_jumpAndLandingBob_4() { return &___jumpAndLandingBob_4; }
	inline void set_jumpAndLandingBob_4(LerpControlledBob_t3525149852 * value)
	{
		___jumpAndLandingBob_4 = value;
		Il2CppCodeGenWriteBarrier(&___jumpAndLandingBob_4, value);
	}

	inline static int32_t get_offset_of_rigidbodyFirstPersonController_5() { return static_cast<int32_t>(offsetof(HeadBob_t3154864869, ___rigidbodyFirstPersonController_5)); }
	inline RigidbodyFirstPersonController_t3033016132 * get_rigidbodyFirstPersonController_5() const { return ___rigidbodyFirstPersonController_5; }
	inline RigidbodyFirstPersonController_t3033016132 ** get_address_of_rigidbodyFirstPersonController_5() { return &___rigidbodyFirstPersonController_5; }
	inline void set_rigidbodyFirstPersonController_5(RigidbodyFirstPersonController_t3033016132 * value)
	{
		___rigidbodyFirstPersonController_5 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbodyFirstPersonController_5, value);
	}

	inline static int32_t get_offset_of_StrideInterval_6() { return static_cast<int32_t>(offsetof(HeadBob_t3154864869, ___StrideInterval_6)); }
	inline float get_StrideInterval_6() const { return ___StrideInterval_6; }
	inline float* get_address_of_StrideInterval_6() { return &___StrideInterval_6; }
	inline void set_StrideInterval_6(float value)
	{
		___StrideInterval_6 = value;
	}

	inline static int32_t get_offset_of_RunningStrideLengthen_7() { return static_cast<int32_t>(offsetof(HeadBob_t3154864869, ___RunningStrideLengthen_7)); }
	inline float get_RunningStrideLengthen_7() const { return ___RunningStrideLengthen_7; }
	inline float* get_address_of_RunningStrideLengthen_7() { return &___RunningStrideLengthen_7; }
	inline void set_RunningStrideLengthen_7(float value)
	{
		___RunningStrideLengthen_7 = value;
	}

	inline static int32_t get_offset_of_m_PreviouslyGrounded_8() { return static_cast<int32_t>(offsetof(HeadBob_t3154864869, ___m_PreviouslyGrounded_8)); }
	inline bool get_m_PreviouslyGrounded_8() const { return ___m_PreviouslyGrounded_8; }
	inline bool* get_address_of_m_PreviouslyGrounded_8() { return &___m_PreviouslyGrounded_8; }
	inline void set_m_PreviouslyGrounded_8(bool value)
	{
		___m_PreviouslyGrounded_8 = value;
	}

	inline static int32_t get_offset_of_m_OriginalCameraPosition_9() { return static_cast<int32_t>(offsetof(HeadBob_t3154864869, ___m_OriginalCameraPosition_9)); }
	inline Vector3_t2243707580  get_m_OriginalCameraPosition_9() const { return ___m_OriginalCameraPosition_9; }
	inline Vector3_t2243707580 * get_address_of_m_OriginalCameraPosition_9() { return &___m_OriginalCameraPosition_9; }
	inline void set_m_OriginalCameraPosition_9(Vector3_t2243707580  value)
	{
		___m_OriginalCameraPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
