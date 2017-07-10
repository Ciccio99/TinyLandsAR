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

// TMPro.TMP_MaterialManager/MaskingMaterial
struct  MaskingMaterial_t590070688  : public Il2CppObject
{
public:
	// UnityEngine.Material TMPro.TMP_MaterialManager/MaskingMaterial::baseMaterial
	Material_t193706927 * ___baseMaterial_0;
	// UnityEngine.Material TMPro.TMP_MaterialManager/MaskingMaterial::stencilMaterial
	Material_t193706927 * ___stencilMaterial_1;
	// System.Int32 TMPro.TMP_MaterialManager/MaskingMaterial::count
	int32_t ___count_2;
	// System.Int32 TMPro.TMP_MaterialManager/MaskingMaterial::stencilID
	int32_t ___stencilID_3;

public:
	inline static int32_t get_offset_of_baseMaterial_0() { return static_cast<int32_t>(offsetof(MaskingMaterial_t590070688, ___baseMaterial_0)); }
	inline Material_t193706927 * get_baseMaterial_0() const { return ___baseMaterial_0; }
	inline Material_t193706927 ** get_address_of_baseMaterial_0() { return &___baseMaterial_0; }
	inline void set_baseMaterial_0(Material_t193706927 * value)
	{
		___baseMaterial_0 = value;
		Il2CppCodeGenWriteBarrier(&___baseMaterial_0, value);
	}

	inline static int32_t get_offset_of_stencilMaterial_1() { return static_cast<int32_t>(offsetof(MaskingMaterial_t590070688, ___stencilMaterial_1)); }
	inline Material_t193706927 * get_stencilMaterial_1() const { return ___stencilMaterial_1; }
	inline Material_t193706927 ** get_address_of_stencilMaterial_1() { return &___stencilMaterial_1; }
	inline void set_stencilMaterial_1(Material_t193706927 * value)
	{
		___stencilMaterial_1 = value;
		Il2CppCodeGenWriteBarrier(&___stencilMaterial_1, value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(MaskingMaterial_t590070688, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_stencilID_3() { return static_cast<int32_t>(offsetof(MaskingMaterial_t590070688, ___stencilID_3)); }
	inline int32_t get_stencilID_3() const { return ___stencilID_3; }
	inline int32_t* get_address_of_stencilID_3() { return &___stencilID_3; }
	inline void set_stencilID_3(int32_t value)
	{
		___stencilID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
