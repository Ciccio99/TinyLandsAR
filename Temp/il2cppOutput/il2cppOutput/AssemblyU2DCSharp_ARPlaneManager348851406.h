#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_PlaneAnchorObject3628153532.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// ARTerrainManager
struct ARTerrainManager_t2018264653;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARPlaneManager
struct  ARPlaneManager_t348851406  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ARPlaneManager::m_PlanePrefab
	GameObject_t1756533147 * ___m_PlanePrefab_2;
	// ARTerrainManager ARPlaneManager::m_ARTerrainManager
	ARTerrainManager_t2018264653 * ___m_ARTerrainManager_3;
	// PlaneAnchorObject ARPlaneManager::m_PlaneAnchorObject
	PlaneAnchorObject_t3628153532  ___m_PlaneAnchorObject_4;

public:
	inline static int32_t get_offset_of_m_PlanePrefab_2() { return static_cast<int32_t>(offsetof(ARPlaneManager_t348851406, ___m_PlanePrefab_2)); }
	inline GameObject_t1756533147 * get_m_PlanePrefab_2() const { return ___m_PlanePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_m_PlanePrefab_2() { return &___m_PlanePrefab_2; }
	inline void set_m_PlanePrefab_2(GameObject_t1756533147 * value)
	{
		___m_PlanePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlanePrefab_2, value);
	}

	inline static int32_t get_offset_of_m_ARTerrainManager_3() { return static_cast<int32_t>(offsetof(ARPlaneManager_t348851406, ___m_ARTerrainManager_3)); }
	inline ARTerrainManager_t2018264653 * get_m_ARTerrainManager_3() const { return ___m_ARTerrainManager_3; }
	inline ARTerrainManager_t2018264653 ** get_address_of_m_ARTerrainManager_3() { return &___m_ARTerrainManager_3; }
	inline void set_m_ARTerrainManager_3(ARTerrainManager_t2018264653 * value)
	{
		___m_ARTerrainManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_ARTerrainManager_3, value);
	}

	inline static int32_t get_offset_of_m_PlaneAnchorObject_4() { return static_cast<int32_t>(offsetof(ARPlaneManager_t348851406, ___m_PlaneAnchorObject_4)); }
	inline PlaneAnchorObject_t3628153532  get_m_PlaneAnchorObject_4() const { return ___m_PlaneAnchorObject_4; }
	inline PlaneAnchorObject_t3628153532 * get_address_of_m_PlaneAnchorObject_4() { return &___m_PlaneAnchorObject_4; }
	inline void set_m_PlaneAnchorObject_4(PlaneAnchorObject_t3628153532  value)
	{
		___m_PlaneAnchorObject_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
