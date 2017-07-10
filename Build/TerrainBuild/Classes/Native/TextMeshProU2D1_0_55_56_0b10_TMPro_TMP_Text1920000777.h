#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic540192618.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_XmlTagStack3512906015.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_VertexGradient1602386880.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_XmlTagStack2735062451.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_XmlTagStack2730429967.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_FontStyles3171728781.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_BasicXmlTagS937156555.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TextAlignmentOp1466788324.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_XmlTagStack2125340843.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TextOverflowMod2644609723.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TextureMappingOp761764377.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TextRenderFlags7026704.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_VertexSortingOrd471281372.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_Text_TextInp434791461.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_WordWrapState433984875.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_Extents3018556803.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_XmlTagStack1533070037.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_TextElement1959651783.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;
// UnityEngine.Material
struct Material_t193706927;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t627890505;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t1159837347;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t2641813093;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t2849466151;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2347923044;
// UnityEngine.UI.LayoutElement
struct LayoutElement_t2808691390;
// System.Char[]
struct CharU5BU5D_t1328083999;
// TMPro.XML_TagAttribute[]
struct XML_TagAttributeU5BU5D_t573465953;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t602810366;
// TMPro.TMP_TextElement
struct TMP_TextElement_t2285620223;
// TMPro.TMP_Glyph
struct TMP_Glyph_t909793902;
// TMPro.InlineGraphicManager
struct InlineGraphicManager_t2038767860;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Text
struct  TMP_Text_t1920000777  : public MaskableGraphic_t540192618
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_28;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_29;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t2530419979 * ___m_fontAsset_30;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t2530419979 * ___m_currentFontAsset_31;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_32;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t193706927 * ___m_sharedMaterial_33;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t193706927 * ___m_currentMaterial_34;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t627890505* ___m_materialReferences_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t1079703083 * ___m_materialReferenceIndexLookup_36;
	// TMPro.TMP_XmlTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_XmlTagStack_1_t3512906015  ___m_materialReferenceStack_37;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_38;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3123989686* ___m_fontSharedMaterials_39;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t193706927 * ___m_fontMaterial_40;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3123989686* ___m_fontMaterials_41;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_42;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t874517518  ___m_fontColor32_43;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t2020392075  ___m_fontColor_44;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t874517518  ___m_underlineColor_46;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t874517518  ___m_strikethroughColor_47;
	// UnityEngine.Color32 TMPro.TMP_Text::m_highlightColor
	Color32_t874517518  ___m_highlightColor_48;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_49;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t1602386880  ___m_fontColorGradient_50;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t1159837347 * ___m_fontColorGradientPreset_51;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t2641813093 * ___m_spriteAsset_52;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_53;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t874517518  ___m_spriteColor_55;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t874517518  ___m_faceColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t874517518  ___m_outlineColor_58;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_59;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_60;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_61;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_62;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_XmlTagStack_1_t2735062451  ___m_sizeStack_63;
	// System.Int32 TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_64;
	// System.Int32 TMPro.TMP_Text::m_fontWeightInternal
	int32_t ___m_fontWeightInternal_65;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.TMP_Text::m_fontWeightStack
	TMP_XmlTagStack_1_t2730429967  ___m_fontWeightStack_66;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_67;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_68;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_69;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_70;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_71;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_72;
	// TMPro.FontStyles TMPro.TMP_Text::m_style
	int32_t ___m_style_73;
	// TMPro.TMP_BasicXmlTagStack TMPro.TMP_Text::m_fontStyleStack
	TMP_BasicXmlTagStack_t937156555  ___m_fontStyleStack_74;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_75;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_76;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_77;
	// TMPro.TMP_XmlTagStack`1<TMPro.TextAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_XmlTagStack_1_t2125340843  ___m_lineJustificationStack_78;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t1172311765* ___m_textContainerLocalCorners_79;
	// System.Boolean TMPro.TMP_Text::m_isAlignmentEnumConverted
	bool ___m_isAlignmentEnumConverted_80;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_81;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_82;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_83;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_84;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_85;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_86;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_87;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_88;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_89;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_90;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_91;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_92;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_93;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_94;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_95;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_96;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_97;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_98;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t1920000777 * ___m_linkedTextComponent_99;
	// System.Boolean TMPro.TMP_Text::m_isLinkedTextComponent
	bool ___m_isLinkedTextComponent_100;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_101;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_102;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_103;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_104;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_105;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_106;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_107;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_108;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_109;
	// System.Boolean TMPro.TMP_Text::m_ignoreRectMaskCulling
	bool ___m_ignoreRectMaskCulling_110;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_111;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_112;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_113;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_114;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_115;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_116;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_117;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_118;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_119;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_120;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_121;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_122;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_123;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t2243707581  ___m_margin_124;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_125;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_126;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_127;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_128;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_129;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t2849466151 * ___m_textInfo_130;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_131;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_132;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_t3275118058 * ___m_transform_133;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t3349966182 * ___m_rectTransform_134;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_135;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_136;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t1356156583 * ___m_mesh_137;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_138;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2347923044 * ___m_spriteAnimator_139;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_140;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_141;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_142;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_143;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_144;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_145;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_t2808691390 * ___m_LayoutElement_146;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_147;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_148;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_149;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_150;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_151;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_152;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_153;
	// System.Int32 TMPro.TMP_Text::m_recursiveCount
	int32_t ___m_recursiveCount_154;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_155;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_156;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_157;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_158;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_159;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_160;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_161;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_162;
	// System.String TMPro.TMP_Text::old_text
	String_t* ___old_text_163;
	// System.Single TMPro.TMP_Text::old_arg0
	float ___old_arg0_164;
	// System.Single TMPro.TMP_Text::old_arg1
	float ___old_arg1_165;
	// System.Single TMPro.TMP_Text::old_arg2
	float ___old_arg2_166;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_167;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_168;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t1328083999* ___m_htmlTag_169;
	// TMPro.XML_TagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	XML_TagAttributeU5BU5D_t573465953* ___m_xmlAttribute_170;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t577127397* ___m_attributeParameterValues_171;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_172;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_173;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_XmlTagStack_1_t2735062451  ___m_indentStack_174;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_175;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_176;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t2933234003  ___m_FXMatrix_177;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_178;
	// System.Int32[] TMPro.TMP_Text::m_char_buffer
	Int32U5BU5D_t3030399641* ___m_char_buffer_179;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t602810366* ___m_internalCharacterInfo_180;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t1328083999* ___m_input_CharArray_181;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_182;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_183;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t433984875  ___m_SavedWordWrapState_184;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t433984875  ___m_SavedLineState_185;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_186;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_187;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_188;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_189;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_190;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_191;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_192;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_193;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_194;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_195;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_196;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_197;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_198;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_199;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_200;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_t3018556803  ___m_meshExtents_201;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t874517518  ___m_htmlColor_202;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_XmlTagStack_1_t1533070037  ___m_colorStack_203;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_XmlTagStack_1_t1533070037  ___m_underlineColorStack_204;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_XmlTagStack_1_t1533070037  ___m_strikethroughColorStack_205;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_highlightColorStack
	TMP_XmlTagStack_1_t1533070037  ___m_highlightColorStack_206;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_207;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_208;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.TMP_Text::m_styleStack
	TMP_XmlTagStack_1_t2730429967  ___m_styleStack_209;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_XmlTagStack_1_t2730429967  ___m_actionStack_210;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_211;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_212;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_213;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_214;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t2285620223 * ___m_cached_TextElement_215;
	// TMPro.TMP_Glyph TMPro.TMP_Text::m_cached_Underline_GlyphInfo
	TMP_Glyph_t909793902 * ___m_cached_Underline_GlyphInfo_216;
	// TMPro.TMP_Glyph TMPro.TMP_Text::m_cached_Ellipsis_GlyphInfo
	TMP_Glyph_t909793902 * ___m_cached_Ellipsis_GlyphInfo_217;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t2641813093 * ___m_defaultSpriteAsset_218;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t2641813093 * ___m_currentSpriteAsset_219;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_220;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_221;
	// TMPro.InlineGraphicManager TMPro.TMP_Text::m_inlineGraphics
	InlineGraphicManager_t2038767860 * ___m_inlineGraphics_222;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_223;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_224;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_t577127397* ___k_Power_225;

