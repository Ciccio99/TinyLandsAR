#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TerrainPoint
struct  TerrainPoint_t3086956645 
{
public:
	union
	{
		struct
		{
			// System.Int32 TerrainPoint::<index>k__BackingField
			int32_t ___U3CindexU3Ek__BackingField_0;
			// UnityEngine.Vector3 TerrainPoint::<point>k__BackingField
			Vector3_t2243707580  ___U3CpointU3Ek__BackingField_1;
			// System.Single TerrainPoint::<distDenom>k__BackingField
			float ___U3CdistDenomU3Ek__BackingField_2;
		};
		uint8_t TerrainPoint_t3086956645__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CindexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TerrainPoint_t3086956645, ___U3CindexU3Ek__BackingField_0)); }
	inline int32_t get_U3CindexU3Ek__BackingField_0() const { return ___U3CindexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CindexU3Ek__BackingField_0() { return &___U3CindexU3Ek__BackingField_0; }
	inline void set_U3CindexU3Ek__BackingField_0(int32_t value)
	{
		___U3CindexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TerrainPoint_t3086956645, ___U3CpointU3Ek__BackingField_1)); }
	inline Vector3_t2243707580  get_U3CpointU3Ek__BackingField_1() const { return ___U3CpointU3Ek__BackingField_1; }
	inline Vector3_t2243707580 * get_address_of_U3CpointU3Ek__BackingField_1() { return &___U3CpointU3Ek__BackingField_1; }
	inline void set_U3CpointU3Ek__BackingField_1(Vector3_t2243707580  value)
	{
		___U3CpointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdistDenomU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TerrainPoint_t3086956645, ___U3CdistDenomU3Ek__BackingField_2)); }
	inline float get_U3CdistDenomU3Ek__BackingField_2() const { return ___U3CdistDenomU3Ek__BackingField_2; }
	inline float* get_address_of_U3CdistDenomU3Ek__BackingField_2() { return &___U3CdistDenomU3Ek__BackingField_2; }
	inline void set_U3CdistDenomU3Ek__BackingField_2(float value)
	{
		___U3CdistDenomU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
