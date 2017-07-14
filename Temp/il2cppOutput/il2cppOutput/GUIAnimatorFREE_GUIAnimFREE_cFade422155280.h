#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "GUIAnimatorFREE_GUIAnimFREE_eEaseType875930122.h"

// GUIAnimFREE/cSounds
struct cSounds_t1738525510;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimFREE/cFade
struct  cFade_t422155280  : public Il2CppObject
{
public:
	// System.Boolean GUIAnimFREE/cFade::Enable
	bool ___Enable_0;
	// System.Boolean GUIAnimFREE/cFade::Began
	bool ___Began_1;
	// System.Boolean GUIAnimFREE/cFade::Animating
	bool ___Animating_2;
	// System.Boolean GUIAnimFREE/cFade::Done
	bool ___Done_3;
	// System.Single GUIAnimFREE/cFade::Fade
	float ___Fade_4;
	// GUIAnimFREE/eEaseType GUIAnimFREE/cFade::EaseType
	int32_t ___EaseType_5;
	// System.Single GUIAnimFREE/cFade::Time
	float ___Time_6;
	// System.Single GUIAnimFREE/cFade::Delay
	float ___Delay_7;
	// System.Boolean GUIAnimFREE/cFade::FadeChildren
	bool ___FadeChildren_8;
	// GUIAnimFREE/cSounds GUIAnimFREE/cFade::Sounds
	cSounds_t1738525510 * ___Sounds_9;

public:
	inline static int32_t get_offset_of_Enable_0() { return static_cast<int32_t>(offsetof(cFade_t422155280, ___Enable_0)); }
	inline bool get_Enable_0() const { return ___Enable_0; }
	inline bool* get_address_of_Enable_0() { return &___Enable_0; }
	inline void set_Enable_0(bool value)
	{
		___Enable_0 = value;
	}

	inline static int32_t get_offset_of_Began_1() { return static_cast<int32_t>(offsetof(cFade_t422155280, ___Began_1)); }
	inline bool get_Began_1() const { return ___Began_1; }
	inline bool* get_address_of_Began_1() { return &___Began_1; }
	inline void set_Began_1(bool value)
	{
		___Began_1 = value;
	}

	inline static int32_t get_offset_of_Animating_2() { return static_cast<int32_t>(offsetof(cFade_t422155280, ___Animating_2)); }
	inline bool get_Animating_2() const { return ___Animating_2; }
	inline bool* get_address_of_Animating_2() { return &___Animating_2; }
	inline void set_Animating_2(bool value)
	{
		___Animating_2 = value;
	}

	inline static int32_t get_offset_of_Done_3() { return static_cast<int32_t>(offsetof(cFade_t422155280, ___Done_3)); }
	inline bool get_Done_3() const { return ___Done_3; }
	inline bool* get_address_of_Done_3() { return &___Done_3; }
	inline void set_Done_3(bool value)
	{
		___Done_3 = value;
	}

	inline static int32_t get_offset_of_Fade_4() { return static_cast<int32_t>(offsetof(cFade_t422155280, ___Fade_4)); }
	inline float get_Fade_4() const { return ___Fade_4; }
	inline float* get_address_of_Fade_4() { return &___Fade_4; }
	inline void set_Fade_4(float value)
	{
		___Fade_4 = value;
	}

	inline static int32_t get_offset_of_EaseType_5() { return static_cast<int32_t>(offsetof(cFade_t422155280, ___EaseType_5)); }
	inline int32_t get_EaseType_5() const { return ___EaseType_5; }
	inline int32_t* get_address_of_EaseType_5() { return &___EaseType_5; }
	inline void set_EaseType_5(int32_t value)
	{
		___EaseType_5 = value;
	}

	inline static int32_t get_offset_of_Time_6() { return static_cast<int32_t>(offsetof(cFade_t422155280, ___Time_6)); }
	inline float get_Time_6() const { return ___Time_6; }
	inline float* get_address_of_Time_6() { return &___Time_6; }
	inline void set_Time_6(float value)
	{
		___Time_6 = value;
	}

	inline static int32_t get_offset_of_Delay_7() { return static_cast<int32_t>(offsetof(cFade_t422155280, ___Delay_7)); }
	inline float get_Delay_7() const { return ___Delay_7; }
	inline float* get_address_of_Delay_7() { return &___Delay_7; }
	inline void set_Delay_7(float value)
	{
		___Delay_7 = value;
	}

	inline static int32_t get_offset_of_FadeChildren_8() { return static_cast<int32_t>(offsetof(cFade_t422155280, ___FadeChildren_8)); }
	inline bool get_FadeChildren_8() const { return ___FadeChildren_8; }
	inline bool* get_address_of_FadeChildren_8() { return &___FadeChildren_8; }
	inline void set_FadeChildren_8(bool value)
	{
		___FadeChildren_8 = value;
	}

	inline static int32_t get_offset_of_Sounds_9() { return static_cast<int32_t>(offsetof(cFade_t422155280, ___Sounds_9)); }
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
