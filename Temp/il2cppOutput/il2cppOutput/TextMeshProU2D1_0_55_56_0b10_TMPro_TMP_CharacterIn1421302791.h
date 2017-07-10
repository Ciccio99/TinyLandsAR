#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_TextElement1959651783.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_Vertex1422870470.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_FontStyles3171728781.h"

// TMPro.TMP_TextElement
struct TMP_TextElement_t2285620223;
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

// TMPro.TMP_CharacterInfo
struct  TMP_CharacterInfo_t1421302791 
{
public:
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int16 TMPro.TMP_CharacterInfo::index
	int16_t ___index_1;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_2;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_t2285620223 * ___textElement_3;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_t2530419979 * ___fontAsset_4;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t2641813093 * ___spriteAsset_5;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_6;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t193706927 * ___material_7;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_8;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_9;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_10;
	// System.Int16 TMPro.TMP_CharacterInfo::lineNumber
	int16_t ___lineNumber_11;
	// System.Int16 TMPro.TMP_CharacterInfo::pageNumber
	int16_t ___pageNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_13;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t1422870470  ___vertex_TL_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t1422870470  ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t1422870470  ___vertex_TR_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t1422870470  ___vertex_BR_17;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t2243707580  ___topLeft_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t2243707580  ___bottomLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t2243707580  ___topRight_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t2243707580  ___bottomRight_21;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_22;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_23;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_24;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_25;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_26;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_27;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_28;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t874517518  ___color_29;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_t874517518  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_t874517518  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_t874517518  ___highlightColor_32;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_33;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_34;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___character_0)); }
	inline Il2CppChar get_character_0() const { return ___character_0; }
	inline Il2CppChar* get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(Il2CppChar value)
	{
		___character_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___index_1)); }
	inline int16_t get_index_1() const { return ___index_1; }
	inline int16_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int16_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_elementType_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___elementType_2)); }
	inline int32_t get_elementType_2() const { return ___elementType_2; }
	inline int32_t* get_address_of_elementType_2() { return &___elementType_2; }
	inline void set_elementType_2(int32_t value)
	{
		___elementType_2 = value;
	}

	inline static int32_t get_offset_of_textElement_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___textElement_3)); }
	inline TMP_TextElement_t2285620223 * get_textElement_3() const { return ___textElement_3; }
	inline TMP_TextElement_t2285620223 ** get_address_of_textElement_3() { return &___textElement_3; }
	inline void set_textElement_3(TMP_TextElement_t2285620223 * value)
	{
		___textElement_3 = value;
		Il2CppCodeGenWriteBarrier(&___textElement_3, value);
	}

	inline static int32_t get_offset_of_fontAsset_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___fontAsset_4)); }
	inline TMP_FontAsset_t2530419979 * get_fontAsset_4() const { return ___fontAsset_4; }
	inline TMP_FontAsset_t2530419979 ** get_address_of_fontAsset_4() { return &___fontAsset_4; }
	inline void set_fontAsset_4(TMP_FontAsset_t2530419979 * value)
	{
		___fontAsset_4 = value;
		Il2CppCodeGenWriteBarrier(&___fontAsset_4, value);
	}

	inline static int32_t get_offset_of_spriteAsset_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___spriteAsset_5)); }
	inline TMP_SpriteAsset_t2641813093 * get_spriteAsset_5() const { return ___spriteAsset_5; }
	inline TMP_SpriteAsset_t2641813093 ** get_address_of_spriteAsset_5() { return &___spriteAsset_5; }
	inline void set_spriteAsset_5(TMP_SpriteAsset_t2641813093 * value)
	{
		___spriteAsset_5 = value;
		Il2CppCodeGenWriteBarrier(&___spriteAsset_5, value);
	}

	inline static int32_t get_offset_of_spriteIndex_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___spriteIndex_6)); }
	inline int32_t get_spriteIndex_6() const { return ___spriteIndex_6; }
	inline int32_t* get_address_of_spriteIndex_6() { return &___spriteIndex_6; }
	inline void set_spriteIndex_6(int32_t value)
	{
		___spriteIndex_6 = value;
	}

	inline static int32_t get_offset_of_material_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___material_7)); }
	inline Material_t193706927 * get_material_7() const { return ___material_7; }
	inline Material_t193706927 ** get_address_of_material_7() { return &___material_7; }
	inline void set_material_7(Material_t193706927 * value)
	{
		___material_7 = value;
		Il2CppCodeGenWriteBarrier(&___material_7, value);
	}

	inline static int32_t get_offset_of_materialReferenceIndex_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___materialReferenceIndex_8)); }
	inline int32_t get_materialReferenceIndex_8() const { return ___materialReferenceIndex_8; }
	inline int32_t* get_address_of_materialReferenceIndex_8() { return &___materialReferenceIndex_8; }
	inline void set_materialReferenceIndex_8(int32_t value)
	{
		___materialReferenceIndex_8 = value;
	}

	inline static int32_t get_offset_of_isUsingAlternateTypeface_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___isUsingAlternateTypeface_9)); }
	inline bool get_isUsingAlternateTypeface_9() const { return ___isUsingAlternateTypeface_9; }
	inline bool* get_address_of_isUsingAlternateTypeface_9() { return &___isUsingAlternateTypeface_9; }
	inline void set_isUsingAlternateTypeface_9(bool value)
	{
		___isUsingAlternateTypeface_9 = value;
	}

	inline static int32_t get_offset_of_pointSize_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___pointSize_10)); }
	inline float get_pointSize_10() const { return ___pointSize_10; }
	inline float* get_address_of_pointSize_10() { return &___pointSize_10; }
	inline void set_pointSize_10(float value)
	{
		___pointSize_10 = value;
	}

	inline static int32_t get_offset_of_lineNumber_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___lineNumber_11)); }
	inline int16_t get_lineNumber_11() const { return ___lineNumber_11; }
	inline int16_t* get_address_of_lineNumber_11() { return &___lineNumber_11; }
	inline void set_lineNumber_11(int16_t value)
	{
		___lineNumber_11 = value;
	}

	inline static int32_t get_offset_of_pageNumber_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___pageNumber_12)); }
	inline int16_t get_pageNumber_12() const { return ___pageNumber_12; }
	inline int16_t* get_address_of_pageNumber_12() { return &___pageNumber_12; }
	inline void set_pageNumber_12(int16_t value)
	{
		___pageNumber_12 = value;
	}

	inline static int32_t get_offset_of_vertexIndex_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___vertexIndex_13)); }
	inline int32_t get_vertexIndex_13() const { return ___vertexIndex_13; }
	inline int32_t* get_address_of_vertexIndex_13() { return &___vertexIndex_13; }
	inline void set_vertexIndex_13(int32_t value)
	{
		___vertexIndex_13 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___vertex_TL_14)); }
	inline TMP_Vertex_t1422870470  get_vertex_TL_14() const { return ___vertex_TL_14; }
	inline TMP_Vertex_t1422870470 * get_address_of_vertex_TL_14() { return &___vertex_TL_14; }
	inline void set_vertex_TL_14(TMP_Vertex_t1422870470  value)
	{
		___vertex_TL_14 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___vertex_BL_15)); }
	inline TMP_Vertex_t1422870470  get_vertex_BL_15() const { return ___vertex_BL_15; }
	inline TMP_Vertex_t1422870470 * get_address_of_vertex_BL_15() { return &___vertex_BL_15; }
	inline void set_vertex_BL_15(TMP_Vertex_t1422870470  value)
	{
		___vertex_BL_15 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___vertex_TR_16)); }
	inline TMP_Vertex_t1422870470  get_vertex_TR_16() const { return ___vertex_TR_16; }
	inline TMP_Vertex_t1422870470 * get_address_of_vertex_TR_16() { return &___vertex_TR_16; }
	inline void set_vertex_TR_16(TMP_Vertex_t1422870470  value)
	{
		___vertex_TR_16 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___vertex_BR_17)); }
	inline TMP_Vertex_t1422870470  get_vertex_BR_17() const { return ___vertex_BR_17; }
	inline TMP_Vertex_t1422870470 * get_address_of_vertex_BR_17() { return &___vertex_BR_17; }
	inline void set_vertex_BR_17(TMP_Vertex_t1422870470  value)
	{
		___vertex_BR_17 = value;
	}

	inline static int32_t get_offset_of_topLeft_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___topLeft_18)); }
	inline Vector3_t2243707580  get_topLeft_18() const { return ___topLeft_18; }
	inline Vector3_t2243707580 * get_address_of_topLeft_18() { return &___topLeft_18; }
	inline void set_topLeft_18(Vector3_t2243707580  value)
	{
		___topLeft_18 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___bottomLeft_19)); }
	inline Vector3_t2243707580  get_bottomLeft_19() const { return ___bottomLeft_19; }
	inline Vector3_t2243707580 * get_address_of_bottomLeft_19() { return &___bottomLeft_19; }
	inline void set_bottomLeft_19(Vector3_t2243707580  value)
	{
		___bottomLeft_19 = value;
	}

	inline static int32_t get_offset_of_topRight_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___topRight_20)); }
	inline Vector3_t2243707580  get_topRight_20() const { return ___topRight_20; }
	inline Vector3_t2243707580 * get_address_of_topRight_20() { return &___topRight_20; }
	inline void set_topRight_20(Vector3_t2243707580  value)
	{
		___topRight_20 = value;
	}

	inline static int32_t get_offset_of_bottomRight_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___bottomRight_21)); }
	inline Vector3_t2243707580  get_bottomRight_21() const { return ___bottomRight_21; }
	inline Vector3_t2243707580 * get_address_of_bottomRight_21() { return &___bottomRight_21; }
	inline void set_bottomRight_21(Vector3_t2243707580  value)
	{
		___bottomRight_21 = value;
	}

	inline static int32_t get_offset_of_origin_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___origin_22)); }
	inline float get_origin_22() const { return ___origin_22; }
	inline float* get_address_of_origin_22() { return &___origin_22; }
	inline void set_origin_22(float value)
	{
		___origin_22 = value;
	}

	inline static int32_t get_offset_of_ascender_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___ascender_23)); }
	inline float get_ascender_23() const { return ___ascender_23; }
	inline float* get_address_of_ascender_23() { return &___ascender_23; }
	inline void set_ascender_23(float value)
	{
		___ascender_23 = value;
	}

	inline static int32_t get_offset_of_baseLine_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___baseLine_24)); }
	inline float get_baseLine_24() const { return ___baseLine_24; }
	inline float* get_address_of_baseLine_24() { return &___baseLine_24; }
	inline void set_baseLine_24(float value)
	{
		___baseLine_24 = value;
	}

	inline static int32_t get_offset_of_descender_25() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___descender_25)); }
	inline float get_descender_25() const { return ___descender_25; }
	inline float* get_address_of_descender_25() { return &___descender_25; }
	inline void set_descender_25(float value)
	{
		___descender_25 = value;
	}

	inline static int32_t get_offset_of_xAdvance_26() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___xAdvance_26)); }
	inline float get_xAdvance_26() const { return ___xAdvance_26; }
	inline float* get_address_of_xAdvance_26() { return &___xAdvance_26; }
	inline void set_xAdvance_26(float value)
	{
		___xAdvance_26 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_27() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___aspectRatio_27)); }
	inline float get_aspectRatio_27() const { return ___aspectRatio_27; }
	inline float* get_address_of_aspectRatio_27() { return &___aspectRatio_27; }
	inline void set_aspectRatio_27(float value)
	{
		___aspectRatio_27 = value;
	}

	inline static int32_t get_offset_of_scale_28() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___scale_28)); }
	inline float get_scale_28() const { return ___scale_28; }
	inline float* get_address_of_scale_28() { return &___scale_28; }
	inline void set_scale_28(float value)
	{
		___scale_28 = value;
	}

	inline static int32_t get_offset_of_color_29() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___color_29)); }
	inline Color32_t874517518  get_color_29() const { return ___color_29; }
	inline Color32_t874517518 * get_address_of_color_29() { return &___color_29; }
	inline void set_color_29(Color32_t874517518  value)
	{
		___color_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___underlineColor_30)); }
	inline Color32_t874517518  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_t874517518 * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_t874517518  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___strikethroughColor_31)); }
	inline Color32_t874517518  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_t874517518 * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_t874517518  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___highlightColor_32)); }
	inline Color32_t874517518  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_t874517518 * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_t874517518  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_style_33() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___style_33)); }
	inline int32_t get_style_33() const { return ___style_33; }
	inline int32_t* get_address_of_style_33() { return &___style_33; }
	inline void set_style_33(int32_t value)
	{
		___style_33 = value;
	}

	inline static int32_t get_offset_of_isVisible_34() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t1421302791, ___isVisible_34)); }
	inline bool get_isVisible_34() const { return ___isVisible_34; }
	inline bool* get_address_of_isVisible_34() { return &___isVisible_34; }
	inline void set_isVisible_34(bool value)
	{
		___isVisible_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t1421302791_marshaled_pinvoke
{
	uint8_t ___character_0;
	int16_t ___index_1;
	int32_t ___elementType_2;
	TMP_TextElement_t2285620223 * ___textElement_3;
	TMP_FontAsset_t2530419979 * ___fontAsset_4;
	TMP_SpriteAsset_t2641813093 * ___spriteAsset_5;
	int32_t ___spriteIndex_6;
	Material_t193706927 * ___material_7;
	int32_t ___materialReferenceIndex_8;
	int32_t ___isUsingAlternateTypeface_9;
	float ___pointSize_10;
	int16_t ___lineNumber_11;
	int16_t ___pageNumber_12;
	int32_t ___vertexIndex_13;
	TMP_Vertex_t1422870470  ___vertex_TL_14;
	TMP_Vertex_t1422870470  ___vertex_BL_15;
	TMP_Vertex_t1422870470  ___vertex_TR_16;
	TMP_Vertex_t1422870470  ___vertex_BR_17;
	Vector3_t2243707580  ___topLeft_18;
	Vector3_t2243707580  ___bottomLeft_19;
	Vector3_t2243707580  ___topRight_20;
	Vector3_t2243707580  ___bottomRight_21;
	float ___origin_22;
	float ___ascender_23;
	float ___baseLine_24;
	float ___descender_25;
	float ___xAdvance_26;
	float ___aspectRatio_27;
	float ___scale_28;
	Color32_t874517518  ___color_29;
	Color32_t874517518  ___underlineColor_30;
	Color32_t874517518  ___strikethroughColor_31;
	Color32_t874517518  ___highlightColor_32;
	int32_t ___style_33;
	int32_t ___isVisible_34;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t1421302791_marshaled_com
{
	uint8_t ___character_0;
	int16_t ___index_1;
	int32_t ___elementType_2;
	TMP_TextElement_t2285620223 * ___textElement_3;
	TMP_FontAsset_t2530419979 * ___fontAsset_4;
	TMP_SpriteAsset_t2641813093 * ___spriteAsset_5;
	int32_t ___spriteIndex_6;
	Material_t193706927 * ___material_7;
	int32_t ___materialReferenceIndex_8;
	int32_t ___isUsingAlternateTypeface_9;
	float ___pointSize_10;
	int16_t ___lineNumber_11;
	int16_t ___pageNumber_12;
	int32_t ___vertexIndex_13;
	TMP_Vertex_t1422870470  ___vertex_TL_14;
	TMP_Vertex_t1422870470  ___vertex_BL_15;
	TMP_Vertex_t1422870470  ___vertex_TR_16;
	TMP_Vertex_t1422870470  ___vertex_BR_17;
	Vector3_t2243707580  ___topLeft_18;
	Vector3_t2243707580  ___bottomLeft_19;
	Vector3_t2243707580  ___topRight_20;
	Vector3_t2243707580  ___bottomRight_21;
	float ___origin_22;
	float ___ascender_23;
	float ___baseLine_24;
	float ___descender_25;
	float ___xAdvance_26;
	float ___aspectRatio_27;
	float ___scale_28;
	Color32_t874517518  ___color_29;
	Color32_t874517518  ___underlineColor_30;
	Color32_t874517518  ___strikethroughColor_31;
	Color32_t874517518  ___highlightColor_32;
	int32_t ___style_33;
	int32_t ___isVisible_34;
};
