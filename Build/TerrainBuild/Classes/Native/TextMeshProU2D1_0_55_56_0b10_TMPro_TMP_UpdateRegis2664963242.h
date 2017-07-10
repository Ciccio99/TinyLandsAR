#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TMPro.TMP_UpdateRegistry
struct TMP_UpdateRegistry_t2664963242;
// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
struct List_1_t355641911;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_UpdateRegistry
struct  TMP_UpdateRegistry_t2664963242  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement> TMPro.TMP_UpdateRegistry::m_LayoutRebuildQueue
	List_1_t355641911 * ___m_LayoutRebuildQueue_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_UpdateRegistry::m_LayoutQueueLookup
	Dictionary_2_t1079703083 * ___m_LayoutQueueLookup_2;
	// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement> TMPro.TMP_UpdateRegistry::m_GraphicRebuildQueue
	List_1_t355641911 * ___m_GraphicRebuildQueue_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_UpdateRegistry::m_GraphicQueueLookup
	Dictionary_2_t1079703083 * ___m_GraphicQueueLookup_4;

public:
	inline static int32_t get_offset_of_m_LayoutRebuildQueue_1() { return static_cast<int32_t>(offsetof(TMP_UpdateRegistry_t2664963242, ___m_LayoutRebuildQueue_1)); }
	inline List_1_t355641911 * get_m_LayoutRebuildQueue_1() const { return ___m_LayoutRebuildQueue_1; }
	inline List_1_t355641911 ** get_address_of_m_LayoutRebuildQueue_1() { return &___m_LayoutRebuildQueue_1; }
	inline void set_m_LayoutRebuildQueue_1(List_1_t355641911 * value)
	{
		___m_LayoutRebuildQueue_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_LayoutRebuildQueue_1, value);
	}

	inline static int32_t get_offset_of_m_LayoutQueueLookup_2() { return static_cast<int32_t>(offsetof(TMP_UpdateRegistry_t2664963242, ___m_LayoutQueueLookup_2)); }
	inline Dictionary_2_t1079703083 * get_m_LayoutQueueLookup_2() const { return ___m_LayoutQueueLookup_2; }
	inline Dictionary_2_t1079703083 ** get_address_of_m_LayoutQueueLookup_2() { return &___m_LayoutQueueLookup_2; }
	inline void set_m_LayoutQueueLookup_2(Dictionary_2_t1079703083 * value)
	{
		___m_LayoutQueueLookup_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_LayoutQueueLookup_2, value);
	}

	inline static int32_t get_offset_of_m_GraphicRebuildQueue_3() { return static_cast<int32_t>(offsetof(TMP_UpdateRegistry_t2664963242, ___m_GraphicRebuildQueue_3)); }
	inline List_1_t355641911 * get_m_GraphicRebuildQueue_3() const { return ___m_GraphicRebuildQueue_3; }
	inline List_1_t355641911 ** get_address_of_m_GraphicRebuildQueue_3() { return &___m_GraphicRebuildQueue_3; }
	inline void set_m_GraphicRebuildQueue_3(List_1_t355641911 * value)
	{
		___m_GraphicRebuildQueue_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_GraphicRebuildQueue_3, value);
	}

	inline static int32_t get_offset_of_m_GraphicQueueLookup_4() { return static_cast<int32_t>(offsetof(TMP_UpdateRegistry_t2664963242, ___m_GraphicQueueLookup_4)); }
	inline Dictionary_2_t1079703083 * get_m_GraphicQueueLookup_4() const { return ___m_GraphicQueueLookup_4; }
	inline Dictionary_2_t1079703083 ** get_address_of_m_GraphicQueueLookup_4() { return &___m_GraphicQueueLookup_4; }
	inline void set_m_GraphicQueueLookup_4(Dictionary_2_t1079703083 * value)
	{
		___m_GraphicQueueLookup_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_GraphicQueueLookup_4, value);
	}
};

struct TMP_UpdateRegistry_t2664963242_StaticFields
{
public:
	// TMPro.TMP_UpdateRegistry TMPro.TMP_UpdateRegistry::s_Instance
	TMP_UpdateRegistry_t2664963242 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(TMP_UpdateRegistry_t2664963242_StaticFields, ___s_Instance_0)); }
	inline TMP_UpdateRegistry_t2664963242 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline TMP_UpdateRegistry_t2664963242 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(TMP_UpdateRegistry_t2664963242 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
