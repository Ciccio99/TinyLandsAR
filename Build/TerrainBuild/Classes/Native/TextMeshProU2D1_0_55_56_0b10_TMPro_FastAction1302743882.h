#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.LinkedList`1<System.Action>
struct LinkedList_1_t3531179981;
// System.Collections.Generic.Dictionary`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct Dictionary_2_t2482194404;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FastAction
struct  FastAction_t1302743882  : public Il2CppObject
{
public:
	// System.Collections.Generic.LinkedList`1<System.Action> TMPro.FastAction::delegates
	LinkedList_1_t3531179981 * ___delegates_0;
	// System.Collections.Generic.Dictionary`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>> TMPro.FastAction::lookup
	Dictionary_2_t2482194404 * ___lookup_1;

public:
	inline static int32_t get_offset_of_delegates_0() { return static_cast<int32_t>(offsetof(FastAction_t1302743882, ___delegates_0)); }
	inline LinkedList_1_t3531179981 * get_delegates_0() const { return ___delegates_0; }
	inline LinkedList_1_t3531179981 ** get_address_of_delegates_0() { return &___delegates_0; }
	inline void set_delegates_0(LinkedList_1_t3531179981 * value)
	{
		___delegates_0 = value;
		Il2CppCodeGenWriteBarrier(&___delegates_0, value);
	}

	inline static int32_t get_offset_of_lookup_1() { return static_cast<int32_t>(offsetof(FastAction_t1302743882, ___lookup_1)); }
	inline Dictionary_2_t2482194404 * get_lookup_1() const { return ___lookup_1; }
	inline Dictionary_2_t2482194404 ** get_address_of_lookup_1() { return &___lookup_1; }
	inline void set_lookup_1(Dictionary_2_t2482194404 * value)
	{
		___lookup_1 = value;
		Il2CppCodeGenWriteBarrier(&___lookup_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
