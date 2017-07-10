#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2724090252;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t406219171;
// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator
struct  AeroplanePropellerAnimator_t1267426529  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorModel
	Transform_t3275118058 * ___m_PropellorModel_2;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlur
	Transform_t3275118058 * ___m_PropellorBlur_3;
	// UnityEngine.Texture2D[] UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurTextures
	Texture2DU5BU5D_t2724090252* ___m_PropellorBlurTextures_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_ThrottleBlurStart
	float ___m_ThrottleBlurStart_5;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_ThrottleBlurEnd
	float ___m_ThrottleBlurEnd_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_MaxRpm
	float ___m_MaxRpm_7;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_Plane
	AeroplaneController_t406219171 * ___m_Plane_8;
	// System.Int32 UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurState
	int32_t ___m_PropellorBlurState_9;
	// UnityEngine.Renderer UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorModelRenderer
	Renderer_t257310565 * ___m_PropellorModelRenderer_11;
	// UnityEngine.Renderer UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurRenderer
	Renderer_t257310565 * ___m_PropellorBlurRenderer_12;

public:
	inline static int32_t get_offset_of_m_PropellorModel_2() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t1267426529, ___m_PropellorModel_2)); }
	inline Transform_t3275118058 * get_m_PropellorModel_2() const { return ___m_PropellorModel_2; }
	inline Transform_t3275118058 ** get_address_of_m_PropellorModel_2() { return &___m_PropellorModel_2; }
	inline void set_m_PropellorModel_2(Transform_t3275118058 * value)
	{
		___m_PropellorModel_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_PropellorModel_2, value);
	}

	inline static int32_t get_offset_of_m_PropellorBlur_3() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t1267426529, ___m_PropellorBlur_3)); }
	inline Transform_t3275118058 * get_m_PropellorBlur_3() const { return ___m_PropellorBlur_3; }
	inline Transform_t3275118058 ** get_address_of_m_PropellorBlur_3() { return &___m_PropellorBlur_3; }
	inline void set_m_PropellorBlur_3(Transform_t3275118058 * value)
	{
		___m_PropellorBlur_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_PropellorBlur_3, value);
	}

	inline static int32_t get_offset_of_m_PropellorBlurTextures_4() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t1267426529, ___m_PropellorBlurTextures_4)); }
	inline Texture2DU5BU5D_t2724090252* get_m_PropellorBlurTextures_4() const { return ___m_PropellorBlurTextures_4; }
	inline Texture2DU5BU5D_t2724090252** get_address_of_m_PropellorBlurTextures_4() { return &___m_PropellorBlurTextures_4; }
	inline void set_m_PropellorBlurTextures_4(Texture2DU5BU5D_t2724090252* value)
	{
		___m_PropellorBlurTextures_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_PropellorBlurTextures_4, value);
	}

	inline static int32_t get_offset_of_m_ThrottleBlurStart_5() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t1267426529, ___m_ThrottleBlurStart_5)); }
	inline float get_m_ThrottleBlurStart_5() const { return ___m_ThrottleBlurStart_5; }
	inline float* get_address_of_m_ThrottleBlurStart_5() { return &___m_ThrottleBlurStart_5; }
	inline void set_m_ThrottleBlurStart_5(float value)
	{
		___m_ThrottleBlurStart_5 = value;
	}

	inline static int32_t get_offset_of_m_ThrottleBlurEnd_6() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t1267426529, ___m_ThrottleBlurEnd_6)); }
	inline float get_m_ThrottleBlurEnd_6() const { return ___m_ThrottleBlurEnd_6; }
	inline float* get_address_of_m_ThrottleBlurEnd_6() { return &___m_ThrottleBlurEnd_6; }
	inline void set_m_ThrottleBlurEnd_6(float value)
	{
		___m_ThrottleBlurEnd_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxRpm_7() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t1267426529, ___m_MaxRpm_7)); }
	inline float get_m_MaxRpm_7() const { return ___m_MaxRpm_7; }
	inline float* get_address_of_m_MaxRpm_7() { return &___m_MaxRpm_7; }
	inline void set_m_MaxRpm_7(float value)
	{
		___m_MaxRpm_7 = value;
	}

	inline static int32_t get_offset_of_m_Plane_8() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t1267426529, ___m_Plane_8)); }
	inline AeroplaneController_t406219171 * get_m_Plane_8() const { return ___m_Plane_8; }
	inline AeroplaneController_t406219171 ** get_address_of_m_Plane_8() { return &___m_Plane_8; }
	inline void set_m_Plane_8(AeroplaneController_t406219171 * value)
	{
		___m_Plane_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Plane_8, value);
	}

	inline static int32_t get_offset_of_m_PropellorBlurState_9() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t1267426529, ___m_PropellorBlurState_9)); }
	inline int32_t get_m_PropellorBlurState_9() const { return ___m_PropellorBlurState_9; }
	inline int32_t* get_address_of_m_PropellorBlurState_9() { return &___m_PropellorBlurState_9; }
	inline void set_m_PropellorBlurState_9(int32_t value)
	{
		___m_PropellorBlurState_9 = value;
	}

	inline static int32_t get_offset_of_m_PropellorModelRenderer_11() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t1267426529, ___m_PropellorModelRenderer_11)); }
	inline Renderer_t257310565 * get_m_PropellorModelRenderer_11() const { return ___m_PropellorModelRenderer_11; }
	inline Renderer_t257310565 ** get_address_of_m_PropellorModelRenderer_11() { return &___m_PropellorModelRenderer_11; }
	inline void set_m_PropellorModelRenderer_11(Renderer_t257310565 * value)
	{
		___m_PropellorModelRenderer_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_PropellorModelRenderer_11, value);
	}

	inline static int32_t get_offset_of_m_PropellorBlurRenderer_12() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t1267426529, ___m_PropellorBlurRenderer_12)); }
	inline Renderer_t257310565 * get_m_PropellorBlurRenderer_12() const { return ___m_PropellorBlurRenderer_12; }
	inline Renderer_t257310565 ** get_address_of_m_PropellorBlurRenderer_12() { return &___m_PropellorBlurRenderer_12; }
	inline void set_m_PropellorBlurRenderer_12(Renderer_t257310565 * value)
	{
		___m_PropellorBlurRenderer_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_PropellorBlurRenderer_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
