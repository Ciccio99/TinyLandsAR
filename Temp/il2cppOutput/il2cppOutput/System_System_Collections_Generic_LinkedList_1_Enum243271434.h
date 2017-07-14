#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Collections.Generic.LinkedList`1<System.Action`3<System.Object,System.Object,System.Object>>
struct LinkedList_1_t1420365412;
// System.Collections.Generic.LinkedListNode`1<System.Action`3<System.Object,System.Object,System.Object>>
struct LinkedListNode_1_t11763096;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LinkedList`1/Enumerator<System.Action`3<System.Object,System.Object,System.Object>>
struct  Enumerator_t243271434 
{
public:
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedList`1/Enumerator::list
	LinkedList_1_t1420365412 * ___list_0;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1/Enumerator::current
	LinkedListNode_1_t11763096 * ___current_1;
	// System.Int32 System.Collections.Generic.LinkedList`1/Enumerator::index
	int32_t ___index_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1/Enumerator::version
	uint32_t ___version_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t243271434, ___list_0)); }
	inline LinkedList_1_t1420365412 * get_list_0() const { return ___list_0; }
	inline LinkedList_1_t1420365412 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(LinkedList_1_t1420365412 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Enumerator_t243271434, ___current_1)); }
	inline LinkedListNode_1_t11763096 * get_current_1() const { return ___current_1; }
	inline LinkedListNode_1_t11763096 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(LinkedListNode_1_t11763096 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier(&___current_1, value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t243271434, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Enumerator_t243271434, ___version_3)); }
	inline uint32_t get_version_3() const { return ___version_3; }
	inline uint32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(uint32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
