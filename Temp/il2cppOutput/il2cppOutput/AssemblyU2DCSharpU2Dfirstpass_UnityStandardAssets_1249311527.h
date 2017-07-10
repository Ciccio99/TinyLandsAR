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

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t720607407;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct  ThirdPersonCharacter_t1249311527  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_MovingTurnSpeed
	float ___m_MovingTurnSpeed_2;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_StationaryTurnSpeed
	float ___m_StationaryTurnSpeed_3;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_JumpPower
	float ___m_JumpPower_4;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_GravityMultiplier
	float ___m_GravityMultiplier_5;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_RunCycleLegOffset
	float ___m_RunCycleLegOffset_6;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_MoveSpeedMultiplier
	float ___m_MoveSpeedMultiplier_7;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_AnimSpeedMultiplier
	float ___m_AnimSpeedMultiplier_8;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_GroundCheckDistance
	float ___m_GroundCheckDistance_9;
	// UnityEngine.Rigidbody UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_Rigidbody
	Rigidbody_t4233889191 * ___m_Rigidbody_10;
	// UnityEngine.Animator UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_Animator
	Animator_t69676727 * ___m_Animator_11;
	// System.Boolean UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_IsGrounded
	bool ___m_IsGrounded_12;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_OrigGroundCheckDistance
	float ___m_OrigGroundCheckDistance_13;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_TurnAmount
	float ___m_TurnAmount_15;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_ForwardAmount
	float ___m_ForwardAmount_16;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_GroundNormal
	Vector3_t2243707580  ___m_GroundNormal_17;
	// System.Single UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_CapsuleHeight
	float ___m_CapsuleHeight_18;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_CapsuleCenter
	Vector3_t2243707580  ___m_CapsuleCenter_19;
	// UnityEngine.CapsuleCollider UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_Capsule
	CapsuleCollider_t720607407 * ___m_Capsule_20;
	// System.Boolean UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::m_Crouching
	bool ___m_Crouching_21;

