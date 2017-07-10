#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TMPro.MaterialReferenceManager
struct MaterialReferenceManager_t1374850133;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material>
struct Dictionary_2_t3496499858;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_FontAsset>
struct Dictionary_2_t1538245614;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_SpriteAsset>
struct Dictionary_2_t1649638728;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.MaterialReferenceManager
struct  MaterialReferenceManager_t1374850133  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Material> TMPro.MaterialReferenceManager::m_FontMaterialReferenceLookup
	Dictionary_2_t3496499858 * ___m_FontMaterialReferenceLookup_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_FontAsset> TMPro.MaterialReferenceManager::m_FontAssetReferenceLookup
	Dictionary_2_t1538245614 * ___m_FontAssetReferenceLookup_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_SpriteAsset> TMPro.MaterialReferenceManager::m_SpriteAssetReferenceLookup
	Dictionary_2_t1649638728 * ___m_SpriteAssetReferenceLookup_3;

public:
	inline static int32_t get_offset_of_m_FontMaterialReferenceLookup_1() { return static_cast<int32_t>(offsetof(MaterialReferenceManager_t1374850133, ___m_FontMaterialReferenceLookup_1)); }
	inline Dictionary_2_t3496499858 * get_m_FontMaterialReferenceLookup_1() const { return ___m_FontMaterialReferenceLookup_1; }
	inline Dictionary_2_t3496499858 ** get_address_of_m_FontMaterialReferenceLookup_1() { return &___m_FontMaterialReferenceLookup_1; }
	inline void set_m_FontMaterialReferenceLookup_1(Dictionary_2_t3496499858 * value)
	{
		___m_FontMaterialReferenceLookup_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_FontMaterialReferenceLookup_1, value);
	}

	inline static int32_t get_offset_of_m_FontAssetReferenceLookup_2() { return static_cast<int32_t>(offsetof(MaterialReferenceManager_t1374850133, ___m_FontAssetReferenceLookup_2)); }
	inline Dictionary_2_t1538245614 * get_m_FontAssetReferenceLookup_2() const { return ___m_FontAssetReferenceLookup_2; }
	inline Dictionary_2_t1538245614 ** get_address_of_m_FontAssetReferenceLookup_2() { return &___m_FontAssetReferenceLookup_2; }
	inline void set_m_FontAssetReferenceLookup_2(Dictionary_2_t1538245614 * value)
	{
		___m_FontAssetReferenceLookup_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_FontAssetReferenceLookup_2, value);
	}

	inline static int32_t get_offset_of_m_SpriteAssetReferenceLookup_3() { return static_cast<int32_t>(offsetof(MaterialReferenceManager_t1374850133, ___m_SpriteAssetReferenceLookup_3)); }
	inline Dictionary_2_t1649638728 * get_m_SpriteAssetReferenceLookup_3() const { return ___m_SpriteAssetReferenceLookup_3; }
	inline Dictionary_2_t1649638728 ** get_address_of_m_SpriteAssetReferenceLookup_3() { return &___m_SpriteAssetReferenceLookup_3; }
	inline void set_m_SpriteAssetReferenceLookup_3(Dictionary_2_t1649638728 * value)
	{
		___m_SpriteAssetReferenceLookup_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_SpriteAssetReferenceLookup_3, value);
	}
};

struct MaterialReferenceManager_t1374850133_StaticFields
{
public:
	// TMPro.MaterialReferenceManager TMPro.MaterialReferenceManager::s_Instance
	MaterialReferenceManager_t1374850133 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(MaterialReferenceManager_t1374850133_StaticFields, ___s_Instance_0)); }
	inline MaterialReferenceManager_t1374850133 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline MaterialReferenceManager_t1374850133 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(MaterialReferenceManager_t1374850133 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
