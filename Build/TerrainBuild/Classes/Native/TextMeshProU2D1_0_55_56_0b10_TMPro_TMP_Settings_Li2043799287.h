#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Char>
struct Dictionary_2_t2462306973;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Settings/LineBreakingTable
struct  LineBreakingTable_t2043799287  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Char> TMPro.TMP_Settings/LineBreakingTable::leadingCharacters
	Dictionary_2_t2462306973 * ___leadingCharacters_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Char> TMPro.TMP_Settings/LineBreakingTable::followingCharacters
	Dictionary_2_t2462306973 * ___followingCharacters_1;

public:
	inline static int32_t get_offset_of_leadingCharacters_0() { return static_cast<int32_t>(offsetof(LineBreakingTable_t2043799287, ___leadingCharacters_0)); }
	inline Dictionary_2_t2462306973 * get_leadingCharacters_0() const { return ___leadingCharacters_0; }
	inline Dictionary_2_t2462306973 ** get_address_of_leadingCharacters_0() { return &___leadingCharacters_0; }
	inline void set_leadingCharacters_0(Dictionary_2_t2462306973 * value)
	{
		___leadingCharacters_0 = value;
		Il2CppCodeGenWriteBarrier(&___leadingCharacters_0, value);
	}

	inline static int32_t get_offset_of_followingCharacters_1() { return static_cast<int32_t>(offsetof(LineBreakingTable_t2043799287, ___followingCharacters_1)); }
	inline Dictionary_2_t2462306973 * get_followingCharacters_1() const { return ___followingCharacters_1; }
	inline Dictionary_2_t2462306973 ** get_address_of_followingCharacters_1() { return &___followingCharacters_1; }
	inline void set_followingCharacters_1(Dictionary_2_t2462306973 * value)
	{
		___followingCharacters_1 = value;
		Il2CppCodeGenWriteBarrier(&___followingCharacters_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
