#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TMPro.TextMeshPro
struct TextMeshPro_t2521834357;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.SimpleScript
struct  SimpleScript_t767280347  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TextMeshPro TMPro.Examples.SimpleScript::m_textMeshPro
	TextMeshPro_t2521834357 * ___m_textMeshPro_2;
	// System.Single TMPro.Examples.SimpleScript::m_frame
	float ___m_frame_4;

public:
	inline static int32_t get_offset_of_m_textMeshPro_2() { return static_cast<int32_t>(offsetof(SimpleScript_t767280347, ___m_textMeshPro_2)); }
	inline TextMeshPro_t2521834357 * get_m_textMeshPro_2() const { return ___m_textMeshPro_2; }
	inline TextMeshPro_t2521834357 ** get_address_of_m_textMeshPro_2() { return &___m_textMeshPro_2; }
	inline void set_m_textMeshPro_2(TextMeshPro_t2521834357 * value)
	{
		___m_textMeshPro_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_textMeshPro_2, value);
	}

	inline static int32_t get_offset_of_m_frame_4() { return static_cast<int32_t>(offsetof(SimpleScript_t767280347, ___m_frame_4)); }
	inline float get_m_frame_4() const { return ___m_frame_4; }
	inline float* get_address_of_m_frame_4() { return &___m_frame_4; }
	inline void set_m_frame_4(float value)
	{
		___m_frame_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
