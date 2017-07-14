#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t2833400353;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_SpriteAnimator
struct  TMP_SpriteAnimator_t2347923044  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> TMPro.TMP_SpriteAnimator::m_animations
	Dictionary_2_t2833400353 * ___m_animations_2;
	// TMPro.TMP_Text TMPro.TMP_SpriteAnimator::m_TextComponent
	TMP_Text_t1920000777 * ___m_TextComponent_3;

public:
	inline static int32_t get_offset_of_m_animations_2() { return static_cast<int32_t>(offsetof(TMP_SpriteAnimator_t2347923044, ___m_animations_2)); }
	inline Dictionary_2_t2833400353 * get_m_animations_2() const { return ___m_animations_2; }
	inline Dictionary_2_t2833400353 ** get_address_of_m_animations_2() { return &___m_animations_2; }
	inline void set_m_animations_2(Dictionary_2_t2833400353 * value)
	{
		___m_animations_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_animations_2, value);
	}

	inline static int32_t get_offset_of_m_TextComponent_3() { return static_cast<int32_t>(offsetof(TMP_SpriteAnimator_t2347923044, ___m_TextComponent_3)); }
	inline TMP_Text_t1920000777 * get_m_TextComponent_3() const { return ___m_TextComponent_3; }
	inline TMP_Text_t1920000777 ** get_address_of_m_TextComponent_3() { return &___m_TextComponent_3; }
	inline void set_m_TextComponent_3(TMP_Text_t1920000777 * value)
	{
		___m_TextComponent_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
