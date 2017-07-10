#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Extents
struct  Extents_t3018556803 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t2243707579  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t2243707579  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_t3018556803, ___min_0)); }
	inline Vector2_t2243707579  get_min_0() const { return ___min_0; }
	inline Vector2_t2243707579 * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_t2243707579  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_t3018556803, ___max_1)); }
	inline Vector2_t2243707579  get_max_1() const { return ___max_1; }
	inline Vector2_t2243707579 * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_t2243707579  value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
