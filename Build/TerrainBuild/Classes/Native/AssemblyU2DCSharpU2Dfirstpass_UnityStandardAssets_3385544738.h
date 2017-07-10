#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t406219171;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl2Axis
struct  AeroplaneUserControl2Axis_t3385544738  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl2Axis::maxRollAngle
	float ___maxRollAngle_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl2Axis::maxPitchAngle
	float ___maxPitchAngle_3;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl2Axis::m_Aeroplane
	AeroplaneController_t406219171 * ___m_Aeroplane_4;

public:
	inline static int32_t get_offset_of_maxRollAngle_2() { return static_cast<int32_t>(offsetof(AeroplaneUserControl2Axis_t3385544738, ___maxRollAngle_2)); }
	inline float get_maxRollAngle_2() const { return ___maxRollAngle_2; }
	inline float* get_address_of_maxRollAngle_2() { return &___maxRollAngle_2; }
	inline void set_maxRollAngle_2(float value)
	{
		___maxRollAngle_2 = value;
	}

	inline static int32_t get_offset_of_maxPitchAngle_3() { return static_cast<int32_t>(offsetof(AeroplaneUserControl2Axis_t3385544738, ___maxPitchAngle_3)); }
	inline float get_maxPitchAngle_3() const { return ___maxPitchAngle_3; }
	inline float* get_address_of_maxPitchAngle_3() { return &___maxPitchAngle_3; }
	inline void set_maxPitchAngle_3(float value)
	{
		___maxPitchAngle_3 = value;
	}

	inline static int32_t get_offset_of_m_Aeroplane_4() { return static_cast<int32_t>(offsetof(AeroplaneUserControl2Axis_t3385544738, ___m_Aeroplane_4)); }
	inline AeroplaneController_t406219171 * get_m_Aeroplane_4() const { return ___m_Aeroplane_4; }
	inline AeroplaneController_t406219171 ** get_address_of_m_Aeroplane_4() { return &___m_Aeroplane_4; }
	inline void set_m_Aeroplane_4(AeroplaneController_t406219171 * value)
	{
		___m_Aeroplane_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Aeroplane_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
