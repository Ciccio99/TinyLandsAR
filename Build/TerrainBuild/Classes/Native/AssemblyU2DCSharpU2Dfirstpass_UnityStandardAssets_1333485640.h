#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface[]
struct ControlSurfaceU5BU5D_t753477651;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t406219171;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator
struct  AeroplaneControlSurfaceAnimator_t1333485640  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator::m_Smoothing
	float ___m_Smoothing_2;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator/ControlSurface[] UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator::m_ControlSurfaces
	ControlSurfaceU5BU5D_t753477651* ___m_ControlSurfaces_3;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplaneControlSurfaceAnimator::m_Plane
	AeroplaneController_t406219171 * ___m_Plane_4;

public:
	inline static int32_t get_offset_of_m_Smoothing_2() { return static_cast<int32_t>(offsetof(AeroplaneControlSurfaceAnimator_t1333485640, ___m_Smoothing_2)); }
	inline float get_m_Smoothing_2() const { return ___m_Smoothing_2; }
	inline float* get_address_of_m_Smoothing_2() { return &___m_Smoothing_2; }
	inline void set_m_Smoothing_2(float value)
	{
		___m_Smoothing_2 = value;
	}

	inline static int32_t get_offset_of_m_ControlSurfaces_3() { return static_cast<int32_t>(offsetof(AeroplaneControlSurfaceAnimator_t1333485640, ___m_ControlSurfaces_3)); }
	inline ControlSurfaceU5BU5D_t753477651* get_m_ControlSurfaces_3() const { return ___m_ControlSurfaces_3; }
	inline ControlSurfaceU5BU5D_t753477651** get_address_of_m_ControlSurfaces_3() { return &___m_ControlSurfaces_3; }
	inline void set_m_ControlSurfaces_3(ControlSurfaceU5BU5D_t753477651* value)
	{
		___m_ControlSurfaces_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_ControlSurfaces_3, value);
	}

	inline static int32_t get_offset_of_m_Plane_4() { return static_cast<int32_t>(offsetof(AeroplaneControlSurfaceAnimator_t1333485640, ___m_Plane_4)); }
	inline AeroplaneController_t406219171 * get_m_Plane_4() const { return ___m_Plane_4; }
	inline AeroplaneController_t406219171 ** get_address_of_m_Plane_4() { return &___m_Plane_4; }
	inline void set_m_Plane_4(AeroplaneController_t406219171 * value)
	{
		___m_Plane_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Plane_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
