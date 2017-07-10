#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// ARPlaneManager
struct ARPlaneManager_t348851406;
// ARTouchManager
struct ARTouchManager_t1310965619;
// ARTerrainManager
struct ARTerrainManager_t2018264653;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeneralManager
struct  GeneralManager_t3038802171  : public MonoBehaviour_t1158329972
{
public:
	// ARPlaneManager GeneralManager::m_ARPlaneManager
	ARPlaneManager_t348851406 * ___m_ARPlaneManager_2;
	// ARTouchManager GeneralManager::m_ARTouchManager
	ARTouchManager_t1310965619 * ___m_ARTouchManager_3;
	// ARTerrainManager GeneralManager::m_ARTerrainManager
	ARTerrainManager_t2018264653 * ___m_ARTerrainManager_4;

public:
	inline static int32_t get_offset_of_m_ARPlaneManager_2() { return static_cast<int32_t>(offsetof(GeneralManager_t3038802171, ___m_ARPlaneManager_2)); }
	inline ARPlaneManager_t348851406 * get_m_ARPlaneManager_2() const { return ___m_ARPlaneManager_2; }
	inline ARPlaneManager_t348851406 ** get_address_of_m_ARPlaneManager_2() { return &___m_ARPlaneManager_2; }
	inline void set_m_ARPlaneManager_2(ARPlaneManager_t348851406 * value)
	{
		___m_ARPlaneManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_ARPlaneManager_2, value);
	}

	inline static int32_t get_offset_of_m_ARTouchManager_3() { return static_cast<int32_t>(offsetof(GeneralManager_t3038802171, ___m_ARTouchManager_3)); }
	inline ARTouchManager_t1310965619 * get_m_ARTouchManager_3() const { return ___m_ARTouchManager_3; }
	inline ARTouchManager_t1310965619 ** get_address_of_m_ARTouchManager_3() { return &___m_ARTouchManager_3; }
	inline void set_m_ARTouchManager_3(ARTouchManager_t1310965619 * value)
	{
		___m_ARTouchManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_ARTouchManager_3, value);
	}

	inline static int32_t get_offset_of_m_ARTerrainManager_4() { return static_cast<int32_t>(offsetof(GeneralManager_t3038802171, ___m_ARTerrainManager_4)); }
	inline ARTerrainManager_t2018264653 * get_m_ARTerrainManager_4() const { return ___m_ARTerrainManager_4; }
	inline ARTerrainManager_t2018264653 ** get_address_of_m_ARTerrainManager_4() { return &___m_ARTerrainManager_4; }
	inline void set_m_ARTerrainManager_4(ARTerrainManager_t2018264653 * value)
	{
		___m_ARTerrainManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ARTerrainManager_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
