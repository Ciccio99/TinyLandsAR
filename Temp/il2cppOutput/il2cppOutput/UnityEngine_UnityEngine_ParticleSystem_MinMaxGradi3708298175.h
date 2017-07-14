#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_ParticleSystemGradientMode4205168402.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Gradient3600583008.h"

// UnityEngine.Gradient
struct Gradient_t3600583008;
struct Gradient_t3600583008_marshaled_com;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MinMaxGradient
struct  MinMaxGradient_t3708298175 
{
public:
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_t3600583008 * ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_t3600583008 * ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_t2020392075  ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_t2020392075  ___m_ColorMax_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxGradient_t3708298175, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_GradientMin_1() { return static_cast<int32_t>(offsetof(MinMaxGradient_t3708298175, ___m_GradientMin_1)); }
	inline Gradient_t3600583008 * get_m_GradientMin_1() const { return ___m_GradientMin_1; }
	inline Gradient_t3600583008 ** get_address_of_m_GradientMin_1() { return &___m_GradientMin_1; }
	inline void set_m_GradientMin_1(Gradient_t3600583008 * value)
	{
		___m_GradientMin_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_GradientMin_1, value);
	}

	inline static int32_t get_offset_of_m_GradientMax_2() { return static_cast<int32_t>(offsetof(MinMaxGradient_t3708298175, ___m_GradientMax_2)); }
	inline Gradient_t3600583008 * get_m_GradientMax_2() const { return ___m_GradientMax_2; }
	inline Gradient_t3600583008 ** get_address_of_m_GradientMax_2() { return &___m_GradientMax_2; }
	inline void set_m_GradientMax_2(Gradient_t3600583008 * value)
	{
		___m_GradientMax_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_GradientMax_2, value);
	}

	inline static int32_t get_offset_of_m_ColorMin_3() { return static_cast<int32_t>(offsetof(MinMaxGradient_t3708298175, ___m_ColorMin_3)); }
	inline Color_t2020392075  get_m_ColorMin_3() const { return ___m_ColorMin_3; }
	inline Color_t2020392075 * get_address_of_m_ColorMin_3() { return &___m_ColorMin_3; }
	inline void set_m_ColorMin_3(Color_t2020392075  value)
	{
		___m_ColorMin_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMax_4() { return static_cast<int32_t>(offsetof(MinMaxGradient_t3708298175, ___m_ColorMax_4)); }
	inline Color_t2020392075  get_m_ColorMax_4() const { return ___m_ColorMax_4; }
	inline Color_t2020392075 * get_address_of_m_ColorMax_4() { return &___m_ColorMax_4; }
	inline void set_m_ColorMax_4(Color_t2020392075  value)
	{
		___m_ColorMax_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_t3708298175_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Gradient_t3600583008_marshaled_pinvoke ___m_GradientMin_1;
	Gradient_t3600583008_marshaled_pinvoke ___m_GradientMax_2;
	Color_t2020392075  ___m_ColorMin_3;
	Color_t2020392075  ___m_ColorMax_4;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_t3708298175_marshaled_com
{
	int32_t ___m_Mode_0;
	Gradient_t3600583008_marshaled_com* ___m_GradientMin_1;
	Gradient_t3600583008_marshaled_com* ___m_GradientMax_2;
	Color_t2020392075  ___m_ColorMin_3;
	Color_t2020392075  ___m_ColorMax_4;
};
