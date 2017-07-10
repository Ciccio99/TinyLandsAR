#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.LinkedList`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>
struct LinkedList_1_t123835085;
// System.Collections.Generic.Dictionary`2<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct Dictionary_2_t2689776612;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs>
struct  FastAction_2_t2006617618  : public Il2CppObject
{
public:
	// System.Collections.Generic.LinkedList`1<System.Action`2<A,B>> TMPro.FastAction`2::delegates
	LinkedList_1_t123835085 * ___delegates_0;
	// System.Collections.Generic.Dictionary`2<System.Action`2<A,B>,System.Collections.Generic.LinkedListNode`1<System.Action`2<A,B>>> TMPro.FastAction`2::lookup
	Dictionary_2_t2689776612 * ___lookup_1;

public:
	inline static int32_t get_offset_of_delegates_0() { return static_cast<int32_t>(offsetof(FastAction_2_t2006617618, ___delegates_0)); }
	inline LinkedList_1_t123835085 * get_delegates_0() const { return ___delegates_0; }
	inline LinkedList_1_t123835085 ** get_address_of_delegates_0() { return &___delegates_0; }
	inline void set_delegates_0(LinkedList_1_t123835085 * value)
	{
		___delegates_0 = value;
		Il2CppCodeGenWriteBarrier(&___delegates_0, value);
	}

	inline static int32_t get_offset_of_lookup_1() { return static_cast<int32_t>(offsetof(FastAction_2_t2006617618, ___lookup_1)); }
	inline Dictionary_2_t2689776612 * get_lookup_1() const { return ___lookup_1; }
	inline Dictionary_2_t2689776612 ** get_address_of_lookup_1() { return &___lookup_1; }
	inline void set_lookup_1(Dictionary_2_t2689776612 * value)
	{
		___lookup_1 = value;
		Il2CppCodeGenWriteBarrier(&___lookup_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
