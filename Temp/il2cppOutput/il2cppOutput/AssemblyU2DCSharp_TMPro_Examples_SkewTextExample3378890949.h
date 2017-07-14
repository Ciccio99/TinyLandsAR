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
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.SkewTextExample
struct  SkewTextExample_t3378890949  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TMP_Text TMPro.Examples.SkewTextExample::m_TextComponent
	TMP_Text_t1920000777 * ___m_TextComponent_2;
	// UnityEngine.AnimationCurve TMPro.Examples.SkewTextExample::VertexCurve
	AnimationCurve_t3306541151 * ___VertexCurve_3;
	// System.Single TMPro.Examples.SkewTextExample::CurveScale
	float ___CurveScale_4;
	// System.Single TMPro.Examples.SkewTextExample::ShearAmount
	float ___ShearAmount_5;

public:
	inline static int32_t get_offset_of_m_TextComponent_2() { return static_cast<int32_t>(offsetof(SkewTextExample_t3378890949, ___m_TextComponent_2)); }
	inline TMP_Text_t1920000777 * get_m_TextComponent_2() const { return ___m_TextComponent_2; }
	inline TMP_Text_t1920000777 ** get_address_of_m_TextComponent_2() { return &___m_TextComponent_2; }
	inline void set_m_TextComponent_2(TMP_Text_t1920000777 * value)
	{
		___m_TextComponent_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_2, value);
	}

	inline static int32_t get_offset_of_VertexCurve_3() { return static_cast<int32_t>(offsetof(SkewTextExample_t3378890949, ___VertexCurve_3)); }
	inline AnimationCurve_t3306541151 * get_VertexCurve_3() const { return ___VertexCurve_3; }
	inline AnimationCurve_t3306541151 ** get_address_of_VertexCurve_3() { return &___VertexCurve_3; }
	inline void set_VertexCurve_3(AnimationCurve_t3306541151 * value)
	{
		___VertexCurve_3 = value;
		Il2CppCodeGenWriteBarrier(&___VertexCurve_3, value);
	}

	inline static int32_t get_offset_of_CurveScale_4() { return static_cast<int32_t>(offsetof(SkewTextExample_t3378890949, ___CurveScale_4)); }
	inline float get_CurveScale_4() const { return ___CurveScale_4; }
	inline float* get_address_of_CurveScale_4() { return &___CurveScale_4; }
	inline void set_CurveScale_4(float value)
	{
		___CurveScale_4 = value;
	}

	inline static int32_t get_offset_of_ShearAmount_5() { return static_cast<int32_t>(offsetof(SkewTextExample_t3378890949, ___ShearAmount_5)); }
	inline float get_ShearAmount_5() const { return ___ShearAmount_5; }
	inline float* get_address_of_ShearAmount_5() { return &___ShearAmount_5; }
	inline void set_ShearAmount_5(float value)
	{
		___ShearAmount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
