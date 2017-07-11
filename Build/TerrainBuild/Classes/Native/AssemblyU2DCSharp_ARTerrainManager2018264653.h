#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TerrainAnchorObject1214709381.h"
#include "AssemblyU2DCSharp_ARTerrainManager_ManipPhase338933528.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// MapGenerator
struct MapGenerator_t237211197;
// UnityEngine.Material
struct Material_t193706927;
// System.Collections.Generic.List`1<TerrainPoint>
struct List_1_t2456077777;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ARTerrainManager
struct  ARTerrainManager_t2018264653  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ARTerrainManager::m_TerrainScale
	float ___m_TerrainScale_2;
	// UnityEngine.GameObject ARTerrainManager::m_TerrainPrefab
	GameObject_t1756533147 * ___m_TerrainPrefab_3;
	// MapGenerator ARTerrainManager::m_MapGenerator
	MapGenerator_t237211197 * ___m_MapGenerator_4;
	// System.Int32 ARTerrainManager::m_TerrainLayerMask
	int32_t ___m_TerrainLayerMask_5;
	// TerrainAnchorObject ARTerrainManager::m_TerrainAnchorObject
	TerrainAnchorObject_t1214709381  ___m_TerrainAnchorObject_6;
	// System.Single ARTerrainManager::m_TerrainModifyRate
	float ___m_TerrainModifyRate_7;
	// System.Single ARTerrainManager::m_TerrainSelectRadius
	float ___m_TerrainSelectRadius_8;
	// UnityEngine.Material ARTerrainManager::m_TerrainMaterial
	Material_t193706927 * ___m_TerrainMaterial_9;
	// System.Boolean ARTerrainManager::m_TerrainSpawned
	bool ___m_TerrainSpawned_10;
	// ARTerrainManager/ManipPhase ARTerrainManager::m_CurrentManipPhase
	int32_t ___m_CurrentManipPhase_11;
	// System.Single ARTerrainManager::m_TallestMeshHeight
	float ___m_TallestMeshHeight_12;
	// UnityEngine.Vector2 ARTerrainManager::m_StartTouchPosition
	Vector2_t2243707579  ___m_StartTouchPosition_13;
	// UnityEngine.Vector2 ARTerrainManager::m_TouchDirection
	Vector2_t2243707579  ___m_TouchDirection_14;
	// System.Int32 ARTerrainManager::m_VerticesManipIndex
	int32_t ___m_VerticesManipIndex_15;
	// System.Collections.Generic.List`1<TerrainPoint> ARTerrainManager::m_TerrainPoints
	List_1_t2456077777 * ___m_TerrainPoints_16;

