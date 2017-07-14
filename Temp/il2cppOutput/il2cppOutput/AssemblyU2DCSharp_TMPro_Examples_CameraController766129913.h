#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TMPro_Examples_CameraController_2188281734.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.CameraController
struct  CameraController_t766129913  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform TMPro.Examples.CameraController::cameraTransform
	Transform_t3275118058 * ___cameraTransform_2;
	// UnityEngine.Transform TMPro.Examples.CameraController::dummyTarget
	Transform_t3275118058 * ___dummyTarget_3;
	// UnityEngine.Transform TMPro.Examples.CameraController::CameraTarget
	Transform_t3275118058 * ___CameraTarget_4;
	// System.Single TMPro.Examples.CameraController::FollowDistance
	float ___FollowDistance_5;
	// System.Single TMPro.Examples.CameraController::MaxFollowDistance
	float ___MaxFollowDistance_6;
	// System.Single TMPro.Examples.CameraController::MinFollowDistance
	float ___MinFollowDistance_7;
	// System.Single TMPro.Examples.CameraController::ElevationAngle
	float ___ElevationAngle_8;
	// System.Single TMPro.Examples.CameraController::MaxElevationAngle
	float ___MaxElevationAngle_9;
	// System.Single TMPro.Examples.CameraController::MinElevationAngle
	float ___MinElevationAngle_10;
	// System.Single TMPro.Examples.CameraController::OrbitalAngle
	float ___OrbitalAngle_11;
	// TMPro.Examples.CameraController/CameraModes TMPro.Examples.CameraController::CameraMode
	int32_t ___CameraMode_12;
	// System.Boolean TMPro.Examples.CameraController::MovementSmoothing
	bool ___MovementSmoothing_13;
	// System.Boolean TMPro.Examples.CameraController::RotationSmoothing
	bool ___RotationSmoothing_14;
	// System.Boolean TMPro.Examples.CameraController::previousSmoothing
	bool ___previousSmoothing_15;
	// System.Single TMPro.Examples.CameraController::MovementSmoothingValue
	float ___MovementSmoothingValue_16;
	// System.Single TMPro.Examples.CameraController::RotationSmoothingValue
	float ___RotationSmoothingValue_17;
	// System.Single TMPro.Examples.CameraController::MoveSensitivity
	float ___MoveSensitivity_18;
	// UnityEngine.Vector3 TMPro.Examples.CameraController::currentVelocity
	Vector3_t2243707580  ___currentVelocity_19;
	// UnityEngine.Vector3 TMPro.Examples.CameraController::desiredPosition
	Vector3_t2243707580  ___desiredPosition_20;
	// System.Single TMPro.Examples.CameraController::mouseX
	float ___mouseX_21;
	// System.Single TMPro.Examples.CameraController::mouseY
	float ___mouseY_22;
	// UnityEngine.Vector3 TMPro.Examples.CameraController::moveVector
	Vector3_t2243707580  ___moveVector_23;
	// System.Single TMPro.Examples.CameraController::mouseWheel
	float ___mouseWheel_24;

