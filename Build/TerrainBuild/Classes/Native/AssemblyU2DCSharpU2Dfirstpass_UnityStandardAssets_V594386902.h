﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2129977627.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface
struct  ControlSurface_t594386902  : public Il2CppObject
{
public:
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface::transform
	Transform_t3275118058 * ___transform_0;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface::amount
	float ___amount_1;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface/Type UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface::type
	int32_t ___type_2;
	// UnityEngine.Quaternion UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface::originalLocalRotation
	Quaternion_t4030073918  ___originalLocalRotation_3;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(ControlSurface_t594386902, ___transform_0)); }
	inline Transform_t3275118058 * get_transform_0() const { return ___transform_0; }
	inline Transform_t3275118058 ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_t3275118058 * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier(&___transform_0, value);
	}

	inline static int32_t get_offset_of_amount_1() { return static_cast<int32_t>(offsetof(ControlSurface_t594386902, ___amount_1)); }
	inline float get_amount_1() const { return ___amount_1; }
	inline float* get_address_of_amount_1() { return &___amount_1; }
	inline void set_amount_1(float value)
	{
		___amount_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(ControlSurface_t594386902, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_originalLocalRotation_3() { return static_cast<int32_t>(offsetof(ControlSurface_t594386902, ___originalLocalRotation_3)); }
	inline Quaternion_t4030073918  get_originalLocalRotation_3() const { return ___originalLocalRotation_3; }
	inline Quaternion_t4030073918 * get_address_of_originalLocalRotation_3() { return &___originalLocalRotation_3; }
	inline void set_originalLocalRotation_3(Quaternion_t4030073918  value)
	{
		___originalLocalRotation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
