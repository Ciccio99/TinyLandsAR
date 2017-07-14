#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "GUIAnimatorFREE_GUIAnimFREE_eEaseType875930122.h"

// GUIAnimFREE/cSounds
struct cSounds_t1738525510;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimFREE/cScaleIn
struct  cScaleIn_t627124389  : public Il2CppObject
{
public:
	// System.Boolean GUIAnimFREE/cScaleIn::Enable
	bool ___Enable_0;
	// System.Boolean GUIAnimFREE/cScaleIn::Began
	bool ___Began_1;
	// System.Boolean GUIAnimFREE/cScaleIn::Animating
	bool ___Animating_2;
	// System.Boolean GUIAnimFREE/cScaleIn::Done
	bool ___Done_3;
	// UnityEngine.Vector3 GUIAnimFREE/cScaleIn::ScaleBegin
	Vector3_t2243707580  ___ScaleBegin_4;
	// GUIAnimFREE/eEaseType GUIAnimFREE/cScaleIn::EaseType
	int32_t ___EaseType_5;
	// System.Single GUIAnimFREE/cScaleIn::Time
	float ___Time_6;
	// System.Single GUIAnimFREE/cScaleIn::Delay
	float ___Delay_7;
	// GUIAnimFREE/cSounds GUIAnimFREE/cScaleIn::Sounds
	cSounds_t1738525510 * ___Sounds_8;

public:
	inline static int32_t get_offset_of_Enable_0() { return static_cast<int32_t>(offsetof(cScaleIn_t627124389, ___Enable_0)); }
	inline bool get_Enable_0() const { return ___Enable_0; }
	inline bool* get_address_of_Enable_0() { return &___Enable_0; }
	inline void set_Enable_0(bool value)
	{
		___Enable_0 = value;
	}

	inline static int32_t get_offset_of_Began_1() { return static_cast<int32_t>(offsetof(cScaleIn_t627124389, ___Began_1)); }
	inline bool get_Began_1() const { return ___Began_1; }
	inline bool* get_address_of_Began_1() { return &___Began_1; }
	inline void set_Began_1(bool value)
	{
		___Began_1 = value;
	}

	inline static int32_t get_offset_of_Animating_2() { return static_cast<int32_t>(offsetof(cScaleIn_t627124389, ___Animating_2)); }
	inline bool get_Animating_2() const { return ___Animating_2; }
	inline bool* get_address_of_Animating_2() { return &___Animating_2; }
	inline void set_Animating_2(bool value)
	{
		___Animating_2 = value;
	}

	inline static int32_t get_offset_of_Done_3() { return static_cast<int32_t>(offsetof(cScaleIn_t627124389, ___Done_3)); }
	inline bool get_Done_3() const { return ___Done_3; }
	inline bool* get_address_of_Done_3() { return &___Done_3; }
	inline void set_Done_3(bool value)
	{
		___Done_3 = value;
	}

	inline static int32_t get_offset_of_ScaleBegin_4() { return static_cast<int32_t>(offsetof(cScaleIn_t627124389, ___ScaleBegin_4)); }
	inline Vector3_t2243707580  get_ScaleBegin_4() const { return ___ScaleBegin_4; }
	inline Vector3_t2243707580 * get_address_of_ScaleBegin_4() { return &___ScaleBegin_4; }
	inline void set_ScaleBegin_4(Vector3_t2243707580  value)
	{
		___ScaleBegin_4 = value;
	}

	inline static int32_t get_offset_of_EaseType_5() { return static_cast<int32_t>(offsetof(cScaleIn_t627124389, ___EaseType_5)); }
	inline int32_t get_EaseType_5() const { return ___EaseType_5; }
	inline int32_t* get_address_of_EaseType_5() { return &___EaseType_5; }
	inline void set_EaseType_5(int32_t value)
	{
		___EaseType_5 = value;
	}

	inline static int32_t get_offset_of_Time_6() { return static_cast<int32_t>(offsetof(cScaleIn_t627124389, ___Time_6)); }
	inline float get_Time_6() const { return ___Time_6; }
	inline float* get_address_of_Time_6() { return &___Time_6; }
	inline void set_Time_6(float value)
	{
		___Time_6 = value;
	}

	inline static int32_t get_offset_of_Delay_7() { return static_cast<int32_t>(offsetof(cScaleIn_t627124389, ___Delay_7)); }
	inline float get_Delay_7() const { return ___Delay_7; }
	inline float* get_address_of_Delay_7() { return &___Delay_7; }
	inline void set_Delay_7(float value)
	{
		___Delay_7 = value;
	}

	inline static int32_t get_offset_of_Sounds_8() { return static_cast<int32_t>(offsetof(cScaleIn_t627124389, ___Sounds_8)); }
	inline cSounds_t1738525510 * get_Sounds_8() const { return ___Sounds_8; }
	inline cSounds_t1738525510 ** get_address_of_Sounds_8() { return &___Sounds_8; }
	inline void set_Sounds_8(cSounds_t1738525510 * value)
	{
		___Sounds_8 = value;
		Il2CppCodeGenWriteBarrier(&___Sounds_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
