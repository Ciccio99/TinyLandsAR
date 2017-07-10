#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_Selectable1490392188.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_InputField_4294436424.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_InputField_I379073331.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType875112366.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_InputField_2475898675.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_InputField_C487603955.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;
// System.Char[]
struct CharU5BU5D_t1328083999;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t3248359358;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t1222271750;
// System.String
struct String_t;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_t3359162065;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t3883897865;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t3887183206;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_t2139251414;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t3285190392;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t3048644023;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t261436805;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3726817866;
// UnityEngine.Event
struct Event_t3028476042;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_InputField
struct  TMP_InputField_t1778301588  : public Selectable_t1490392188
{
public:
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_Keyboard
	TouchScreenKeyboard_t601950206 * ___m_Keyboard_16;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t3349966182 * ___m_TextViewport_18;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_t1920000777 * ___m_TextComponent_19;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t3349966182 * ___m_TextComponentRectTransform_20;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_t2426225576 * ___m_Placeholder_21;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t3248359358 * ___m_VerticalScrollbar_22;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t1222271750 * ___m_VerticalScrollbarEventHandler_23;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_24;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_25;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_33;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_34;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_35;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_t3359162065 * ___m_OnEndEdit_36;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_t3359162065 * ___m_OnSubmit_37;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t3883897865 * ___m_OnSelect_38;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t3883897865 * ___m_OnDeselect_39;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t3887183206 * ___m_OnTextSelection_40;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t3887183206 * ___m_OnEndTextSelection_41;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_t2139251414 * ___m_OnValueChanged_42;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t3285190392 * ___m_OnValidateInput_43;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_t2020392075  ___m_CaretColor_44;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_45;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_t2020392075  ___m_SelectionColor_46;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_47;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_48;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_49;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_50;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_51;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_52;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_53;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_54;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_55;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t3349966182 * ___caretRectTrans_56;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_t3048644023* ___m_CursorVerts_57;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_t261436805 * ___m_CachedInputRenderer_58;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_DefaultTransformPosition
	Vector2_t2243707579  ___m_DefaultTransformPosition_59;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t2243707579  ___m_LastPosition_60;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t1356156583 * ___m_Mesh_61;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_62;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_63;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_64;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_65;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_68;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t2299508840 * ___m_BlinkCoroutine_69;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_70;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t2299508840 * ___m_DragCoroutine_71;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_72;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_73;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_74;
	// System.Boolean TMPro.TMP_InputField::m_IsScrollbarUpdateRequired
	bool ___m_IsScrollbarUpdateRequired_75;
	// System.Boolean TMPro.TMP_InputField::m_IsUpdatingScrollbarValues
	bool ___m_IsUpdatingScrollbarValues_76;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_77;
	// System.Single TMPro.TMP_InputField::m_ClickStartTime
	float ___m_ClickStartTime_78;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_79;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t2530419979 * ___m_GlobalFontAsset_81;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_82;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_83;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_84;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_85;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_86;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3726817866 * ___m_InputValidator_87;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_88;
	// System.Boolean TMPro.TMP_InputField::isStringPositionDirty
	bool ___isStringPositionDirty_89;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_t3028476042 * ___m_ProcessingEvent_90;

public:
	inline static int32_t get_offset_of_m_Keyboard_16() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_Keyboard_16)); }
	inline TouchScreenKeyboard_t601950206 * get_m_Keyboard_16() const { return ___m_Keyboard_16; }
	inline TouchScreenKeyboard_t601950206 ** get_address_of_m_Keyboard_16() { return &___m_Keyboard_16; }
	inline void set_m_Keyboard_16(TouchScreenKeyboard_t601950206 * value)
	{
		___m_Keyboard_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_Keyboard_16, value);
	}

	inline static int32_t get_offset_of_m_TextViewport_18() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_TextViewport_18)); }
	inline RectTransform_t3349966182 * get_m_TextViewport_18() const { return ___m_TextViewport_18; }
	inline RectTransform_t3349966182 ** get_address_of_m_TextViewport_18() { return &___m_TextViewport_18; }
	inline void set_m_TextViewport_18(RectTransform_t3349966182 * value)
	{
		___m_TextViewport_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextViewport_18, value);
	}

	inline static int32_t get_offset_of_m_TextComponent_19() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_TextComponent_19)); }
	inline TMP_Text_t1920000777 * get_m_TextComponent_19() const { return ___m_TextComponent_19; }
	inline TMP_Text_t1920000777 ** get_address_of_m_TextComponent_19() { return &___m_TextComponent_19; }
	inline void set_m_TextComponent_19(TMP_Text_t1920000777 * value)
	{
		___m_TextComponent_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_19, value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectTransform_20() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_TextComponentRectTransform_20)); }
	inline RectTransform_t3349966182 * get_m_TextComponentRectTransform_20() const { return ___m_TextComponentRectTransform_20; }
	inline RectTransform_t3349966182 ** get_address_of_m_TextComponentRectTransform_20() { return &___m_TextComponentRectTransform_20; }
	inline void set_m_TextComponentRectTransform_20(RectTransform_t3349966182 * value)
	{
		___m_TextComponentRectTransform_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponentRectTransform_20, value);
	}

	inline static int32_t get_offset_of_m_Placeholder_21() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_Placeholder_21)); }
	inline Graphic_t2426225576 * get_m_Placeholder_21() const { return ___m_Placeholder_21; }
	inline Graphic_t2426225576 ** get_address_of_m_Placeholder_21() { return &___m_Placeholder_21; }
	inline void set_m_Placeholder_21(Graphic_t2426225576 * value)
	{
		___m_Placeholder_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_Placeholder_21, value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_22() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_VerticalScrollbar_22)); }
	inline Scrollbar_t3248359358 * get_m_VerticalScrollbar_22() const { return ___m_VerticalScrollbar_22; }
	inline Scrollbar_t3248359358 ** get_address_of_m_VerticalScrollbar_22() { return &___m_VerticalScrollbar_22; }
	inline void set_m_VerticalScrollbar_22(Scrollbar_t3248359358 * value)
	{
		___m_VerticalScrollbar_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalScrollbar_22, value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarEventHandler_23() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_VerticalScrollbarEventHandler_23)); }
	inline TMP_ScrollbarEventHandler_t1222271750 * get_m_VerticalScrollbarEventHandler_23() const { return ___m_VerticalScrollbarEventHandler_23; }
	inline TMP_ScrollbarEventHandler_t1222271750 ** get_address_of_m_VerticalScrollbarEventHandler_23() { return &___m_VerticalScrollbarEventHandler_23; }
	inline void set_m_VerticalScrollbarEventHandler_23(TMP_ScrollbarEventHandler_t1222271750 * value)
	{
		___m_VerticalScrollbarEventHandler_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_VerticalScrollbarEventHandler_23, value);
	}

	inline static int32_t get_offset_of_m_ScrollPosition_24() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_ScrollPosition_24)); }
	inline float get_m_ScrollPosition_24() const { return ___m_ScrollPosition_24; }
	inline float* get_address_of_m_ScrollPosition_24() { return &___m_ScrollPosition_24; }
	inline void set_m_ScrollPosition_24(float value)
	{
		___m_ScrollPosition_24 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_25() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_ScrollSensitivity_25)); }
	inline float get_m_ScrollSensitivity_25() const { return ___m_ScrollSensitivity_25; }
	inline float* get_address_of_m_ScrollSensitivity_25() { return &___m_ScrollSensitivity_25; }
	inline void set_m_ScrollSensitivity_25(float value)
	{
		___m_ScrollSensitivity_25 = value;
	}

	inline static int32_t get_offset_of_m_ContentType_26() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_ContentType_26)); }
	inline int32_t get_m_ContentType_26() const { return ___m_ContentType_26; }
	inline int32_t* get_address_of_m_ContentType_26() { return &___m_ContentType_26; }
	inline void set_m_ContentType_26(int32_t value)
	{
		___m_ContentType_26 = value;
	}

	inline static int32_t get_offset_of_m_InputType_27() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_InputType_27)); }
	inline int32_t get_m_InputType_27() const { return ___m_InputType_27; }
	inline int32_t* get_address_of_m_InputType_27() { return &___m_InputType_27; }
	inline void set_m_InputType_27(int32_t value)
	{
		___m_InputType_27 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_28() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_AsteriskChar_28)); }
	inline Il2CppChar get_m_AsteriskChar_28() const { return ___m_AsteriskChar_28; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_28() { return &___m_AsteriskChar_28; }
	inline void set_m_AsteriskChar_28(Il2CppChar value)
	{
		___m_AsteriskChar_28 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_29() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_KeyboardType_29)); }
	inline int32_t get_m_KeyboardType_29() const { return ___m_KeyboardType_29; }
	inline int32_t* get_address_of_m_KeyboardType_29() { return &___m_KeyboardType_29; }
	inline void set_m_KeyboardType_29(int32_t value)
	{
		___m_KeyboardType_29 = value;
	}

	inline static int32_t get_offset_of_m_LineType_30() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_LineType_30)); }
	inline int32_t get_m_LineType_30() const { return ___m_LineType_30; }
	inline int32_t* get_address_of_m_LineType_30() { return &___m_LineType_30; }
	inline void set_m_LineType_30(int32_t value)
	{
		___m_LineType_30 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_31() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_HideMobileInput_31)); }
	inline bool get_m_HideMobileInput_31() const { return ___m_HideMobileInput_31; }
	inline bool* get_address_of_m_HideMobileInput_31() { return &___m_HideMobileInput_31; }
	inline void set_m_HideMobileInput_31(bool value)
	{
		___m_HideMobileInput_31 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_32() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CharacterValidation_32)); }
	inline int32_t get_m_CharacterValidation_32() const { return ___m_CharacterValidation_32; }
	inline int32_t* get_address_of_m_CharacterValidation_32() { return &___m_CharacterValidation_32; }
	inline void set_m_CharacterValidation_32(int32_t value)
	{
		___m_CharacterValidation_32 = value;
	}

	inline static int32_t get_offset_of_m_RegexValue_33() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_RegexValue_33)); }
	inline String_t* get_m_RegexValue_33() const { return ___m_RegexValue_33; }
	inline String_t** get_address_of_m_RegexValue_33() { return &___m_RegexValue_33; }
	inline void set_m_RegexValue_33(String_t* value)
	{
		___m_RegexValue_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_RegexValue_33, value);
	}

	inline static int32_t get_offset_of_m_GlobalPointSize_34() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_GlobalPointSize_34)); }
	inline float get_m_GlobalPointSize_34() const { return ___m_GlobalPointSize_34; }
	inline float* get_address_of_m_GlobalPointSize_34() { return &___m_GlobalPointSize_34; }
	inline void set_m_GlobalPointSize_34(float value)
	{
		___m_GlobalPointSize_34 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_35() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CharacterLimit_35)); }
	inline int32_t get_m_CharacterLimit_35() const { return ___m_CharacterLimit_35; }
	inline int32_t* get_address_of_m_CharacterLimit_35() { return &___m_CharacterLimit_35; }
	inline void set_m_CharacterLimit_35(int32_t value)
	{
		___m_CharacterLimit_35 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_36() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_OnEndEdit_36)); }
	inline SubmitEvent_t3359162065 * get_m_OnEndEdit_36() const { return ___m_OnEndEdit_36; }
	inline SubmitEvent_t3359162065 ** get_address_of_m_OnEndEdit_36() { return &___m_OnEndEdit_36; }
	inline void set_m_OnEndEdit_36(SubmitEvent_t3359162065 * value)
	{
		___m_OnEndEdit_36 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnEndEdit_36, value);
	}

	inline static int32_t get_offset_of_m_OnSubmit_37() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_OnSubmit_37)); }
	inline SubmitEvent_t3359162065 * get_m_OnSubmit_37() const { return ___m_OnSubmit_37; }
	inline SubmitEvent_t3359162065 ** get_address_of_m_OnSubmit_37() { return &___m_OnSubmit_37; }
	inline void set_m_OnSubmit_37(SubmitEvent_t3359162065 * value)
	{
		___m_OnSubmit_37 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnSubmit_37, value);
	}

	inline static int32_t get_offset_of_m_OnSelect_38() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_OnSelect_38)); }
	inline SelectionEvent_t3883897865 * get_m_OnSelect_38() const { return ___m_OnSelect_38; }
	inline SelectionEvent_t3883897865 ** get_address_of_m_OnSelect_38() { return &___m_OnSelect_38; }
	inline void set_m_OnSelect_38(SelectionEvent_t3883897865 * value)
	{
		___m_OnSelect_38 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnSelect_38, value);
	}

	inline static int32_t get_offset_of_m_OnDeselect_39() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_OnDeselect_39)); }
	inline SelectionEvent_t3883897865 * get_m_OnDeselect_39() const { return ___m_OnDeselect_39; }
	inline SelectionEvent_t3883897865 ** get_address_of_m_OnDeselect_39() { return &___m_OnDeselect_39; }
	inline void set_m_OnDeselect_39(SelectionEvent_t3883897865 * value)
	{
		___m_OnDeselect_39 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnDeselect_39, value);
	}

	inline static int32_t get_offset_of_m_OnTextSelection_40() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_OnTextSelection_40)); }
	inline TextSelectionEvent_t3887183206 * get_m_OnTextSelection_40() const { return ___m_OnTextSelection_40; }
	inline TextSelectionEvent_t3887183206 ** get_address_of_m_OnTextSelection_40() { return &___m_OnTextSelection_40; }
	inline void set_m_OnTextSelection_40(TextSelectionEvent_t3887183206 * value)
	{
		___m_OnTextSelection_40 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnTextSelection_40, value);
	}

	inline static int32_t get_offset_of_m_OnEndTextSelection_41() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_OnEndTextSelection_41)); }
	inline TextSelectionEvent_t3887183206 * get_m_OnEndTextSelection_41() const { return ___m_OnEndTextSelection_41; }
	inline TextSelectionEvent_t3887183206 ** get_address_of_m_OnEndTextSelection_41() { return &___m_OnEndTextSelection_41; }
	inline void set_m_OnEndTextSelection_41(TextSelectionEvent_t3887183206 * value)
	{
		___m_OnEndTextSelection_41 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnEndTextSelection_41, value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_42() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_OnValueChanged_42)); }
	inline OnChangeEvent_t2139251414 * get_m_OnValueChanged_42() const { return ___m_OnValueChanged_42; }
	inline OnChangeEvent_t2139251414 ** get_address_of_m_OnValueChanged_42() { return &___m_OnValueChanged_42; }
	inline void set_m_OnValueChanged_42(OnChangeEvent_t2139251414 * value)
	{
		___m_OnValueChanged_42 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValueChanged_42, value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_43() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_OnValidateInput_43)); }
	inline OnValidateInput_t3285190392 * get_m_OnValidateInput_43() const { return ___m_OnValidateInput_43; }
	inline OnValidateInput_t3285190392 ** get_address_of_m_OnValidateInput_43() { return &___m_OnValidateInput_43; }
	inline void set_m_OnValidateInput_43(OnValidateInput_t3285190392 * value)
	{
		___m_OnValidateInput_43 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValidateInput_43, value);
	}

	inline static int32_t get_offset_of_m_CaretColor_44() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CaretColor_44)); }
	inline Color_t2020392075  get_m_CaretColor_44() const { return ___m_CaretColor_44; }
	inline Color_t2020392075 * get_address_of_m_CaretColor_44() { return &___m_CaretColor_44; }
	inline void set_m_CaretColor_44(Color_t2020392075  value)
	{
		___m_CaretColor_44 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_45() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CustomCaretColor_45)); }
	inline bool get_m_CustomCaretColor_45() const { return ___m_CustomCaretColor_45; }
	inline bool* get_address_of_m_CustomCaretColor_45() { return &___m_CustomCaretColor_45; }
	inline void set_m_CustomCaretColor_45(bool value)
	{
		___m_CustomCaretColor_45 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_46() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_SelectionColor_46)); }
	inline Color_t2020392075  get_m_SelectionColor_46() const { return ___m_SelectionColor_46; }
	inline Color_t2020392075 * get_address_of_m_SelectionColor_46() { return &___m_SelectionColor_46; }
	inline void set_m_SelectionColor_46(Color_t2020392075  value)
	{
		___m_SelectionColor_46 = value;
	}

	inline static int32_t get_offset_of_m_Text_47() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_Text_47)); }
	inline String_t* get_m_Text_47() const { return ___m_Text_47; }
	inline String_t** get_address_of_m_Text_47() { return &___m_Text_47; }
	inline void set_m_Text_47(String_t* value)
	{
		___m_Text_47 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_47, value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_48() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CaretBlinkRate_48)); }
	inline float get_m_CaretBlinkRate_48() const { return ___m_CaretBlinkRate_48; }
	inline float* get_address_of_m_CaretBlinkRate_48() { return &___m_CaretBlinkRate_48; }
	inline void set_m_CaretBlinkRate_48(float value)
	{
		___m_CaretBlinkRate_48 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_49() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CaretWidth_49)); }
	inline int32_t get_m_CaretWidth_49() const { return ___m_CaretWidth_49; }
	inline int32_t* get_address_of_m_CaretWidth_49() { return &___m_CaretWidth_49; }
	inline void set_m_CaretWidth_49(int32_t value)
	{
		___m_CaretWidth_49 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_50() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_ReadOnly_50)); }
	inline bool get_m_ReadOnly_50() const { return ___m_ReadOnly_50; }
	inline bool* get_address_of_m_ReadOnly_50() { return &___m_ReadOnly_50; }
	inline void set_m_ReadOnly_50(bool value)
	{
		___m_ReadOnly_50 = value;
	}

	inline static int32_t get_offset_of_m_RichText_51() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_RichText_51)); }
	inline bool get_m_RichText_51() const { return ___m_RichText_51; }
	inline bool* get_address_of_m_RichText_51() { return &___m_RichText_51; }
	inline void set_m_RichText_51(bool value)
	{
		___m_RichText_51 = value;
	}

	inline static int32_t get_offset_of_m_StringPosition_52() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_StringPosition_52)); }
	inline int32_t get_m_StringPosition_52() const { return ___m_StringPosition_52; }
	inline int32_t* get_address_of_m_StringPosition_52() { return &___m_StringPosition_52; }
	inline void set_m_StringPosition_52(int32_t value)
	{
		___m_StringPosition_52 = value;
	}

	inline static int32_t get_offset_of_m_StringSelectPosition_53() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_StringSelectPosition_53)); }
	inline int32_t get_m_StringSelectPosition_53() const { return ___m_StringSelectPosition_53; }
	inline int32_t* get_address_of_m_StringSelectPosition_53() { return &___m_StringSelectPosition_53; }
	inline void set_m_StringSelectPosition_53(int32_t value)
	{
		___m_StringSelectPosition_53 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_54() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CaretPosition_54)); }
	inline int32_t get_m_CaretPosition_54() const { return ___m_CaretPosition_54; }
	inline int32_t* get_address_of_m_CaretPosition_54() { return &___m_CaretPosition_54; }
	inline void set_m_CaretPosition_54(int32_t value)
	{
		___m_CaretPosition_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_55() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CaretSelectPosition_55)); }
	inline int32_t get_m_CaretSelectPosition_55() const { return ___m_CaretSelectPosition_55; }
	inline int32_t* get_address_of_m_CaretSelectPosition_55() { return &___m_CaretSelectPosition_55; }
	inline void set_m_CaretSelectPosition_55(int32_t value)
	{
		___m_CaretSelectPosition_55 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_56() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___caretRectTrans_56)); }
	inline RectTransform_t3349966182 * get_caretRectTrans_56() const { return ___caretRectTrans_56; }
	inline RectTransform_t3349966182 ** get_address_of_caretRectTrans_56() { return &___caretRectTrans_56; }
	inline void set_caretRectTrans_56(RectTransform_t3349966182 * value)
	{
		___caretRectTrans_56 = value;
		Il2CppCodeGenWriteBarrier(&___caretRectTrans_56, value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_57() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CursorVerts_57)); }
	inline UIVertexU5BU5D_t3048644023* get_m_CursorVerts_57() const { return ___m_CursorVerts_57; }
	inline UIVertexU5BU5D_t3048644023** get_address_of_m_CursorVerts_57() { return &___m_CursorVerts_57; }
	inline void set_m_CursorVerts_57(UIVertexU5BU5D_t3048644023* value)
	{
		___m_CursorVerts_57 = value;
		Il2CppCodeGenWriteBarrier(&___m_CursorVerts_57, value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_58() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CachedInputRenderer_58)); }
	inline CanvasRenderer_t261436805 * get_m_CachedInputRenderer_58() const { return ___m_CachedInputRenderer_58; }
	inline CanvasRenderer_t261436805 ** get_address_of_m_CachedInputRenderer_58() { return &___m_CachedInputRenderer_58; }
	inline void set_m_CachedInputRenderer_58(CanvasRenderer_t261436805 * value)
	{
		___m_CachedInputRenderer_58 = value;
		Il2CppCodeGenWriteBarrier(&___m_CachedInputRenderer_58, value);
	}

	inline static int32_t get_offset_of_m_DefaultTransformPosition_59() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_DefaultTransformPosition_59)); }
	inline Vector2_t2243707579  get_m_DefaultTransformPosition_59() const { return ___m_DefaultTransformPosition_59; }
	inline Vector2_t2243707579 * get_address_of_m_DefaultTransformPosition_59() { return &___m_DefaultTransformPosition_59; }
	inline void set_m_DefaultTransformPosition_59(Vector2_t2243707579  value)
	{
		___m_DefaultTransformPosition_59 = value;
	}

	inline static int32_t get_offset_of_m_LastPosition_60() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_LastPosition_60)); }
	inline Vector2_t2243707579  get_m_LastPosition_60() const { return ___m_LastPosition_60; }
	inline Vector2_t2243707579 * get_address_of_m_LastPosition_60() { return &___m_LastPosition_60; }
	inline void set_m_LastPosition_60(Vector2_t2243707579  value)
	{
		___m_LastPosition_60 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_61() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_Mesh_61)); }
	inline Mesh_t1356156583 * get_m_Mesh_61() const { return ___m_Mesh_61; }
	inline Mesh_t1356156583 ** get_address_of_m_Mesh_61() { return &___m_Mesh_61; }
	inline void set_m_Mesh_61(Mesh_t1356156583 * value)
	{
		___m_Mesh_61 = value;
		Il2CppCodeGenWriteBarrier(&___m_Mesh_61, value);
	}

	inline static int32_t get_offset_of_m_AllowInput_62() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_AllowInput_62)); }
	inline bool get_m_AllowInput_62() const { return ___m_AllowInput_62; }
	inline bool* get_address_of_m_AllowInput_62() { return &___m_AllowInput_62; }
	inline void set_m_AllowInput_62(bool value)
	{
		___m_AllowInput_62 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_63() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_ShouldActivateNextUpdate_63)); }
	inline bool get_m_ShouldActivateNextUpdate_63() const { return ___m_ShouldActivateNextUpdate_63; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_63() { return &___m_ShouldActivateNextUpdate_63; }
	inline void set_m_ShouldActivateNextUpdate_63(bool value)
	{
		___m_ShouldActivateNextUpdate_63 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_64() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_UpdateDrag_64)); }
	inline bool get_m_UpdateDrag_64() const { return ___m_UpdateDrag_64; }
	inline bool* get_address_of_m_UpdateDrag_64() { return &___m_UpdateDrag_64; }
	inline void set_m_UpdateDrag_64(bool value)
	{
		___m_UpdateDrag_64 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_65() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_DragPositionOutOfBounds_65)); }
	inline bool get_m_DragPositionOutOfBounds_65() const { return ___m_DragPositionOutOfBounds_65; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_65() { return &___m_DragPositionOutOfBounds_65; }
	inline void set_m_DragPositionOutOfBounds_65(bool value)
	{
		___m_DragPositionOutOfBounds_65 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_68() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_CaretVisible_68)); }
	inline bool get_m_CaretVisible_68() const { return ___m_CaretVisible_68; }
	inline bool* get_address_of_m_CaretVisible_68() { return &___m_CaretVisible_68; }
	inline void set_m_CaretVisible_68(bool value)
	{
		___m_CaretVisible_68 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_69() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_BlinkCoroutine_69)); }
	inline Coroutine_t2299508840 * get_m_BlinkCoroutine_69() const { return ___m_BlinkCoroutine_69; }
	inline Coroutine_t2299508840 ** get_address_of_m_BlinkCoroutine_69() { return &___m_BlinkCoroutine_69; }
	inline void set_m_BlinkCoroutine_69(Coroutine_t2299508840 * value)
	{
		___m_BlinkCoroutine_69 = value;
		Il2CppCodeGenWriteBarrier(&___m_BlinkCoroutine_69, value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_70() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_BlinkStartTime_70)); }
	inline float get_m_BlinkStartTime_70() const { return ___m_BlinkStartTime_70; }
	inline float* get_address_of_m_BlinkStartTime_70() { return &___m_BlinkStartTime_70; }
	inline void set_m_BlinkStartTime_70(float value)
	{
		___m_BlinkStartTime_70 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_71() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_DragCoroutine_71)); }
	inline Coroutine_t2299508840 * get_m_DragCoroutine_71() const { return ___m_DragCoroutine_71; }
	inline Coroutine_t2299508840 ** get_address_of_m_DragCoroutine_71() { return &___m_DragCoroutine_71; }
	inline void set_m_DragCoroutine_71(Coroutine_t2299508840 * value)
	{
		___m_DragCoroutine_71 = value;
		Il2CppCodeGenWriteBarrier(&___m_DragCoroutine_71, value);
	}

	inline static int32_t get_offset_of_m_OriginalText_72() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_OriginalText_72)); }
	inline String_t* get_m_OriginalText_72() const { return ___m_OriginalText_72; }
	inline String_t** get_address_of_m_OriginalText_72() { return &___m_OriginalText_72; }
	inline void set_m_OriginalText_72(String_t* value)
	{
		___m_OriginalText_72 = value;
		Il2CppCodeGenWriteBarrier(&___m_OriginalText_72, value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_73() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_WasCanceled_73)); }
	inline bool get_m_WasCanceled_73() const { return ___m_WasCanceled_73; }
	inline bool* get_address_of_m_WasCanceled_73() { return &___m_WasCanceled_73; }
	inline void set_m_WasCanceled_73(bool value)
	{
		___m_WasCanceled_73 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_74() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_HasDoneFocusTransition_74)); }
	inline bool get_m_HasDoneFocusTransition_74() const { return ___m_HasDoneFocusTransition_74; }
	inline bool* get_address_of_m_HasDoneFocusTransition_74() { return &___m_HasDoneFocusTransition_74; }
	inline void set_m_HasDoneFocusTransition_74(bool value)
	{
		___m_HasDoneFocusTransition_74 = value;
	}

	inline static int32_t get_offset_of_m_IsScrollbarUpdateRequired_75() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_IsScrollbarUpdateRequired_75)); }
	inline bool get_m_IsScrollbarUpdateRequired_75() const { return ___m_IsScrollbarUpdateRequired_75; }
	inline bool* get_address_of_m_IsScrollbarUpdateRequired_75() { return &___m_IsScrollbarUpdateRequired_75; }
	inline void set_m_IsScrollbarUpdateRequired_75(bool value)
	{
		___m_IsScrollbarUpdateRequired_75 = value;
	}

	inline static int32_t get_offset_of_m_IsUpdatingScrollbarValues_76() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_IsUpdatingScrollbarValues_76)); }
	inline bool get_m_IsUpdatingScrollbarValues_76() const { return ___m_IsUpdatingScrollbarValues_76; }
	inline bool* get_address_of_m_IsUpdatingScrollbarValues_76() { return &___m_IsUpdatingScrollbarValues_76; }
	inline void set_m_IsUpdatingScrollbarValues_76(bool value)
	{
		___m_IsUpdatingScrollbarValues_76 = value;
	}

	inline static int32_t get_offset_of_m_isLastKeyBackspace_77() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_isLastKeyBackspace_77)); }
	inline bool get_m_isLastKeyBackspace_77() const { return ___m_isLastKeyBackspace_77; }
	inline bool* get_address_of_m_isLastKeyBackspace_77() { return &___m_isLastKeyBackspace_77; }
	inline void set_m_isLastKeyBackspace_77(bool value)
	{
		___m_isLastKeyBackspace_77 = value;
	}

	inline static int32_t get_offset_of_m_ClickStartTime_78() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_ClickStartTime_78)); }
	inline float get_m_ClickStartTime_78() const { return ___m_ClickStartTime_78; }
	inline float* get_address_of_m_ClickStartTime_78() { return &___m_ClickStartTime_78; }
	inline void set_m_ClickStartTime_78(float value)
	{
		___m_ClickStartTime_78 = value;
	}

	inline static int32_t get_offset_of_m_DoubleClickDelay_79() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_DoubleClickDelay_79)); }
	inline float get_m_DoubleClickDelay_79() const { return ___m_DoubleClickDelay_79; }
	inline float* get_address_of_m_DoubleClickDelay_79() { return &___m_DoubleClickDelay_79; }
	inline void set_m_DoubleClickDelay_79(float value)
	{
		___m_DoubleClickDelay_79 = value;
	}

	inline static int32_t get_offset_of_m_GlobalFontAsset_81() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_GlobalFontAsset_81)); }
	inline TMP_FontAsset_t2530419979 * get_m_GlobalFontAsset_81() const { return ___m_GlobalFontAsset_81; }
	inline TMP_FontAsset_t2530419979 ** get_address_of_m_GlobalFontAsset_81() { return &___m_GlobalFontAsset_81; }
	inline void set_m_GlobalFontAsset_81(TMP_FontAsset_t2530419979 * value)
	{
		___m_GlobalFontAsset_81 = value;
		Il2CppCodeGenWriteBarrier(&___m_GlobalFontAsset_81, value);
	}

	inline static int32_t get_offset_of_m_OnFocusSelectAll_82() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_OnFocusSelectAll_82)); }
	inline bool get_m_OnFocusSelectAll_82() const { return ___m_OnFocusSelectAll_82; }
	inline bool* get_address_of_m_OnFocusSelectAll_82() { return &___m_OnFocusSelectAll_82; }
	inline void set_m_OnFocusSelectAll_82(bool value)
	{
		___m_OnFocusSelectAll_82 = value;
	}

	inline static int32_t get_offset_of_m_isSelectAll_83() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_isSelectAll_83)); }
	inline bool get_m_isSelectAll_83() const { return ___m_isSelectAll_83; }
	inline bool* get_address_of_m_isSelectAll_83() { return &___m_isSelectAll_83; }
	inline void set_m_isSelectAll_83(bool value)
	{
		___m_isSelectAll_83 = value;
	}

	inline static int32_t get_offset_of_m_ResetOnDeActivation_84() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_ResetOnDeActivation_84)); }
	inline bool get_m_ResetOnDeActivation_84() const { return ___m_ResetOnDeActivation_84; }
	inline bool* get_address_of_m_ResetOnDeActivation_84() { return &___m_ResetOnDeActivation_84; }
	inline void set_m_ResetOnDeActivation_84(bool value)
	{
		___m_ResetOnDeActivation_84 = value;
	}

	inline static int32_t get_offset_of_m_RestoreOriginalTextOnEscape_85() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_RestoreOriginalTextOnEscape_85)); }
	inline bool get_m_RestoreOriginalTextOnEscape_85() const { return ___m_RestoreOriginalTextOnEscape_85; }
	inline bool* get_address_of_m_RestoreOriginalTextOnEscape_85() { return &___m_RestoreOriginalTextOnEscape_85; }
	inline void set_m_RestoreOriginalTextOnEscape_85(bool value)
	{
		___m_RestoreOriginalTextOnEscape_85 = value;
	}

	inline static int32_t get_offset_of_m_isRichTextEditingAllowed_86() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_isRichTextEditingAllowed_86)); }
	inline bool get_m_isRichTextEditingAllowed_86() const { return ___m_isRichTextEditingAllowed_86; }
	inline bool* get_address_of_m_isRichTextEditingAllowed_86() { return &___m_isRichTextEditingAllowed_86; }
	inline void set_m_isRichTextEditingAllowed_86(bool value)
	{
		___m_isRichTextEditingAllowed_86 = value;
	}

	inline static int32_t get_offset_of_m_InputValidator_87() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_InputValidator_87)); }
	inline TMP_InputValidator_t3726817866 * get_m_InputValidator_87() const { return ___m_InputValidator_87; }
	inline TMP_InputValidator_t3726817866 ** get_address_of_m_InputValidator_87() { return &___m_InputValidator_87; }
	inline void set_m_InputValidator_87(TMP_InputValidator_t3726817866 * value)
	{
		___m_InputValidator_87 = value;
		Il2CppCodeGenWriteBarrier(&___m_InputValidator_87, value);
	}

	inline static int32_t get_offset_of_m_isSelected_88() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_isSelected_88)); }
	inline bool get_m_isSelected_88() const { return ___m_isSelected_88; }
	inline bool* get_address_of_m_isSelected_88() { return &___m_isSelected_88; }
	inline void set_m_isSelected_88(bool value)
	{
		___m_isSelected_88 = value;
	}

	inline static int32_t get_offset_of_isStringPositionDirty_89() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___isStringPositionDirty_89)); }
	inline bool get_isStringPositionDirty_89() const { return ___isStringPositionDirty_89; }
	inline bool* get_address_of_isStringPositionDirty_89() { return &___isStringPositionDirty_89; }
	inline void set_isStringPositionDirty_89(bool value)
	{
		___isStringPositionDirty_89 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_90() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588, ___m_ProcessingEvent_90)); }
	inline Event_t3028476042 * get_m_ProcessingEvent_90() const { return ___m_ProcessingEvent_90; }
	inline Event_t3028476042 ** get_address_of_m_ProcessingEvent_90() { return &___m_ProcessingEvent_90; }
	inline void set_m_ProcessingEvent_90(Event_t3028476042 * value)
	{
		___m_ProcessingEvent_90 = value;
		Il2CppCodeGenWriteBarrier(&___m_ProcessingEvent_90, value);
	}
};

struct TMP_InputField_t1778301588_StaticFields
{
public:
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t1328083999* ___kSeparators_17;

public:
	inline static int32_t get_offset_of_kSeparators_17() { return static_cast<int32_t>(offsetof(TMP_InputField_t1778301588_StaticFields, ___kSeparators_17)); }
	inline CharU5BU5D_t1328083999* get_kSeparators_17() const { return ___kSeparators_17; }
	inline CharU5BU5D_t1328083999** get_address_of_kSeparators_17() { return &___kSeparators_17; }
	inline void set_kSeparators_17(CharU5BU5D_t1328083999* value)
	{
		___kSeparators_17 = value;
		Il2CppCodeGenWriteBarrier(&___kSeparators_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
