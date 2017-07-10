#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_ARPlaneAnchor1439520888.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TerrainAnchorObject
struct  TerrainAnchorObject_t1214709381 
{
public:
	union
	{
		struct
		{
			// UnityEngine.GameObject TerrainAnchorObject::<terrainObject>k__BackingField
			GameObject_t1756533147 * ___U3CterrainObjectU3Ek__BackingField_0;
			// UnityEngine.GameObject TerrainAnchorObject::<terrainGOChild>k__BackingField
			GameObject_t1756533147 * ___U3CterrainGOChildU3Ek__BackingField_1;
			// UnityEngine.XR.iOS.ARPlaneAnchor TerrainAnchorObject::<anchor>k__BackingField
			ARPlaneAnchor_t1439520888  ___U3CanchorU3Ek__BackingField_2;
		};
		uint8_t TerrainAnchorObject_t1214709381__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CterrainObjectU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TerrainAnchorObject_t1214709381, ___U3CterrainObjectU3Ek__BackingField_0)); }
	inline GameObject_t1756533147 * get_U3CterrainObjectU3Ek__BackingField_0() const { return ___U3CterrainObjectU3Ek__BackingField_0; }
	inline GameObject_t1756533147 ** get_address_of_U3CterrainObjectU3Ek__BackingField_0() { return &___U3CterrainObjectU3Ek__BackingField_0; }
	inline void set_U3CterrainObjectU3Ek__BackingField_0(GameObject_t1756533147 * value)
	{
		___U3CterrainObjectU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CterrainObjectU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CterrainGOChildU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TerrainAnchorObject_t1214709381, ___U3CterrainGOChildU3Ek__BackingField_1)); }
	inline GameObject_t1756533147 * get_U3CterrainGOChildU3Ek__BackingField_1() const { return ___U3CterrainGOChildU3Ek__BackingField_1; }
	inline GameObject_t1756533147 ** get_address_of_U3CterrainGOChildU3Ek__BackingField_1() { return &___U3CterrainGOChildU3Ek__BackingField_1; }
	inline void set_U3CterrainGOChildU3Ek__BackingField_1(GameObject_t1756533147 * value)
	{
		___U3CterrainGOChildU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CterrainGOChildU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CanchorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TerrainAnchorObject_t1214709381, ___U3CanchorU3Ek__BackingField_2)); }
	inline ARPlaneAnchor_t1439520888  get_U3CanchorU3Ek__BackingField_2() const { return ___U3CanchorU3Ek__BackingField_2; }
	inline ARPlaneAnchor_t1439520888 * get_address_of_U3CanchorU3Ek__BackingField_2() { return &___U3CanchorU3Ek__BackingField_2; }
	inline void set_U3CanchorU3Ek__BackingField_2(ARPlaneAnchor_t1439520888  value)
	{
		___U3CanchorU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TerrainAnchorObject
struct TerrainAnchorObject_t1214709381_marshaled_pinvoke
{
	union
	{
		struct
		{
			GameObject_t1756533147 * ___U3CterrainObjectU3Ek__BackingField_0;
			GameObject_t1756533147 * ___U3CterrainGOChildU3Ek__BackingField_1;
			ARPlaneAnchor_t1439520888_marshaled_pinvoke ___U3CanchorU3Ek__BackingField_2;
		};
		uint8_t TerrainAnchorObject_t1214709381__padding[1];
	};
};
// Native definition for COM marshalling of TerrainAnchorObject
struct TerrainAnchorObject_t1214709381_marshaled_com
{
	union
	{
		struct
		{
			GameObject_t1756533147 * ___U3CterrainObjectU3Ek__BackingField_0;
			GameObject_t1756533147 * ___U3CterrainGOChildU3Ek__BackingField_1;
			ARPlaneAnchor_t1439520888_marshaled_com ___U3CanchorU3Ek__BackingField_2;
		};
		uint8_t TerrainAnchorObject_t1214709381__padding[1];
	};
};
