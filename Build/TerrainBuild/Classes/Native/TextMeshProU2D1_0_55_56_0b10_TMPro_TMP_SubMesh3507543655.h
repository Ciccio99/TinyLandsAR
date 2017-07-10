#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t2641813093;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.BoxCollider
struct BoxCollider_t22920061;
// TMPro.TextMeshPro
struct TextMeshPro_t2521834357;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_SubMesh
struct  TMP_SubMesh_t3507543655  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TMP_FontAsset TMPro.TMP_SubMesh::m_fontAsset
	TMP_FontAsset_t2530419979 * ___m_fontAsset_2;
	// TMPro.TMP_SpriteAsset TMPro.TMP_SubMesh::m_spriteAsset
	TMP_SpriteAsset_t2641813093 * ___m_spriteAsset_3;
	// UnityEngine.Material TMPro.TMP_SubMesh::m_material
	Material_t193706927 * ___m_material_4;
	// UnityEngine.Material TMPro.TMP_SubMesh::m_sharedMaterial
	Material_t193706927 * ___m_sharedMaterial_5;
	// UnityEngine.Material TMPro.TMP_SubMesh::m_fallbackMaterial
	Material_t193706927 * ___m_fallbackMaterial_6;
	// UnityEngine.Material TMPro.TMP_SubMesh::m_fallbackSourceMaterial
	Material_t193706927 * ___m_fallbackSourceMaterial_7;
	// System.Boolean TMPro.TMP_SubMesh::m_isDefaultMaterial
	bool ___m_isDefaultMaterial_8;
	// System.Single TMPro.TMP_SubMesh::m_padding
	float ___m_padding_9;
	// UnityEngine.Renderer TMPro.TMP_SubMesh::m_renderer
	Renderer_t257310565 * ___m_renderer_10;
	// UnityEngine.MeshFilter TMPro.TMP_SubMesh::m_meshFilter
	MeshFilter_t3026937449 * ___m_meshFilter_11;
	// UnityEngine.Mesh TMPro.TMP_SubMesh::m_mesh
	Mesh_t1356156583 * ___m_mesh_12;
	// UnityEngine.BoxCollider TMPro.TMP_SubMesh::m_boxCollider
	BoxCollider_t22920061 * ___m_boxCollider_13;
	// TMPro.TextMeshPro TMPro.TMP_SubMesh::m_TextComponent
	TextMeshPro_t2521834357 * ___m_TextComponent_14;
	// System.Boolean TMPro.TMP_SubMesh::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_15;

