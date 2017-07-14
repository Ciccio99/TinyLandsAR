#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_Asset1084708044.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_FontAsset_F2622056438.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_FontCreationSet1093397046.h"

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;
// TMPro.FaceInfo
struct FaceInfo_t3239700425;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<TMPro.TMP_Glyph>
struct List_1_t278915034;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Glyph>
struct Dictionary_2_t4212586833;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.KerningPair>
struct Dictionary_2_t585579557;
// TMPro.KerningTable
struct KerningTable_t2970824110;
// TMPro.KerningPair
struct KerningPair_t1577753922;
// System.Collections.Generic.List`1<TMPro.TMP_FontAsset>
struct List_1_t1899541111;
// TMPro.TMP_FontWeights[]
struct TMP_FontWeightsU5BU5D_t3725552155;
// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_FontAsset
struct  TMP_FontAsset_t2530419979  : public TMP_Asset_t1084708044
{
public:
	// TMPro.TMP_FontAsset/FontAssetTypes TMPro.TMP_FontAsset::fontAssetType
	int32_t ___fontAssetType_6;
	// TMPro.FaceInfo TMPro.TMP_FontAsset::m_fontInfo
	FaceInfo_t3239700425 * ___m_fontInfo_7;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::atlas
	Texture2D_t3542995729 * ___atlas_8;
	// System.Collections.Generic.List`1<TMPro.TMP_Glyph> TMPro.TMP_FontAsset::m_glyphInfoList
	List_1_t278915034 * ___m_glyphInfoList_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Glyph> TMPro.TMP_FontAsset::m_characterDictionary
	Dictionary_2_t4212586833 * ___m_characterDictionary_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.KerningPair> TMPro.TMP_FontAsset::m_kerningDictionary
	Dictionary_2_t585579557 * ___m_kerningDictionary_11;
	// TMPro.KerningTable TMPro.TMP_FontAsset::m_kerningInfo
	KerningTable_t2970824110 * ___m_kerningInfo_12;
	// TMPro.KerningPair TMPro.TMP_FontAsset::m_kerningPair
	KerningPair_t1577753922 * ___m_kerningPair_13;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::fallbackFontAssets
	List_1_t1899541111 * ___fallbackFontAssets_14;
	// TMPro.FontCreationSetting TMPro.TMP_FontAsset::fontCreationSettings
	FontCreationSetting_t1093397046  ___fontCreationSettings_15;
	// TMPro.TMP_FontWeights[] TMPro.TMP_FontAsset::fontWeights
	TMP_FontWeightsU5BU5D_t3725552155* ___fontWeights_16;
	// System.Int32[] TMPro.TMP_FontAsset::m_characterSet
	Int32U5BU5D_t3030399641* ___m_characterSet_17;
	// System.Single TMPro.TMP_FontAsset::normalStyle
	float ___normalStyle_18;
	// System.Single TMPro.TMP_FontAsset::normalSpacingOffset
	float ___normalSpacingOffset_19;
	// System.Single TMPro.TMP_FontAsset::boldStyle
	float ___boldStyle_20;
	// System.Single TMPro.TMP_FontAsset::boldSpacing
	float ___boldSpacing_21;
	// System.Byte TMPro.TMP_FontAsset::italicStyle
	uint8_t ___italicStyle_22;
	// System.Byte TMPro.TMP_FontAsset::tabSize
	uint8_t ___tabSize_23;
	// System.Byte TMPro.TMP_FontAsset::m_oldTabSize
	uint8_t ___m_oldTabSize_24;

public:
	inline static int32_t get_offset_of_fontAssetType_6() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___fontAssetType_6)); }
	inline int32_t get_fontAssetType_6() const { return ___fontAssetType_6; }
	inline int32_t* get_address_of_fontAssetType_6() { return &___fontAssetType_6; }
	inline void set_fontAssetType_6(int32_t value)
	{
		___fontAssetType_6 = value;
	}

	inline static int32_t get_offset_of_m_fontInfo_7() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___m_fontInfo_7)); }
	inline FaceInfo_t3239700425 * get_m_fontInfo_7() const { return ___m_fontInfo_7; }
	inline FaceInfo_t3239700425 ** get_address_of_m_fontInfo_7() { return &___m_fontInfo_7; }
	inline void set_m_fontInfo_7(FaceInfo_t3239700425 * value)
	{
		___m_fontInfo_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontInfo_7, value);
	}

	inline static int32_t get_offset_of_atlas_8() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___atlas_8)); }
	inline Texture2D_t3542995729 * get_atlas_8() const { return ___atlas_8; }
	inline Texture2D_t3542995729 ** get_address_of_atlas_8() { return &___atlas_8; }
	inline void set_atlas_8(Texture2D_t3542995729 * value)
	{
		___atlas_8 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_8, value);
	}

	inline static int32_t get_offset_of_m_glyphInfoList_9() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___m_glyphInfoList_9)); }
	inline List_1_t278915034 * get_m_glyphInfoList_9() const { return ___m_glyphInfoList_9; }
	inline List_1_t278915034 ** get_address_of_m_glyphInfoList_9() { return &___m_glyphInfoList_9; }
	inline void set_m_glyphInfoList_9(List_1_t278915034 * value)
	{
		___m_glyphInfoList_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_glyphInfoList_9, value);
	}

	inline static int32_t get_offset_of_m_characterDictionary_10() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___m_characterDictionary_10)); }
	inline Dictionary_2_t4212586833 * get_m_characterDictionary_10() const { return ___m_characterDictionary_10; }
	inline Dictionary_2_t4212586833 ** get_address_of_m_characterDictionary_10() { return &___m_characterDictionary_10; }
	inline void set_m_characterDictionary_10(Dictionary_2_t4212586833 * value)
	{
		___m_characterDictionary_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_characterDictionary_10, value);
	}

	inline static int32_t get_offset_of_m_kerningDictionary_11() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___m_kerningDictionary_11)); }
	inline Dictionary_2_t585579557 * get_m_kerningDictionary_11() const { return ___m_kerningDictionary_11; }
	inline Dictionary_2_t585579557 ** get_address_of_m_kerningDictionary_11() { return &___m_kerningDictionary_11; }
	inline void set_m_kerningDictionary_11(Dictionary_2_t585579557 * value)
	{
		___m_kerningDictionary_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_kerningDictionary_11, value);
	}

	inline static int32_t get_offset_of_m_kerningInfo_12() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___m_kerningInfo_12)); }
	inline KerningTable_t2970824110 * get_m_kerningInfo_12() const { return ___m_kerningInfo_12; }
	inline KerningTable_t2970824110 ** get_address_of_m_kerningInfo_12() { return &___m_kerningInfo_12; }
	inline void set_m_kerningInfo_12(KerningTable_t2970824110 * value)
	{
		___m_kerningInfo_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_kerningInfo_12, value);
	}

	inline static int32_t get_offset_of_m_kerningPair_13() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___m_kerningPair_13)); }
	inline KerningPair_t1577753922 * get_m_kerningPair_13() const { return ___m_kerningPair_13; }
	inline KerningPair_t1577753922 ** get_address_of_m_kerningPair_13() { return &___m_kerningPair_13; }
	inline void set_m_kerningPair_13(KerningPair_t1577753922 * value)
	{
		___m_kerningPair_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_kerningPair_13, value);
	}

	inline static int32_t get_offset_of_fallbackFontAssets_14() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___fallbackFontAssets_14)); }
	inline List_1_t1899541111 * get_fallbackFontAssets_14() const { return ___fallbackFontAssets_14; }
	inline List_1_t1899541111 ** get_address_of_fallbackFontAssets_14() { return &___fallbackFontAssets_14; }
	inline void set_fallbackFontAssets_14(List_1_t1899541111 * value)
	{
		___fallbackFontAssets_14 = value;
		Il2CppCodeGenWriteBarrier(&___fallbackFontAssets_14, value);
	}

	inline static int32_t get_offset_of_fontCreationSettings_15() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___fontCreationSettings_15)); }
	inline FontCreationSetting_t1093397046  get_fontCreationSettings_15() const { return ___fontCreationSettings_15; }
	inline FontCreationSetting_t1093397046 * get_address_of_fontCreationSettings_15() { return &___fontCreationSettings_15; }
	inline void set_fontCreationSettings_15(FontCreationSetting_t1093397046  value)
	{
		___fontCreationSettings_15 = value;
	}

	inline static int32_t get_offset_of_fontWeights_16() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___fontWeights_16)); }
	inline TMP_FontWeightsU5BU5D_t3725552155* get_fontWeights_16() const { return ___fontWeights_16; }
	inline TMP_FontWeightsU5BU5D_t3725552155** get_address_of_fontWeights_16() { return &___fontWeights_16; }
	inline void set_fontWeights_16(TMP_FontWeightsU5BU5D_t3725552155* value)
	{
		___fontWeights_16 = value;
		Il2CppCodeGenWriteBarrier(&___fontWeights_16, value);
	}

	inline static int32_t get_offset_of_m_characterSet_17() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___m_characterSet_17)); }
	inline Int32U5BU5D_t3030399641* get_m_characterSet_17() const { return ___m_characterSet_17; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_characterSet_17() { return &___m_characterSet_17; }
	inline void set_m_characterSet_17(Int32U5BU5D_t3030399641* value)
	{
		___m_characterSet_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_characterSet_17, value);
	}

	inline static int32_t get_offset_of_normalStyle_18() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___normalStyle_18)); }
	inline float get_normalStyle_18() const { return ___normalStyle_18; }
	inline float* get_address_of_normalStyle_18() { return &___normalStyle_18; }
	inline void set_normalStyle_18(float value)
	{
		___normalStyle_18 = value;
	}

	inline static int32_t get_offset_of_normalSpacingOffset_19() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___normalSpacingOffset_19)); }
	inline float get_normalSpacingOffset_19() const { return ___normalSpacingOffset_19; }
	inline float* get_address_of_normalSpacingOffset_19() { return &___normalSpacingOffset_19; }
	inline void set_normalSpacingOffset_19(float value)
	{
		___normalSpacingOffset_19 = value;
	}

	inline static int32_t get_offset_of_boldStyle_20() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___boldStyle_20)); }
	inline float get_boldStyle_20() const { return ___boldStyle_20; }
	inline float* get_address_of_boldStyle_20() { return &___boldStyle_20; }
	inline void set_boldStyle_20(float value)
	{
		___boldStyle_20 = value;
	}

	inline static int32_t get_offset_of_boldSpacing_21() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___boldSpacing_21)); }
	inline float get_boldSpacing_21() const { return ___boldSpacing_21; }
	inline float* get_address_of_boldSpacing_21() { return &___boldSpacing_21; }
	inline void set_boldSpacing_21(float value)
	{
		___boldSpacing_21 = value;
	}

	inline static int32_t get_offset_of_italicStyle_22() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___italicStyle_22)); }
	inline uint8_t get_italicStyle_22() const { return ___italicStyle_22; }
	inline uint8_t* get_address_of_italicStyle_22() { return &___italicStyle_22; }
	inline void set_italicStyle_22(uint8_t value)
	{
		___italicStyle_22 = value;
	}

	inline static int32_t get_offset_of_tabSize_23() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___tabSize_23)); }
	inline uint8_t get_tabSize_23() const { return ___tabSize_23; }
	inline uint8_t* get_address_of_tabSize_23() { return &___tabSize_23; }
	inline void set_tabSize_23(uint8_t value)
	{
		___tabSize_23 = value;
	}

	inline static int32_t get_offset_of_m_oldTabSize_24() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979, ___m_oldTabSize_24)); }
	inline uint8_t get_m_oldTabSize_24() const { return ___m_oldTabSize_24; }
	inline uint8_t* get_address_of_m_oldTabSize_24() { return &___m_oldTabSize_24; }
	inline void set_m_oldTabSize_24(uint8_t value)
	{
		___m_oldTabSize_24 = value;
	}
};

struct TMP_FontAsset_t2530419979_StaticFields
{
public:
	// TMPro.TMP_FontAsset TMPro.TMP_FontAsset::s_defaultFontAsset
	TMP_FontAsset_t2530419979 * ___s_defaultFontAsset_5;

public:
	inline static int32_t get_offset_of_s_defaultFontAsset_5() { return static_cast<int32_t>(offsetof(TMP_FontAsset_t2530419979_StaticFields, ___s_defaultFontAsset_5)); }
	inline TMP_FontAsset_t2530419979 * get_s_defaultFontAsset_5() const { return ___s_defaultFontAsset_5; }
	inline TMP_FontAsset_t2530419979 ** get_address_of_s_defaultFontAsset_5() { return &___s_defaultFontAsset_5; }
	inline void set_s_defaultFontAsset_5(TMP_FontAsset_t2530419979 * value)
	{
		___s_defaultFontAsset_5 = value;
		Il2CppCodeGenWriteBarrier(&___s_defaultFontAsset_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