public:
	inline static int32_t get_offset_of_m_text_28() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_text_28)); }
	inline String_t* get_m_text_28() const { return ___m_text_28; }
	inline String_t** get_address_of_m_text_28() { return &___m_text_28; }
	inline void set_m_text_28(String_t* value)
	{
		___m_text_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_text_28, value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_29() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isRightToLeft_29)); }
	inline bool get_m_isRightToLeft_29() const { return ___m_isRightToLeft_29; }
	inline bool* get_address_of_m_isRightToLeft_29() { return &___m_isRightToLeft_29; }
	inline void set_m_isRightToLeft_29(bool value)
	{
		___m_isRightToLeft_29 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_30() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontAsset_30)); }
	inline TMP_FontAsset_t2530419979 * get_m_fontAsset_30() const { return ___m_fontAsset_30; }
	inline TMP_FontAsset_t2530419979 ** get_address_of_m_fontAsset_30() { return &___m_fontAsset_30; }
	inline void set_m_fontAsset_30(TMP_FontAsset_t2530419979 * value)
	{
		___m_fontAsset_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontAsset_30, value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_31() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_currentFontAsset_31)); }
	inline TMP_FontAsset_t2530419979 * get_m_currentFontAsset_31() const { return ___m_currentFontAsset_31; }
	inline TMP_FontAsset_t2530419979 ** get_address_of_m_currentFontAsset_31() { return &___m_currentFontAsset_31; }
	inline void set_m_currentFontAsset_31(TMP_FontAsset_t2530419979 * value)
	{
		___m_currentFontAsset_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_currentFontAsset_31, value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_32() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isSDFShader_32)); }
	inline bool get_m_isSDFShader_32() const { return ___m_isSDFShader_32; }
	inline bool* get_address_of_m_isSDFShader_32() { return &___m_isSDFShader_32; }
	inline void set_m_isSDFShader_32(bool value)
	{
		___m_isSDFShader_32 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_33() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_sharedMaterial_33)); }
	inline Material_t193706927 * get_m_sharedMaterial_33() const { return ___m_sharedMaterial_33; }
	inline Material_t193706927 ** get_address_of_m_sharedMaterial_33() { return &___m_sharedMaterial_33; }
	inline void set_m_sharedMaterial_33(Material_t193706927 * value)
	{
		___m_sharedMaterial_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_sharedMaterial_33, value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_34() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_currentMaterial_34)); }
	inline Material_t193706927 * get_m_currentMaterial_34() const { return ___m_currentMaterial_34; }
	inline Material_t193706927 ** get_address_of_m_currentMaterial_34() { return &___m_currentMaterial_34; }
	inline void set_m_currentMaterial_34(Material_t193706927 * value)
	{
		___m_currentMaterial_34 = value;
		Il2CppCodeGenWriteBarrier(&___m_currentMaterial_34, value);
	}

	inline static int32_t get_offset_of_m_materialReferences_35() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_materialReferences_35)); }
	inline MaterialReferenceU5BU5D_t627890505* get_m_materialReferences_35() const { return ___m_materialReferences_35; }
	inline MaterialReferenceU5BU5D_t627890505** get_address_of_m_materialReferences_35() { return &___m_materialReferences_35; }
	inline void set_m_materialReferences_35(MaterialReferenceU5BU5D_t627890505* value)
	{
		___m_materialReferences_35 = value;
		Il2CppCodeGenWriteBarrier(&___m_materialReferences_35, value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_36() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_materialReferenceIndexLookup_36)); }
	inline Dictionary_2_t1079703083 * get_m_materialReferenceIndexLookup_36() const { return ___m_materialReferenceIndexLookup_36; }
	inline Dictionary_2_t1079703083 ** get_address_of_m_materialReferenceIndexLookup_36() { return &___m_materialReferenceIndexLookup_36; }
	inline void set_m_materialReferenceIndexLookup_36(Dictionary_2_t1079703083 * value)
	{
		___m_materialReferenceIndexLookup_36 = value;
		Il2CppCodeGenWriteBarrier(&___m_materialReferenceIndexLookup_36, value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_37() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_materialReferenceStack_37)); }
	inline TMP_XmlTagStack_1_t3512906015  get_m_materialReferenceStack_37() const { return ___m_materialReferenceStack_37; }
	inline TMP_XmlTagStack_1_t3512906015 * get_address_of_m_materialReferenceStack_37() { return &___m_materialReferenceStack_37; }
	inline void set_m_materialReferenceStack_37(TMP_XmlTagStack_1_t3512906015  value)
	{
		___m_materialReferenceStack_37 = value;
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_38() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_currentMaterialIndex_38)); }
	inline int32_t get_m_currentMaterialIndex_38() const { return ___m_currentMaterialIndex_38; }
	inline int32_t* get_address_of_m_currentMaterialIndex_38() { return &___m_currentMaterialIndex_38; }
	inline void set_m_currentMaterialIndex_38(int32_t value)
	{
		___m_currentMaterialIndex_38 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_39() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontSharedMaterials_39)); }
	inline MaterialU5BU5D_t3123989686* get_m_fontSharedMaterials_39() const { return ___m_fontSharedMaterials_39; }
	inline MaterialU5BU5D_t3123989686** get_address_of_m_fontSharedMaterials_39() { return &___m_fontSharedMaterials_39; }
	inline void set_m_fontSharedMaterials_39(MaterialU5BU5D_t3123989686* value)
	{
		___m_fontSharedMaterials_39 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontSharedMaterials_39, value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_40() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontMaterial_40)); }
	inline Material_t193706927 * get_m_fontMaterial_40() const { return ___m_fontMaterial_40; }
	inline Material_t193706927 ** get_address_of_m_fontMaterial_40() { return &___m_fontMaterial_40; }
	inline void set_m_fontMaterial_40(Material_t193706927 * value)
	{
		___m_fontMaterial_40 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontMaterial_40, value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_41() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontMaterials_41)); }
	inline MaterialU5BU5D_t3123989686* get_m_fontMaterials_41() const { return ___m_fontMaterials_41; }
	inline MaterialU5BU5D_t3123989686** get_address_of_m_fontMaterials_41() { return &___m_fontMaterials_41; }
	inline void set_m_fontMaterials_41(MaterialU5BU5D_t3123989686* value)
	{
		___m_fontMaterials_41 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontMaterials_41, value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_42() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isMaterialDirty_42)); }
	inline bool get_m_isMaterialDirty_42() const { return ___m_isMaterialDirty_42; }
	inline bool* get_address_of_m_isMaterialDirty_42() { return &___m_isMaterialDirty_42; }
	inline void set_m_isMaterialDirty_42(bool value)
	{
		___m_isMaterialDirty_42 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_43() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontColor32_43)); }
	inline Color32_t874517518  get_m_fontColor32_43() const { return ___m_fontColor32_43; }
	inline Color32_t874517518 * get_address_of_m_fontColor32_43() { return &___m_fontColor32_43; }
	inline void set_m_fontColor32_43(Color32_t874517518  value)
	{
		___m_fontColor32_43 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_44() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontColor_44)); }
	inline Color_t2020392075  get_m_fontColor_44() const { return ___m_fontColor_44; }
	inline Color_t2020392075 * get_address_of_m_fontColor_44() { return &___m_fontColor_44; }
	inline void set_m_fontColor_44(Color_t2020392075  value)
	{
		___m_fontColor_44 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_46() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_underlineColor_46)); }
	inline Color32_t874517518  get_m_underlineColor_46() const { return ___m_underlineColor_46; }
	inline Color32_t874517518 * get_address_of_m_underlineColor_46() { return &___m_underlineColor_46; }
	inline void set_m_underlineColor_46(Color32_t874517518  value)
	{
		___m_underlineColor_46 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_47() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_strikethroughColor_47)); }
	inline Color32_t874517518  get_m_strikethroughColor_47() const { return ___m_strikethroughColor_47; }
	inline Color32_t874517518 * get_address_of_m_strikethroughColor_47() { return &___m_strikethroughColor_47; }
	inline void set_m_strikethroughColor_47(Color32_t874517518  value)
	{
		___m_strikethroughColor_47 = value;
	}

	inline static int32_t get_offset_of_m_highlightColor_48() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_highlightColor_48)); }
	inline Color32_t874517518  get_m_highlightColor_48() const { return ___m_highlightColor_48; }
	inline Color32_t874517518 * get_address_of_m_highlightColor_48() { return &___m_highlightColor_48; }
	inline void set_m_highlightColor_48(Color32_t874517518  value)
	{
		___m_highlightColor_48 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_49() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_enableVertexGradient_49)); }
	inline bool get_m_enableVertexGradient_49() const { return ___m_enableVertexGradient_49; }
	inline bool* get_address_of_m_enableVertexGradient_49() { return &___m_enableVertexGradient_49; }
	inline void set_m_enableVertexGradient_49(bool value)
	{
		___m_enableVertexGradient_49 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_50() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontColorGradient_50)); }
	inline VertexGradient_t1602386880  get_m_fontColorGradient_50() const { return ___m_fontColorGradient_50; }
	inline VertexGradient_t1602386880 * get_address_of_m_fontColorGradient_50() { return &___m_fontColorGradient_50; }
	inline void set_m_fontColorGradient_50(VertexGradient_t1602386880  value)
	{
		___m_fontColorGradient_50 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_51() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontColorGradientPreset_51)); }
	inline TMP_ColorGradient_t1159837347 * get_m_fontColorGradientPreset_51() const { return ___m_fontColorGradientPreset_51; }
	inline TMP_ColorGradient_t1159837347 ** get_address_of_m_fontColorGradientPreset_51() { return &___m_fontColorGradientPreset_51; }
	inline void set_m_fontColorGradientPreset_51(TMP_ColorGradient_t1159837347 * value)
	{
		___m_fontColorGradientPreset_51 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontColorGradientPreset_51, value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_52() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_spriteAsset_52)); }
	inline TMP_SpriteAsset_t2641813093 * get_m_spriteAsset_52() const { return ___m_spriteAsset_52; }
	inline TMP_SpriteAsset_t2641813093 ** get_address_of_m_spriteAsset_52() { return &___m_spriteAsset_52; }
	inline void set_m_spriteAsset_52(TMP_SpriteAsset_t2641813093 * value)
	{
		___m_spriteAsset_52 = value;
		Il2CppCodeGenWriteBarrier(&___m_spriteAsset_52, value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_53() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_tintAllSprites_53)); }
	inline bool get_m_tintAllSprites_53() const { return ___m_tintAllSprites_53; }
	inline bool* get_address_of_m_tintAllSprites_53() { return &___m_tintAllSprites_53; }
	inline void set_m_tintAllSprites_53(bool value)
	{
		___m_tintAllSprites_53 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_54() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_tintSprite_54)); }
	inline bool get_m_tintSprite_54() const { return ___m_tintSprite_54; }
	inline bool* get_address_of_m_tintSprite_54() { return &___m_tintSprite_54; }
	inline void set_m_tintSprite_54(bool value)
	{
		___m_tintSprite_54 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_spriteColor_55)); }
	inline Color32_t874517518  get_m_spriteColor_55() const { return ___m_spriteColor_55; }
	inline Color32_t874517518 * get_address_of_m_spriteColor_55() { return &___m_spriteColor_55; }
	inline void set_m_spriteColor_55(Color32_t874517518  value)
	{
		___m_spriteColor_55 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_56() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_overrideHtmlColors_56)); }
	inline bool get_m_overrideHtmlColors_56() const { return ___m_overrideHtmlColors_56; }
	inline bool* get_address_of_m_overrideHtmlColors_56() { return &___m_overrideHtmlColors_56; }
	inline void set_m_overrideHtmlColors_56(bool value)
	{
		___m_overrideHtmlColors_56 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_faceColor_57)); }
	inline Color32_t874517518  get_m_faceColor_57() const { return ___m_faceColor_57; }
	inline Color32_t874517518 * get_address_of_m_faceColor_57() { return &___m_faceColor_57; }
	inline void set_m_faceColor_57(Color32_t874517518  value)
	{
		___m_faceColor_57 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_58() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_outlineColor_58)); }
	inline Color32_t874517518  get_m_outlineColor_58() const { return ___m_outlineColor_58; }
	inline Color32_t874517518 * get_address_of_m_outlineColor_58() { return &___m_outlineColor_58; }
	inline void set_m_outlineColor_58(Color32_t874517518  value)
	{
		___m_outlineColor_58 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_59() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_outlineWidth_59)); }
	inline float get_m_outlineWidth_59() const { return ___m_outlineWidth_59; }
	inline float* get_address_of_m_outlineWidth_59() { return &___m_outlineWidth_59; }
	inline void set_m_outlineWidth_59(float value)
	{
		___m_outlineWidth_59 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_60() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontSize_60)); }
	inline float get_m_fontSize_60() const { return ___m_fontSize_60; }
	inline float* get_address_of_m_fontSize_60() { return &___m_fontSize_60; }
	inline void set_m_fontSize_60(float value)
	{
		___m_fontSize_60 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_61() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_currentFontSize_61)); }
	inline float get_m_currentFontSize_61() const { return ___m_currentFontSize_61; }
	inline float* get_address_of_m_currentFontSize_61() { return &___m_currentFontSize_61; }
	inline void set_m_currentFontSize_61(float value)
	{
		___m_currentFontSize_61 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_62() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontSizeBase_62)); }
	inline float get_m_fontSizeBase_62() const { return ___m_fontSizeBase_62; }
	inline float* get_address_of_m_fontSizeBase_62() { return &___m_fontSizeBase_62; }
	inline void set_m_fontSizeBase_62(float value)
	{
		___m_fontSizeBase_62 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_63() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_sizeStack_63)); }
	inline TMP_XmlTagStack_1_t2735062451  get_m_sizeStack_63() const { return ___m_sizeStack_63; }
	inline TMP_XmlTagStack_1_t2735062451 * get_address_of_m_sizeStack_63() { return &___m_sizeStack_63; }
	inline void set_m_sizeStack_63(TMP_XmlTagStack_1_t2735062451  value)
	{
		___m_sizeStack_63 = value;
	}

	inline static int32_t get_offset_of_m_fontWeight_64() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontWeight_64)); }
	inline int32_t get_m_fontWeight_64() const { return ___m_fontWeight_64; }
	inline int32_t* get_address_of_m_fontWeight_64() { return &___m_fontWeight_64; }
	inline void set_m_fontWeight_64(int32_t value)
	{
		___m_fontWeight_64 = value;
	}

	inline static int32_t get_offset_of_m_fontWeightInternal_65() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontWeightInternal_65)); }
	inline int32_t get_m_fontWeightInternal_65() const { return ___m_fontWeightInternal_65; }
	inline int32_t* get_address_of_m_fontWeightInternal_65() { return &___m_fontWeightInternal_65; }
	inline void set_m_fontWeightInternal_65(int32_t value)
	{
		___m_fontWeightInternal_65 = value;
	}

	inline static int32_t get_offset_of_m_fontWeightStack_66() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontWeightStack_66)); }
	inline TMP_XmlTagStack_1_t2730429967  get_m_fontWeightStack_66() const { return ___m_fontWeightStack_66; }
	inline TMP_XmlTagStack_1_t2730429967 * get_address_of_m_fontWeightStack_66() { return &___m_fontWeightStack_66; }
	inline void set_m_fontWeightStack_66(TMP_XmlTagStack_1_t2730429967  value)
	{
		___m_fontWeightStack_66 = value;
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_67() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_enableAutoSizing_67)); }
	inline bool get_m_enableAutoSizing_67() const { return ___m_enableAutoSizing_67; }
	inline bool* get_address_of_m_enableAutoSizing_67() { return &___m_enableAutoSizing_67; }
	inline void set_m_enableAutoSizing_67(bool value)
	{
		___m_enableAutoSizing_67 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_68() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxFontSize_68)); }
	inline float get_m_maxFontSize_68() const { return ___m_maxFontSize_68; }
	inline float* get_address_of_m_maxFontSize_68() { return &___m_maxFontSize_68; }
	inline void set_m_maxFontSize_68(float value)
	{
		___m_maxFontSize_68 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_69() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_minFontSize_69)); }
	inline float get_m_minFontSize_69() const { return ___m_minFontSize_69; }
	inline float* get_address_of_m_minFontSize_69() { return &___m_minFontSize_69; }
	inline void set_m_minFontSize_69(float value)
	{
		___m_minFontSize_69 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_70() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontSizeMin_70)); }
	inline float get_m_fontSizeMin_70() const { return ___m_fontSizeMin_70; }
	inline float* get_address_of_m_fontSizeMin_70() { return &___m_fontSizeMin_70; }
	inline void set_m_fontSizeMin_70(float value)
	{
		___m_fontSizeMin_70 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_71() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontSizeMax_71)); }
	inline float get_m_fontSizeMax_71() const { return ___m_fontSizeMax_71; }
	inline float* get_address_of_m_fontSizeMax_71() { return &___m_fontSizeMax_71; }
	inline void set_m_fontSizeMax_71(float value)
	{
		___m_fontSizeMax_71 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_72() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontStyle_72)); }
	inline int32_t get_m_fontStyle_72() const { return ___m_fontStyle_72; }
	inline int32_t* get_address_of_m_fontStyle_72() { return &___m_fontStyle_72; }
	inline void set_m_fontStyle_72(int32_t value)
	{
		___m_fontStyle_72 = value;
	}

	inline static int32_t get_offset_of_m_style_73() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_style_73)); }
	inline int32_t get_m_style_73() const { return ___m_style_73; }
	inline int32_t* get_address_of_m_style_73() { return &___m_style_73; }
	inline void set_m_style_73(int32_t value)
	{
		___m_style_73 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_74() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontStyleStack_74)); }
	inline TMP_BasicXmlTagStack_t937156555  get_m_fontStyleStack_74() const { return ___m_fontStyleStack_74; }
	inline TMP_BasicXmlTagStack_t937156555 * get_address_of_m_fontStyleStack_74() { return &___m_fontStyleStack_74; }
	inline void set_m_fontStyleStack_74(TMP_BasicXmlTagStack_t937156555  value)
	{
		___m_fontStyleStack_74 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_75() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isUsingBold_75)); }
	inline bool get_m_isUsingBold_75() const { return ___m_isUsingBold_75; }
	inline bool* get_address_of_m_isUsingBold_75() { return &___m_isUsingBold_75; }
	inline void set_m_isUsingBold_75(bool value)
	{
		___m_isUsingBold_75 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_76() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_textAlignment_76)); }
	inline int32_t get_m_textAlignment_76() const { return ___m_textAlignment_76; }
	inline int32_t* get_address_of_m_textAlignment_76() { return &___m_textAlignment_76; }
	inline void set_m_textAlignment_76(int32_t value)
	{
		___m_textAlignment_76 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_77() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lineJustification_77)); }
	inline int32_t get_m_lineJustification_77() const { return ___m_lineJustification_77; }
	inline int32_t* get_address_of_m_lineJustification_77() { return &___m_lineJustification_77; }
	inline void set_m_lineJustification_77(int32_t value)
	{
		___m_lineJustification_77 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_78() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lineJustificationStack_78)); }
	inline TMP_XmlTagStack_1_t2125340843  get_m_lineJustificationStack_78() const { return ___m_lineJustificationStack_78; }
	inline TMP_XmlTagStack_1_t2125340843 * get_address_of_m_lineJustificationStack_78() { return &___m_lineJustificationStack_78; }
	inline void set_m_lineJustificationStack_78(TMP_XmlTagStack_1_t2125340843  value)
	{
		___m_lineJustificationStack_78 = value;
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_79() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_textContainerLocalCorners_79)); }
	inline Vector3U5BU5D_t1172311765* get_m_textContainerLocalCorners_79() const { return ___m_textContainerLocalCorners_79; }
	inline Vector3U5BU5D_t1172311765** get_address_of_m_textContainerLocalCorners_79() { return &___m_textContainerLocalCorners_79; }
	inline void set_m_textContainerLocalCorners_79(Vector3U5BU5D_t1172311765* value)
	{
		___m_textContainerLocalCorners_79 = value;
		Il2CppCodeGenWriteBarrier(&___m_textContainerLocalCorners_79, value);
	}

	inline static int32_t get_offset_of_m_isAlignmentEnumConverted_80() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isAlignmentEnumConverted_80)); }
	inline bool get_m_isAlignmentEnumConverted_80() const { return ___m_isAlignmentEnumConverted_80; }
	inline bool* get_address_of_m_isAlignmentEnumConverted_80() { return &___m_isAlignmentEnumConverted_80; }
	inline void set_m_isAlignmentEnumConverted_80(bool value)
	{
		___m_isAlignmentEnumConverted_80 = value;
	}

	inline static int32_t get_offset_of_m_characterSpacing_81() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_characterSpacing_81)); }
	inline float get_m_characterSpacing_81() const { return ___m_characterSpacing_81; }
	inline float* get_address_of_m_characterSpacing_81() { return &___m_characterSpacing_81; }
	inline void set_m_characterSpacing_81(float value)
	{
		___m_characterSpacing_81 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_82() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_cSpacing_82)); }
	inline float get_m_cSpacing_82() const { return ___m_cSpacing_82; }
	inline float* get_address_of_m_cSpacing_82() { return &___m_cSpacing_82; }
	inline void set_m_cSpacing_82(float value)
	{
		___m_cSpacing_82 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_83() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_monoSpacing_83)); }
	inline float get_m_monoSpacing_83() const { return ___m_monoSpacing_83; }
	inline float* get_address_of_m_monoSpacing_83() { return &___m_monoSpacing_83; }
	inline void set_m_monoSpacing_83(float value)
	{
		___m_monoSpacing_83 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_84() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_wordSpacing_84)); }
	inline float get_m_wordSpacing_84() const { return ___m_wordSpacing_84; }
	inline float* get_address_of_m_wordSpacing_84() { return &___m_wordSpacing_84; }
	inline void set_m_wordSpacing_84(float value)
	{
		___m_wordSpacing_84 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_85() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lineSpacing_85)); }
	inline float get_m_lineSpacing_85() const { return ___m_lineSpacing_85; }
	inline float* get_address_of_m_lineSpacing_85() { return &___m_lineSpacing_85; }
	inline void set_m_lineSpacing_85(float value)
	{
		___m_lineSpacing_85 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_86() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lineSpacingDelta_86)); }
	inline float get_m_lineSpacingDelta_86() const { return ___m_lineSpacingDelta_86; }
	inline float* get_address_of_m_lineSpacingDelta_86() { return &___m_lineSpacingDelta_86; }
	inline void set_m_lineSpacingDelta_86(float value)
	{
		___m_lineSpacingDelta_86 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_87() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lineHeight_87)); }
	inline float get_m_lineHeight_87() const { return ___m_lineHeight_87; }
	inline float* get_address_of_m_lineHeight_87() { return &___m_lineHeight_87; }
	inline void set_m_lineHeight_87(float value)
	{
		___m_lineHeight_87 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_88() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lineSpacingMax_88)); }
	inline float get_m_lineSpacingMax_88() const { return ___m_lineSpacingMax_88; }
	inline float* get_address_of_m_lineSpacingMax_88() { return &___m_lineSpacingMax_88; }
	inline void set_m_lineSpacingMax_88(float value)
	{
		___m_lineSpacingMax_88 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_89() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_paragraphSpacing_89)); }
	inline float get_m_paragraphSpacing_89() const { return ___m_paragraphSpacing_89; }
	inline float* get_address_of_m_paragraphSpacing_89() { return &___m_paragraphSpacing_89; }
	inline void set_m_paragraphSpacing_89(float value)
	{
		___m_paragraphSpacing_89 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_90() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_charWidthMaxAdj_90)); }
	inline float get_m_charWidthMaxAdj_90() const { return ___m_charWidthMaxAdj_90; }
	inline float* get_address_of_m_charWidthMaxAdj_90() { return &___m_charWidthMaxAdj_90; }
	inline void set_m_charWidthMaxAdj_90(float value)
	{
		___m_charWidthMaxAdj_90 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_91() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_charWidthAdjDelta_91)); }
	inline float get_m_charWidthAdjDelta_91() const { return ___m_charWidthAdjDelta_91; }
	inline float* get_address_of_m_charWidthAdjDelta_91() { return &___m_charWidthAdjDelta_91; }
	inline void set_m_charWidthAdjDelta_91(float value)
	{
		___m_charWidthAdjDelta_91 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_92() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_enableWordWrapping_92)); }
	inline bool get_m_enableWordWrapping_92() const { return ___m_enableWordWrapping_92; }
	inline bool* get_address_of_m_enableWordWrapping_92() { return &___m_enableWordWrapping_92; }
	inline void set_m_enableWordWrapping_92(bool value)
	{
		___m_enableWordWrapping_92 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_93() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isCharacterWrappingEnabled_93)); }
	inline bool get_m_isCharacterWrappingEnabled_93() const { return ___m_isCharacterWrappingEnabled_93; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_93() { return &___m_isCharacterWrappingEnabled_93; }
	inline void set_m_isCharacterWrappingEnabled_93(bool value)
	{
		___m_isCharacterWrappingEnabled_93 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_94() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isNonBreakingSpace_94)); }
	inline bool get_m_isNonBreakingSpace_94() const { return ___m_isNonBreakingSpace_94; }
	inline bool* get_address_of_m_isNonBreakingSpace_94() { return &___m_isNonBreakingSpace_94; }
	inline void set_m_isNonBreakingSpace_94(bool value)
	{
		___m_isNonBreakingSpace_94 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_95() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isIgnoringAlignment_95)); }
	inline bool get_m_isIgnoringAlignment_95() const { return ___m_isIgnoringAlignment_95; }
	inline bool* get_address_of_m_isIgnoringAlignment_95() { return &___m_isIgnoringAlignment_95; }
	inline void set_m_isIgnoringAlignment_95(bool value)
	{
		___m_isIgnoringAlignment_95 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_96() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_wordWrappingRatios_96)); }
	inline float get_m_wordWrappingRatios_96() const { return ___m_wordWrappingRatios_96; }
	inline float* get_address_of_m_wordWrappingRatios_96() { return &___m_wordWrappingRatios_96; }
	inline void set_m_wordWrappingRatios_96(float value)
	{
		___m_wordWrappingRatios_96 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_97() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_overflowMode_97)); }
	inline int32_t get_m_overflowMode_97() const { return ___m_overflowMode_97; }
	inline int32_t* get_address_of_m_overflowMode_97() { return &___m_overflowMode_97; }
	inline void set_m_overflowMode_97(int32_t value)
	{
		___m_overflowMode_97 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_98() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_firstOverflowCharacterIndex_98)); }
	inline int32_t get_m_firstOverflowCharacterIndex_98() const { return ___m_firstOverflowCharacterIndex_98; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_98() { return &___m_firstOverflowCharacterIndex_98; }
	inline void set_m_firstOverflowCharacterIndex_98(int32_t value)
	{
		___m_firstOverflowCharacterIndex_98 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_99() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_linkedTextComponent_99)); }
	inline TMP_Text_t1920000777 * get_m_linkedTextComponent_99() const { return ___m_linkedTextComponent_99; }
	inline TMP_Text_t1920000777 ** get_address_of_m_linkedTextComponent_99() { return &___m_linkedTextComponent_99; }
	inline void set_m_linkedTextComponent_99(TMP_Text_t1920000777 * value)
	{
		___m_linkedTextComponent_99 = value;
		Il2CppCodeGenWriteBarrier(&___m_linkedTextComponent_99, value);
	}

	inline static int32_t get_offset_of_m_isLinkedTextComponent_100() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isLinkedTextComponent_100)); }
	inline bool get_m_isLinkedTextComponent_100() const { return ___m_isLinkedTextComponent_100; }
	inline bool* get_address_of_m_isLinkedTextComponent_100() { return &___m_isLinkedTextComponent_100; }
	inline void set_m_isLinkedTextComponent_100(bool value)
	{
		___m_isLinkedTextComponent_100 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_101() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isTextTruncated_101)); }
	inline bool get_m_isTextTruncated_101() const { return ___m_isTextTruncated_101; }
	inline bool* get_address_of_m_isTextTruncated_101() { return &___m_isTextTruncated_101; }
	inline void set_m_isTextTruncated_101(bool value)
	{
		___m_isTextTruncated_101 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_102() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_enableKerning_102)); }
	inline bool get_m_enableKerning_102() const { return ___m_enableKerning_102; }
	inline bool* get_address_of_m_enableKerning_102() { return &___m_enableKerning_102; }
	inline void set_m_enableKerning_102(bool value)
	{
		___m_enableKerning_102 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_103() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_enableExtraPadding_103)); }
	inline bool get_m_enableExtraPadding_103() const { return ___m_enableExtraPadding_103; }
	inline bool* get_address_of_m_enableExtraPadding_103() { return &___m_enableExtraPadding_103; }
	inline void set_m_enableExtraPadding_103(bool value)
	{
		___m_enableExtraPadding_103 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_104() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___checkPaddingRequired_104)); }
	inline bool get_checkPaddingRequired_104() const { return ___checkPaddingRequired_104; }
	inline bool* get_address_of_checkPaddingRequired_104() { return &___checkPaddingRequired_104; }
	inline void set_checkPaddingRequired_104(bool value)
	{
		___checkPaddingRequired_104 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_105() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isRichText_105)); }
	inline bool get_m_isRichText_105() const { return ___m_isRichText_105; }
	inline bool* get_address_of_m_isRichText_105() { return &___m_isRichText_105; }
	inline void set_m_isRichText_105(bool value)
	{
		___m_isRichText_105 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_106() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_parseCtrlCharacters_106)); }
	inline bool get_m_parseCtrlCharacters_106() const { return ___m_parseCtrlCharacters_106; }
	inline bool* get_address_of_m_parseCtrlCharacters_106() { return &___m_parseCtrlCharacters_106; }
	inline void set_m_parseCtrlCharacters_106(bool value)
	{
		___m_parseCtrlCharacters_106 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_107() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isOverlay_107)); }
	inline bool get_m_isOverlay_107() const { return ___m_isOverlay_107; }
	inline bool* get_address_of_m_isOverlay_107() { return &___m_isOverlay_107; }
	inline void set_m_isOverlay_107(bool value)
	{
		___m_isOverlay_107 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_108() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isOrthographic_108)); }
	inline bool get_m_isOrthographic_108() const { return ___m_isOrthographic_108; }
	inline bool* get_address_of_m_isOrthographic_108() { return &___m_isOrthographic_108; }
	inline void set_m_isOrthographic_108(bool value)
	{
		___m_isOrthographic_108 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_109() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isCullingEnabled_109)); }
	inline bool get_m_isCullingEnabled_109() const { return ___m_isCullingEnabled_109; }
	inline bool* get_address_of_m_isCullingEnabled_109() { return &___m_isCullingEnabled_109; }
	inline void set_m_isCullingEnabled_109(bool value)
	{
		___m_isCullingEnabled_109 = value;
	}

	inline static int32_t get_offset_of_m_ignoreRectMaskCulling_110() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_ignoreRectMaskCulling_110)); }
	inline bool get_m_ignoreRectMaskCulling_110() const { return ___m_ignoreRectMaskCulling_110; }
	inline bool* get_address_of_m_ignoreRectMaskCulling_110() { return &___m_ignoreRectMaskCulling_110; }
	inline void set_m_ignoreRectMaskCulling_110(bool value)
	{
		___m_ignoreRectMaskCulling_110 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_111() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_ignoreCulling_111)); }
	inline bool get_m_ignoreCulling_111() const { return ___m_ignoreCulling_111; }
	inline bool* get_address_of_m_ignoreCulling_111() { return &___m_ignoreCulling_111; }
	inline void set_m_ignoreCulling_111(bool value)
	{
		___m_ignoreCulling_111 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_112() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_horizontalMapping_112)); }
	inline int32_t get_m_horizontalMapping_112() const { return ___m_horizontalMapping_112; }
	inline int32_t* get_address_of_m_horizontalMapping_112() { return &___m_horizontalMapping_112; }
	inline void set_m_horizontalMapping_112(int32_t value)
	{
		___m_horizontalMapping_112 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_113() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_verticalMapping_113)); }
	inline int32_t get_m_verticalMapping_113() const { return ___m_verticalMapping_113; }
	inline int32_t* get_address_of_m_verticalMapping_113() { return &___m_verticalMapping_113; }
	inline void set_m_verticalMapping_113(int32_t value)
	{
		___m_verticalMapping_113 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_114() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_uvLineOffset_114)); }
	inline float get_m_uvLineOffset_114() const { return ___m_uvLineOffset_114; }
	inline float* get_address_of_m_uvLineOffset_114() { return &___m_uvLineOffset_114; }
	inline void set_m_uvLineOffset_114(float value)
	{
		___m_uvLineOffset_114 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_115() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_renderMode_115)); }
	inline int32_t get_m_renderMode_115() const { return ___m_renderMode_115; }
	inline int32_t* get_address_of_m_renderMode_115() { return &___m_renderMode_115; }
	inline void set_m_renderMode_115(int32_t value)
	{
		___m_renderMode_115 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_116() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_geometrySortingOrder_116)); }
	inline int32_t get_m_geometrySortingOrder_116() const { return ___m_geometrySortingOrder_116; }
	inline int32_t* get_address_of_m_geometrySortingOrder_116() { return &___m_geometrySortingOrder_116; }
	inline void set_m_geometrySortingOrder_116(int32_t value)
	{
		___m_geometrySortingOrder_116 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_117() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_firstVisibleCharacter_117)); }
	inline int32_t get_m_firstVisibleCharacter_117() const { return ___m_firstVisibleCharacter_117; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_117() { return &___m_firstVisibleCharacter_117; }
	inline void set_m_firstVisibleCharacter_117(int32_t value)
	{
		___m_firstVisibleCharacter_117 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_118() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxVisibleCharacters_118)); }
	inline int32_t get_m_maxVisibleCharacters_118() const { return ___m_maxVisibleCharacters_118; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_118() { return &___m_maxVisibleCharacters_118; }
	inline void set_m_maxVisibleCharacters_118(int32_t value)
	{
		___m_maxVisibleCharacters_118 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_119() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxVisibleWords_119)); }
	inline int32_t get_m_maxVisibleWords_119() const { return ___m_maxVisibleWords_119; }
	inline int32_t* get_address_of_m_maxVisibleWords_119() { return &___m_maxVisibleWords_119; }
	inline void set_m_maxVisibleWords_119(int32_t value)
	{
		___m_maxVisibleWords_119 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_120() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxVisibleLines_120)); }
	inline int32_t get_m_maxVisibleLines_120() const { return ___m_maxVisibleLines_120; }
	inline int32_t* get_address_of_m_maxVisibleLines_120() { return &___m_maxVisibleLines_120; }
	inline void set_m_maxVisibleLines_120(int32_t value)
	{
		___m_maxVisibleLines_120 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_121() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_useMaxVisibleDescender_121)); }
	inline bool get_m_useMaxVisibleDescender_121() const { return ___m_useMaxVisibleDescender_121; }
	inline bool* get_address_of_m_useMaxVisibleDescender_121() { return &___m_useMaxVisibleDescender_121; }
	inline void set_m_useMaxVisibleDescender_121(bool value)
	{
		___m_useMaxVisibleDescender_121 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_122() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_pageToDisplay_122)); }
	inline int32_t get_m_pageToDisplay_122() const { return ___m_pageToDisplay_122; }
	inline int32_t* get_address_of_m_pageToDisplay_122() { return &___m_pageToDisplay_122; }
	inline void set_m_pageToDisplay_122(int32_t value)
	{
		___m_pageToDisplay_122 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_123() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isNewPage_123)); }
	inline bool get_m_isNewPage_123() const { return ___m_isNewPage_123; }
	inline bool* get_address_of_m_isNewPage_123() { return &___m_isNewPage_123; }
	inline void set_m_isNewPage_123(bool value)
	{
		___m_isNewPage_123 = value;
	}

	inline static int32_t get_offset_of_m_margin_124() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_margin_124)); }
	inline Vector4_t2243707581  get_m_margin_124() const { return ___m_margin_124; }
	inline Vector4_t2243707581 * get_address_of_m_margin_124() { return &___m_margin_124; }
	inline void set_m_margin_124(Vector4_t2243707581  value)
	{
		___m_margin_124 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_125() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_marginLeft_125)); }
	inline float get_m_marginLeft_125() const { return ___m_marginLeft_125; }
	inline float* get_address_of_m_marginLeft_125() { return &___m_marginLeft_125; }
	inline void set_m_marginLeft_125(float value)
	{
		___m_marginLeft_125 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_126() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_marginRight_126)); }
	inline float get_m_marginRight_126() const { return ___m_marginRight_126; }
	inline float* get_address_of_m_marginRight_126() { return &___m_marginRight_126; }
	inline void set_m_marginRight_126(float value)
	{
		___m_marginRight_126 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_127() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_marginWidth_127)); }
	inline float get_m_marginWidth_127() const { return ___m_marginWidth_127; }
	inline float* get_address_of_m_marginWidth_127() { return &___m_marginWidth_127; }
	inline void set_m_marginWidth_127(float value)
	{
		___m_marginWidth_127 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_128() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_marginHeight_128)); }
	inline float get_m_marginHeight_128() const { return ___m_marginHeight_128; }
	inline float* get_address_of_m_marginHeight_128() { return &___m_marginHeight_128; }
	inline void set_m_marginHeight_128(float value)
	{
		___m_marginHeight_128 = value;
	}

	inline static int32_t get_offset_of_m_width_129() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_width_129)); }
	inline float get_m_width_129() const { return ___m_width_129; }
	inline float* get_address_of_m_width_129() { return &___m_width_129; }
	inline void set_m_width_129(float value)
	{
		___m_width_129 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_130() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_textInfo_130)); }
	inline TMP_TextInfo_t2849466151 * get_m_textInfo_130() const { return ___m_textInfo_130; }
	inline TMP_TextInfo_t2849466151 ** get_address_of_m_textInfo_130() { return &___m_textInfo_130; }
	inline void set_m_textInfo_130(TMP_TextInfo_t2849466151 * value)
	{
		___m_textInfo_130 = value;
		Il2CppCodeGenWriteBarrier(&___m_textInfo_130, value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_131() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_havePropertiesChanged_131)); }
	inline bool get_m_havePropertiesChanged_131() const { return ___m_havePropertiesChanged_131; }
	inline bool* get_address_of_m_havePropertiesChanged_131() { return &___m_havePropertiesChanged_131; }
	inline void set_m_havePropertiesChanged_131(bool value)
	{
		___m_havePropertiesChanged_131 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_132() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isUsingLegacyAnimationComponent_132)); }
	inline bool get_m_isUsingLegacyAnimationComponent_132() const { return ___m_isUsingLegacyAnimationComponent_132; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_132() { return &___m_isUsingLegacyAnimationComponent_132; }
	inline void set_m_isUsingLegacyAnimationComponent_132(bool value)
	{
		___m_isUsingLegacyAnimationComponent_132 = value;
	}

	inline static int32_t get_offset_of_m_transform_133() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_transform_133)); }
	inline Transform_t3275118058 * get_m_transform_133() const { return ___m_transform_133; }
	inline Transform_t3275118058 ** get_address_of_m_transform_133() { return &___m_transform_133; }
	inline void set_m_transform_133(Transform_t3275118058 * value)
	{
		___m_transform_133 = value;
		Il2CppCodeGenWriteBarrier(&___m_transform_133, value);
	}

	inline static int32_t get_offset_of_m_rectTransform_134() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_rectTransform_134)); }
	inline RectTransform_t3349966182 * get_m_rectTransform_134() const { return ___m_rectTransform_134; }
	inline RectTransform_t3349966182 ** get_address_of_m_rectTransform_134() { return &___m_rectTransform_134; }
	inline void set_m_rectTransform_134(RectTransform_t3349966182 * value)
	{
		___m_rectTransform_134 = value;
		Il2CppCodeGenWriteBarrier(&___m_rectTransform_134, value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_135() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___U3CautoSizeTextContainerU3Ek__BackingField_135)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_135() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_135; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_135() { return &___U3CautoSizeTextContainerU3Ek__BackingField_135; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_135(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_135 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_136() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_autoSizeTextContainer_136)); }
	inline bool get_m_autoSizeTextContainer_136() const { return ___m_autoSizeTextContainer_136; }
	inline bool* get_address_of_m_autoSizeTextContainer_136() { return &___m_autoSizeTextContainer_136; }
	inline void set_m_autoSizeTextContainer_136(bool value)
	{
		___m_autoSizeTextContainer_136 = value;
	}

	inline static int32_t get_offset_of_m_mesh_137() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_mesh_137)); }
	inline Mesh_t1356156583 * get_m_mesh_137() const { return ___m_mesh_137; }
	inline Mesh_t1356156583 ** get_address_of_m_mesh_137() { return &___m_mesh_137; }
	inline void set_m_mesh_137(Mesh_t1356156583 * value)
	{
		___m_mesh_137 = value;
		Il2CppCodeGenWriteBarrier(&___m_mesh_137, value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_138() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isVolumetricText_138)); }
	inline bool get_m_isVolumetricText_138() const { return ___m_isVolumetricText_138; }
	inline bool* get_address_of_m_isVolumetricText_138() { return &___m_isVolumetricText_138; }
	inline void set_m_isVolumetricText_138(bool value)
	{
		___m_isVolumetricText_138 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_139() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_spriteAnimator_139)); }
	inline TMP_SpriteAnimator_t2347923044 * get_m_spriteAnimator_139() const { return ___m_spriteAnimator_139; }
	inline TMP_SpriteAnimator_t2347923044 ** get_address_of_m_spriteAnimator_139() { return &___m_spriteAnimator_139; }
	inline void set_m_spriteAnimator_139(TMP_SpriteAnimator_t2347923044 * value)
	{
		___m_spriteAnimator_139 = value;
		Il2CppCodeGenWriteBarrier(&___m_spriteAnimator_139, value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_140() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_flexibleHeight_140)); }
	inline float get_m_flexibleHeight_140() const { return ___m_flexibleHeight_140; }
	inline float* get_address_of_m_flexibleHeight_140() { return &___m_flexibleHeight_140; }
	inline void set_m_flexibleHeight_140(float value)
	{
		___m_flexibleHeight_140 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_141() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_flexibleWidth_141)); }
	inline float get_m_flexibleWidth_141() const { return ___m_flexibleWidth_141; }
	inline float* get_address_of_m_flexibleWidth_141() { return &___m_flexibleWidth_141; }
	inline void set_m_flexibleWidth_141(float value)
	{
		___m_flexibleWidth_141 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_142() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_minWidth_142)); }
	inline float get_m_minWidth_142() const { return ___m_minWidth_142; }
	inline float* get_address_of_m_minWidth_142() { return &___m_minWidth_142; }
	inline void set_m_minWidth_142(float value)
	{
		___m_minWidth_142 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_143() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_minHeight_143)); }
	inline float get_m_minHeight_143() const { return ___m_minHeight_143; }
	inline float* get_address_of_m_minHeight_143() { return &___m_minHeight_143; }
	inline void set_m_minHeight_143(float value)
	{
		___m_minHeight_143 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_144() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxWidth_144)); }
	inline float get_m_maxWidth_144() const { return ___m_maxWidth_144; }
	inline float* get_address_of_m_maxWidth_144() { return &___m_maxWidth_144; }
	inline void set_m_maxWidth_144(float value)
	{
		___m_maxWidth_144 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_145() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxHeight_145)); }
	inline float get_m_maxHeight_145() const { return ___m_maxHeight_145; }
	inline float* get_address_of_m_maxHeight_145() { return &___m_maxHeight_145; }
	inline void set_m_maxHeight_145(float value)
	{
		___m_maxHeight_145 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_146() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_LayoutElement_146)); }
	inline LayoutElement_t2808691390 * get_m_LayoutElement_146() const { return ___m_LayoutElement_146; }
	inline LayoutElement_t2808691390 ** get_address_of_m_LayoutElement_146() { return &___m_LayoutElement_146; }
	inline void set_m_LayoutElement_146(LayoutElement_t2808691390 * value)
	{
		___m_LayoutElement_146 = value;
		Il2CppCodeGenWriteBarrier(&___m_LayoutElement_146, value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_147() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_preferredWidth_147)); }
	inline float get_m_preferredWidth_147() const { return ___m_preferredWidth_147; }
	inline float* get_address_of_m_preferredWidth_147() { return &___m_preferredWidth_147; }
	inline void set_m_preferredWidth_147(float value)
	{
		___m_preferredWidth_147 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_148() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_renderedWidth_148)); }
	inline float get_m_renderedWidth_148() const { return ___m_renderedWidth_148; }
	inline float* get_address_of_m_renderedWidth_148() { return &___m_renderedWidth_148; }
	inline void set_m_renderedWidth_148(float value)
	{
		___m_renderedWidth_148 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_149() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isPreferredWidthDirty_149)); }
	inline bool get_m_isPreferredWidthDirty_149() const { return ___m_isPreferredWidthDirty_149; }
	inline bool* get_address_of_m_isPreferredWidthDirty_149() { return &___m_isPreferredWidthDirty_149; }
	inline void set_m_isPreferredWidthDirty_149(bool value)
	{
		___m_isPreferredWidthDirty_149 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_150() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_preferredHeight_150)); }
	inline float get_m_preferredHeight_150() const { return ___m_preferredHeight_150; }
	inline float* get_address_of_m_preferredHeight_150() { return &___m_preferredHeight_150; }
	inline void set_m_preferredHeight_150(float value)
	{
		___m_preferredHeight_150 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_151() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_renderedHeight_151)); }
	inline float get_m_renderedHeight_151() const { return ___m_renderedHeight_151; }
	inline float* get_address_of_m_renderedHeight_151() { return &___m_renderedHeight_151; }
	inline void set_m_renderedHeight_151(float value)
	{
		___m_renderedHeight_151 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_152() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isPreferredHeightDirty_152)); }
	inline bool get_m_isPreferredHeightDirty_152() const { return ___m_isPreferredHeightDirty_152; }
	inline bool* get_address_of_m_isPreferredHeightDirty_152() { return &___m_isPreferredHeightDirty_152; }
	inline void set_m_isPreferredHeightDirty_152(bool value)
	{
		___m_isPreferredHeightDirty_152 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_153() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isCalculatingPreferredValues_153)); }
	inline bool get_m_isCalculatingPreferredValues_153() const { return ___m_isCalculatingPreferredValues_153; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_153() { return &___m_isCalculatingPreferredValues_153; }
	inline void set_m_isCalculatingPreferredValues_153(bool value)
	{
		___m_isCalculatingPreferredValues_153 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_154() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_recursiveCount_154)); }
	inline int32_t get_m_recursiveCount_154() const { return ___m_recursiveCount_154; }
	inline int32_t* get_address_of_m_recursiveCount_154() { return &___m_recursiveCount_154; }
	inline void set_m_recursiveCount_154(int32_t value)
	{
		___m_recursiveCount_154 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_155() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_layoutPriority_155)); }
	inline int32_t get_m_layoutPriority_155() const { return ___m_layoutPriority_155; }
	inline int32_t* get_address_of_m_layoutPriority_155() { return &___m_layoutPriority_155; }
	inline void set_m_layoutPriority_155(int32_t value)
	{
		___m_layoutPriority_155 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_156() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isCalculateSizeRequired_156)); }
	inline bool get_m_isCalculateSizeRequired_156() const { return ___m_isCalculateSizeRequired_156; }
	inline bool* get_address_of_m_isCalculateSizeRequired_156() { return &___m_isCalculateSizeRequired_156; }
	inline void set_m_isCalculateSizeRequired_156(bool value)
	{
		___m_isCalculateSizeRequired_156 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_157() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isLayoutDirty_157)); }
	inline bool get_m_isLayoutDirty_157() const { return ___m_isLayoutDirty_157; }
	inline bool* get_address_of_m_isLayoutDirty_157() { return &___m_isLayoutDirty_157; }
	inline void set_m_isLayoutDirty_157(bool value)
	{
		___m_isLayoutDirty_157 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_158() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_verticesAlreadyDirty_158)); }
	inline bool get_m_verticesAlreadyDirty_158() const { return ___m_verticesAlreadyDirty_158; }
	inline bool* get_address_of_m_verticesAlreadyDirty_158() { return &___m_verticesAlreadyDirty_158; }
	inline void set_m_verticesAlreadyDirty_158(bool value)
	{
		___m_verticesAlreadyDirty_158 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_159() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_layoutAlreadyDirty_159)); }
	inline bool get_m_layoutAlreadyDirty_159() const { return ___m_layoutAlreadyDirty_159; }
	inline bool* get_address_of_m_layoutAlreadyDirty_159() { return &___m_layoutAlreadyDirty_159; }
	inline void set_m_layoutAlreadyDirty_159(bool value)
	{
		___m_layoutAlreadyDirty_159 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_160() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isAwake_160)); }
	inline bool get_m_isAwake_160() const { return ___m_isAwake_160; }
	inline bool* get_address_of_m_isAwake_160() { return &___m_isAwake_160; }
	inline void set_m_isAwake_160(bool value)
	{
		___m_isAwake_160 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_161() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isInputParsingRequired_161)); }
	inline bool get_m_isInputParsingRequired_161() const { return ___m_isInputParsingRequired_161; }
	inline bool* get_address_of_m_isInputParsingRequired_161() { return &___m_isInputParsingRequired_161; }
	inline void set_m_isInputParsingRequired_161(bool value)
	{
		___m_isInputParsingRequired_161 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_162() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_inputSource_162)); }
	inline int32_t get_m_inputSource_162() const { return ___m_inputSource_162; }
	inline int32_t* get_address_of_m_inputSource_162() { return &___m_inputSource_162; }
	inline void set_m_inputSource_162(int32_t value)
	{
		___m_inputSource_162 = value;
	}

	inline static int32_t get_offset_of_old_text_163() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___old_text_163)); }
	inline String_t* get_old_text_163() const { return ___old_text_163; }
	inline String_t** get_address_of_old_text_163() { return &___old_text_163; }
	inline void set_old_text_163(String_t* value)
	{
		___old_text_163 = value;
		Il2CppCodeGenWriteBarrier(&___old_text_163, value);
	}

	inline static int32_t get_offset_of_old_arg0_164() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___old_arg0_164)); }
	inline float get_old_arg0_164() const { return ___old_arg0_164; }
	inline float* get_address_of_old_arg0_164() { return &___old_arg0_164; }
	inline void set_old_arg0_164(float value)
	{
		___old_arg0_164 = value;
	}

	inline static int32_t get_offset_of_old_arg1_165() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___old_arg1_165)); }
	inline float get_old_arg1_165() const { return ___old_arg1_165; }
	inline float* get_address_of_old_arg1_165() { return &___old_arg1_165; }
	inline void set_old_arg1_165(float value)
	{
		___old_arg1_165 = value;
	}

	inline static int32_t get_offset_of_old_arg2_166() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___old_arg2_166)); }
	inline float get_old_arg2_166() const { return ___old_arg2_166; }
	inline float* get_address_of_old_arg2_166() { return &___old_arg2_166; }
	inline void set_old_arg2_166(float value)
	{
		___old_arg2_166 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_167() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontScale_167)); }
	inline float get_m_fontScale_167() const { return ___m_fontScale_167; }
	inline float* get_address_of_m_fontScale_167() { return &___m_fontScale_167; }
	inline void set_m_fontScale_167(float value)
	{
		___m_fontScale_167 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_168() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_fontScaleMultiplier_168)); }
	inline float get_m_fontScaleMultiplier_168() const { return ___m_fontScaleMultiplier_168; }
	inline float* get_address_of_m_fontScaleMultiplier_168() { return &___m_fontScaleMultiplier_168; }
	inline void set_m_fontScaleMultiplier_168(float value)
	{
		___m_fontScaleMultiplier_168 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_169() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_htmlTag_169)); }
	inline CharU5BU5D_t1328083999* get_m_htmlTag_169() const { return ___m_htmlTag_169; }
	inline CharU5BU5D_t1328083999** get_address_of_m_htmlTag_169() { return &___m_htmlTag_169; }
	inline void set_m_htmlTag_169(CharU5BU5D_t1328083999* value)
	{
		___m_htmlTag_169 = value;
		Il2CppCodeGenWriteBarrier(&___m_htmlTag_169, value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_170() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_xmlAttribute_170)); }
	inline XML_TagAttributeU5BU5D_t573465953* get_m_xmlAttribute_170() const { return ___m_xmlAttribute_170; }
	inline XML_TagAttributeU5BU5D_t573465953** get_address_of_m_xmlAttribute_170() { return &___m_xmlAttribute_170; }
	inline void set_m_xmlAttribute_170(XML_TagAttributeU5BU5D_t573465953* value)
	{
		___m_xmlAttribute_170 = value;
		Il2CppCodeGenWriteBarrier(&___m_xmlAttribute_170, value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_171() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_attributeParameterValues_171)); }
	inline SingleU5BU5D_t577127397* get_m_attributeParameterValues_171() const { return ___m_attributeParameterValues_171; }
	inline SingleU5BU5D_t577127397** get_address_of_m_attributeParameterValues_171() { return &___m_attributeParameterValues_171; }
	inline void set_m_attributeParameterValues_171(SingleU5BU5D_t577127397* value)
	{
		___m_attributeParameterValues_171 = value;
		Il2CppCodeGenWriteBarrier(&___m_attributeParameterValues_171, value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_172() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___tag_LineIndent_172)); }
	inline float get_tag_LineIndent_172() const { return ___tag_LineIndent_172; }
	inline float* get_address_of_tag_LineIndent_172() { return &___tag_LineIndent_172; }
	inline void set_tag_LineIndent_172(float value)
	{
		___tag_LineIndent_172 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_173() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___tag_Indent_173)); }
	inline float get_tag_Indent_173() const { return ___tag_Indent_173; }
	inline float* get_address_of_tag_Indent_173() { return &___tag_Indent_173; }
	inline void set_tag_Indent_173(float value)
	{
		___tag_Indent_173 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_174() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_indentStack_174)); }
	inline TMP_XmlTagStack_1_t2735062451  get_m_indentStack_174() const { return ___m_indentStack_174; }
	inline TMP_XmlTagStack_1_t2735062451 * get_address_of_m_indentStack_174() { return &___m_indentStack_174; }
	inline void set_m_indentStack_174(TMP_XmlTagStack_1_t2735062451  value)
	{
		___m_indentStack_174 = value;
	}

	inline static int32_t get_offset_of_tag_NoParsing_175() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___tag_NoParsing_175)); }
	inline bool get_tag_NoParsing_175() const { return ___tag_NoParsing_175; }
	inline bool* get_address_of_tag_NoParsing_175() { return &___tag_NoParsing_175; }
	inline void set_tag_NoParsing_175(bool value)
	{
		___tag_NoParsing_175 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_176() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isParsingText_176)); }
	inline bool get_m_isParsingText_176() const { return ___m_isParsingText_176; }
	inline bool* get_address_of_m_isParsingText_176() { return &___m_isParsingText_176; }
	inline void set_m_isParsingText_176(bool value)
	{
		___m_isParsingText_176 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_177() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_FXMatrix_177)); }
	inline Matrix4x4_t2933234003  get_m_FXMatrix_177() const { return ___m_FXMatrix_177; }
	inline Matrix4x4_t2933234003 * get_address_of_m_FXMatrix_177() { return &___m_FXMatrix_177; }
	inline void set_m_FXMatrix_177(Matrix4x4_t2933234003  value)
	{
		___m_FXMatrix_177 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_178() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_isFXMatrixSet_178)); }
	inline bool get_m_isFXMatrixSet_178() const { return ___m_isFXMatrixSet_178; }
	inline bool* get_address_of_m_isFXMatrixSet_178() { return &___m_isFXMatrixSet_178; }
	inline void set_m_isFXMatrixSet_178(bool value)
	{
		___m_isFXMatrixSet_178 = value;
	}

	inline static int32_t get_offset_of_m_char_buffer_179() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_char_buffer_179)); }
	inline Int32U5BU5D_t3030399641* get_m_char_buffer_179() const { return ___m_char_buffer_179; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_char_buffer_179() { return &___m_char_buffer_179; }
	inline void set_m_char_buffer_179(Int32U5BU5D_t3030399641* value)
	{
		___m_char_buffer_179 = value;
		Il2CppCodeGenWriteBarrier(&___m_char_buffer_179, value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_180() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_internalCharacterInfo_180)); }
	inline TMP_CharacterInfoU5BU5D_t602810366* get_m_internalCharacterInfo_180() const { return ___m_internalCharacterInfo_180; }
	inline TMP_CharacterInfoU5BU5D_t602810366** get_address_of_m_internalCharacterInfo_180() { return &___m_internalCharacterInfo_180; }
	inline void set_m_internalCharacterInfo_180(TMP_CharacterInfoU5BU5D_t602810366* value)
	{
		___m_internalCharacterInfo_180 = value;
		Il2CppCodeGenWriteBarrier(&___m_internalCharacterInfo_180, value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_181() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_input_CharArray_181)); }
	inline CharU5BU5D_t1328083999* get_m_input_CharArray_181() const { return ___m_input_CharArray_181; }
	inline CharU5BU5D_t1328083999** get_address_of_m_input_CharArray_181() { return &___m_input_CharArray_181; }
	inline void set_m_input_CharArray_181(CharU5BU5D_t1328083999* value)
	{
		___m_input_CharArray_181 = value;
		Il2CppCodeGenWriteBarrier(&___m_input_CharArray_181, value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_182() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_charArray_Length_182)); }
	inline int32_t get_m_charArray_Length_182() const { return ___m_charArray_Length_182; }
	inline int32_t* get_address_of_m_charArray_Length_182() { return &___m_charArray_Length_182; }
	inline void set_m_charArray_Length_182(int32_t value)
	{
		___m_charArray_Length_182 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_183() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_totalCharacterCount_183)); }
	inline int32_t get_m_totalCharacterCount_183() const { return ___m_totalCharacterCount_183; }
	inline int32_t* get_address_of_m_totalCharacterCount_183() { return &___m_totalCharacterCount_183; }
	inline void set_m_totalCharacterCount_183(int32_t value)
	{
		___m_totalCharacterCount_183 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_184() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_SavedWordWrapState_184)); }
	inline WordWrapState_t433984875  get_m_SavedWordWrapState_184() const { return ___m_SavedWordWrapState_184; }
	inline WordWrapState_t433984875 * get_address_of_m_SavedWordWrapState_184() { return &___m_SavedWordWrapState_184; }
	inline void set_m_SavedWordWrapState_184(WordWrapState_t433984875  value)
	{
		___m_SavedWordWrapState_184 = value;
	}

	inline static int32_t get_offset_of_m_SavedLineState_185() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_SavedLineState_185)); }
	inline WordWrapState_t433984875  get_m_SavedLineState_185() const { return ___m_SavedLineState_185; }
	inline WordWrapState_t433984875 * get_address_of_m_SavedLineState_185() { return &___m_SavedLineState_185; }
	inline void set_m_SavedLineState_185(WordWrapState_t433984875  value)
	{
		___m_SavedLineState_185 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_186() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_characterCount_186)); }
	inline int32_t get_m_characterCount_186() const { return ___m_characterCount_186; }
	inline int32_t* get_address_of_m_characterCount_186() { return &___m_characterCount_186; }
	inline void set_m_characterCount_186(int32_t value)
	{
		___m_characterCount_186 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_187() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_firstCharacterOfLine_187)); }
	inline int32_t get_m_firstCharacterOfLine_187() const { return ___m_firstCharacterOfLine_187; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_187() { return &___m_firstCharacterOfLine_187; }
	inline void set_m_firstCharacterOfLine_187(int32_t value)
	{
		___m_firstCharacterOfLine_187 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_188() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_firstVisibleCharacterOfLine_188)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_188() const { return ___m_firstVisibleCharacterOfLine_188; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_188() { return &___m_firstVisibleCharacterOfLine_188; }
	inline void set_m_firstVisibleCharacterOfLine_188(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_188 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_189() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lastCharacterOfLine_189)); }
	inline int32_t get_m_lastCharacterOfLine_189() const { return ___m_lastCharacterOfLine_189; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_189() { return &___m_lastCharacterOfLine_189; }
	inline void set_m_lastCharacterOfLine_189(int32_t value)
	{
		___m_lastCharacterOfLine_189 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_190() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lastVisibleCharacterOfLine_190)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_190() const { return ___m_lastVisibleCharacterOfLine_190; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_190() { return &___m_lastVisibleCharacterOfLine_190; }
	inline void set_m_lastVisibleCharacterOfLine_190(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_190 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_191() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lineNumber_191)); }
	inline int32_t get_m_lineNumber_191() const { return ___m_lineNumber_191; }
	inline int32_t* get_address_of_m_lineNumber_191() { return &___m_lineNumber_191; }
	inline void set_m_lineNumber_191(int32_t value)
	{
		___m_lineNumber_191 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_192() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lineVisibleCharacterCount_192)); }
	inline int32_t get_m_lineVisibleCharacterCount_192() const { return ___m_lineVisibleCharacterCount_192; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_192() { return &___m_lineVisibleCharacterCount_192; }
	inline void set_m_lineVisibleCharacterCount_192(int32_t value)
	{
		___m_lineVisibleCharacterCount_192 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_193() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_pageNumber_193)); }
	inline int32_t get_m_pageNumber_193() const { return ___m_pageNumber_193; }
	inline int32_t* get_address_of_m_pageNumber_193() { return &___m_pageNumber_193; }
	inline void set_m_pageNumber_193(int32_t value)
	{
		___m_pageNumber_193 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_194() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxAscender_194)); }
	inline float get_m_maxAscender_194() const { return ___m_maxAscender_194; }
	inline float* get_address_of_m_maxAscender_194() { return &___m_maxAscender_194; }
	inline void set_m_maxAscender_194(float value)
	{
		___m_maxAscender_194 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_195() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxCapHeight_195)); }
	inline float get_m_maxCapHeight_195() const { return ___m_maxCapHeight_195; }
	inline float* get_address_of_m_maxCapHeight_195() { return &___m_maxCapHeight_195; }
	inline void set_m_maxCapHeight_195(float value)
	{
		___m_maxCapHeight_195 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_196() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxDescender_196)); }
	inline float get_m_maxDescender_196() const { return ___m_maxDescender_196; }
	inline float* get_address_of_m_maxDescender_196() { return &___m_maxDescender_196; }
	inline void set_m_maxDescender_196(float value)
	{
		___m_maxDescender_196 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_197() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxLineAscender_197)); }
	inline float get_m_maxLineAscender_197() const { return ___m_maxLineAscender_197; }
	inline float* get_address_of_m_maxLineAscender_197() { return &___m_maxLineAscender_197; }
	inline void set_m_maxLineAscender_197(float value)
	{
		___m_maxLineAscender_197 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_198() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_maxLineDescender_198)); }
	inline float get_m_maxLineDescender_198() const { return ___m_maxLineDescender_198; }
	inline float* get_address_of_m_maxLineDescender_198() { return &___m_maxLineDescender_198; }
	inline void set_m_maxLineDescender_198(float value)
	{
		___m_maxLineDescender_198 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_199() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_startOfLineAscender_199)); }
	inline float get_m_startOfLineAscender_199() const { return ___m_startOfLineAscender_199; }
	inline float* get_address_of_m_startOfLineAscender_199() { return &___m_startOfLineAscender_199; }
	inline void set_m_startOfLineAscender_199(float value)
	{
		___m_startOfLineAscender_199 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_200() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_lineOffset_200)); }
	inline float get_m_lineOffset_200() const { return ___m_lineOffset_200; }
	inline float* get_address_of_m_lineOffset_200() { return &___m_lineOffset_200; }
	inline void set_m_lineOffset_200(float value)
	{
		___m_lineOffset_200 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_201() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_meshExtents_201)); }
	inline Extents_t3018556803  get_m_meshExtents_201() const { return ___m_meshExtents_201; }
	inline Extents_t3018556803 * get_address_of_m_meshExtents_201() { return &___m_meshExtents_201; }
	inline void set_m_meshExtents_201(Extents_t3018556803  value)
	{
		___m_meshExtents_201 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_202() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_htmlColor_202)); }
	inline Color32_t874517518  get_m_htmlColor_202() const { return ___m_htmlColor_202; }
	inline Color32_t874517518 * get_address_of_m_htmlColor_202() { return &___m_htmlColor_202; }
	inline void set_m_htmlColor_202(Color32_t874517518  value)
	{
		___m_htmlColor_202 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_203() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_colorStack_203)); }
	inline TMP_XmlTagStack_1_t1533070037  get_m_colorStack_203() const { return ___m_colorStack_203; }
	inline TMP_XmlTagStack_1_t1533070037 * get_address_of_m_colorStack_203() { return &___m_colorStack_203; }
	inline void set_m_colorStack_203(TMP_XmlTagStack_1_t1533070037  value)
	{
		___m_colorStack_203 = value;
	}

	inline static int32_t get_offset_of_m_underlineColorStack_204() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_underlineColorStack_204)); }
	inline TMP_XmlTagStack_1_t1533070037  get_m_underlineColorStack_204() const { return ___m_underlineColorStack_204; }
	inline TMP_XmlTagStack_1_t1533070037 * get_address_of_m_underlineColorStack_204() { return &___m_underlineColorStack_204; }
	inline void set_m_underlineColorStack_204(TMP_XmlTagStack_1_t1533070037  value)
	{
		___m_underlineColorStack_204 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_205() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_strikethroughColorStack_205)); }
	inline TMP_XmlTagStack_1_t1533070037  get_m_strikethroughColorStack_205() const { return ___m_strikethroughColorStack_205; }
	inline TMP_XmlTagStack_1_t1533070037 * get_address_of_m_strikethroughColorStack_205() { return &___m_strikethroughColorStack_205; }
	inline void set_m_strikethroughColorStack_205(TMP_XmlTagStack_1_t1533070037  value)
	{
		___m_strikethroughColorStack_205 = value;
	}

	inline static int32_t get_offset_of_m_highlightColorStack_206() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_highlightColorStack_206)); }
	inline TMP_XmlTagStack_1_t1533070037  get_m_highlightColorStack_206() const { return ___m_highlightColorStack_206; }
	inline TMP_XmlTagStack_1_t1533070037 * get_address_of_m_highlightColorStack_206() { return &___m_highlightColorStack_206; }
	inline void set_m_highlightColorStack_206(TMP_XmlTagStack_1_t1533070037  value)
	{
		___m_highlightColorStack_206 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_207() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_tabSpacing_207)); }
	inline float get_m_tabSpacing_207() const { return ___m_tabSpacing_207; }
	inline float* get_address_of_m_tabSpacing_207() { return &___m_tabSpacing_207; }
	inline void set_m_tabSpacing_207(float value)
	{
		___m_tabSpacing_207 = value;
	}

	inline static int32_t get_offset_of_m_spacing_208() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_spacing_208)); }
	inline float get_m_spacing_208() const { return ___m_spacing_208; }
	inline float* get_address_of_m_spacing_208() { return &___m_spacing_208; }
	inline void set_m_spacing_208(float value)
	{
		___m_spacing_208 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_209() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_styleStack_209)); }
	inline TMP_XmlTagStack_1_t2730429967  get_m_styleStack_209() const { return ___m_styleStack_209; }
	inline TMP_XmlTagStack_1_t2730429967 * get_address_of_m_styleStack_209() { return &___m_styleStack_209; }
	inline void set_m_styleStack_209(TMP_XmlTagStack_1_t2730429967  value)
	{
		___m_styleStack_209 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_210() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_actionStack_210)); }
	inline TMP_XmlTagStack_1_t2730429967  get_m_actionStack_210() const { return ___m_actionStack_210; }
	inline TMP_XmlTagStack_1_t2730429967 * get_address_of_m_actionStack_210() { return &___m_actionStack_210; }
	inline void set_m_actionStack_210(TMP_XmlTagStack_1_t2730429967  value)
	{
		___m_actionStack_210 = value;
	}

	inline static int32_t get_offset_of_m_padding_211() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_padding_211)); }
	inline float get_m_padding_211() const { return ___m_padding_211; }
	inline float* get_address_of_m_padding_211() { return &___m_padding_211; }
	inline void set_m_padding_211(float value)
	{
		___m_padding_211 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_212() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_baselineOffset_212)); }
	inline float get_m_baselineOffset_212() const { return ___m_baselineOffset_212; }
	inline float* get_address_of_m_baselineOffset_212() { return &___m_baselineOffset_212; }
	inline void set_m_baselineOffset_212(float value)
	{
		___m_baselineOffset_212 = value;
	}

	inline static int32_t get_offset_of_m_xAdvance_213() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_xAdvance_213)); }
	inline float get_m_xAdvance_213() const { return ___m_xAdvance_213; }
	inline float* get_address_of_m_xAdvance_213() { return &___m_xAdvance_213; }
	inline void set_m_xAdvance_213(float value)
	{
		___m_xAdvance_213 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_214() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_textElementType_214)); }
	inline int32_t get_m_textElementType_214() const { return ___m_textElementType_214; }
	inline int32_t* get_address_of_m_textElementType_214() { return &___m_textElementType_214; }
	inline void set_m_textElementType_214(int32_t value)
	{
		___m_textElementType_214 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_215() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_cached_TextElement_215)); }
	inline TMP_TextElement_t2285620223 * get_m_cached_TextElement_215() const { return ___m_cached_TextElement_215; }
	inline TMP_TextElement_t2285620223 ** get_address_of_m_cached_TextElement_215() { return &___m_cached_TextElement_215; }
	inline void set_m_cached_TextElement_215(TMP_TextElement_t2285620223 * value)
	{
		___m_cached_TextElement_215 = value;
		Il2CppCodeGenWriteBarrier(&___m_cached_TextElement_215, value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_GlyphInfo_216() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_cached_Underline_GlyphInfo_216)); }
	inline TMP_Glyph_t909793902 * get_m_cached_Underline_GlyphInfo_216() const { return ___m_cached_Underline_GlyphInfo_216; }
	inline TMP_Glyph_t909793902 ** get_address_of_m_cached_Underline_GlyphInfo_216() { return &___m_cached_Underline_GlyphInfo_216; }
	inline void set_m_cached_Underline_GlyphInfo_216(TMP_Glyph_t909793902 * value)
	{
		___m_cached_Underline_GlyphInfo_216 = value;
		Il2CppCodeGenWriteBarrier(&___m_cached_Underline_GlyphInfo_216, value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_GlyphInfo_217() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_cached_Ellipsis_GlyphInfo_217)); }
	inline TMP_Glyph_t909793902 * get_m_cached_Ellipsis_GlyphInfo_217() const { return ___m_cached_Ellipsis_GlyphInfo_217; }
	inline TMP_Glyph_t909793902 ** get_address_of_m_cached_Ellipsis_GlyphInfo_217() { return &___m_cached_Ellipsis_GlyphInfo_217; }
	inline void set_m_cached_Ellipsis_GlyphInfo_217(TMP_Glyph_t909793902 * value)
	{
		___m_cached_Ellipsis_GlyphInfo_217 = value;
		Il2CppCodeGenWriteBarrier(&___m_cached_Ellipsis_GlyphInfo_217, value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_218() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_defaultSpriteAsset_218)); }
	inline TMP_SpriteAsset_t2641813093 * get_m_defaultSpriteAsset_218() const { return ___m_defaultSpriteAsset_218; }
	inline TMP_SpriteAsset_t2641813093 ** get_address_of_m_defaultSpriteAsset_218() { return &___m_defaultSpriteAsset_218; }
	inline void set_m_defaultSpriteAsset_218(TMP_SpriteAsset_t2641813093 * value)
	{
		___m_defaultSpriteAsset_218 = value;
		Il2CppCodeGenWriteBarrier(&___m_defaultSpriteAsset_218, value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_219() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_currentSpriteAsset_219)); }
	inline TMP_SpriteAsset_t2641813093 * get_m_currentSpriteAsset_219() const { return ___m_currentSpriteAsset_219; }
	inline TMP_SpriteAsset_t2641813093 ** get_address_of_m_currentSpriteAsset_219() { return &___m_currentSpriteAsset_219; }
	inline void set_m_currentSpriteAsset_219(TMP_SpriteAsset_t2641813093 * value)
	{
		___m_currentSpriteAsset_219 = value;
		Il2CppCodeGenWriteBarrier(&___m_currentSpriteAsset_219, value);
	}

	inline static int32_t get_offset_of_m_spriteCount_220() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_spriteCount_220)); }
	inline int32_t get_m_spriteCount_220() const { return ___m_spriteCount_220; }
	inline int32_t* get_address_of_m_spriteCount_220() { return &___m_spriteCount_220; }
	inline void set_m_spriteCount_220(int32_t value)
	{
		___m_spriteCount_220 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_221() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_spriteIndex_221)); }
	inline int32_t get_m_spriteIndex_221() const { return ___m_spriteIndex_221; }
	inline int32_t* get_address_of_m_spriteIndex_221() { return &___m_spriteIndex_221; }
	inline void set_m_spriteIndex_221(int32_t value)
	{
		___m_spriteIndex_221 = value;
	}

	inline static int32_t get_offset_of_m_inlineGraphics_222() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_inlineGraphics_222)); }
	inline InlineGraphicManager_t2038767860 * get_m_inlineGraphics_222() const { return ___m_inlineGraphics_222; }
	inline InlineGraphicManager_t2038767860 ** get_address_of_m_inlineGraphics_222() { return &___m_inlineGraphics_222; }
	inline void set_m_inlineGraphics_222(InlineGraphicManager_t2038767860 * value)
	{
		___m_inlineGraphics_222 = value;
		Il2CppCodeGenWriteBarrier(&___m_inlineGraphics_222, value);
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_223() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_spriteAnimationID_223)); }
	inline int32_t get_m_spriteAnimationID_223() const { return ___m_spriteAnimationID_223; }
	inline int32_t* get_address_of_m_spriteAnimationID_223() { return &___m_spriteAnimationID_223; }
	inline void set_m_spriteAnimationID_223(int32_t value)
	{
		___m_spriteAnimationID_223 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_224() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___m_ignoreActiveState_224)); }
	inline bool get_m_ignoreActiveState_224() const { return ___m_ignoreActiveState_224; }
	inline bool* get_address_of_m_ignoreActiveState_224() { return &___m_ignoreActiveState_224; }
	inline void set_m_ignoreActiveState_224(bool value)
	{
		___m_ignoreActiveState_224 = value;
	}

	inline static int32_t get_offset_of_k_Power_225() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777, ___k_Power_225)); }
	inline SingleU5BU5D_t577127397* get_k_Power_225() const { return ___k_Power_225; }
	inline SingleU5BU5D_t577127397** get_address_of_k_Power_225() { return &___k_Power_225; }
	inline void set_k_Power_225(SingleU5BU5D_t577127397* value)
	{
		___k_Power_225 = value;
		Il2CppCodeGenWriteBarrier(&___k_Power_225, value);
	}
};