public:
	inline static int32_t get_offset_of_m_fontAsset_2() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_fontAsset_2)); }
	inline TMP_FontAsset_t2530419979 * get_m_fontAsset_2() const { return ___m_fontAsset_2; }
	inline TMP_FontAsset_t2530419979 ** get_address_of_m_fontAsset_2() { return &___m_fontAsset_2; }
	inline void set_m_fontAsset_2(TMP_FontAsset_t2530419979 * value)
	{
		___m_fontAsset_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontAsset_2, value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_3() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_spriteAsset_3)); }
	inline TMP_SpriteAsset_t2641813093 * get_m_spriteAsset_3() const { return ___m_spriteAsset_3; }
	inline TMP_SpriteAsset_t2641813093 ** get_address_of_m_spriteAsset_3() { return &___m_spriteAsset_3; }
	inline void set_m_spriteAsset_3(TMP_SpriteAsset_t2641813093 * value)
	{
		___m_spriteAsset_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_spriteAsset_3, value);
	}

	inline static int32_t get_offset_of_m_material_4() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_material_4)); }
	inline Material_t193706927 * get_m_material_4() const { return ___m_material_4; }
	inline Material_t193706927 ** get_address_of_m_material_4() { return &___m_material_4; }
	inline void set_m_material_4(Material_t193706927 * value)
	{
		___m_material_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_material_4, value);
	}

	inline static int32_t get_offset_of_m_sharedMaterial_5() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_sharedMaterial_5)); }
	inline Material_t193706927 * get_m_sharedMaterial_5() const { return ___m_sharedMaterial_5; }
	inline Material_t193706927 ** get_address_of_m_sharedMaterial_5() { return &___m_sharedMaterial_5; }
	inline void set_m_sharedMaterial_5(Material_t193706927 * value)
	{
		___m_sharedMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_sharedMaterial_5, value);
	}

	inline static int32_t get_offset_of_m_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_fallbackMaterial_6)); }
	inline Material_t193706927 * get_m_fallbackMaterial_6() const { return ___m_fallbackMaterial_6; }
	inline Material_t193706927 ** get_address_of_m_fallbackMaterial_6() { return &___m_fallbackMaterial_6; }
	inline void set_m_fallbackMaterial_6(Material_t193706927 * value)
	{
		___m_fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_fallbackMaterial_6, value);
	}

	inline static int32_t get_offset_of_m_fallbackSourceMaterial_7() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_fallbackSourceMaterial_7)); }
	inline Material_t193706927 * get_m_fallbackSourceMaterial_7() const { return ___m_fallbackSourceMaterial_7; }
	inline Material_t193706927 ** get_address_of_m_fallbackSourceMaterial_7() { return &___m_fallbackSourceMaterial_7; }
	inline void set_m_fallbackSourceMaterial_7(Material_t193706927 * value)
	{
		___m_fallbackSourceMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_fallbackSourceMaterial_7, value);
	}

	inline static int32_t get_offset_of_m_isDefaultMaterial_8() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_isDefaultMaterial_8)); }
	inline bool get_m_isDefaultMaterial_8() const { return ___m_isDefaultMaterial_8; }
	inline bool* get_address_of_m_isDefaultMaterial_8() { return &___m_isDefaultMaterial_8; }
	inline void set_m_isDefaultMaterial_8(bool value)
	{
		___m_isDefaultMaterial_8 = value;
	}

	inline static int32_t get_offset_of_m_padding_9() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_padding_9)); }
	inline float get_m_padding_9() const { return ___m_padding_9; }
	inline float* get_address_of_m_padding_9() { return &___m_padding_9; }
	inline void set_m_padding_9(float value)
	{
		___m_padding_9 = value;
	}

	inline static int32_t get_offset_of_m_renderer_10() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_renderer_10)); }
	inline Renderer_t257310565 * get_m_renderer_10() const { return ___m_renderer_10; }
	inline Renderer_t257310565 ** get_address_of_m_renderer_10() { return &___m_renderer_10; }
	inline void set_m_renderer_10(Renderer_t257310565 * value)
	{
		___m_renderer_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_renderer_10, value);
	}

	inline static int32_t get_offset_of_m_meshFilter_11() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_meshFilter_11)); }
	inline MeshFilter_t3026937449 * get_m_meshFilter_11() const { return ___m_meshFilter_11; }
	inline MeshFilter_t3026937449 ** get_address_of_m_meshFilter_11() { return &___m_meshFilter_11; }
	inline void set_m_meshFilter_11(MeshFilter_t3026937449 * value)
	{
		___m_meshFilter_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshFilter_11, value);
	}

	inline static int32_t get_offset_of_m_mesh_12() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_mesh_12)); }
	inline Mesh_t1356156583 * get_m_mesh_12() const { return ___m_mesh_12; }
	inline Mesh_t1356156583 ** get_address_of_m_mesh_12() { return &___m_mesh_12; }
	inline void set_m_mesh_12(Mesh_t1356156583 * value)
	{
		___m_mesh_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_mesh_12, value);
	}

	inline static int32_t get_offset_of_m_boxCollider_13() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_boxCollider_13)); }
	inline BoxCollider_t22920061 * get_m_boxCollider_13() const { return ___m_boxCollider_13; }
	inline BoxCollider_t22920061 ** get_address_of_m_boxCollider_13() { return &___m_boxCollider_13; }
	inline void set_m_boxCollider_13(BoxCollider_t22920061 * value)
	{
		___m_boxCollider_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_boxCollider_13, value);
	}

	inline static int32_t get_offset_of_m_TextComponent_14() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_TextComponent_14)); }
	inline TextMeshPro_t2521834357 * get_m_TextComponent_14() const { return ___m_TextComponent_14; }
	inline TextMeshPro_t2521834357 ** get_address_of_m_TextComponent_14() { return &___m_TextComponent_14; }
	inline void set_m_TextComponent_14(TextMeshPro_t2521834357 * value)
	{
		___m_TextComponent_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_14, value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_15() { return static_cast<int32_t>(offsetof(TMP_SubMesh_t3507543655, ___m_isRegisteredForEvents_15)); }
	inline bool get_m_isRegisteredForEvents_15() const { return ___m_isRegisteredForEvents_15; }
	inline bool* get_address_of_m_isRegisteredForEvents_15() { return &___m_isRegisteredForEvents_15; }
	inline void set_m_isRegisteredForEvents_15(bool value)
	{
		___m_isRegisteredForEvents_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
