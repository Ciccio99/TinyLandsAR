#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_MaterialManager/FallbackMaterial
struct  FallbackMaterial_t3285989240  : public Il2CppObject
{
public:
	// System.Int32 TMPro.TMP_MaterialManager/FallbackMaterial::baseID
	int32_t ___baseID_0;
	// UnityEngine.Material TMPro.TMP_MaterialManager/FallbackMaterial::baseMaterial
	Material_t193706927 * ___baseMaterial_1;
	// System.Int64 TMPro.TMP_MaterialManager/FallbackMaterial::fallbackID
	int64_t ___fallbackID_2;
	// UnityEngine.Material TMPro.TMP_MaterialManager/FallbackMaterial::fallbackMaterial
	Material_t193706927 * ___fallbackMaterial_3;
	// System.Int32 TMPro.TMP_MaterialManager/FallbackMaterial::count
	int32_t ___count_4;

public:
	inline static int32_t get_offset_of_baseID_0() { return static_cast<int32_t>(offsetof(FallbackMaterial_t3285989240, ___baseID_0)); }
	inline int32_t get_baseID_0() const { return ___baseID_0; }
	inline int32_t* get_address_of_baseID_0() { return &___baseID_0; }
	inline void set_baseID_0(int32_t value)
	{
		___baseID_0 = value;
	}

	inline static int32_t get_offset_of_baseMaterial_1() { return static_cast<int32_t>(offsetof(FallbackMaterial_t3285989240, ___baseMaterial_1)); }
	inline Material_t193706927 * get_baseMaterial_1() const { return ___baseMaterial_1; }
	inline Material_t193706927 ** get_address_of_baseMaterial_1() { return &___baseMaterial_1; }
	inline void set_baseMaterial_1(Material_t193706927 * value)
	{
		___baseMaterial_1 = value;
		Il2CppCodeGenWriteBarrier(&___baseMaterial_1, value);
	}

	inline static int32_t get_offset_of_fallbackID_2() { return static_cast<int32_t>(offsetof(FallbackMaterial_t3285989240, ___fallbackID_2)); }
	inline int64_t get_fallbackID_2() const { return ___fallbackID_2; }
	inline int64_t* get_address_of_fallbackID_2() { return &___fallbackID_2; }
	inline void set_fallbackID_2(int64_t value)
	{
		___fallbackID_2 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_3() { return static_cast<int32_t>(offsetof(FallbackMaterial_t3285989240, ___fallbackMaterial_3)); }
	inline Material_t193706927 * get_fallbackMaterial_3() const { return ___fallbackMaterial_3; }
	inline Material_t193706927 ** get_address_of_fallbackMaterial_3() { return &___fallbackMaterial_3; }
	inline void set_fallbackMaterial_3(Material_t193706927 * value)
	{
		___fallbackMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___fallbackMaterial_3, value);
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(FallbackMaterial_t3285989240, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