public:
	inline static int32_t get_offset_of_cameraTransform_2() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___cameraTransform_2)); }
	inline Transform_t3275118058 * get_cameraTransform_2() const { return ___cameraTransform_2; }
	inline Transform_t3275118058 ** get_address_of_cameraTransform_2() { return &___cameraTransform_2; }
	inline void set_cameraTransform_2(Transform_t3275118058 * value)
	{
		___cameraTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_2, value);
	}

	inline static int32_t get_offset_of_dummyTarget_3() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___dummyTarget_3)); }
	inline Transform_t3275118058 * get_dummyTarget_3() const { return ___dummyTarget_3; }
	inline Transform_t3275118058 ** get_address_of_dummyTarget_3() { return &___dummyTarget_3; }
	inline void set_dummyTarget_3(Transform_t3275118058 * value)
	{
		___dummyTarget_3 = value;
		Il2CppCodeGenWriteBarrier(&___dummyTarget_3, value);
	}

	inline static int32_t get_offset_of_CameraTarget_4() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___CameraTarget_4)); }
	inline Transform_t3275118058 * get_CameraTarget_4() const { return ___CameraTarget_4; }
	inline Transform_t3275118058 ** get_address_of_CameraTarget_4() { return &___CameraTarget_4; }
	inline void set_CameraTarget_4(Transform_t3275118058 * value)
	{
		___CameraTarget_4 = value;
		Il2CppCodeGenWriteBarrier(&___CameraTarget_4, value);
	}

	inline static int32_t get_offset_of_FollowDistance_5() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___FollowDistance_5)); }
	inline float get_FollowDistance_5() const { return ___FollowDistance_5; }
	inline float* get_address_of_FollowDistance_5() { return &___FollowDistance_5; }
	inline void set_FollowDistance_5(float value)
	{
		___FollowDistance_5 = value;
	}

	inline static int32_t get_offset_of_MaxFollowDistance_6() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___MaxFollowDistance_6)); }
	inline float get_MaxFollowDistance_6() const { return ___MaxFollowDistance_6; }
	inline float* get_address_of_MaxFollowDistance_6() { return &___MaxFollowDistance_6; }
	inline void set_MaxFollowDistance_6(float value)
	{
		___MaxFollowDistance_6 = value;
	}

	inline static int32_t get_offset_of_MinFollowDistance_7() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___MinFollowDistance_7)); }
	inline float get_MinFollowDistance_7() const { return ___MinFollowDistance_7; }
	inline float* get_address_of_MinFollowDistance_7() { return &___MinFollowDistance_7; }
	inline void set_MinFollowDistance_7(float value)
	{
		___MinFollowDistance_7 = value;
	}

	inline static int32_t get_offset_of_ElevationAngle_8() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___ElevationAngle_8)); }
	inline float get_ElevationAngle_8() const { return ___ElevationAngle_8; }
	inline float* get_address_of_ElevationAngle_8() { return &___ElevationAngle_8; }
	inline void set_ElevationAngle_8(float value)
	{
		___ElevationAngle_8 = value;
	}

	inline static int32_t get_offset_of_MaxElevationAngle_9() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___MaxElevationAngle_9)); }
	inline float get_MaxElevationAngle_9() const { return ___MaxElevationAngle_9; }
	inline float* get_address_of_MaxElevationAngle_9() { return &___MaxElevationAngle_9; }
	inline void set_MaxElevationAngle_9(float value)
	{
		___MaxElevationAngle_9 = value;
	}

	inline static int32_t get_offset_of_MinElevationAngle_10() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___MinElevationAngle_10)); }
	inline float get_MinElevationAngle_10() const { return ___MinElevationAngle_10; }
	inline float* get_address_of_MinElevationAngle_10() { return &___MinElevationAngle_10; }
	inline void set_MinElevationAngle_10(float value)
	{
		___MinElevationAngle_10 = value;
	}

	inline static int32_t get_offset_of_OrbitalAngle_11() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___OrbitalAngle_11)); }
	inline float get_OrbitalAngle_11() const { return ___OrbitalAngle_11; }
	inline float* get_address_of_OrbitalAngle_11() { return &___OrbitalAngle_11; }
	inline void set_OrbitalAngle_11(float value)
	{
		___OrbitalAngle_11 = value;
	}

	inline static int32_t get_offset_of_CameraMode_12() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___CameraMode_12)); }
	inline int32_t get_CameraMode_12() const { return ___CameraMode_12; }
	inline int32_t* get_address_of_CameraMode_12() { return &___CameraMode_12; }
	inline void set_CameraMode_12(int32_t value)
	{
		___CameraMode_12 = value;
	}

	inline static int32_t get_offset_of_MovementSmoothing_13() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___MovementSmoothing_13)); }
	inline bool get_MovementSmoothing_13() const { return ___MovementSmoothing_13; }
	inline bool* get_address_of_MovementSmoothing_13() { return &___MovementSmoothing_13; }
	inline void set_MovementSmoothing_13(bool value)
	{
		___MovementSmoothing_13 = value;
	}

	inline static int32_t get_offset_of_RotationSmoothing_14() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___RotationSmoothing_14)); }
	inline bool get_RotationSmoothing_14() const { return ___RotationSmoothing_14; }
	inline bool* get_address_of_RotationSmoothing_14() { return &___RotationSmoothing_14; }
	inline void set_RotationSmoothing_14(bool value)
	{
		___RotationSmoothing_14 = value;
	}

	inline static int32_t get_offset_of_previousSmoothing_15() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___previousSmoothing_15)); }
	inline bool get_previousSmoothing_15() const { return ___previousSmoothing_15; }
	inline bool* get_address_of_previousSmoothing_15() { return &___previousSmoothing_15; }
	inline void set_previousSmoothing_15(bool value)
	{
		___previousSmoothing_15 = value;
	}

	inline static int32_t get_offset_of_MovementSmoothingValue_16() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___MovementSmoothingValue_16)); }
	inline float get_MovementSmoothingValue_16() const { return ___MovementSmoothingValue_16; }
	inline float* get_address_of_MovementSmoothingValue_16() { return &___MovementSmoothingValue_16; }
	inline void set_MovementSmoothingValue_16(float value)
	{
		___MovementSmoothingValue_16 = value;
	}

	inline static int32_t get_offset_of_RotationSmoothingValue_17() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___RotationSmoothingValue_17)); }
	inline float get_RotationSmoothingValue_17() const { return ___RotationSmoothingValue_17; }
	inline float* get_address_of_RotationSmoothingValue_17() { return &___RotationSmoothingValue_17; }
	inline void set_RotationSmoothingValue_17(float value)
	{
		___RotationSmoothingValue_17 = value;
	}

	inline static int32_t get_offset_of_MoveSensitivity_18() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___MoveSensitivity_18)); }
	inline float get_MoveSensitivity_18() const { return ___MoveSensitivity_18; }
	inline float* get_address_of_MoveSensitivity_18() { return &___MoveSensitivity_18; }
	inline void set_MoveSensitivity_18(float value)
	{
		___MoveSensitivity_18 = value;
	}

	inline static int32_t get_offset_of_currentVelocity_19() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___currentVelocity_19)); }
	inline Vector3_t2243707580  get_currentVelocity_19() const { return ___currentVelocity_19; }
	inline Vector3_t2243707580 * get_address_of_currentVelocity_19() { return &___currentVelocity_19; }
	inline void set_currentVelocity_19(Vector3_t2243707580  value)
	{
		___currentVelocity_19 = value;
	}

	inline static int32_t get_offset_of_desiredPosition_20() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___desiredPosition_20)); }
	inline Vector3_t2243707580  get_desiredPosition_20() const { return ___desiredPosition_20; }
	inline Vector3_t2243707580 * get_address_of_desiredPosition_20() { return &___desiredPosition_20; }
	inline void set_desiredPosition_20(Vector3_t2243707580  value)
	{
		___desiredPosition_20 = value;
	}

	inline static int32_t get_offset_of_mouseX_21() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___mouseX_21)); }
	inline float get_mouseX_21() const { return ___mouseX_21; }
	inline float* get_address_of_mouseX_21() { return &___mouseX_21; }
	inline void set_mouseX_21(float value)
	{
		___mouseX_21 = value;
	}

	inline static int32_t get_offset_of_mouseY_22() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___mouseY_22)); }
	inline float get_mouseY_22() const { return ___mouseY_22; }
	inline float* get_address_of_mouseY_22() { return &___mouseY_22; }
	inline void set_mouseY_22(float value)
	{
		___mouseY_22 = value;
	}

	inline static int32_t get_offset_of_moveVector_23() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___moveVector_23)); }
	inline Vector3_t2243707580  get_moveVector_23() const { return ___moveVector_23; }
	inline Vector3_t2243707580 * get_address_of_moveVector_23() { return &___moveVector_23; }
	inline void set_moveVector_23(Vector3_t2243707580  value)
	{
		___moveVector_23 = value;
	}

	inline static int32_t get_offset_of_mouseWheel_24() { return static_cast<int32_t>(offsetof(CameraController_t766129913, ___mouseWheel_24)); }
	inline float get_mouseWheel_24() const { return ___mouseWheel_24; }
	inline float* get_address_of_mouseWheel_24() { return &___mouseWheel_24; }
	inline void set_mouseWheel_24(float value)
	{
		___mouseWheel_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
