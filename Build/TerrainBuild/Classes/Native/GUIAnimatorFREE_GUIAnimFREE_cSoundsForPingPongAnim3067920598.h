#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimFREE/cSoundsForPingPongAnim
struct  cSoundsForPingPongAnim_t3067920598  : public Il2CppObject
{
public:
	// UnityEngine.AudioClip GUIAnimFREE/cSoundsForPingPongAnim::m_AudioClip
	AudioClip_t1932558630 * ___m_AudioClip_0;
	// System.Boolean GUIAnimFREE/cSoundsForPingPongAnim::m_Loop
	bool ___m_Loop_1;
	// UnityEngine.AudioSource GUIAnimFREE/cSoundsForPingPongAnim::m_AudioSource
	AudioSource_t1135106623 * ___m_AudioSource_2;

public:
	inline static int32_t get_offset_of_m_AudioClip_0() { return static_cast<int32_t>(offsetof(cSoundsForPingPongAnim_t3067920598, ___m_AudioClip_0)); }
	inline AudioClip_t1932558630 * get_m_AudioClip_0() const { return ___m_AudioClip_0; }
	inline AudioClip_t1932558630 ** get_address_of_m_AudioClip_0() { return &___m_AudioClip_0; }
	inline void set_m_AudioClip_0(AudioClip_t1932558630 * value)
	{
		___m_AudioClip_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioClip_0, value);
	}

	inline static int32_t get_offset_of_m_Loop_1() { return static_cast<int32_t>(offsetof(cSoundsForPingPongAnim_t3067920598, ___m_Loop_1)); }
	inline bool get_m_Loop_1() const { return ___m_Loop_1; }
	inline bool* get_address_of_m_Loop_1() { return &___m_Loop_1; }
	inline void set_m_Loop_1(bool value)
	{
		___m_Loop_1 = value;
	}

	inline static int32_t get_offset_of_m_AudioSource_2() { return static_cast<int32_t>(offsetof(cSoundsForPingPongAnim_t3067920598, ___m_AudioSource_2)); }
	inline AudioSource_t1135106623 * get_m_AudioSource_2() const { return ___m_AudioSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_m_AudioSource_2() { return &___m_AudioSource_2; }
	inline void set_m_AudioSource_2(AudioSource_t1135106623 * value)
	{
		___m_AudioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioSource_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
