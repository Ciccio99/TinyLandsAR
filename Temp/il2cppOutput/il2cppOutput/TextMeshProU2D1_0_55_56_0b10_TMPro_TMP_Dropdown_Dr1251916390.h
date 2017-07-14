#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Dropdown/DropdownItem
struct  DropdownItem_t1251916390  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TMP_Text TMPro.TMP_Dropdown/DropdownItem::m_Text
	TMP_Text_t1920000777 * ___m_Text_2;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown/DropdownItem::m_Image
	Image_t2042527209 * ___m_Image_3;
	// UnityEngine.RectTransform TMPro.TMP_Dropdown/DropdownItem::m_RectTransform
	RectTransform_t3349966182 * ___m_RectTransform_4;
	// UnityEngine.UI.Toggle TMPro.TMP_Dropdown/DropdownItem::m_Toggle
	Toggle_t3976754468 * ___m_Toggle_5;

public:
	inline static int32_t get_offset_of_m_Text_2() { return static_cast<int32_t>(offsetof(DropdownItem_t1251916390, ___m_Text_2)); }
	inline TMP_Text_t1920000777 * get_m_Text_2() const { return ___m_Text_2; }
	inline TMP_Text_t1920000777 ** get_address_of_m_Text_2() { return &___m_Text_2; }
	inline void set_m_Text_2(TMP_Text_t1920000777 * value)
	{
		___m_Text_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_2, value);
	}

	inline static int32_t get_offset_of_m_Image_3() { return static_cast<int32_t>(offsetof(DropdownItem_t1251916390, ___m_Image_3)); }
	inline Image_t2042527209 * get_m_Image_3() const { return ___m_Image_3; }
	inline Image_t2042527209 ** get_address_of_m_Image_3() { return &___m_Image_3; }
	inline void set_m_Image_3(Image_t2042527209 * value)
	{
		___m_Image_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Image_3, value);
	}

	inline static int32_t get_offset_of_m_RectTransform_4() { return static_cast<int32_t>(offsetof(DropdownItem_t1251916390, ___m_RectTransform_4)); }
	inline RectTransform_t3349966182 * get_m_RectTransform_4() const { return ___m_RectTransform_4; }
	inline RectTransform_t3349966182 ** get_address_of_m_RectTransform_4() { return &___m_RectTransform_4; }
	inline void set_m_RectTransform_4(RectTransform_t3349966182 * value)
	{
		___m_RectTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_4, value);
	}

	inline static int32_t get_offset_of_m_Toggle_5() { return static_cast<int32_t>(offsetof(DropdownItem_t1251916390, ___m_Toggle_5)); }
	inline Toggle_t3976754468 * get_m_Toggle_5() const { return ___m_Toggle_5; }
	inline Toggle_t3976754468 ** get_address_of_m_Toggle_5() { return &___m_Toggle_5; }
	inline void set_m_Toggle_5(Toggle_t3976754468 * value)
	{
		___m_Toggle_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Toggle_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
