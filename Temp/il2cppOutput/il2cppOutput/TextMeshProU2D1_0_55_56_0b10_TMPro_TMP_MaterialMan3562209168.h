#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/MaskingMaterial>
struct List_1_t4254159116;
// System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_MaterialManager/FallbackMaterial>
struct Dictionary_2_t4275507642;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int64>
struct Dictionary_2_t4211870968;
// System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/FallbackMaterial>
struct List_1_t2655110372;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_MaterialManager
struct  TMP_MaterialManager_t3562209168  : public Il2CppObject
{
public:

public:
};

struct TMP_MaterialManager_t3562209168_StaticFields
{
public:
	// System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/MaskingMaterial> TMPro.TMP_MaterialManager::m_materialList
	List_1_t4254159116 * ___m_materialList_0;
	// System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_MaterialManager/FallbackMaterial> TMPro.TMP_MaterialManager::m_fallbackMaterials
	Dictionary_2_t4275507642 * ___m_fallbackMaterials_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int64> TMPro.TMP_MaterialManager::m_fallbackMaterialLookup
	Dictionary_2_t4211870968 * ___m_fallbackMaterialLookup_2;
	// System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/FallbackMaterial> TMPro.TMP_MaterialManager::m_fallbackCleanupList
	List_1_t2655110372 * ___m_fallbackCleanupList_3;
	// System.Boolean TMPro.TMP_MaterialManager::isFallbackListDirty
	bool ___isFallbackListDirty_4;

public:
	inline static int32_t get_offset_of_m_materialList_0() { return static_cast<int32_t>(offsetof(TMP_MaterialManager_t3562209168_StaticFields, ___m_materialList_0)); }
	inline List_1_t4254159116 * get_m_materialList_0() const { return ___m_materialList_0; }
	inline List_1_t4254159116 ** get_address_of_m_materialList_0() { return &___m_materialList_0; }
	inline void set_m_materialList_0(List_1_t4254159116 * value)
	{
		___m_materialList_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_materialList_0, value);
	}

	inline static int32_t get_offset_of_m_fallbackMaterials_1() { return static_cast<int32_t>(offsetof(TMP_MaterialManager_t3562209168_StaticFields, ___m_fallbackMaterials_1)); }
	inline Dictionary_2_t4275507642 * get_m_fallbackMaterials_1() const { return ___m_fallbackMaterials_1; }
	inline Dictionary_2_t4275507642 ** get_address_of_m_fallbackMaterials_1() { return &___m_fallbackMaterials_1; }
	inline void set_m_fallbackMaterials_1(Dictionary_2_t4275507642 * value)
	{
		___m_fallbackMaterials_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_fallbackMaterials_1, value);
	}

	inline static int32_t get_offset_of_m_fallbackMaterialLookup_2() { return static_cast<int32_t>(offsetof(TMP_MaterialManager_t3562209168_StaticFields, ___m_fallbackMaterialLookup_2)); }
	inline Dictionary_2_t4211870968 * get_m_fallbackMaterialLookup_2() const { return ___m_fallbackMaterialLookup_2; }
	inline Dictionary_2_t4211870968 ** get_address_of_m_fallbackMaterialLookup_2() { return &___m_fallbackMaterialLookup_2; }
	inline void set_m_fallbackMaterialLookup_2(Dictionary_2_t4211870968 * value)
	{
		___m_fallbackMaterialLookup_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_fallbackMaterialLookup_2, value);
	}

	inline static int32_t get_offset_of_m_fallbackCleanupList_3() { return static_cast<int32_t>(offsetof(TMP_MaterialManager_t3562209168_StaticFields, ___m_fallbackCleanupList_3)); }
	inline List_1_t2655110372 * get_m_fallbackCleanupList_3() const { return ___m_fallbackCleanupList_3; }
	inline List_1_t2655110372 ** get_address_of_m_fallbackCleanupList_3() { return &___m_fallbackCleanupList_3; }
	inline void set_m_fallbackCleanupList_3(List_1_t2655110372 * value)
	{
		___m_fallbackCleanupList_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_fallbackCleanupList_3, value);
	}

	inline static int32_t get_offset_of_isFallbackListDirty_4() { return static_cast<int32_t>(offsetof(TMP_MaterialManager_t3562209168_StaticFields, ___isFallbackListDirty_4)); }
	inline bool get_isFallbackListDirty_4() const { return ___isFallbackListDirty_4; }
	inline bool* get_address_of_isFallbackListDirty_4() { return &___isFallbackListDirty_4; }
	inline void set_isFallbackListDirty_4(bool value)
	{
		___isFallbackListDirty_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
