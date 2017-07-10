#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Font
struct Font_t4239498691;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.Benchmark03
struct  Benchmark03_t1605376190  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 TMPro.Examples.Benchmark03::SpawnType
	int32_t ___SpawnType_2;
	// System.Int32 TMPro.Examples.Benchmark03::NumberOfNPC
	int32_t ___NumberOfNPC_3;
	// UnityEngine.Font TMPro.Examples.Benchmark03::TheFont
	Font_t4239498691 * ___TheFont_4;

public:
	inline static int32_t get_offset_of_SpawnType_2() { return static_cast<int32_t>(offsetof(Benchmark03_t1605376190, ___SpawnType_2)); }
	inline int32_t get_SpawnType_2() const { return ___SpawnType_2; }
	inline int32_t* get_address_of_SpawnType_2() { return &___SpawnType_2; }
	inline void set_SpawnType_2(int32_t value)
	{
		___SpawnType_2 = value;
	}

	inline static int32_t get_offset_of_NumberOfNPC_3() { return static_cast<int32_t>(offsetof(Benchmark03_t1605376190, ___NumberOfNPC_3)); }
	inline int32_t get_NumberOfNPC_3() const { return ___NumberOfNPC_3; }
	inline int32_t* get_address_of_NumberOfNPC_3() { return &___NumberOfNPC_3; }
	inline void set_NumberOfNPC_3(int32_t value)
	{
		___NumberOfNPC_3 = value;
	}

	inline static int32_t get_offset_of_TheFont_4() { return static_cast<int32_t>(offsetof(Benchmark03_t1605376190, ___TheFont_4)); }
	inline Font_t4239498691 * get_TheFont_4() const { return ___TheFont_4; }
	inline Font_t4239498691 ** get_address_of_TheFont_4() { return &___TheFont_4; }
	inline void set_TheFont_4(Font_t4239498691 * value)
	{
		___TheFont_4 = value;
		Il2CppCodeGenWriteBarrier(&___TheFont_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
