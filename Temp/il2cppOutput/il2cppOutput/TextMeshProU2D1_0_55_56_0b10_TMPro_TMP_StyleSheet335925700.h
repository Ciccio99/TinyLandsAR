#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t335925700;
// System.Collections.Generic.List`1<TMPro.TMP_Style>
struct List_1_t3733825879;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Style>
struct Dictionary_2_t3372530382;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_StyleSheet
struct  TMP_StyleSheet_t335925700  : public ScriptableObject_t1975622470
{
public:
	// System.Collections.Generic.List`1<TMPro.TMP_Style> TMPro.TMP_StyleSheet::m_StyleList
	List_1_t3733825879 * ___m_StyleList_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Style> TMPro.TMP_StyleSheet::m_StyleDictionary
	Dictionary_2_t3372530382 * ___m_StyleDictionary_4;

public:
	inline static int32_t get_offset_of_m_StyleList_3() { return static_cast<int32_t>(offsetof(TMP_StyleSheet_t335925700, ___m_StyleList_3)); }
	inline List_1_t3733825879 * get_m_StyleList_3() const { return ___m_StyleList_3; }
	inline List_1_t3733825879 ** get_address_of_m_StyleList_3() { return &___m_StyleList_3; }
	inline void set_m_StyleList_3(List_1_t3733825879 * value)
	{
		___m_StyleList_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_StyleList_3, value);
	}

	inline static int32_t get_offset_of_m_StyleDictionary_4() { return static_cast<int32_t>(offsetof(TMP_StyleSheet_t335925700, ___m_StyleDictionary_4)); }
	inline Dictionary_2_t3372530382 * get_m_StyleDictionary_4() const { return ___m_StyleDictionary_4; }
	inline Dictionary_2_t3372530382 ** get_address_of_m_StyleDictionary_4() { return &___m_StyleDictionary_4; }
	inline void set_m_StyleDictionary_4(Dictionary_2_t3372530382 * value)
	{
		___m_StyleDictionary_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_StyleDictionary_4, value);
	}
};

struct TMP_StyleSheet_t335925700_StaticFields
{
public:
	// TMPro.TMP_StyleSheet TMPro.TMP_StyleSheet::s_Instance
	TMP_StyleSheet_t335925700 * ___s_Instance_2;

public:
	inline static int32_t get_offset_of_s_Instance_2() { return static_cast<int32_t>(offsetof(TMP_StyleSheet_t335925700_StaticFields, ___s_Instance_2)); }
	inline TMP_StyleSheet_t335925700 * get_s_Instance_2() const { return ___s_Instance_2; }
	inline TMP_StyleSheet_t335925700 ** get_address_of_s_Instance_2() { return &___s_Instance_2; }
	inline void set_s_Instance_2(TMP_StyleSheet_t335925700 * value)
	{
		___s_Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
