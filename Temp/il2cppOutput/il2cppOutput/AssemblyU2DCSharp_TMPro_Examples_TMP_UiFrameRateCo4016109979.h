#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TMPro_Examples_TMP_UiFrameRateCo3655978865.h"

// System.String
struct String_t;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_UiFrameRateCounter
struct  TMP_UiFrameRateCounter_t4016109979  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TMPro.Examples.TMP_UiFrameRateCounter::UpdateInterval
	float ___UpdateInterval_2;
	// System.Single TMPro.Examples.TMP_UiFrameRateCounter::m_LastInterval
	float ___m_LastInterval_3;
	// System.Int32 TMPro.Examples.TMP_UiFrameRateCounter::m_Frames
	int32_t ___m_Frames_4;
	// TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TMP_UiFrameRateCounter::AnchorPosition
	int32_t ___AnchorPosition_5;
	// System.String TMPro.Examples.TMP_UiFrameRateCounter::htmlColorTag
	String_t* ___htmlColorTag_6;
	// TMPro.TextMeshProUGUI TMPro.Examples.TMP_UiFrameRateCounter::m_TextMeshPro
	TextMeshProUGUI_t934157183 * ___m_TextMeshPro_8;
	// UnityEngine.RectTransform TMPro.Examples.TMP_UiFrameRateCounter::m_frameCounter_transform
	RectTransform_t3349966182 * ___m_frameCounter_transform_9;
	// TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TMP_UiFrameRateCounter::last_AnchorPosition
	int32_t ___last_AnchorPosition_10;

public:
	inline static int32_t get_offset_of_UpdateInterval_2() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t4016109979, ___UpdateInterval_2)); }
	inline float get_UpdateInterval_2() const { return ___UpdateInterval_2; }
	inline float* get_address_of_UpdateInterval_2() { return &___UpdateInterval_2; }
	inline void set_UpdateInterval_2(float value)
	{
		___UpdateInterval_2 = value;
	}

	inline static int32_t get_offset_of_m_LastInterval_3() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t4016109979, ___m_LastInterval_3)); }
	inline float get_m_LastInterval_3() const { return ___m_LastInterval_3; }
	inline float* get_address_of_m_LastInterval_3() { return &___m_LastInterval_3; }
	inline void set_m_LastInterval_3(float value)
	{
		___m_LastInterval_3 = value;
	}

	inline static int32_t get_offset_of_m_Frames_4() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t4016109979, ___m_Frames_4)); }
	inline int32_t get_m_Frames_4() const { return ___m_Frames_4; }
	inline int32_t* get_address_of_m_Frames_4() { return &___m_Frames_4; }
	inline void set_m_Frames_4(int32_t value)
	{
		___m_Frames_4 = value;
	}

	inline static int32_t get_offset_of_AnchorPosition_5() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t4016109979, ___AnchorPosition_5)); }
	inline int32_t get_AnchorPosition_5() const { return ___AnchorPosition_5; }
	inline int32_t* get_address_of_AnchorPosition_5() { return &___AnchorPosition_5; }
	inline void set_AnchorPosition_5(int32_t value)
	{
		___AnchorPosition_5 = value;
	}

	inline static int32_t get_offset_of_htmlColorTag_6() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t4016109979, ___htmlColorTag_6)); }
	inline String_t* get_htmlColorTag_6() const { return ___htmlColorTag_6; }
	inline String_t** get_address_of_htmlColorTag_6() { return &___htmlColorTag_6; }
	inline void set_htmlColorTag_6(String_t* value)
	{
		___htmlColorTag_6 = value;
		Il2CppCodeGenWriteBarrier(&___htmlColorTag_6, value);
	}

	inline static int32_t get_offset_of_m_TextMeshPro_8() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t4016109979, ___m_TextMeshPro_8)); }
	inline TextMeshProUGUI_t934157183 * get_m_TextMeshPro_8() const { return ___m_TextMeshPro_8; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_m_TextMeshPro_8() { return &___m_TextMeshPro_8; }
	inline void set_m_TextMeshPro_8(TextMeshProUGUI_t934157183 * value)
	{
		___m_TextMeshPro_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextMeshPro_8, value);
	}

	inline static int32_t get_offset_of_m_frameCounter_transform_9() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t4016109979, ___m_frameCounter_transform_9)); }
	inline RectTransform_t3349966182 * get_m_frameCounter_transform_9() const { return ___m_frameCounter_transform_9; }
	inline RectTransform_t3349966182 ** get_address_of_m_frameCounter_transform_9() { return &___m_frameCounter_transform_9; }
	inline void set_m_frameCounter_transform_9(RectTransform_t3349966182 * value)
	{
		___m_frameCounter_transform_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_frameCounter_transform_9, value);
	}

	inline static int32_t get_offset_of_last_AnchorPosition_10() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t4016109979, ___last_AnchorPosition_10)); }
	inline int32_t get_last_AnchorPosition_10() const { return ___last_AnchorPosition_10; }
	inline int32_t* get_address_of_last_AnchorPosition_10() { return &___last_AnchorPosition_10; }
	inline void set_last_AnchorPosition_10(int32_t value)
	{
		___last_AnchorPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
