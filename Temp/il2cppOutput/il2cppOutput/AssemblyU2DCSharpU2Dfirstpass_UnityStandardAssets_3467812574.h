#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3911078641.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Cameras.PivotBasedCameraRig
struct  PivotBasedCameraRig_t3467812574  : public AbstractTargetFollower_t3911078641
{
public:
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Cam
	Transform_t3275118058 * ___m_Cam_6;
	// UnityEngine.Transform UnityStandardAssets.Cameras.PivotBasedCameraRig::m_Pivot
	Transform_t3275118058 * ___m_Pivot_7;
	// UnityEngine.Vector3 UnityStandardAssets.Cameras.PivotBasedCameraRig::m_LastTargetPosition
	Vector3_t2243707580  ___m_LastTargetPosition_8;

public:
	inline static int32_t get_offset_of_m_Cam_6() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3467812574, ___m_Cam_6)); }
	inline Transform_t3275118058 * get_m_Cam_6() const { return ___m_Cam_6; }
	inline Transform_t3275118058 ** get_address_of_m_Cam_6() { return &___m_Cam_6; }
	inline void set_m_Cam_6(Transform_t3275118058 * value)
	{
		___m_Cam_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cam_6, value);
	}

	inline static int32_t get_offset_of_m_Pivot_7() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3467812574, ___m_Pivot_7)); }
	inline Transform_t3275118058 * get_m_Pivot_7() const { return ___m_Pivot_7; }
	inline Transform_t3275118058 ** get_address_of_m_Pivot_7() { return &___m_Pivot_7; }
	inline void set_m_Pivot_7(Transform_t3275118058 * value)
	{
		___m_Pivot_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Pivot_7, value);
	}

	inline static int32_t get_offset_of_m_LastTargetPosition_8() { return static_cast<int32_t>(offsetof(PivotBasedCameraRig_t3467812574, ___m_LastTargetPosition_8)); }
	inline Vector3_t2243707580  get_m_LastTargetPosition_8() const { return ___m_LastTargetPosition_8; }
	inline Vector3_t2243707580 * get_address_of_m_LastTargetPosition_8() { return &___m_LastTargetPosition_8; }
	inline void set_m_LastTargetPosition_8(Vector3_t2243707580  value)
	{
		___m_LastTargetPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
