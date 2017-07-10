#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Asset
struct  TMP_Asset_t1084708044  : public ScriptableObject_t1975622470
{
public:
	// System.Int32 TMPro.TMP_Asset::hashCode
	int32_t ___hashCode_2;
	// UnityEngine.Material TMPro.TMP_Asset::material
	Material_t193706927 * ___material_3;
	// System.Int32 TMPro.TMP_Asset::materialHashCode
	int32_t ___materialHashCode_4;

public:
	inline static int32_t get_offset_of_hashCode_2() { return static_cast<int32_t>(offsetof(TMP_Asset_t1084708044, ___hashCode_2)); }
	inline int32_t get_hashCode_2() const { return ___hashCode_2; }
	inline int32_t* get_address_of_hashCode_2() { return &___hashCode_2; }
	inline void set_hashCode_2(int32_t value)
	{
		___hashCode_2 = value;
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(TMP_Asset_t1084708044, ___material_3)); }
	inline Material_t193706927 * get_material_3() const { return ___material_3; }
	inline Material_t193706927 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t193706927 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier(&___material_3, value);
	}

	inline static int32_t get_offset_of_materialHashCode_4() { return static_cast<int32_t>(offsetof(TMP_Asset_t1084708044, ___materialHashCode_4)); }
	inline int32_t get_materialHashCode_4() const { return ___materialHashCode_4; }
	inline int32_t* get_address_of_materialHashCode_4() { return &___materialHashCode_4; }
	inline void set_materialHashCode_4(int32_t value)
	{
		___materialHashCode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
