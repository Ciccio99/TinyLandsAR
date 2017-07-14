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
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.WheelCollider
struct WheelCollider_t785806275;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.WheelEffects
struct  WheelEffects_t2957206283  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::SkidTrailPrefab
	Transform_t3275118058 * ___SkidTrailPrefab_2;
	// UnityEngine.ParticleSystem UnityStandardAssets.Vehicles.Car.WheelEffects::skidParticles
	ParticleSystem_t3394631041 * ___skidParticles_4;
	// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects::<skidding>k__BackingField
	bool ___U3CskiddingU3Ek__BackingField_5;
	// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects::<PlayingAudio>k__BackingField
	bool ___U3CPlayingAudioU3Ek__BackingField_6;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.WheelEffects::m_AudioSource
	AudioSource_t1135106623 * ___m_AudioSource_7;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::m_SkidTrail
	Transform_t3275118058 * ___m_SkidTrail_8;
	// UnityEngine.WheelCollider UnityStandardAssets.Vehicles.Car.WheelEffects::m_WheelCollider
	WheelCollider_t785806275 * ___m_WheelCollider_9;

public:
	inline static int32_t get_offset_of_SkidTrailPrefab_2() { return static_cast<int32_t>(offsetof(WheelEffects_t2957206283, ___SkidTrailPrefab_2)); }
	inline Transform_t3275118058 * get_SkidTrailPrefab_2() const { return ___SkidTrailPrefab_2; }
	inline Transform_t3275118058 ** get_address_of_SkidTrailPrefab_2() { return &___SkidTrailPrefab_2; }
	inline void set_SkidTrailPrefab_2(Transform_t3275118058 * value)
	{
		___SkidTrailPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___SkidTrailPrefab_2, value);
	}

	inline static int32_t get_offset_of_skidParticles_4() { return static_cast<int32_t>(offsetof(WheelEffects_t2957206283, ___skidParticles_4)); }
	inline ParticleSystem_t3394631041 * get_skidParticles_4() const { return ___skidParticles_4; }
	inline ParticleSystem_t3394631041 ** get_address_of_skidParticles_4() { return &___skidParticles_4; }
	inline void set_skidParticles_4(ParticleSystem_t3394631041 * value)
	{
		___skidParticles_4 = value;
		Il2CppCodeGenWriteBarrier(&___skidParticles_4, value);
	}

	inline static int32_t get_offset_of_U3CskiddingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WheelEffects_t2957206283, ___U3CskiddingU3Ek__BackingField_5)); }
	inline bool get_U3CskiddingU3Ek__BackingField_5() const { return ___U3CskiddingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CskiddingU3Ek__BackingField_5() { return &___U3CskiddingU3Ek__BackingField_5; }
	inline void set_U3CskiddingU3Ek__BackingField_5(bool value)
	{
		___U3CskiddingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPlayingAudioU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WheelEffects_t2957206283, ___U3CPlayingAudioU3Ek__BackingField_6)); }
	inline bool get_U3CPlayingAudioU3Ek__BackingField_6() const { return ___U3CPlayingAudioU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CPlayingAudioU3Ek__BackingField_6() { return &___U3CPlayingAudioU3Ek__BackingField_6; }
	inline void set_U3CPlayingAudioU3Ek__BackingField_6(bool value)
	{
		___U3CPlayingAudioU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_AudioSource_7() { return static_cast<int32_t>(offsetof(WheelEffects_t2957206283, ___m_AudioSource_7)); }
	inline AudioSource_t1135106623 * get_m_AudioSource_7() const { return ___m_AudioSource_7; }
	inline AudioSource_t1135106623 ** get_address_of_m_AudioSource_7() { return &___m_AudioSource_7; }
	inline void set_m_AudioSource_7(AudioSource_t1135106623 * value)
	{
		___m_AudioSource_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioSource_7, value);
	}

	inline static int32_t get_offset_of_m_SkidTrail_8() { return static_cast<int32_t>(offsetof(WheelEffects_t2957206283, ___m_SkidTrail_8)); }
	inline Transform_t3275118058 * get_m_SkidTrail_8() const { return ___m_SkidTrail_8; }
	inline Transform_t3275118058 ** get_address_of_m_SkidTrail_8() { return &___m_SkidTrail_8; }
	inline void set_m_SkidTrail_8(Transform_t3275118058 * value)
	{
		___m_SkidTrail_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_SkidTrail_8, value);
	}

	inline static int32_t get_offset_of_m_WheelCollider_9() { return static_cast<int32_t>(offsetof(WheelEffects_t2957206283, ___m_WheelCollider_9)); }
	inline WheelCollider_t785806275 * get_m_WheelCollider_9() const { return ___m_WheelCollider_9; }
	inline WheelCollider_t785806275 ** get_address_of_m_WheelCollider_9() { return &___m_WheelCollider_9; }
	inline void set_m_WheelCollider_9(WheelCollider_t785806275 * value)
	{
		___m_WheelCollider_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_WheelCollider_9, value);
	}
};

struct WheelEffects_t2957206283_StaticFields
{
public:
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::skidTrailsDetachedParent
	Transform_t3275118058 * ___skidTrailsDetachedParent_3;

public:
	inline static int32_t get_offset_of_skidTrailsDetachedParent_3() { return static_cast<int32_t>(offsetof(WheelEffects_t2957206283_StaticFields, ___skidTrailsDetachedParent_3)); }
	inline Transform_t3275118058 * get_skidTrailsDetachedParent_3() const { return ___skidTrailsDetachedParent_3; }
	inline Transform_t3275118058 ** get_address_of_skidTrailsDetachedParent_3() { return &___skidTrailsDetachedParent_3; }
	inline void set_skidTrailsDetachedParent_3(Transform_t3275118058 * value)
	{
		___skidTrailsDetachedParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___skidTrailsDetachedParent_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
