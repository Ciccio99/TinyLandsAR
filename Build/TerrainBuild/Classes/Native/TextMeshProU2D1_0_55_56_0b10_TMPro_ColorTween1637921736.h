#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_ColorTween_Color903336102.h"

// TMPro.ColorTween/ColorTweenCallback
struct ColorTweenCallback_t1307749522;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.ColorTween
struct  ColorTween_t1637921736 
{
public:
	// TMPro.ColorTween/ColorTweenCallback TMPro.ColorTween::m_Target
	ColorTweenCallback_t1307749522 * ___m_Target_0;
	// UnityEngine.Color TMPro.ColorTween::m_StartColor
	Color_t2020392075  ___m_StartColor_1;
	// UnityEngine.Color TMPro.ColorTween::m_TargetColor
	Color_t2020392075  ___m_TargetColor_2;
	// TMPro.ColorTween/ColorTweenMode TMPro.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single TMPro.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean TMPro.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t1637921736, ___m_Target_0)); }
	inline ColorTweenCallback_t1307749522 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_t1307749522 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_t1307749522 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Target_0, value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t1637921736, ___m_StartColor_1)); }
	inline Color_t2020392075  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t2020392075 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t2020392075  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t1637921736, ___m_TargetColor_2)); }
	inline Color_t2020392075  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t2020392075 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t2020392075  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t1637921736, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t1637921736, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t1637921736, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.ColorTween
struct ColorTween_t1637921736_marshaled_pinvoke
{
	ColorTweenCallback_t1307749522 * ___m_Target_0;
	Color_t2020392075  ___m_StartColor_1;
	Color_t2020392075  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of TMPro.ColorTween
struct ColorTween_t1637921736_marshaled_com
{
	ColorTweenCallback_t1307749522 * ___m_Target_0;
	Color_t2020392075  ___m_StartColor_1;
	Color_t2020392075  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