public:
	inline static int32_t get_offset_of_m_MovingTurnSpeed_2() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_MovingTurnSpeed_2)); }
	inline float get_m_MovingTurnSpeed_2() const { return ___m_MovingTurnSpeed_2; }
	inline float* get_address_of_m_MovingTurnSpeed_2() { return &___m_MovingTurnSpeed_2; }
	inline void set_m_MovingTurnSpeed_2(float value)
	{
		___m_MovingTurnSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_StationaryTurnSpeed_3() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_StationaryTurnSpeed_3)); }
	inline float get_m_StationaryTurnSpeed_3() const { return ___m_StationaryTurnSpeed_3; }
	inline float* get_address_of_m_StationaryTurnSpeed_3() { return &___m_StationaryTurnSpeed_3; }
	inline void set_m_StationaryTurnSpeed_3(float value)
	{
		___m_StationaryTurnSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_JumpPower_4() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_JumpPower_4)); }
	inline float get_m_JumpPower_4() const { return ___m_JumpPower_4; }
	inline float* get_address_of_m_JumpPower_4() { return &___m_JumpPower_4; }
	inline void set_m_JumpPower_4(float value)
	{
		___m_JumpPower_4 = value;
	}

	inline static int32_t get_offset_of_m_GravityMultiplier_5() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_GravityMultiplier_5)); }
	inline float get_m_GravityMultiplier_5() const { return ___m_GravityMultiplier_5; }
	inline float* get_address_of_m_GravityMultiplier_5() { return &___m_GravityMultiplier_5; }
	inline void set_m_GravityMultiplier_5(float value)
	{
		___m_GravityMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_RunCycleLegOffset_6() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_RunCycleLegOffset_6)); }
	inline float get_m_RunCycleLegOffset_6() const { return ___m_RunCycleLegOffset_6; }
	inline float* get_address_of_m_RunCycleLegOffset_6() { return &___m_RunCycleLegOffset_6; }
	inline void set_m_RunCycleLegOffset_6(float value)
	{
		___m_RunCycleLegOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_MoveSpeedMultiplier_7() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_MoveSpeedMultiplier_7)); }
	inline float get_m_MoveSpeedMultiplier_7() const { return ___m_MoveSpeedMultiplier_7; }
	inline float* get_address_of_m_MoveSpeedMultiplier_7() { return &___m_MoveSpeedMultiplier_7; }
	inline void set_m_MoveSpeedMultiplier_7(float value)
	{
		___m_MoveSpeedMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_m_AnimSpeedMultiplier_8() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_AnimSpeedMultiplier_8)); }
	inline float get_m_AnimSpeedMultiplier_8() const { return ___m_AnimSpeedMultiplier_8; }
	inline float* get_address_of_m_AnimSpeedMultiplier_8() { return &___m_AnimSpeedMultiplier_8; }
	inline void set_m_AnimSpeedMultiplier_8(float value)
	{
		___m_AnimSpeedMultiplier_8 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheckDistance_9() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_GroundCheckDistance_9)); }
	inline float get_m_GroundCheckDistance_9() const { return ___m_GroundCheckDistance_9; }
	inline float* get_address_of_m_GroundCheckDistance_9() { return &___m_GroundCheckDistance_9; }
	inline void set_m_GroundCheckDistance_9(float value)
	{
		___m_GroundCheckDistance_9 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_10() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_Rigidbody_10)); }
	inline Rigidbody_t4233889191 * get_m_Rigidbody_10() const { return ___m_Rigidbody_10; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Rigidbody_10() { return &___m_Rigidbody_10; }
	inline void set_m_Rigidbody_10(Rigidbody_t4233889191 * value)
	{
		___m_Rigidbody_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_10, value);
	}

	inline static int32_t get_offset_of_m_Animator_11() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_Animator_11)); }
	inline Animator_t69676727 * get_m_Animator_11() const { return ___m_Animator_11; }
	inline Animator_t69676727 ** get_address_of_m_Animator_11() { return &___m_Animator_11; }
	inline void set_m_Animator_11(Animator_t69676727 * value)
	{
		___m_Animator_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_11, value);
	}

	inline static int32_t get_offset_of_m_IsGrounded_12() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_IsGrounded_12)); }
	inline bool get_m_IsGrounded_12() const { return ___m_IsGrounded_12; }
	inline bool* get_address_of_m_IsGrounded_12() { return &___m_IsGrounded_12; }
	inline void set_m_IsGrounded_12(bool value)
	{
		___m_IsGrounded_12 = value;
	}

	inline static int32_t get_offset_of_m_OrigGroundCheckDistance_13() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_OrigGroundCheckDistance_13)); }
	inline float get_m_OrigGroundCheckDistance_13() const { return ___m_OrigGroundCheckDistance_13; }
	inline float* get_address_of_m_OrigGroundCheckDistance_13() { return &___m_OrigGroundCheckDistance_13; }
	inline void set_m_OrigGroundCheckDistance_13(float value)
	{
		___m_OrigGroundCheckDistance_13 = value;
	}

	inline static int32_t get_offset_of_m_TurnAmount_15() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_TurnAmount_15)); }
	inline float get_m_TurnAmount_15() const { return ___m_TurnAmount_15; }
	inline float* get_address_of_m_TurnAmount_15() { return &___m_TurnAmount_15; }
	inline void set_m_TurnAmount_15(float value)
	{
		___m_TurnAmount_15 = value;
	}

	inline static int32_t get_offset_of_m_ForwardAmount_16() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_ForwardAmount_16)); }
	inline float get_m_ForwardAmount_16() const { return ___m_ForwardAmount_16; }
	inline float* get_address_of_m_ForwardAmount_16() { return &___m_ForwardAmount_16; }
	inline void set_m_ForwardAmount_16(float value)
	{
		___m_ForwardAmount_16 = value;
	}

	inline static int32_t get_offset_of_m_GroundNormal_17() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_GroundNormal_17)); }
	inline Vector3_t2243707580  get_m_GroundNormal_17() const { return ___m_GroundNormal_17; }
	inline Vector3_t2243707580 * get_address_of_m_GroundNormal_17() { return &___m_GroundNormal_17; }
	inline void set_m_GroundNormal_17(Vector3_t2243707580  value)
	{
		___m_GroundNormal_17 = value;
	}

	inline static int32_t get_offset_of_m_CapsuleHeight_18() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_CapsuleHeight_18)); }
	inline float get_m_CapsuleHeight_18() const { return ___m_CapsuleHeight_18; }
	inline float* get_address_of_m_CapsuleHeight_18() { return &___m_CapsuleHeight_18; }
	inline void set_m_CapsuleHeight_18(float value)
	{
		___m_CapsuleHeight_18 = value;
	}

	inline static int32_t get_offset_of_m_CapsuleCenter_19() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_CapsuleCenter_19)); }
	inline Vector3_t2243707580  get_m_CapsuleCenter_19() const { return ___m_CapsuleCenter_19; }
	inline Vector3_t2243707580 * get_address_of_m_CapsuleCenter_19() { return &___m_CapsuleCenter_19; }
	inline void set_m_CapsuleCenter_19(Vector3_t2243707580  value)
	{
		___m_CapsuleCenter_19 = value;
	}

	inline static int32_t get_offset_of_m_Capsule_20() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_Capsule_20)); }
	inline CapsuleCollider_t720607407 * get_m_Capsule_20() const { return ___m_Capsule_20; }
	inline CapsuleCollider_t720607407 ** get_address_of_m_Capsule_20() { return &___m_Capsule_20; }
	inline void set_m_Capsule_20(CapsuleCollider_t720607407 * value)
	{
		___m_Capsule_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_Capsule_20, value);
	}

	inline static int32_t get_offset_of_m_Crouching_21() { return static_cast<int32_t>(offsetof(ThirdPersonCharacter_t1249311527, ___m_Crouching_21)); }
	inline bool get_m_Crouching_21() const { return ___m_Crouching_21; }
	inline bool* get_address_of_m_Crouching_21() { return &___m_Crouching_21; }
	inline void set_m_Crouching_21(bool value)
	{
		___m_Crouching_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
