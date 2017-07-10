#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>
struct LinkedListNode_1_t2523480013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct  KeyValuePair_2_t379239674 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Action_1_t3627374100 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	LinkedListNode_1_t2523480013 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t379239674, ___key_0)); }
	inline Action_1_t3627374100 * get_key_0() const { return ___key_0; }
	inline Action_1_t3627374100 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Action_1_t3627374100 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t379239674, ___value_1)); }
	inline LinkedListNode_1_t2523480013 * get_value_1() const { return ___value_1; }
	inline LinkedListNode_1_t2523480013 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(LinkedListNode_1_t2523480013 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
