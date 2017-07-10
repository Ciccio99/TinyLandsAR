#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_Selectable1490392188.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// UnityEngine.UI.Image
struct Image_t2042527209;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_t457963479;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_t1859881917;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_t621037522;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_t1736487048;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_t234712921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Dropdown
struct  TMP_Dropdown_t1768193147  : public Selectable_t1490392188
{
public:
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t3349966182 * ___m_Template_16;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_t1920000777 * ___m_CaptionText_17;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_t2042527209 * ___m_CaptionImage_18;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_t1920000777 * ___m_ItemText_19;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_t2042527209 * ___m_ItemImage_20;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_21;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_t457963479 * ___m_Options_22;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_t1859881917 * ___m_OnValueChanged_23;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t1756533147 * ___m_Dropdown_24;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t1756533147 * ___m_Blocker_25;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_t621037522 * ___m_Items_26;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t1736487048 * ___m_AlphaTweenRunner_27;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_28;

public:
	inline static int32_t get_offset_of_m_Template_16() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_Template_16)); }
	inline RectTransform_t3349966182 * get_m_Template_16() const { return ___m_Template_16; }
	inline RectTransform_t3349966182 ** get_address_of_m_Template_16() { return &___m_Template_16; }
	inline void set_m_Template_16(RectTransform_t3349966182 * value)
	{
		___m_Template_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_Template_16, value);
	}

	inline static int32_t get_offset_of_m_CaptionText_17() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_CaptionText_17)); }
	inline TMP_Text_t1920000777 * get_m_CaptionText_17() const { return ___m_CaptionText_17; }
	inline TMP_Text_t1920000777 ** get_address_of_m_CaptionText_17() { return &___m_CaptionText_17; }
	inline void set_m_CaptionText_17(TMP_Text_t1920000777 * value)
	{
		___m_CaptionText_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_CaptionText_17, value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_18() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_CaptionImage_18)); }
	inline Image_t2042527209 * get_m_CaptionImage_18() const { return ___m_CaptionImage_18; }
	inline Image_t2042527209 ** get_address_of_m_CaptionImage_18() { return &___m_CaptionImage_18; }
	inline void set_m_CaptionImage_18(Image_t2042527209 * value)
	{
		___m_CaptionImage_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_CaptionImage_18, value);
	}

	inline static int32_t get_offset_of_m_ItemText_19() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_ItemText_19)); }
	inline TMP_Text_t1920000777 * get_m_ItemText_19() const { return ___m_ItemText_19; }
	inline TMP_Text_t1920000777 ** get_address_of_m_ItemText_19() { return &___m_ItemText_19; }
	inline void set_m_ItemText_19(TMP_Text_t1920000777 * value)
	{
		___m_ItemText_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_ItemText_19, value);
	}

	inline static int32_t get_offset_of_m_ItemImage_20() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_ItemImage_20)); }
	inline Image_t2042527209 * get_m_ItemImage_20() const { return ___m_ItemImage_20; }
	inline Image_t2042527209 ** get_address_of_m_ItemImage_20() { return &___m_ItemImage_20; }
	inline void set_m_ItemImage_20(Image_t2042527209 * value)
	{
		___m_ItemImage_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_ItemImage_20, value);
	}

	inline static int32_t get_offset_of_m_Value_21() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_Value_21)); }
	inline int32_t get_m_Value_21() const { return ___m_Value_21; }
	inline int32_t* get_address_of_m_Value_21() { return &___m_Value_21; }
	inline void set_m_Value_21(int32_t value)
	{
		___m_Value_21 = value;
	}

	inline static int32_t get_offset_of_m_Options_22() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_Options_22)); }
	inline OptionDataList_t457963479 * get_m_Options_22() const { return ___m_Options_22; }
	inline OptionDataList_t457963479 ** get_address_of_m_Options_22() { return &___m_Options_22; }
	inline void set_m_Options_22(OptionDataList_t457963479 * value)
	{
		___m_Options_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_Options_22, value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_OnValueChanged_23)); }
	inline DropdownEvent_t1859881917 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline DropdownEvent_t1859881917 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(DropdownEvent_t1859881917 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValueChanged_23, value);
	}

	inline static int32_t get_offset_of_m_Dropdown_24() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_Dropdown_24)); }
	inline GameObject_t1756533147 * get_m_Dropdown_24() const { return ___m_Dropdown_24; }
	inline GameObject_t1756533147 ** get_address_of_m_Dropdown_24() { return &___m_Dropdown_24; }
	inline void set_m_Dropdown_24(GameObject_t1756533147 * value)
	{
		___m_Dropdown_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dropdown_24, value);
	}

	inline static int32_t get_offset_of_m_Blocker_25() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_Blocker_25)); }
	inline GameObject_t1756533147 * get_m_Blocker_25() const { return ___m_Blocker_25; }
	inline GameObject_t1756533147 ** get_address_of_m_Blocker_25() { return &___m_Blocker_25; }
	inline void set_m_Blocker_25(GameObject_t1756533147 * value)
	{
		___m_Blocker_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_Blocker_25, value);
	}

	inline static int32_t get_offset_of_m_Items_26() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_Items_26)); }
	inline List_1_t621037522 * get_m_Items_26() const { return ___m_Items_26; }
	inline List_1_t621037522 ** get_address_of_m_Items_26() { return &___m_Items_26; }
	inline void set_m_Items_26(List_1_t621037522 * value)
	{
		___m_Items_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_Items_26, value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_27() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___m_AlphaTweenRunner_27)); }
	inline TweenRunner_1_t1736487048 * get_m_AlphaTweenRunner_27() const { return ___m_AlphaTweenRunner_27; }
	inline TweenRunner_1_t1736487048 ** get_address_of_m_AlphaTweenRunner_27() { return &___m_AlphaTweenRunner_27; }
	inline void set_m_AlphaTweenRunner_27(TweenRunner_1_t1736487048 * value)
	{
		___m_AlphaTweenRunner_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_AlphaTweenRunner_27, value);
	}

	inline static int32_t get_offset_of_validTemplate_28() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147, ___validTemplate_28)); }
	inline bool get_validTemplate_28() const { return ___validTemplate_28; }
	inline bool* get_address_of_validTemplate_28() { return &___validTemplate_28; }
	inline void set_validTemplate_28(bool value)
	{
		___validTemplate_28 = value;
	}
};

struct TMP_Dropdown_t1768193147_StaticFields
{
public:
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_t234712921 * ___s_NoOptionData_29;

public:
	inline static int32_t get_offset_of_s_NoOptionData_29() { return static_cast<int32_t>(offsetof(TMP_Dropdown_t1768193147_StaticFields, ___s_NoOptionData_29)); }
	inline OptionData_t234712921 * get_s_NoOptionData_29() const { return ___s_NoOptionData_29; }
	inline OptionData_t234712921 ** get_address_of_s_NoOptionData_29() { return &___s_NoOptionData_29; }
	inline void set_s_NoOptionData_29(OptionData_t234712921 * value)
	{
		___s_NoOptionData_29 = value;
		Il2CppCodeGenWriteBarrier(&___s_NoOptionData_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