public:
	inline static int32_t get_offset_of_m_TerrainScale_2() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TerrainScale_2)); }
	inline float get_m_TerrainScale_2() const { return ___m_TerrainScale_2; }
	inline float* get_address_of_m_TerrainScale_2() { return &___m_TerrainScale_2; }
	inline void set_m_TerrainScale_2(float value)
	{
		___m_TerrainScale_2 = value;
	}

	inline static int32_t get_offset_of_m_TerrainPrefab_3() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TerrainPrefab_3)); }
	inline GameObject_t1756533147 * get_m_TerrainPrefab_3() const { return ___m_TerrainPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_m_TerrainPrefab_3() { return &___m_TerrainPrefab_3; }
	inline void set_m_TerrainPrefab_3(GameObject_t1756533147 * value)
	{
		___m_TerrainPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_TerrainPrefab_3, value);
	}

	inline static int32_t get_offset_of_m_MapGenerator_4() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_MapGenerator_4)); }
	inline MapGenerator_t237211197 * get_m_MapGenerator_4() const { return ___m_MapGenerator_4; }
	inline MapGenerator_t237211197 ** get_address_of_m_MapGenerator_4() { return &___m_MapGenerator_4; }
	inline void set_m_MapGenerator_4(MapGenerator_t237211197 * value)
	{
		___m_MapGenerator_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_MapGenerator_4, value);
	}

	inline static int32_t get_offset_of_m_TerrainLayerMask_5() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TerrainLayerMask_5)); }
	inline int32_t get_m_TerrainLayerMask_5() const { return ___m_TerrainLayerMask_5; }
	inline int32_t* get_address_of_m_TerrainLayerMask_5() { return &___m_TerrainLayerMask_5; }
	inline void set_m_TerrainLayerMask_5(int32_t value)
	{
		___m_TerrainLayerMask_5 = value;
	}

	inline static int32_t get_offset_of_m_TerrainAnchorObject_6() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TerrainAnchorObject_6)); }
	inline TerrainAnchorObject_t1214709381  get_m_TerrainAnchorObject_6() const { return ___m_TerrainAnchorObject_6; }
	inline TerrainAnchorObject_t1214709381 * get_address_of_m_TerrainAnchorObject_6() { return &___m_TerrainAnchorObject_6; }
	inline void set_m_TerrainAnchorObject_6(TerrainAnchorObject_t1214709381  value)
	{
		___m_TerrainAnchorObject_6 = value;
	}

	inline static int32_t get_offset_of_m_TerrainModifyRate_7() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TerrainModifyRate_7)); }
	inline float get_m_TerrainModifyRate_7() const { return ___m_TerrainModifyRate_7; }
	inline float* get_address_of_m_TerrainModifyRate_7() { return &___m_TerrainModifyRate_7; }
	inline void set_m_TerrainModifyRate_7(float value)
	{
		___m_TerrainModifyRate_7 = value;
	}

	inline static int32_t get_offset_of_m_TerrainSelectRadius_8() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TerrainSelectRadius_8)); }
	inline float get_m_TerrainSelectRadius_8() const { return ___m_TerrainSelectRadius_8; }
	inline float* get_address_of_m_TerrainSelectRadius_8() { return &___m_TerrainSelectRadius_8; }
	inline void set_m_TerrainSelectRadius_8(float value)
	{
		___m_TerrainSelectRadius_8 = value;
	}

	inline static int32_t get_offset_of_m_TerrainMaterial_9() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TerrainMaterial_9)); }
	inline Material_t193706927 * get_m_TerrainMaterial_9() const { return ___m_TerrainMaterial_9; }
	inline Material_t193706927 ** get_address_of_m_TerrainMaterial_9() { return &___m_TerrainMaterial_9; }
	inline void set_m_TerrainMaterial_9(Material_t193706927 * value)
	{
		___m_TerrainMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_TerrainMaterial_9, value);
	}

	inline static int32_t get_offset_of_m_TerrainSpawned_10() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TerrainSpawned_10)); }
	inline bool get_m_TerrainSpawned_10() const { return ___m_TerrainSpawned_10; }
	inline bool* get_address_of_m_TerrainSpawned_10() { return &___m_TerrainSpawned_10; }
	inline void set_m_TerrainSpawned_10(bool value)
	{
		___m_TerrainSpawned_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentManipPhase_11() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_CurrentManipPhase_11)); }
	inline int32_t get_m_CurrentManipPhase_11() const { return ___m_CurrentManipPhase_11; }
	inline int32_t* get_address_of_m_CurrentManipPhase_11() { return &___m_CurrentManipPhase_11; }
	inline void set_m_CurrentManipPhase_11(int32_t value)
	{
		___m_CurrentManipPhase_11 = value;
	}

	inline static int32_t get_offset_of_m_TallestMeshHeight_12() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TallestMeshHeight_12)); }
	inline float get_m_TallestMeshHeight_12() const { return ___m_TallestMeshHeight_12; }
	inline float* get_address_of_m_TallestMeshHeight_12() { return &___m_TallestMeshHeight_12; }
	inline void set_m_TallestMeshHeight_12(float value)
	{
		___m_TallestMeshHeight_12 = value;
	}

	inline static int32_t get_offset_of_m_StartTouchPosition_13() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_StartTouchPosition_13)); }
	inline Vector2_t2243707579  get_m_StartTouchPosition_13() const { return ___m_StartTouchPosition_13; }
	inline Vector2_t2243707579 * get_address_of_m_StartTouchPosition_13() { return &___m_StartTouchPosition_13; }
	inline void set_m_StartTouchPosition_13(Vector2_t2243707579  value)
	{
		___m_StartTouchPosition_13 = value;
	}

	inline static int32_t get_offset_of_m_TouchDirection_14() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TouchDirection_14)); }
	inline Vector2_t2243707579  get_m_TouchDirection_14() const { return ___m_TouchDirection_14; }
	inline Vector2_t2243707579 * get_address_of_m_TouchDirection_14() { return &___m_TouchDirection_14; }
	inline void set_m_TouchDirection_14(Vector2_t2243707579  value)
	{
		___m_TouchDirection_14 = value;
	}

	inline static int32_t get_offset_of_m_VerticesManipIndex_15() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_VerticesManipIndex_15)); }
	inline int32_t get_m_VerticesManipIndex_15() const { return ___m_VerticesManipIndex_15; }
	inline int32_t* get_address_of_m_VerticesManipIndex_15() { return &___m_VerticesManipIndex_15; }
	inline void set_m_VerticesManipIndex_15(int32_t value)
	{
		___m_VerticesManipIndex_15 = value;
	}

	inline static int32_t get_offset_of_m_TerrainPoints_16() { return static_cast<int32_t>(offsetof(ARTerrainManager_t2018264653, ___m_TerrainPoints_16)); }
	inline List_1_t2456077777 * get_m_TerrainPoints_16() const { return ___m_TerrainPoints_16; }
	inline List_1_t2456077777 ** get_address_of_m_TerrainPoints_16() { return &___m_TerrainPoints_16; }
	inline void set_m_TerrainPoints_16(List_1_t2456077777 * value)
	{
		___m_TerrainPoints_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_TerrainPoints_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
