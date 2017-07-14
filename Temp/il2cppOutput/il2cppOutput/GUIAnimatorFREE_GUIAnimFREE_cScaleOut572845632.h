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

// GUIAnimFREE/cScaleOut
struct  cScaleOut_t572845632  : public Il2CppObject
{
public:
	// System.Boolean GUIAnimFREE/cScaleOut::Enable
	bool ___Enable_0;
	// System.Boolean GUIAnimFREE/cScaleOut::Began
	bool ___Began_1;
	// System.Boolean GUIAnimFREE/cScaleOut::Animating
	bool ___Animating_2;
	// System.Boolean GUIAnimFREE/cScaleOut::Done
	bool ___Done_3;
	// UnityEngine.Vector3 GUIAnimFREE/cScaleOut::ScaleBegin
	Vector3_t2243707580  ___ScaleBegin_4;
	// UnityEngine.Vector3 GUIAnimFREE/cScaleOut::ScaleEnd
	Vector3_t2243707580  ___ScaleEnd_5;
	// GUIAnimFREE/eEaseType GUIAnimFREE/cScaleOut::EaseType
	int32_t ___EaseType_6;
	// System.Single GUIAnimFREE/cScaleOut::Time
	float ___Time_7;
	// System.Single GUIAnimFREE/cScaleOut::Delay
	float ___Delay_8;
	// GUIAnimFREE/cSounds GUIAnimFREE/cScaleOut::Sounds
	cSounds_t1738525510 * ___Sounds_9;

public:
	inline static int32_t get_offset_of_Enable_0() { return static_cast<int32_t>(offsetof(cScaleOut_t572845632, ___Enable_0)); }
	inline bool get_Enable_0() const { return ___Enable_0; }
	inline bool* get_address_of_Enable_0() { return &___Enable_0; }
	inline void set_Enable_0(bool value)
	{
		___Enable_0 = value;
	}

	inline static int32_t get_offset_of_Began_1() { return static_cast<int32_t>(offsetof(cScaleOut_t572845632, ___Began_1)); }
	inline bool get_Began_1() const { return ___Began_1; }
	inline bool* get_address_of_Began_1() { return &___Began_1; }
	inline void set_Began_1(bool value)
	{
		___Began_1 = value;
	}

	inline static int32_t get_offset_of_Animating_2() { return static_cast<int32_t>(offsetof(cScaleOut_t572845632, ___Animating_2)); }
	inline bool get_Animating_2() const { return ___Animating_2; }
	inline bool* get_address_of_Animating_2() { return &___Animating_2; }
	inline void set_Animating_2(bool value)
	{
		___Animating_2 = value;
	}

	inline static int32_t get_offset_of_Done_3() { return static_cast<int32_t>(offsetof(cScaleOut_t572845632, ___Done_3)); }
	inline bool get_Done_3() const { return ___Done_3; }
	inline bool* get_address_of_Done_3() { return &___Done_3; }
	inline void set_Done_3(bool value)
	{
		___Done_3 = value;
	}

	inline static int32_t get_offset_of_ScaleBegin_4() { return static_cast<int32_t>(offsetof(cScaleOut_t572845632, ___ScaleBegin_4)); }
	inline Vector3_t2243707580  get_ScaleBegin_4() const { return ___ScaleBegin_4; }
	inline Vector3_t2243707580 * get_address_of_ScaleBegin_4() { return &___ScaleBegin_4; }
	inline void set_ScaleBegin_4(Vector3_t2243707580  value)
	{
		___ScaleBegin_4 = value;
	}

	inline static int32_t get_offset_of_ScaleEnd_5() { return static_cast<int32_t>(offsetof(cScaleOut_t572845632, ___ScaleEnd_5)); }
	inline Vector3_t2243707580  get_ScaleEnd_5() const { return ___ScaleEnd_5; }
	inline Vector3_t2243707580 * get_address_of_ScaleEnd_5() { return &___ScaleEnd_5; }
	inline void set_ScaleEnd_5(Vector3_t2243707580  value)
	{
		___ScaleEnd_5 = value;
	}

	inline static int32_t get_offset_of_EaseType_6() { return static_cast<int32_t>(offsetof(cScaleOut_t572845632, ___EaseType_6)); }
	inline int32_t get_EaseType_6() const { return ___EaseType_6; }
	inline int32_t* get_address_of_EaseType_6() { return &___EaseType_6; }
	inline void set_EaseType_6(int32_t value)
	{
		___EaseType_6 = value;
	}

	inline static int32_t get_offset_of_Time_7() { return static_cast<int32_t>(offsetof(cScaleOut_t572845632, ___Time_7)); }
	inline float get_Time_7() const { return ___Time_7; }
	inline float* get_address_of_Time_7() { return &___Time_7; }
	inline void set_Time_7(float value)
	{
		___Time_7 = value;
	}

	inline static int32_t get_offset_of_Delay_8() { return static_cast<int32_t>(offsetof(cScaleOut_t572845632, ___Delay_8)); }
	inline float get_Delay_8() const { return ___Delay_8; }
	inline float* get_address_of_Delay_8() { return &___Delay_8; }
	inline void set_Delay_8(float value)
	{
		___Delay_8 = value;
	}

	inline static int32_t get_offset_of_Sounds_9() { return static_cast<int32_t>(offsetof(cScaleOut_t572845632, ___Sounds_9)); }
	inline cSounds_t1738525510 * get_Sounds_9() const { return ___Sounds_9; }
	inline cSounds_t1738525510 ** get_address_of_Sounds_9() { return &___Sounds_9; }
	inline void set_Sounds_9(cSounds_t1738525510 * value)
	{
		___Sounds_9 = value;
		Il2CppCodeGenWriteBarrier(&___Sounds_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
