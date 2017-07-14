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

// TMPro.Examples.VertexShakeB
struct  VertexShakeB_t3019979320  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TMPro.Examples.VertexShakeB::AngleMultiplier
	float ___AngleMultiplier_2;
	// System.Single TMPro.Examples.VertexShakeB::SpeedMultiplier
	float ___SpeedMultiplier_3;
	// System.Single TMPro.Examples.VertexShakeB::CurveScale
	float ___CurveScale_4;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeB::m_TextComponent
	TMP_Text_t1920000777 * ___m_TextComponent_5;
	// System.Boolean TMPro.Examples.VertexShakeB::hasTextChanged
	bool ___hasTextChanged_6;

public:
	inline static int32_t get_offset_of_AngleMultiplier_2() { return static_cast<int32_t>(offsetof(VertexShakeB_t3019979320, ___AngleMultiplier_2)); }
	inline float get_AngleMultiplier_2() const { return ___AngleMultiplier_2; }
	inline float* get_address_of_AngleMultiplier_2() { return &___AngleMultiplier_2; }
	inline void set_AngleMultiplier_2(float value)
	{
		___AngleMultiplier_2 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_3() { return static_cast<int32_t>(offsetof(VertexShakeB_t3019979320, ___SpeedMultiplier_3)); }
	inline float get_SpeedMultiplier_3() const { return ___SpeedMultiplier_3; }
	inline float* get_address_of_SpeedMultiplier_3() { return &___SpeedMultiplier_3; }
	inline void set_SpeedMultiplier_3(float value)
	{
		___SpeedMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_CurveScale_4() { return static_cast<int32_t>(offsetof(VertexShakeB_t3019979320, ___CurveScale_4)); }
	inline float get_CurveScale_4() const { return ___CurveScale_4; }
	inline float* get_address_of_CurveScale_4() { return &___CurveScale_4; }
	inline void set_CurveScale_4(float value)
	{
		___CurveScale_4 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_5() { return static_cast<int32_t>(offsetof(VertexShakeB_t3019979320, ___m_TextComponent_5)); }
	inline TMP_Text_t1920000777 * get_m_TextComponent_5() const { return ___m_TextComponent_5; }
	inline TMP_Text_t1920000777 ** get_address_of_m_TextComponent_5() { return &___m_TextComponent_5; }
	inline void set_m_TextComponent_5(TMP_Text_t1920000777 * value)
	{
		___m_TextComponent_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_5, value);
	}

	inline static int32_t get_offset_of_hasTextChanged_6() { return static_cast<int32_t>(offsetof(VertexShakeB_t3019979320, ___hasTextChanged_6)); }
	inline bool get_hasTextChanged_6() const { return ___hasTextChanged_6; }
	inline bool* get_address_of_hasTextChanged_6() { return &___hasTextChanged_6; }
	inline void set_hasTextChanged_6(bool value)
	{
		___hasTextChanged_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
