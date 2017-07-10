#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_Compute_Distanc3434557887.h"

// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Compute_DT_EventArgs
struct  Compute_DT_EventArgs_t4231491594  : public Il2CppObject
{
public:
	// TMPro.Compute_DistanceTransform_EventTypes TMPro.Compute_DT_EventArgs::EventType
	int32_t ___EventType_0;
	// System.Single TMPro.Compute_DT_EventArgs::ProgressPercentage
	float ___ProgressPercentage_1;
	// UnityEngine.Color[] TMPro.Compute_DT_EventArgs::Colors
	ColorU5BU5D_t672350442* ___Colors_2;

public:
	inline static int32_t get_offset_of_EventType_0() { return static_cast<int32_t>(offsetof(Compute_DT_EventArgs_t4231491594, ___EventType_0)); }
	inline int32_t get_EventType_0() const { return ___EventType_0; }
	inline int32_t* get_address_of_EventType_0() { return &___EventType_0; }
	inline void set_EventType_0(int32_t value)
	{
		___EventType_0 = value;
	}

	inline static int32_t get_offset_of_ProgressPercentage_1() { return static_cast<int32_t>(offsetof(Compute_DT_EventArgs_t4231491594, ___ProgressPercentage_1)); }
	inline float get_ProgressPercentage_1() const { return ___ProgressPercentage_1; }
	inline float* get_address_of_ProgressPercentage_1() { return &___ProgressPercentage_1; }
	inline void set_ProgressPercentage_1(float value)
	{
		___ProgressPercentage_1 = value;
	}

	inline static int32_t get_offset_of_Colors_2() { return static_cast<int32_t>(offsetof(Compute_DT_EventArgs_t4231491594, ___Colors_2)); }
	inline ColorU5BU5D_t672350442* get_Colors_2() const { return ___Colors_2; }
	inline ColorU5BU5D_t672350442** get_address_of_Colors_2() { return &___Colors_2; }
	inline void set_Colors_2(ColorU5BU5D_t672350442* value)
	{
		___Colors_2 = value;
		Il2CppCodeGenWriteBarrier(&___Colors_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
