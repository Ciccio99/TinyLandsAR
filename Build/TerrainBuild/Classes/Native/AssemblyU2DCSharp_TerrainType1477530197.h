#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TerrainType
struct  TerrainType_t1477530197 
{
public:
	// System.String TerrainType::name
	String_t* ___name_0;
	// System.Single TerrainType::height
	float ___height_1;
	// UnityEngine.Color TerrainType::color
	Color_t2020392075  ___color_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TerrainType_t1477530197, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(TerrainType_t1477530197, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(TerrainType_t1477530197, ___color_2)); }
	inline Color_t2020392075  get_color_2() const { return ___color_2; }
	inline Color_t2020392075 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t2020392075  value)
	{
		___color_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TerrainType
struct TerrainType_t1477530197_marshaled_pinvoke
{
	char* ___name_0;
	float ___height_1;
	Color_t2020392075  ___color_2;
};
// Native definition for COM marshalling of TerrainType
struct TerrainType_t1477530197_marshaled_com
{
	Il2CppChar* ___name_0;
	float ___height_1;
	Color_t2020392075  ___color_2;
};
