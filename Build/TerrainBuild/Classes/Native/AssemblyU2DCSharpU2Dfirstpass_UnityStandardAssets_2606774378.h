#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1988700213.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t1026402524;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.CarAudio
struct  CarAudio_t2606774378  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Vehicles.Car.CarAudio/EngineAudioOptions UnityStandardAssets.Vehicles.Car.CarAudio::engineSoundStyle
	int32_t ___engineSoundStyle_2;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::lowAccelClip
	AudioClip_t1932558630 * ___lowAccelClip_3;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::lowDecelClip
	AudioClip_t1932558630 * ___lowDecelClip_4;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::highAccelClip
	AudioClip_t1932558630 * ___highAccelClip_5;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::highDecelClip
	AudioClip_t1932558630 * ___highDecelClip_6;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::pitchMultiplier
	float ___pitchMultiplier_7;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::lowPitchMin
	float ___lowPitchMin_8;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::lowPitchMax
	float ___lowPitchMax_9;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::highPitchMultiplier
	float ___highPitchMultiplier_10;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::maxRolloffDistance
	float ___maxRolloffDistance_11;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::dopplerLevel
	float ___dopplerLevel_12;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarAudio::useDoppler
	bool ___useDoppler_13;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_LowAccel
	AudioSource_t1135106623 * ___m_LowAccel_14;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_LowDecel
	AudioSource_t1135106623 * ___m_LowDecel_15;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_HighAccel
	AudioSource_t1135106623 * ___m_HighAccel_16;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_HighDecel
	AudioSource_t1135106623 * ___m_HighDecel_17;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarAudio::m_StartedSound
	bool ___m_StartedSound_18;
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.CarAudio::m_CarController
	CarController_t1026402524 * ___m_CarController_19;

