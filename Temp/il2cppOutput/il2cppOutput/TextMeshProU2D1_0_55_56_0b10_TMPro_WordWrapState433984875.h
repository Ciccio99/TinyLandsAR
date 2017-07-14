#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_FontStyles3171728781.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_LineInfo2320418126.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_BasicXmlTagS937156555.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_XmlTagStack1533070037.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_XmlTagStack2735062451.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_XmlTagStack2730429967.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_XmlTagStack3512906015.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_XmlTagStack2125340843.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_Extents3018556803.h"

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t2849466151;
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

// TMPro.WordWrapState
struct  WordWrapState_t433984875 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_16;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_17;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_18;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_19;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_20;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_21;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_22;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_23;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_24;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_25;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_26;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t2849466151 * ___textInfo_27;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_t2320418126  ___lineInfo_28;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t874517518  ___vertexColor_29;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t874517518  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t874517518  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t874517518  ___highlightColor_32;
	// TMPro.TMP_BasicXmlTagStack TMPro.WordWrapState::basicStyleStack
	TMP_BasicXmlTagStack_t937156555  ___basicStyleStack_33;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_XmlTagStack_1_t1533070037  ___colorStack_34;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_XmlTagStack_1_t1533070037  ___underlineColorStack_35;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_XmlTagStack_1_t1533070037  ___strikethroughColorStack_36;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_XmlTagStack_1_t1533070037  ___highlightColorStack_37;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_XmlTagStack_1_t2735062451  ___sizeStack_38;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_XmlTagStack_1_t2735062451  ___indentStack_39;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.WordWrapState::fontWeightStack
	TMP_XmlTagStack_1_t2730429967  ___fontWeightStack_40;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_XmlTagStack_1_t2730429967  ___styleStack_41;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_XmlTagStack_1_t2730429967  ___actionStack_42;
	// TMPro.TMP_XmlTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_XmlTagStack_1_t3512906015  ___materialReferenceStack_43;
	// TMPro.TMP_XmlTagStack`1<TMPro.TextAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_XmlTagStack_1_t2125340843  ___lineJustificationStack_44;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_45;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t2530419979 * ___currentFontAsset_46;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t2641813093 * ___currentSpriteAsset_47;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t193706927 * ___currentMaterial_48;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_49;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_t3018556803  ___meshExtents_50;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_51;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_xAdvance_16() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___xAdvance_16)); }
	inline float get_xAdvance_16() const { return ___xAdvance_16; }
	inline float* get_address_of_xAdvance_16() { return &___xAdvance_16; }
	inline void set_xAdvance_16(float value)
	{
		___xAdvance_16 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_17() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___preferredWidth_17)); }
	inline float get_preferredWidth_17() const { return ___preferredWidth_17; }
	inline float* get_address_of_preferredWidth_17() { return &___preferredWidth_17; }
	inline void set_preferredWidth_17(float value)
	{
		___preferredWidth_17 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___preferredHeight_18)); }
	inline float get_preferredHeight_18() const { return ___preferredHeight_18; }
	inline float* get_address_of_preferredHeight_18() { return &___preferredHeight_18; }
	inline void set_preferredHeight_18(float value)
	{
		___preferredHeight_18 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_19() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___previousLineScale_19)); }
	inline float get_previousLineScale_19() const { return ___previousLineScale_19; }
	inline float* get_address_of_previousLineScale_19() { return &___previousLineScale_19; }
	inline void set_previousLineScale_19(float value)
	{
		___previousLineScale_19 = value;
	}

	inline static int32_t get_offset_of_wordCount_20() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___wordCount_20)); }
	inline int32_t get_wordCount_20() const { return ___wordCount_20; }
	inline int32_t* get_address_of_wordCount_20() { return &___wordCount_20; }
	inline void set_wordCount_20(int32_t value)
	{
		___wordCount_20 = value;
	}

	inline static int32_t get_offset_of_fontStyle_21() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___fontStyle_21)); }
	inline int32_t get_fontStyle_21() const { return ___fontStyle_21; }
	inline int32_t* get_address_of_fontStyle_21() { return &___fontStyle_21; }
	inline void set_fontStyle_21(int32_t value)
	{
		___fontStyle_21 = value;
	}

	inline static int32_t get_offset_of_fontScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___fontScale_22)); }
	inline float get_fontScale_22() const { return ___fontScale_22; }
	inline float* get_address_of_fontScale_22() { return &___fontScale_22; }
	inline void set_fontScale_22(float value)
	{
		___fontScale_22 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_23() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___fontScaleMultiplier_23)); }
	inline float get_fontScaleMultiplier_23() const { return ___fontScaleMultiplier_23; }
	inline float* get_address_of_fontScaleMultiplier_23() { return &___fontScaleMultiplier_23; }
	inline void set_fontScaleMultiplier_23(float value)
	{
		___fontScaleMultiplier_23 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_24() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___currentFontSize_24)); }
	inline float get_currentFontSize_24() const { return ___currentFontSize_24; }
	inline float* get_address_of_currentFontSize_24() { return &___currentFontSize_24; }
	inline void set_currentFontSize_24(float value)
	{
		___currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_25() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___baselineOffset_25)); }
	inline float get_baselineOffset_25() const { return ___baselineOffset_25; }
	inline float* get_address_of_baselineOffset_25() { return &___baselineOffset_25; }
	inline void set_baselineOffset_25(float value)
	{
		___baselineOffset_25 = value;
	}

	inline static int32_t get_offset_of_lineOffset_26() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___lineOffset_26)); }
	inline float get_lineOffset_26() const { return ___lineOffset_26; }
	inline float* get_address_of_lineOffset_26() { return &___lineOffset_26; }
	inline void set_lineOffset_26(float value)
	{
		___lineOffset_26 = value;
	}

	inline static int32_t get_offset_of_textInfo_27() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___textInfo_27)); }
	inline TMP_TextInfo_t2849466151 * get_textInfo_27() const { return ___textInfo_27; }
	inline TMP_TextInfo_t2849466151 ** get_address_of_textInfo_27() { return &___textInfo_27; }
	inline void set_textInfo_27(TMP_TextInfo_t2849466151 * value)
	{
		___textInfo_27 = value;
		Il2CppCodeGenWriteBarrier(&___textInfo_27, value);
	}

	inline static int32_t get_offset_of_lineInfo_28() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___lineInfo_28)); }
	inline TMP_LineInfo_t2320418126  get_lineInfo_28() const { return ___lineInfo_28; }
	inline TMP_LineInfo_t2320418126 * get_address_of_lineInfo_28() { return &___lineInfo_28; }
	inline void set_lineInfo_28(TMP_LineInfo_t2320418126  value)
	{
		___lineInfo_28 = value;
	}

	inline static int32_t get_offset_of_vertexColor_29() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___vertexColor_29)); }
	inline Color32_t874517518  get_vertexColor_29() const { return ___vertexColor_29; }
	inline Color32_t874517518 * get_address_of_vertexColor_29() { return &___vertexColor_29; }
	inline void set_vertexColor_29(Color32_t874517518  value)
	{
		___vertexColor_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___underlineColor_30)); }
	inline Color32_t874517518  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_t874517518 * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_t874517518  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___strikethroughColor_31)); }
	inline Color32_t874517518  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_t874517518 * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_t874517518  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___highlightColor_32)); }
	inline Color32_t874517518  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_t874517518 * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_t874517518  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_33() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___basicStyleStack_33)); }
	inline TMP_BasicXmlTagStack_t937156555  get_basicStyleStack_33() const { return ___basicStyleStack_33; }
	inline TMP_BasicXmlTagStack_t937156555 * get_address_of_basicStyleStack_33() { return &___basicStyleStack_33; }
	inline void set_basicStyleStack_33(TMP_BasicXmlTagStack_t937156555  value)
	{
		___basicStyleStack_33 = value;
	}

	inline static int32_t get_offset_of_colorStack_34() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___colorStack_34)); }
	inline TMP_XmlTagStack_1_t1533070037  get_colorStack_34() const { return ___colorStack_34; }
	inline TMP_XmlTagStack_1_t1533070037 * get_address_of_colorStack_34() { return &___colorStack_34; }
	inline void set_colorStack_34(TMP_XmlTagStack_1_t1533070037  value)
	{
		___colorStack_34 = value;
	}

	inline static int32_t get_offset_of_underlineColorStack_35() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___underlineColorStack_35)); }
	inline TMP_XmlTagStack_1_t1533070037  get_underlineColorStack_35() const { return ___underlineColorStack_35; }
	inline TMP_XmlTagStack_1_t1533070037 * get_address_of_underlineColorStack_35() { return &___underlineColorStack_35; }
	inline void set_underlineColorStack_35(TMP_XmlTagStack_1_t1533070037  value)
	{
		___underlineColorStack_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughColorStack_36() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___strikethroughColorStack_36)); }
	inline TMP_XmlTagStack_1_t1533070037  get_strikethroughColorStack_36() const { return ___strikethroughColorStack_36; }
	inline TMP_XmlTagStack_1_t1533070037 * get_address_of_strikethroughColorStack_36() { return &___strikethroughColorStack_36; }
	inline void set_strikethroughColorStack_36(TMP_XmlTagStack_1_t1533070037  value)
	{
		___strikethroughColorStack_36 = value;
	}

	inline static int32_t get_offset_of_highlightColorStack_37() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___highlightColorStack_37)); }
	inline TMP_XmlTagStack_1_t1533070037  get_highlightColorStack_37() const { return ___highlightColorStack_37; }
	inline TMP_XmlTagStack_1_t1533070037 * get_address_of_highlightColorStack_37() { return &___highlightColorStack_37; }
	inline void set_highlightColorStack_37(TMP_XmlTagStack_1_t1533070037  value)
	{
		___highlightColorStack_37 = value;
	}

	inline static int32_t get_offset_of_sizeStack_38() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___sizeStack_38)); }
	inline TMP_XmlTagStack_1_t2735062451  get_sizeStack_38() const { return ___sizeStack_38; }
	inline TMP_XmlTagStack_1_t2735062451 * get_address_of_sizeStack_38() { return &___sizeStack_38; }
	inline void set_sizeStack_38(TMP_XmlTagStack_1_t2735062451  value)
	{
		___sizeStack_38 = value;
	}

	inline static int32_t get_offset_of_indentStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___indentStack_39)); }
	inline TMP_XmlTagStack_1_t2735062451  get_indentStack_39() const { return ___indentStack_39; }
	inline TMP_XmlTagStack_1_t2735062451 * get_address_of_indentStack_39() { return &___indentStack_39; }
	inline void set_indentStack_39(TMP_XmlTagStack_1_t2735062451  value)
	{
		___indentStack_39 = value;
	}

	inline static int32_t get_offset_of_fontWeightStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___fontWeightStack_40)); }
	inline TMP_XmlTagStack_1_t2730429967  get_fontWeightStack_40() const { return ___fontWeightStack_40; }
	inline TMP_XmlTagStack_1_t2730429967 * get_address_of_fontWeightStack_40() { return &___fontWeightStack_40; }
	inline void set_fontWeightStack_40(TMP_XmlTagStack_1_t2730429967  value)
	{
		___fontWeightStack_40 = value;
	}

	inline static int32_t get_offset_of_styleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___styleStack_41)); }
	inline TMP_XmlTagStack_1_t2730429967  get_styleStack_41() const { return ___styleStack_41; }
	inline TMP_XmlTagStack_1_t2730429967 * get_address_of_styleStack_41() { return &___styleStack_41; }
	inline void set_styleStack_41(TMP_XmlTagStack_1_t2730429967  value)
	{
		___styleStack_41 = value;
	}

	inline static int32_t get_offset_of_actionStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___actionStack_42)); }
	inline TMP_XmlTagStack_1_t2730429967  get_actionStack_42() const { return ___actionStack_42; }
	inline TMP_XmlTagStack_1_t2730429967 * get_address_of_actionStack_42() { return &___actionStack_42; }
	inline void set_actionStack_42(TMP_XmlTagStack_1_t2730429967  value)
	{
		___actionStack_42 = value;
	}

	inline static int32_t get_offset_of_materialReferenceStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___materialReferenceStack_43)); }
	inline TMP_XmlTagStack_1_t3512906015  get_materialReferenceStack_43() const { return ___materialReferenceStack_43; }
	inline TMP_XmlTagStack_1_t3512906015 * get_address_of_materialReferenceStack_43() { return &___materialReferenceStack_43; }
	inline void set_materialReferenceStack_43(TMP_XmlTagStack_1_t3512906015  value)
	{
		___materialReferenceStack_43 = value;
	}

	inline static int32_t get_offset_of_lineJustificationStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___lineJustificationStack_44)); }
	inline TMP_XmlTagStack_1_t2125340843  get_lineJustificationStack_44() const { return ___lineJustificationStack_44; }
	inline TMP_XmlTagStack_1_t2125340843 * get_address_of_lineJustificationStack_44() { return &___lineJustificationStack_44; }
	inline void set_lineJustificationStack_44(TMP_XmlTagStack_1_t2125340843  value)
	{
		___lineJustificationStack_44 = value;
	}

	inline static int32_t get_offset_of_spriteAnimationID_45() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___spriteAnimationID_45)); }
	inline int32_t get_spriteAnimationID_45() const { return ___spriteAnimationID_45; }
	inline int32_t* get_address_of_spriteAnimationID_45() { return &___spriteAnimationID_45; }
	inline void set_spriteAnimationID_45(int32_t value)
	{
		___spriteAnimationID_45 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_46() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___currentFontAsset_46)); }
	inline TMP_FontAsset_t2530419979 * get_currentFontAsset_46() const { return ___currentFontAsset_46; }
	inline TMP_FontAsset_t2530419979 ** get_address_of_currentFontAsset_46() { return &___currentFontAsset_46; }
	inline void set_currentFontAsset_46(TMP_FontAsset_t2530419979 * value)
	{
		___currentFontAsset_46 = value;
		Il2CppCodeGenWriteBarrier(&___currentFontAsset_46, value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_47() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___currentSpriteAsset_47)); }
	inline TMP_SpriteAsset_t2641813093 * get_currentSpriteAsset_47() const { return ___currentSpriteAsset_47; }
	inline TMP_SpriteAsset_t2641813093 ** get_address_of_currentSpriteAsset_47() { return &___currentSpriteAsset_47; }
	inline void set_currentSpriteAsset_47(TMP_SpriteAsset_t2641813093 * value)
	{
		___currentSpriteAsset_47 = value;
		Il2CppCodeGenWriteBarrier(&___currentSpriteAsset_47, value);
	}

	inline static int32_t get_offset_of_currentMaterial_48() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___currentMaterial_48)); }
	inline Material_t193706927 * get_currentMaterial_48() const { return ___currentMaterial_48; }
	inline Material_t193706927 ** get_address_of_currentMaterial_48() { return &___currentMaterial_48; }
	inline void set_currentMaterial_48(Material_t193706927 * value)
	{
		___currentMaterial_48 = value;
		Il2CppCodeGenWriteBarrier(&___currentMaterial_48, value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_49() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___currentMaterialIndex_49)); }
	inline int32_t get_currentMaterialIndex_49() const { return ___currentMaterialIndex_49; }
	inline int32_t* get_address_of_currentMaterialIndex_49() { return &___currentMaterialIndex_49; }
	inline void set_currentMaterialIndex_49(int32_t value)
	{
		___currentMaterialIndex_49 = value;
	}

	inline static int32_t get_offset_of_meshExtents_50() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___meshExtents_50)); }
	inline Extents_t3018556803  get_meshExtents_50() const { return ___meshExtents_50; }
	inline Extents_t3018556803 * get_address_of_meshExtents_50() { return &___meshExtents_50; }
	inline void set_meshExtents_50(Extents_t3018556803  value)
	{
		___meshExtents_50 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_51() { return static_cast<int32_t>(offsetof(WordWrapState_t433984875, ___tagNoParsing_51)); }
	inline bool get_tagNoParsing_51() const { return ___tagNoParsing_51; }
	inline bool* get_address_of_tagNoParsing_51() { return &___tagNoParsing_51; }
	inline void set_tagNoParsing_51(bool value)
	{
		___tagNoParsing_51 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t433984875_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_t2849466151 * ___textInfo_27;
	TMP_LineInfo_t2320418126  ___lineInfo_28;
	Color32_t874517518  ___vertexColor_29;
	Color32_t874517518  ___underlineColor_30;
	Color32_t874517518  ___strikethroughColor_31;
	Color32_t874517518  ___highlightColor_32;
	TMP_BasicXmlTagStack_t937156555  ___basicStyleStack_33;
	TMP_XmlTagStack_1_t1533070037  ___colorStack_34;
	TMP_XmlTagStack_1_t1533070037  ___underlineColorStack_35;
	TMP_XmlTagStack_1_t1533070037  ___strikethroughColorStack_36;
	TMP_XmlTagStack_1_t1533070037  ___highlightColorStack_37;
	TMP_XmlTagStack_1_t2735062451  ___sizeStack_38;
	TMP_XmlTagStack_1_t2735062451  ___indentStack_39;
	TMP_XmlTagStack_1_t2730429967  ___fontWeightStack_40;
	TMP_XmlTagStack_1_t2730429967  ___styleStack_41;
	TMP_XmlTagStack_1_t2730429967  ___actionStack_42;
	TMP_XmlTagStack_1_t3512906015  ___materialReferenceStack_43;
	TMP_XmlTagStack_1_t2125340843  ___lineJustificationStack_44;
	int32_t ___spriteAnimationID_45;
	TMP_FontAsset_t2530419979 * ___currentFontAsset_46;
	TMP_SpriteAsset_t2641813093 * ___currentSpriteAsset_47;
	Material_t193706927 * ___currentMaterial_48;
	int32_t ___currentMaterialIndex_49;
	Extents_t3018556803  ___meshExtents_50;
	int32_t ___tagNoParsing_51;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t433984875_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_t2849466151 * ___textInfo_27;
	TMP_LineInfo_t2320418126  ___lineInfo_28;
	Color32_t874517518  ___vertexColor_29;
	Color32_t874517518  ___underlineColor_30;
	Color32_t874517518  ___strikethroughColor_31;
	Color32_t874517518  ___highlightColor_32;
	TMP_BasicXmlTagStack_t937156555  ___basicStyleStack_33;
	TMP_XmlTagStack_1_t1533070037  ___colorStack_34;
	TMP_XmlTagStack_1_t1533070037  ___underlineColorStack_35;
	TMP_XmlTagStack_1_t1533070037  ___strikethroughColorStack_36;
	TMP_XmlTagStack_1_t1533070037  ___highlightColorStack_37;
	TMP_XmlTagStack_1_t2735062451  ___sizeStack_38;
	TMP_XmlTagStack_1_t2735062451  ___indentStack_39;
	TMP_XmlTagStack_1_t2730429967  ___fontWeightStack_40;
	TMP_XmlTagStack_1_t2730429967  ___styleStack_41;
	TMP_XmlTagStack_1_t2730429967  ___actionStack_42;
	TMP_XmlTagStack_1_t3512906015  ___materialReferenceStack_43;
	TMP_XmlTagStack_1_t2125340843  ___lineJustificationStack_44;
	int32_t ___spriteAnimationID_45;
	TMP_FontAsset_t2530419979 * ___currentFontAsset_46;
	TMP_SpriteAsset_t2641813093 * ___currentSpriteAsset_47;
	Material_t193706927 * ___currentMaterial_48;
	int32_t ___currentMaterialIndex_49;
	Extents_t3018556803  ___meshExtents_50;
	int32_t ___tagNoParsing_51;
};
