#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TMPro.KerningPair>
struct List_1_t946875054;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.KerningTable
struct  KerningTable_t2970824110  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TMPro.KerningPair> TMPro.KerningTable::kerningPairs
	List_1_t946875054 * ___kerningPairs_0;

public:
	inline static int32_t get_offset_of_kerningPairs_0() { return static_cast<int32_t>(offsetof(KerningTable_t2970824110, ___kerningPairs_0)); }
	inline List_1_t946875054 * get_kerningPairs_0() const { return ___kerningPairs_0; }
	inline List_1_t946875054 ** get_address_of_kerningPairs_0() { return &___kerningPairs_0; }
	inline void set_kerningPairs_0(List_1_t946875054 * value)
	{
		___kerningPairs_0 = value;
		Il2CppCodeGenWriteBarrier(&___kerningPairs_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
