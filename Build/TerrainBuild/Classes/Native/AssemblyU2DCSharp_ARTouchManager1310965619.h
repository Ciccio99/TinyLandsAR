#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

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
	// ARTouchManager/ARTouchPlaneUpdate ARTouchManager::ARTouchPlaneUpdateEvent
	ARTouchPlaneUpdate_t2610448397 * ___ARTouchPlaneUpdateEvent_2;
	// ARTouchManager/ARTouchBeganUpdate ARTouchManager::ARTouchBeganUpdateEvent
	ARTouchBeganUpdate_t3594891140 * ___ARTouchBeganUpdateEvent_3;
	// ARTouchManager/ARTouchMovedUpdate ARTouchManager::ARTouchMovedUpdateEvent
	ARTouchMovedUpdate_t2503809678 * ___ARTouchMovedUpdateEvent_4;
	// ARTouchManager/ARTouchEndedUpdate ARTouchManager::ARTouchEndedUpdateEvent
	ARTouchEndedUpdate_t1248700201 * ___ARTouchEndedUpdateEvent_5;

public:
	inline static int32_t get_offset_of_ARTouchPlaneUpdateEvent_2() { return static_cast<int32_t>(offsetof(ARTouchManager_t1310965619, ___ARTouchPlaneUpdateEvent_2)); }
	inline ARTouchPlaneUpdate_t2610448397 * get_ARTouchPlaneUpdateEvent_2() const { return ___ARTouchPlaneUpdateEvent_2; }
	inline ARTouchPlaneUpdate_t2610448397 ** get_address_of_ARTouchPlaneUpdateEvent_2() { return &___ARTouchPlaneUpdateEvent_2; }
	inline void set_ARTouchPlaneUpdateEvent_2(ARTouchPlaneUpdate_t2610448397 * value)
	{
		___ARTouchPlaneUpdateEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___ARTouchPlaneUpdateEvent_2, value);
	}

	inline static int32_t get_offset_of_ARTouchBeganUpdateEvent_3() { return static_cast<int32_t>(offsetof(ARTouchManager_t1310965619, ___ARTouchBeganUpdateEvent_3)); }
	inline ARTouchBeganUpdate_t3594891140 * get_ARTouchBeganUpdateEvent_3() const { return ___ARTouchBeganUpdateEvent_3; }
	inline ARTouchBeganUpdate_t3594891140 ** get_address_of_ARTouchBeganUpdateEvent_3() { return &___ARTouchBeganUpdateEvent_3; }
	inline void set_ARTouchBeganUpdateEvent_3(ARTouchBeganUpdate_t3594891140 * value)
	{
		___ARTouchBeganUpdateEvent_3 = value;
		Il2CppCodeGenWriteBarrier(&___ARTouchBeganUpdateEvent_3, value);
	}

	inline static int32_t get_offset_of_ARTouchMovedUpdateEvent_4() { return static_cast<int32_t>(offsetof(ARTouchManager_t1310965619, ___ARTouchMovedUpdateEvent_4)); }
	inline ARTouchMovedUpdate_t2503809678 * get_ARTouchMovedUpdateEvent_4() const { return ___ARTouchMovedUpdateEvent_4; }
	inline ARTouchMovedUpdate_t2503809678 ** get_address_of_ARTouchMovedUpdateEvent_4() { return &___ARTouchMovedUpdateEvent_4; }
	inline void set_ARTouchMovedUpdateEvent_4(ARTouchMovedUpdate_t2503809678 * value)
	{
		___ARTouchMovedUpdateEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___ARTouchMovedUpdateEvent_4, value);
	}

	inline static int32_t get_offset_of_ARTouchEndedUpdateEvent_5() { return static_cast<int32_t>(offsetof(ARTouchManager_t1310965619, ___ARTouchEndedUpdateEvent_5)); }
	inline ARTouchEndedUpdate_t1248700201 * get_ARTouchEndedUpdateEvent_5() const { return ___ARTouchEndedUpdateEvent_5; }
	inline ARTouchEndedUpdate_t1248700201 ** get_address_of_ARTouchEndedUpdateEvent_5() { return &___ARTouchEndedUpdateEvent_5; }
	inline void set_ARTouchEndedUpdateEvent_5(ARTouchEndedUpdate_t1248700201 * value)
	{
		___ARTouchEndedUpdateEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___ARTouchEndedUpdateEvent_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
