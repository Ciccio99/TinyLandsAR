#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TMPro.TMP_Text
struct TMP_Text_t1920000777;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextConsoleSimulator
struct  TextConsoleSimulator_t2207663326  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TMP_Text TMPro.Examples.TextConsoleSimulator::m_TextComponent
	TMP_Text_t1920000777 * ___m_TextComponent_2;
	// System.Boolean TMPro.Examples.TextConsoleSimulator::hasTextChanged
	bool ___hasTextChanged_3;

public:
	inline static int32_t get_offset_of_m_TextComponent_2() { return static_cast<int32_t>(offsetof(TextConsoleSimulator_t2207663326, ___m_TextComponent_2)); }
	inline TMP_Text_t1920000777 * get_m_TextComponent_2() const { return ___m_TextComponent_2; }
	inline TMP_Text_t1920000777 ** get_address_of_m_TextComponent_2() { return &___m_TextComponent_2; }
	inline void set_m_TextComponent_2(TMP_Text_t1920000777 * value)
	{
		___m_TextComponent_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_2, value);
	}

	inline static int32_t get_offset_of_hasTextChanged_3() { return static_cast<int32_t>(offsetof(TextConsoleSimulator_t2207663326, ___hasTextChanged_3)); }
	inline bool get_hasTextChanged_3() const { return ___hasTextChanged_3; }
	inline bool* get_address_of_hasTextChanged_3() { return &___hasTextChanged_3; }
	inline void set_hasTextChanged_3(bool value)
	{
		___hasTextChanged_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