struct TMP_Text_t1920000777_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t874517518  ___s_colorWhite_45;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t2243707579  ___k_LargePositiveVector2_226;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t2243707579  ___k_LargeNegativeVector2_227;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_228;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_229;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_230;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_231;

public:
	inline static int32_t get_offset_of_s_colorWhite_45() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777_StaticFields, ___s_colorWhite_45)); }
	inline Color32_t874517518  get_s_colorWhite_45() const { return ___s_colorWhite_45; }
	inline Color32_t874517518 * get_address_of_s_colorWhite_45() { return &___s_colorWhite_45; }
	inline void set_s_colorWhite_45(Color32_t874517518  value)
	{
		___s_colorWhite_45 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_226() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777_StaticFields, ___k_LargePositiveVector2_226)); }
	inline Vector2_t2243707579  get_k_LargePositiveVector2_226() const { return ___k_LargePositiveVector2_226; }
	inline Vector2_t2243707579 * get_address_of_k_LargePositiveVector2_226() { return &___k_LargePositiveVector2_226; }
	inline void set_k_LargePositiveVector2_226(Vector2_t2243707579  value)
	{
		___k_LargePositiveVector2_226 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_227() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777_StaticFields, ___k_LargeNegativeVector2_227)); }
	inline Vector2_t2243707579  get_k_LargeNegativeVector2_227() const { return ___k_LargeNegativeVector2_227; }
	inline Vector2_t2243707579 * get_address_of_k_LargeNegativeVector2_227() { return &___k_LargeNegativeVector2_227; }
	inline void set_k_LargeNegativeVector2_227(Vector2_t2243707579  value)
	{
		___k_LargeNegativeVector2_227 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_228() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777_StaticFields, ___k_LargePositiveFloat_228)); }
	inline float get_k_LargePositiveFloat_228() const { return ___k_LargePositiveFloat_228; }
	inline float* get_address_of_k_LargePositiveFloat_228() { return &___k_LargePositiveFloat_228; }
	inline void set_k_LargePositiveFloat_228(float value)
	{
		___k_LargePositiveFloat_228 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_229() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777_StaticFields, ___k_LargeNegativeFloat_229)); }
	inline float get_k_LargeNegativeFloat_229() const { return ___k_LargeNegativeFloat_229; }
	inline float* get_address_of_k_LargeNegativeFloat_229() { return &___k_LargeNegativeFloat_229; }
	inline void set_k_LargeNegativeFloat_229(float value)
	{
		___k_LargeNegativeFloat_229 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_230() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777_StaticFields, ___k_LargePositiveInt_230)); }
	inline int32_t get_k_LargePositiveInt_230() const { return ___k_LargePositiveInt_230; }
	inline int32_t* get_address_of_k_LargePositiveInt_230() { return &___k_LargePositiveInt_230; }
	inline void set_k_LargePositiveInt_230(int32_t value)
	{
		___k_LargePositiveInt_230 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_231() { return static_cast<int32_t>(offsetof(TMP_Text_t1920000777_StaticFields, ___k_LargeNegativeInt_231)); }
	inline int32_t get_k_LargeNegativeInt_231() const { return ___k_LargeNegativeInt_231; }
	inline int32_t* get_address_of_k_LargeNegativeInt_231() { return &___k_LargeNegativeInt_231; }
	inline void set_k_LargeNegativeInt_231(int32_t value)
	{
		___k_LargeNegativeInt_231 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
