#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_GE_OrbitCamera_ZoomMethod2668793379.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GE_OrbitCamera
struct  GE_OrbitCamera_t1782879088  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform GE_OrbitCamera::m_Target
	Transform_t3275118058 * ___m_Target_2;
	// System.Single GE_OrbitCamera::m_Distance
	float ___m_Distance_3;
	// System.Single GE_OrbitCamera::m_MinDistance
	float ___m_MinDistance_4;
	// System.Single GE_OrbitCamera::m_MaxDistance
	float ___m_MaxDistance_5;
	// System.Single GE_OrbitCamera::m_XSpeed
	float ___m_XSpeed_6;
	// System.Single GE_OrbitCamera::m_YSpeed
	float ___m_YSpeed_7;
	// System.Single GE_OrbitCamera::m_ZoomSpeed
	float ___m_ZoomSpeed_8;
	// System.Boolean GE_OrbitCamera::m_XInvert
	bool ___m_XInvert_9;
	// System.Boolean GE_OrbitCamera::m_YInvert
	bool ___m_YInvert_10;
	// System.Boolean GE_OrbitCamera::m_ZoomInvert
	bool ___m_ZoomInvert_11;
	// System.Single GE_OrbitCamera::m_YMinLimit
	float ___m_YMinLimit_12;
	// System.Single GE_OrbitCamera::m_YMaxLimit
	float ___m_YMaxLimit_13;
	// System.Single GE_OrbitCamera::m_X
	float ___m_X_14;
	// System.Single GE_OrbitCamera::m_Y
	float ___m_Y_15;
	// System.Single GE_OrbitCamera::m_OrbitSpeedDelayTime
	float ___m_OrbitSpeedDelayTime_16;
	// System.Single GE_OrbitCamera::m_OrbitSpeedMultiplier
	float ___m_OrbitSpeedMultiplier_17;
	// UnityEngine.Vector2 GE_OrbitCamera::m_CurrTouch1
	Vector2_t2243707579  ___m_CurrTouch1_18;
	// UnityEngine.Vector2 GE_OrbitCamera::m_LastTouch1
	Vector2_t2243707579  ___m_LastTouch1_19;
	// UnityEngine.Vector2 GE_OrbitCamera::m_CurrTouch2
	Vector2_t2243707579  ___m_CurrTouch2_20;
	// UnityEngine.Vector2 GE_OrbitCamera::m_LastTouch2
	Vector2_t2243707579  ___m_LastTouch2_21;
	// System.Single GE_OrbitCamera::m_CurrDist
	float ___m_CurrDist_22;
	// System.Single GE_OrbitCamera::m_LastDist
	float ___m_LastDist_23;
	// GE_OrbitCamera/ZoomMethod GE_OrbitCamera::m_ZoomMethod
	int32_t ___m_ZoomMethod_24;

