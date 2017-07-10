#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t2641813093;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.MaterialReference
struct  MaterialReference_t2854353496 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t2530419979 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t2641813093 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t193706927 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t193706927 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_t2854353496, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_t2854353496, ___fontAsset_1)); }
	inline TMP_FontAsset_t2530419979 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t2530419979 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t2530419979 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier(&___fontAsset_1, value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_t2854353496, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t2641813093 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t2641813093 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t2641813093 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier(&___spriteAsset_2, value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_t2854353496, ___material_3)); }
	inline Material_t193706927 * get_material_3() const { return ___material_3; }
	inline Material_t193706927 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t193706927 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier(&___material_3, value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_t2854353496, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_t2854353496, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_t2854353496, ___fallbackMaterial_6)); }
	inline Material_t193706927 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t193706927 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t193706927 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___fallbackMaterial_6, value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_t2854353496, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_t2854353496, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_t2854353496_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t2530419979 * ___fontAsset_1;
	TMP_SpriteAsset_t2641813093 * ___spriteAsset_2;
	Material_t193706927 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t193706927 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_t2854353496_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t2530419979 * ___fontAsset_1;
	TMP_SpriteAsset_t2641813093 * ___spriteAsset_2;
	Material_t193706927 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t193706927 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
