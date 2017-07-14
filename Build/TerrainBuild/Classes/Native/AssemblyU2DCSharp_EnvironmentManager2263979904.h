#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnvironmentManager
struct  EnvironmentManager_t2263979904  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 EnvironmentManager::m_NumberOfCloudsToSpawn
	int32_t ___m_NumberOfCloudsToSpawn_2;
	// UnityEngine.GameObject[] EnvironmentManager::m_CloudPrefabs
	GameObjectU5BU5D_t3057952154* ___m_CloudPrefabs_3;

public:
	inline static int32_t get_offset_of_m_NumberOfCloudsToSpawn_2() { return static_cast<int32_t>(offsetof(EnvironmentManager_t2263979904, ___m_NumberOfCloudsToSpawn_2)); }
	inline int32_t get_m_NumberOfCloudsToSpawn_2() const { return ___m_NumberOfCloudsToSpawn_2; }
	inline int32_t* get_address_of_m_NumberOfCloudsToSpawn_2() { return &___m_NumberOfCloudsToSpawn_2; }
	inline void set_m_NumberOfCloudsToSpawn_2(int32_t value)
	{
		___m_NumberOfCloudsToSpawn_2 = value;
	}

	inline static int32_t get_offset_of_m_CloudPrefabs_3() { return static_cast<int32_t>(offsetof(EnvironmentManager_t2263979904, ___m_CloudPrefabs_3)); }
	inline GameObjectU5BU5D_t3057952154* get_m_CloudPrefabs_3() const { return ___m_CloudPrefabs_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_CloudPrefabs_3() { return &___m_CloudPrefabs_3; }
	inline void set_m_CloudPrefabs_3(GameObjectU5BU5D_t3057952154* value)
	{
		___m_CloudPrefabs_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_CloudPrefabs_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
