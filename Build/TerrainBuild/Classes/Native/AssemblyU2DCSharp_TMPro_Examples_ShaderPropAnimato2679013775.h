#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.ShaderPropAnimator
struct  ShaderPropAnimator_t2679013775  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Renderer TMPro.Examples.ShaderPropAnimator::m_Renderer
	Renderer_t257310565 * ___m_Renderer_2;
	// UnityEngine.Material TMPro.Examples.ShaderPropAnimator::m_Material
	Material_t193706927 * ___m_Material_3;
	// UnityEngine.AnimationCurve TMPro.Examples.ShaderPropAnimator::GlowCurve
	AnimationCurve_t3306541151 * ___GlowCurve_4;
	// System.Single TMPro.Examples.ShaderPropAnimator::m_frame
	float ___m_frame_5;

public:
	inline static int32_t get_offset_of_m_Renderer_2() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t2679013775, ___m_Renderer_2)); }
	inline Renderer_t257310565 * get_m_Renderer_2() const { return ___m_Renderer_2; }
	inline Renderer_t257310565 ** get_address_of_m_Renderer_2() { return &___m_Renderer_2; }
	inline void set_m_Renderer_2(Renderer_t257310565 * value)
	{
		___m_Renderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_2, value);
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t2679013775, ___m_Material_3)); }
	inline Material_t193706927 * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_t193706927 ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_t193706927 * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_3, value);
	}

	inline static int32_t get_offset_of_GlowCurve_4() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t2679013775, ___GlowCurve_4)); }
	inline AnimationCurve_t3306541151 * get_GlowCurve_4() const { return ___GlowCurve_4; }
	inline AnimationCurve_t3306541151 ** get_address_of_GlowCurve_4() { return &___GlowCurve_4; }
	inline void set_GlowCurve_4(AnimationCurve_t3306541151 * value)
	{
		___GlowCurve_4 = value;
		Il2CppCodeGenWriteBarrier(&___GlowCurve_4, value);
	}

	inline static int32_t get_offset_of_m_frame_5() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t2679013775, ___m_frame_5)); }
	inline float get_m_frame_5() const { return ___m_frame_5; }
	inline float* get_address_of_m_frame_5() { return &___m_frame_5; }
	inline void set_m_frame_5(float value)
	{
		___m_frame_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
