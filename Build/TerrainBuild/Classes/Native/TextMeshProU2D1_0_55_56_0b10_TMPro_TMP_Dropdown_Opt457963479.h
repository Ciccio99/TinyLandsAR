#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_t3898801349;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Dropdown/OptionDataList
struct  OptionDataList_t457963479  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> TMPro.TMP_Dropdown/OptionDataList::m_Options
	List_1_t3898801349 * ___m_Options_0;

public:
	inline static int32_t get_offset_of_m_Options_0() { return static_cast<int32_t>(offsetof(OptionDataList_t457963479, ___m_Options_0)); }
	inline List_1_t3898801349 * get_m_Options_0() const { return ___m_Options_0; }
	inline List_1_t3898801349 ** get_address_of_m_Options_0() { return &___m_Options_0; }
	inline void set_m_Options_0(List_1_t3898801349 * value)
	{
		___m_Options_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Options_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
