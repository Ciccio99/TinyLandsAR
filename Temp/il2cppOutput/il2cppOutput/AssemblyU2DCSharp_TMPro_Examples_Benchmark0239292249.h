#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TMPro.Examples.TextMeshProFloatingText
struct TextMeshProFloatingText_t6181308;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.Benchmark02
struct  Benchmark02_t39292249  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 TMPro.Examples.Benchmark02::SpawnType
	int32_t ___SpawnType_2;
	// System.Int32 TMPro.Examples.Benchmark02::NumberOfNPC
	int32_t ___NumberOfNPC_3;
	// TMPro.Examples.TextMeshProFloatingText TMPro.Examples.Benchmark02::floatingText_Script
	TextMeshProFloatingText_t6181308 * ___floatingText_Script_4;

public:
	inline static int32_t get_offset_of_SpawnType_2() { return static_cast<int32_t>(offsetof(Benchmark02_t39292249, ___SpawnType_2)); }
	inline int32_t get_SpawnType_2() const { return ___SpawnType_2; }
	inline int32_t* get_address_of_SpawnType_2() { return &___SpawnType_2; }
	inline void set_SpawnType_2(int32_t value)
	{
		___SpawnType_2 = value;
	}

	inline static int32_t get_offset_of_NumberOfNPC_3() { return static_cast<int32_t>(offsetof(Benchmark02_t39292249, ___NumberOfNPC_3)); }
	inline int32_t get_NumberOfNPC_3() const { return ___NumberOfNPC_3; }
	inline int32_t* get_address_of_NumberOfNPC_3() { return &___NumberOfNPC_3; }
	inline void set_NumberOfNPC_3(int32_t value)
	{
		___NumberOfNPC_3 = value;
	}

	inline static int32_t get_offset_of_floatingText_Script_4() { return static_cast<int32_t>(offsetof(Benchmark02_t39292249, ___floatingText_Script_4)); }
	inline TextMeshProFloatingText_t6181308 * get_floatingText_Script_4() const { return ___floatingText_Script_4; }
	inline TextMeshProFloatingText_t6181308 ** get_address_of_floatingText_Script_4() { return &___floatingText_Script_4; }
	inline void set_floatingText_Script_4(TextMeshProFloatingText_t6181308 * value)
	{
		___floatingText_Script_4 = value;
		Il2CppCodeGenWriteBarrier(&___floatingText_Script_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
