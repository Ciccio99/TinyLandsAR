#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// ARTouchManager/ARTouchPlaneUpdate
struct ARTouchPlaneUpdate_t2610448397;
// ARTouchManager/ARTouchBeganUpdate
struct ARTouchBeganUpdate_t3594891140;
// ARTouchManager/ARTouchMovedUpdate
struct ARTouchMovedUpdate_t2503809678;
// ARTouchManager/ARTouchEndedUpdate
struct ARTouchEndedUpdate_t1248700201;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARTouchManager
struct  ARTouchManager_t1310965619  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TextMeshProUGUI ARTouchManager::m_TMProGUI
	TextMeshProUGUI_t934157183 * ___m_TMProGUI_2;
	// System.Int32 ARTouchManager::score
	int32_t ___score_3;
	// ARTouchManager/ARTouchPlaneUpdate ARTouchManager::ARTouchPlaneUpdateEvent
	ARTouchPlaneUpdate_t2610448397 * ___ARTouchPlaneUpdateEvent_4;
	// ARTouchManager/ARTouchBeganUpdate ARTouchManager::ARTouchBeganUpdateEvent
	ARTouchBeganUpdate_t3594891140 * ___ARTouchBeganUpdateEvent_5;
	// ARTouchManager/ARTouchMovedUpdate ARTouchManager::ARTouchMovedUpdateEvent
	ARTouchMovedUpdate_t2503809678 * ___ARTouchMovedUpdateEvent_6;
	// ARTouchManager/ARTouchEndedUpdate ARTouchManager::ARTouchEndedUpdateEvent
	ARTouchEndedUpdate_t1248700201 * ___ARTouchEndedUpdateEvent_7;

public:
	inline static int32_t get_offset_of_m_TMProGUI_2() { return static_cast<int32_t>(offsetof(ARTouchManager_t1310965619, ___m_TMProGUI_2)); }
	inline TextMeshProUGUI_t934157183 * get_m_TMProGUI_2() const { return ___m_TMProGUI_2; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_m_TMProGUI_2() { return &___m_TMProGUI_2; }
	inline void set_m_TMProGUI_2(TextMeshProUGUI_t934157183 * value)
	{
		___m_TMProGUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TMProGUI_2, value);
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(ARTouchManager_t1310965619, ___score_3)); }
	inline int32_t get_score_3() const { return ___score_3; }
	inline int32_t* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(int32_t value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_ARTouchPlaneUpdateEvent_4() { return static_cast<int32_t>(offsetof(ARTouchManager_t1310965619, ___ARTouchPlaneUpdateEvent_4)); }
	inline ARTouchPlaneUpdate_t2610448397 * get_ARTouchPlaneUpdateEvent_4() const { return ___ARTouchPlaneUpdateEvent_4; }
	inline ARTouchPlaneUpdate_t2610448397 ** get_address_of_ARTouchPlaneUpdateEvent_4() { return &___ARTouchPlaneUpdateEvent_4; }
	inline void set_ARTouchPlaneUpdateEvent_4(ARTouchPlaneUpdate_t2610448397 * value)
	{
		___ARTouchPlaneUpdateEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___ARTouchPlaneUpdateEvent_4, value);
	}

	inline static int32_t get_offset_of_ARTouchBeganUpdateEvent_5() { return static_cast<int32_t>(offsetof(ARTouchManager_t1310965619, ___ARTouchBeganUpdateEvent_5)); }
	inline ARTouchBeganUpdate_t3594891140 * get_ARTouchBeganUpdateEvent_5() const { return ___ARTouchBeganUpdateEvent_5; }
	inline ARTouchBeganUpdate_t3594891140 ** get_address_of_ARTouchBeganUpdateEvent_5() { return &___ARTouchBeganUpdateEvent_5; }
	inline void set_ARTouchBeganUpdateEvent_5(ARTouchBeganUpdate_t3594891140 * value)
	{
		___ARTouchBeganUpdateEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___ARTouchBeganUpdateEvent_5, value);
	}

	inline static int32_t get_offset_of_ARTouchMovedUpdateEvent_6() { return static_cast<int32_t>(offsetof(ARTouchManager_t1310965619, ___ARTouchMovedUpdateEvent_6)); }
	inline ARTouchMovedUpdate_t2503809678 * get_ARTouchMovedUpdateEvent_6() const { return ___ARTouchMovedUpdateEvent_6; }
	inline ARTouchMovedUpdate_t2503809678 ** get_address_of_ARTouchMovedUpdateEvent_6() { return &___ARTouchMovedUpdateEvent_6; }
	inline void set_ARTouchMovedUpdateEvent_6(ARTouchMovedUpdate_t2503809678 * value)
	{
		___ARTouchMovedUpdateEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___ARTouchMovedUpdateEvent_6, value);
	}

	inline static int32_t get_offset_of_ARTouchEndedUpdateEvent_7() { return static_cast<int32_t>(offsetof(ARTouchManager_t1310965619, ___ARTouchEndedUpdateEvent_7)); }
	inline ARTouchEndedUpdate_t1248700201 * get_ARTouchEndedUpdateEvent_7() const { return ___ARTouchEndedUpdateEvent_7; }
	inline ARTouchEndedUpdate_t1248700201 ** get_address_of_ARTouchEndedUpdateEvent_7() { return &___ARTouchEndedUpdateEvent_7; }
	inline void set_ARTouchEndedUpdateEvent_7(ARTouchEndedUpdate_t1248700201 * value)
	{
		___ARTouchEndedUpdateEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___ARTouchEndedUpdateEvent_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