public:
	inline static int32_t get_offset_of_m_Target_2() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_Target_2)); }
	inline Transform_t3275118058 * get_m_Target_2() const { return ___m_Target_2; }
	inline Transform_t3275118058 ** get_address_of_m_Target_2() { return &___m_Target_2; }
	inline void set_m_Target_2(Transform_t3275118058 * value)
	{
		___m_Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Target_2, value);
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_MinDistance_4() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_MinDistance_4)); }
	inline float get_m_MinDistance_4() const { return ___m_MinDistance_4; }
	inline float* get_address_of_m_MinDistance_4() { return &___m_MinDistance_4; }
	inline void set_m_MinDistance_4(float value)
	{
		___m_MinDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_MaxDistance_5() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_MaxDistance_5)); }
	inline float get_m_MaxDistance_5() const { return ___m_MaxDistance_5; }
	inline float* get_address_of_m_MaxDistance_5() { return &___m_MaxDistance_5; }
	inline void set_m_MaxDistance_5(float value)
	{
		___m_MaxDistance_5 = value;
	}

	inline static int32_t get_offset_of_m_XSpeed_6() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_XSpeed_6)); }
	inline float get_m_XSpeed_6() const { return ___m_XSpeed_6; }
	inline float* get_address_of_m_XSpeed_6() { return &___m_XSpeed_6; }
	inline void set_m_XSpeed_6(float value)
	{
		___m_XSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_YSpeed_7() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_YSpeed_7)); }
	inline float get_m_YSpeed_7() const { return ___m_YSpeed_7; }
	inline float* get_address_of_m_YSpeed_7() { return &___m_YSpeed_7; }
	inline void set_m_YSpeed_7(float value)
	{
		___m_YSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_ZoomSpeed_8() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_ZoomSpeed_8)); }
	inline float get_m_ZoomSpeed_8() const { return ___m_ZoomSpeed_8; }
	inline float* get_address_of_m_ZoomSpeed_8() { return &___m_ZoomSpeed_8; }
	inline void set_m_ZoomSpeed_8(float value)
	{
		___m_ZoomSpeed_8 = value;
	}

	inline static int32_t get_offset_of_m_XInvert_9() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_XInvert_9)); }
	inline bool get_m_XInvert_9() const { return ___m_XInvert_9; }
	inline bool* get_address_of_m_XInvert_9() { return &___m_XInvert_9; }
	inline void set_m_XInvert_9(bool value)
	{
		___m_XInvert_9 = value;
	}

	inline static int32_t get_offset_of_m_YInvert_10() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_YInvert_10)); }
	inline bool get_m_YInvert_10() const { return ___m_YInvert_10; }
	inline bool* get_address_of_m_YInvert_10() { return &___m_YInvert_10; }
	inline void set_m_YInvert_10(bool value)
	{
		___m_YInvert_10 = value;
	}

	inline static int32_t get_offset_of_m_ZoomInvert_11() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_ZoomInvert_11)); }
	inline bool get_m_ZoomInvert_11() const { return ___m_ZoomInvert_11; }
	inline bool* get_address_of_m_ZoomInvert_11() { return &___m_ZoomInvert_11; }
	inline void set_m_ZoomInvert_11(bool value)
	{
		___m_ZoomInvert_11 = value;
	}

	inline static int32_t get_offset_of_m_YMinLimit_12() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_YMinLimit_12)); }
	inline float get_m_YMinLimit_12() const { return ___m_YMinLimit_12; }
	inline float* get_address_of_m_YMinLimit_12() { return &___m_YMinLimit_12; }
	inline void set_m_YMinLimit_12(float value)
	{
		___m_YMinLimit_12 = value;
	}

	inline static int32_t get_offset_of_m_YMaxLimit_13() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_YMaxLimit_13)); }
	inline float get_m_YMaxLimit_13() const { return ___m_YMaxLimit_13; }
	inline float* get_address_of_m_YMaxLimit_13() { return &___m_YMaxLimit_13; }
	inline void set_m_YMaxLimit_13(float value)
	{
		___m_YMaxLimit_13 = value;
	}

	inline static int32_t get_offset_of_m_X_14() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_X_14)); }
	inline float get_m_X_14() const { return ___m_X_14; }
	inline float* get_address_of_m_X_14() { return &___m_X_14; }
	inline void set_m_X_14(float value)
	{
		___m_X_14 = value;
	}

	inline static int32_t get_offset_of_m_Y_15() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_Y_15)); }
	inline float get_m_Y_15() const { return ___m_Y_15; }
	inline float* get_address_of_m_Y_15() { return &___m_Y_15; }
	inline void set_m_Y_15(float value)
	{
		___m_Y_15 = value;
	}

	inline static int32_t get_offset_of_m_OrbitSpeedDelayTime_16() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_OrbitSpeedDelayTime_16)); }
	inline float get_m_OrbitSpeedDelayTime_16() const { return ___m_OrbitSpeedDelayTime_16; }
	inline float* get_address_of_m_OrbitSpeedDelayTime_16() { return &___m_OrbitSpeedDelayTime_16; }
	inline void set_m_OrbitSpeedDelayTime_16(float value)
	{
		___m_OrbitSpeedDelayTime_16 = value;
	}

	inline static int32_t get_offset_of_m_OrbitSpeedMultiplier_17() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_OrbitSpeedMultiplier_17)); }
	inline float get_m_OrbitSpeedMultiplier_17() const { return ___m_OrbitSpeedMultiplier_17; }
	inline float* get_address_of_m_OrbitSpeedMultiplier_17() { return &___m_OrbitSpeedMultiplier_17; }
	inline void set_m_OrbitSpeedMultiplier_17(float value)
	{
		___m_OrbitSpeedMultiplier_17 = value;
	}

	inline static int32_t get_offset_of_m_CurrTouch1_18() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_CurrTouch1_18)); }
	inline Vector2_t2243707579  get_m_CurrTouch1_18() const { return ___m_CurrTouch1_18; }
	inline Vector2_t2243707579 * get_address_of_m_CurrTouch1_18() { return &___m_CurrTouch1_18; }
	inline void set_m_CurrTouch1_18(Vector2_t2243707579  value)
	{
		___m_CurrTouch1_18 = value;
	}

	inline static int32_t get_offset_of_m_LastTouch1_19() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_LastTouch1_19)); }
	inline Vector2_t2243707579  get_m_LastTouch1_19() const { return ___m_LastTouch1_19; }
	inline Vector2_t2243707579 * get_address_of_m_LastTouch1_19() { return &___m_LastTouch1_19; }
	inline void set_m_LastTouch1_19(Vector2_t2243707579  value)
	{
		___m_LastTouch1_19 = value;
	}

	inline static int32_t get_offset_of_m_CurrTouch2_20() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_CurrTouch2_20)); }
	inline Vector2_t2243707579  get_m_CurrTouch2_20() const { return ___m_CurrTouch2_20; }
	inline Vector2_t2243707579 * get_address_of_m_CurrTouch2_20() { return &___m_CurrTouch2_20; }
	inline void set_m_CurrTouch2_20(Vector2_t2243707579  value)
	{
		___m_CurrTouch2_20 = value;
	}

	inline static int32_t get_offset_of_m_LastTouch2_21() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_LastTouch2_21)); }
	inline Vector2_t2243707579  get_m_LastTouch2_21() const { return ___m_LastTouch2_21; }
	inline Vector2_t2243707579 * get_address_of_m_LastTouch2_21() { return &___m_LastTouch2_21; }
	inline void set_m_LastTouch2_21(Vector2_t2243707579  value)
	{
		___m_LastTouch2_21 = value;
	}

	inline static int32_t get_offset_of_m_CurrDist_22() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_CurrDist_22)); }
	inline float get_m_CurrDist_22() const { return ___m_CurrDist_22; }
	inline float* get_address_of_m_CurrDist_22() { return &___m_CurrDist_22; }
	inline void set_m_CurrDist_22(float value)
	{
		___m_CurrDist_22 = value;
	}

	inline static int32_t get_offset_of_m_LastDist_23() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_LastDist_23)); }
	inline float get_m_LastDist_23() const { return ___m_LastDist_23; }
	inline float* get_address_of_m_LastDist_23() { return &___m_LastDist_23; }
	inline void set_m_LastDist_23(float value)
	{
		___m_LastDist_23 = value;
	}

	inline static int32_t get_offset_of_m_ZoomMethod_24() { return static_cast<int32_t>(offsetof(GE_OrbitCamera_t1782879088, ___m_ZoomMethod_24)); }
	inline int32_t get_m_ZoomMethod_24() const { return ___m_ZoomMethod_24; }
	inline int32_t* get_address_of_m_ZoomMethod_24() { return &___m_ZoomMethod_24; }
	inline void set_m_ZoomMethod_24(int32_t value)
	{
		___m_ZoomMethod_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
