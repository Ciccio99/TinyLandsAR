#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TMPro_Examples_TMP_FrameRateCoun2802507505.h"

// System.String
struct String_t;
// TMPro.TextMeshPro
struct TextMeshPro_t2521834357;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_FrameRateCounter
struct  TMP_FrameRateCounter_t2302739001  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TMPro.Examples.TMP_FrameRateCounter::UpdateInterval
	float ___UpdateInterval_2;
	// System.Single TMPro.Examples.TMP_FrameRateCounter::m_LastInterval
	float ___m_LastInterval_3;
	// System.Int32 TMPro.Examples.TMP_FrameRateCounter::m_Frames
	int32_t ___m_Frames_4;
	// TMPro.Examples.TMP_FrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TMP_FrameRateCounter::AnchorPosition
	int32_t ___AnchorPosition_5;
	// System.String TMPro.Examples.TMP_FrameRateCounter::htmlColorTag
	String_t* ___htmlColorTag_6;
	// TMPro.TextMeshPro TMPro.Examples.TMP_FrameRateCounter::m_TextMeshPro
	TextMeshPro_t2521834357 * ___m_TextMeshPro_8;
	// UnityEngine.Transform TMPro.Examples.TMP_FrameRateCounter::m_frameCounter_transform
	Transform_t3275118058 * ___m_frameCounter_transform_9;
	// UnityEngine.Camera TMPro.Examples.TMP_FrameRateCounter::m_camera
	Camera_t189460977 * ___m_camera_10;
	// TMPro.Examples.TMP_FrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TMP_FrameRateCounter::last_AnchorPosition
	int32_t ___last_AnchorPosition_11;

public:
	inline static int32_t get_offset_of_UpdateInterval_2() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t2302739001, ___UpdateInterval_2)); }
	inline float get_UpdateInterval_2() const { return ___UpdateInterval_2; }
	inline float* get_address_of_UpdateInterval_2() { return &___UpdateInterval_2; }
	inline void set_UpdateInterval_2(float value)
	{
		___UpdateInterval_2 = value;
	}

	inline static int32_t get_offset_of_m_LastInterval_3() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t2302739001, ___m_LastInterval_3)); }
	inline float get_m_LastInterval_3() const { return ___m_LastInterval_3; }
	inline float* get_address_of_m_LastInterval_3() { return &___m_LastInterval_3; }
	inline void set_m_LastInterval_3(float value)
	{
		___m_LastInterval_3 = value;
	}

	inline static int32_t get_offset_of_m_Frames_4() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t2302739001, ___m_Frames_4)); }
	inline int32_t get_m_Frames_4() const { return ___m_Frames_4; }
	inline int32_t* get_address_of_m_Frames_4() { return &___m_Frames_4; }
	inline void set_m_Frames_4(int32_t value)
	{
		___m_Frames_4 = value;
	}

	inline static int32_t get_offset_of_AnchorPosition_5() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t2302739001, ___AnchorPosition_5)); }
	inline int32_t get_AnchorPosition_5() const { return ___AnchorPosition_5; }
	inline int32_t* get_address_of_AnchorPosition_5() { return &___AnchorPosition_5; }
	inline void set_AnchorPosition_5(int32_t value)
	{
		___AnchorPosition_5 = value;
	}

	inline static int32_t get_offset_of_htmlColorTag_6() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t2302739001, ___htmlColorTag_6)); }
	inline String_t* get_htmlColorTag_6() const { return ___htmlColorTag_6; }
	inline String_t** get_address_of_htmlColorTag_6() { return &___htmlColorTag_6; }
	inline void set_htmlColorTag_6(String_t* value)
	{
		___htmlColorTag_6 = value;
		Il2CppCodeGenWriteBarrier(&___htmlColorTag_6, value);
	}

	inline static int32_t get_offset_of_m_TextMeshPro_8() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t2302739001, ___m_TextMeshPro_8)); }
	inline TextMeshPro_t2521834357 * get_m_TextMeshPro_8() const { return ___m_TextMeshPro_8; }
	inline TextMeshPro_t2521834357 ** get_address_of_m_TextMeshPro_8() { return &___m_TextMeshPro_8; }
	inline void set_m_TextMeshPro_8(TextMeshPro_t2521834357 * value)
	{
		___m_TextMeshPro_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextMeshPro_8, value);
	}

	inline static int32_t get_offset_of_m_frameCounter_transform_9() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t2302739001, ___m_frameCounter_transform_9)); }
	inline Transform_t3275118058 * get_m_frameCounter_transform_9() const { return ___m_frameCounter_transform_9; }
	inline Transform_t3275118058 ** get_address_of_m_frameCounter_transform_9() { return &___m_frameCounter_transform_9; }
	inline void set_m_frameCounter_transform_9(Transform_t3275118058 * value)
	{
		___m_frameCounter_transform_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_frameCounter_transform_9, value);
	}

	inline static int32_t get_offset_of_m_camera_10() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t2302739001, ___m_camera_10)); }
	inline Camera_t189460977 * get_m_camera_10() const { return ___m_camera_10; }
	inline Camera_t189460977 ** get_address_of_m_camera_10() { return &___m_camera_10; }
	inline void set_m_camera_10(Camera_t189460977 * value)
	{
		___m_camera_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_camera_10, value);
	}

	inline static int32_t get_offset_of_last_AnchorPosition_11() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t2302739001, ___last_AnchorPosition_11)); }
	inline int32_t get_last_AnchorPosition_11() const { return ___last_AnchorPosition_11; }
	inline int32_t* get_address_of_last_AnchorPosition_11() { return &___last_AnchorPosition_11; }
	inline void set_last_AnchorPosition_11(int32_t value)
	{
		___last_AnchorPosition_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