public:
	inline static int32_t get_offset_of_engineSoundStyle_2() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___engineSoundStyle_2)); }
	inline int32_t get_engineSoundStyle_2() const { return ___engineSoundStyle_2; }
	inline int32_t* get_address_of_engineSoundStyle_2() { return &___engineSoundStyle_2; }
	inline void set_engineSoundStyle_2(int32_t value)
	{
		___engineSoundStyle_2 = value;
	}

	inline static int32_t get_offset_of_lowAccelClip_3() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___lowAccelClip_3)); }
	inline AudioClip_t1932558630 * get_lowAccelClip_3() const { return ___lowAccelClip_3; }
	inline AudioClip_t1932558630 ** get_address_of_lowAccelClip_3() { return &___lowAccelClip_3; }
	inline void set_lowAccelClip_3(AudioClip_t1932558630 * value)
	{
		___lowAccelClip_3 = value;
		Il2CppCodeGenWriteBarrier(&___lowAccelClip_3, value);
	}

	inline static int32_t get_offset_of_lowDecelClip_4() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___lowDecelClip_4)); }
	inline AudioClip_t1932558630 * get_lowDecelClip_4() const { return ___lowDecelClip_4; }
	inline AudioClip_t1932558630 ** get_address_of_lowDecelClip_4() { return &___lowDecelClip_4; }
	inline void set_lowDecelClip_4(AudioClip_t1932558630 * value)
	{
		___lowDecelClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___lowDecelClip_4, value);
	}

	inline static int32_t get_offset_of_highAccelClip_5() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___highAccelClip_5)); }
	inline AudioClip_t1932558630 * get_highAccelClip_5() const { return ___highAccelClip_5; }
	inline AudioClip_t1932558630 ** get_address_of_highAccelClip_5() { return &___highAccelClip_5; }
	inline void set_highAccelClip_5(AudioClip_t1932558630 * value)
	{
		___highAccelClip_5 = value;
		Il2CppCodeGenWriteBarrier(&___highAccelClip_5, value);
	}

	inline static int32_t get_offset_of_highDecelClip_6() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___highDecelClip_6)); }
	inline AudioClip_t1932558630 * get_highDecelClip_6() const { return ___highDecelClip_6; }
	inline AudioClip_t1932558630 ** get_address_of_highDecelClip_6() { return &___highDecelClip_6; }
	inline void set_highDecelClip_6(AudioClip_t1932558630 * value)
	{
		___highDecelClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___highDecelClip_6, value);
	}

	inline static int32_t get_offset_of_pitchMultiplier_7() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___pitchMultiplier_7)); }
	inline float get_pitchMultiplier_7() const { return ___pitchMultiplier_7; }
	inline float* get_address_of_pitchMultiplier_7() { return &___pitchMultiplier_7; }
	inline void set_pitchMultiplier_7(float value)
	{
		___pitchMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_lowPitchMin_8() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___lowPitchMin_8)); }
	inline float get_lowPitchMin_8() const { return ___lowPitchMin_8; }
	inline float* get_address_of_lowPitchMin_8() { return &___lowPitchMin_8; }
	inline void set_lowPitchMin_8(float value)
	{
		___lowPitchMin_8 = value;
	}

	inline static int32_t get_offset_of_lowPitchMax_9() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___lowPitchMax_9)); }
	inline float get_lowPitchMax_9() const { return ___lowPitchMax_9; }
	inline float* get_address_of_lowPitchMax_9() { return &___lowPitchMax_9; }
	inline void set_lowPitchMax_9(float value)
	{
		___lowPitchMax_9 = value;
	}

	inline static int32_t get_offset_of_highPitchMultiplier_10() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___highPitchMultiplier_10)); }
	inline float get_highPitchMultiplier_10() const { return ___highPitchMultiplier_10; }
	inline float* get_address_of_highPitchMultiplier_10() { return &___highPitchMultiplier_10; }
	inline void set_highPitchMultiplier_10(float value)
	{
		___highPitchMultiplier_10 = value;
	}

	inline static int32_t get_offset_of_maxRolloffDistance_11() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___maxRolloffDistance_11)); }
	inline float get_maxRolloffDistance_11() const { return ___maxRolloffDistance_11; }
	inline float* get_address_of_maxRolloffDistance_11() { return &___maxRolloffDistance_11; }
	inline void set_maxRolloffDistance_11(float value)
	{
		___maxRolloffDistance_11 = value;
	}

	inline static int32_t get_offset_of_dopplerLevel_12() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___dopplerLevel_12)); }
	inline float get_dopplerLevel_12() const { return ___dopplerLevel_12; }
	inline float* get_address_of_dopplerLevel_12() { return &___dopplerLevel_12; }
	inline void set_dopplerLevel_12(float value)
	{
		___dopplerLevel_12 = value;
	}

	inline static int32_t get_offset_of_useDoppler_13() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___useDoppler_13)); }
	inline bool get_useDoppler_13() const { return ___useDoppler_13; }
	inline bool* get_address_of_useDoppler_13() { return &___useDoppler_13; }
	inline void set_useDoppler_13(bool value)
	{
		___useDoppler_13 = value;
	}

	inline static int32_t get_offset_of_m_LowAccel_14() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___m_LowAccel_14)); }
	inline AudioSource_t1135106623 * get_m_LowAccel_14() const { return ___m_LowAccel_14; }
	inline AudioSource_t1135106623 ** get_address_of_m_LowAccel_14() { return &___m_LowAccel_14; }
	inline void set_m_LowAccel_14(AudioSource_t1135106623 * value)
	{
		___m_LowAccel_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_LowAccel_14, value);
	}

	inline static int32_t get_offset_of_m_LowDecel_15() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___m_LowDecel_15)); }
	inline AudioSource_t1135106623 * get_m_LowDecel_15() const { return ___m_LowDecel_15; }
	inline AudioSource_t1135106623 ** get_address_of_m_LowDecel_15() { return &___m_LowDecel_15; }
	inline void set_m_LowDecel_15(AudioSource_t1135106623 * value)
	{
		___m_LowDecel_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_LowDecel_15, value);
	}

	inline static int32_t get_offset_of_m_HighAccel_16() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___m_HighAccel_16)); }
	inline AudioSource_t1135106623 * get_m_HighAccel_16() const { return ___m_HighAccel_16; }
	inline AudioSource_t1135106623 ** get_address_of_m_HighAccel_16() { return &___m_HighAccel_16; }
	inline void set_m_HighAccel_16(AudioSource_t1135106623 * value)
	{
		___m_HighAccel_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_HighAccel_16, value);
	}

	inline static int32_t get_offset_of_m_HighDecel_17() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___m_HighDecel_17)); }
	inline AudioSource_t1135106623 * get_m_HighDecel_17() const { return ___m_HighDecel_17; }
	inline AudioSource_t1135106623 ** get_address_of_m_HighDecel_17() { return &___m_HighDecel_17; }
	inline void set_m_HighDecel_17(AudioSource_t1135106623 * value)
	{
		___m_HighDecel_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_HighDecel_17, value);
	}

	inline static int32_t get_offset_of_m_StartedSound_18() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___m_StartedSound_18)); }
	inline bool get_m_StartedSound_18() const { return ___m_StartedSound_18; }
	inline bool* get_address_of_m_StartedSound_18() { return &___m_StartedSound_18; }
	inline void set_m_StartedSound_18(bool value)
	{
		___m_StartedSound_18 = value;
	}

	inline static int32_t get_offset_of_m_CarController_19() { return static_cast<int32_t>(offsetof(CarAudio_t2606774378, ___m_CarController_19)); }
	inline CarController_t1026402524 * get_m_CarController_19() const { return ___m_CarController_19; }
	inline CarController_t1026402524 ** get_address_of_m_CarController_19() { return &___m_CarController_19; }
	inline void set_m_CarController_19(CarController_t1026402524 * value)
	{
		___m_CarController_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_CarController_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
