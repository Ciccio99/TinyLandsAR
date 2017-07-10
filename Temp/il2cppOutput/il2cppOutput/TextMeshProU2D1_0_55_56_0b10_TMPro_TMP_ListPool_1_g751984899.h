#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// TMPro.TMP_ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct TMP_ObjectPool_1_t1746559670;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_ListPool`1<System.Object>
struct  TMP_ListPool_1_t751984899  : public Il2CppObject
{
public:

public:
};

struct TMP_ListPool_1_t751984899_StaticFields
{
public:
	// TMPro.TMP_ObjectPool`1<System.Collections.Generic.List`1<T>> TMPro.TMP_ListPool`1::s_ListPool
	TMP_ObjectPool_1_t1746559670 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(TMP_ListPool_1_t751984899_StaticFields, ___s_ListPool_0)); }
	inline TMP_ObjectPool_1_t1746559670 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline TMP_ObjectPool_1_t1746559670 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(TMP_ObjectPool_1_t1746559670 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_ListPool_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
