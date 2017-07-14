#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Canvas
struct Canvas_t209405766;
// GUIAnimFREE/cMoveIn
struct cMoveIn_t4117120096;
// GUIAnimFREE/cRotationIn
struct cRotationIn_t171166949;
// GUIAnimFREE/cScaleIn
struct cScaleIn_t627124389;
// GUIAnimFREE/cFade
struct cFade_t422155280;
// GETweenItem
struct GETweenItem_t3020157540;
// GUIAnimFREE/cPingPongScale
struct cPingPongScale_t2863356814;
// GUIAnimFREE/cPingPongFade
struct cPingPongFade_t3145526934;
// GUIAnimFREE/cMoveOut
struct cMoveOut_t3349073713;
// GUIAnimFREE/cRotationOut
struct cRotationOut_t2609569348;
// GUIAnimFREE/cScaleOut
struct cScaleOut_t572845632;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Outline
struct Outline_t1417504278;
// UnityEngine.UI.Shadow
struct Shadow_t4269599528;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t261436805;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimFREE
struct  GUIAnimFREE_t2360261712  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Canvas GUIAnimFREE::m_Parent_Canvas
	Canvas_t209405766 * ___m_Parent_Canvas_2;
	// System.Single GUIAnimFREE::m_CameraLeftEdge
	float ___m_CameraLeftEdge_3;
	// System.Single GUIAnimFREE::m_CameraRightEdge
	float ___m_CameraRightEdge_4;
	// System.Single GUIAnimFREE::m_CameraTopEdge
	float ___m_CameraTopEdge_5;
	// System.Single GUIAnimFREE::m_CameraBottomEdge
	float ___m_CameraBottomEdge_6;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldTopLeft
	Vector3_t2243707580  ___m_CanvasWorldTopLeft_7;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldTopCenter
	Vector3_t2243707580  ___m_CanvasWorldTopCenter_8;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldTopRight
	Vector3_t2243707580  ___m_CanvasWorldTopRight_9;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldMiddleLeft
	Vector3_t2243707580  ___m_CanvasWorldMiddleLeft_10;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldMiddleCenter
	Vector3_t2243707580  ___m_CanvasWorldMiddleCenter_11;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldMiddleRight
	Vector3_t2243707580  ___m_CanvasWorldMiddleRight_12;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldBottomLeft
	Vector3_t2243707580  ___m_CanvasWorldBottomLeft_13;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldBottomCenter
	Vector3_t2243707580  ___m_CanvasWorldBottomCenter_14;
	// UnityEngine.Vector3 GUIAnimFREE::m_CanvasWorldBottomRight
	Vector3_t2243707580  ___m_CanvasWorldBottomRight_15;
	// UnityEngine.Bounds GUIAnimFREE::m_TotalBounds
	Bounds_t3033363703  ___m_TotalBounds_16;
	// UnityEngine.Vector3 GUIAnimFREE::m_MoveOriginal
	Vector3_t2243707580  ___m_MoveOriginal_17;
	// UnityEngine.Quaternion GUIAnimFREE::m_RotationOriginal
	Quaternion_t4030073918  ___m_RotationOriginal_18;
	// UnityEngine.Vector3 GUIAnimFREE::m_ScaleOriginal
	Vector3_t2243707580  ___m_ScaleOriginal_19;
	// System.Single GUIAnimFREE::m_FadeOriginal
	float ___m_FadeOriginal_20;
	// System.Single GUIAnimFREE::m_FadeOriginalTextOutline
	float ___m_FadeOriginalTextOutline_21;
	// System.Single GUIAnimFREE::m_FadeOriginalTextShadow
	float ___m_FadeOriginalTextShadow_22;
	// GUIAnimFREE/cMoveIn GUIAnimFREE::m_MoveIn
	cMoveIn_t4117120096 * ___m_MoveIn_23;
	// GUIAnimFREE/cRotationIn GUIAnimFREE::m_RotationIn
	cRotationIn_t171166949 * ___m_RotationIn_24;
	// GUIAnimFREE/cScaleIn GUIAnimFREE::m_ScaleIn
	cScaleIn_t627124389 * ___m_ScaleIn_25;
	// GUIAnimFREE/cFade GUIAnimFREE::m_FadeIn
	cFade_t422155280 * ___m_FadeIn_26;
	// GETweenItem GUIAnimFREE::m_GETweenScaleLoop
	GETweenItem_t3020157540 * ___m_GETweenScaleLoop_27;
	// GUIAnimFREE/cPingPongScale GUIAnimFREE::m_ScaleLoop
	cPingPongScale_t2863356814 * ___m_ScaleLoop_28;
	// GETweenItem GUIAnimFREE::m_GETweenFadeLoop
	GETweenItem_t3020157540 * ___m_GETweenFadeLoop_29;
	// GUIAnimFREE/cPingPongFade GUIAnimFREE::m_FadeLoop
	cPingPongFade_t3145526934 * ___m_FadeLoop_30;
	// GUIAnimFREE/cMoveOut GUIAnimFREE::m_MoveOut
	cMoveOut_t3349073713 * ___m_MoveOut_31;
	// GUIAnimFREE/cRotationOut GUIAnimFREE::m_RotationOut
	cRotationOut_t2609569348 * ___m_RotationOut_32;
	// GUIAnimFREE/cScaleOut GUIAnimFREE::m_ScaleOut
	cScaleOut_t572845632 * ___m_ScaleOut_33;
	// GUIAnimFREE/cFade GUIAnimFREE::m_FadeOut
	cFade_t422155280 * ___m_FadeOut_34;
	// System.Single GUIAnimFREE::m_MoveVariable
	float ___m_MoveVariable_35;
	// System.Single GUIAnimFREE::m_RotationVariable
	float ___m_RotationVariable_36;
	// System.Single GUIAnimFREE::m_ScaleVariable
	float ___m_ScaleVariable_37;
	// System.Single GUIAnimFREE::m_FadeVariable
	float ___m_FadeVariable_38;
	// System.Boolean GUIAnimFREE::m_InitialDone
	bool ___m_InitialDone_39;
	// UnityEngine.RectTransform GUIAnimFREE::m_RectTransform
	RectTransform_t3349966182 * ___m_RectTransform_40;
	// UnityEngine.UI.Image GUIAnimFREE::m_Image
	Image_t2042527209 * ___m_Image_41;
	// UnityEngine.UI.Toggle GUIAnimFREE::m_Toggle
	Toggle_t3976754468 * ___m_Toggle_42;
	// UnityEngine.UI.Text GUIAnimFREE::m_Text
	Text_t356221433 * ___m_Text_43;
	// UnityEngine.UI.Outline GUIAnimFREE::m_TextOutline
	Outline_t1417504278 * ___m_TextOutline_44;
	// UnityEngine.UI.Shadow GUIAnimFREE::m_TextShadow
	Shadow_t4269599528 * ___m_TextShadow_45;
	// UnityEngine.UI.RawImage GUIAnimFREE::m_RawImage
	RawImage_t2749640213 * ___m_RawImage_46;
	// UnityEngine.UI.Slider GUIAnimFREE::m_Slider
	Slider_t297367283 * ___m_Slider_47;
	// UnityEngine.CanvasRenderer GUIAnimFREE::m_CanvasRenderer
	CanvasRenderer_t261436805 * ___m_CanvasRenderer_48;
	// UnityEngine.RectTransform GUIAnimFREE::m_ParentCanvasRectTransform
	RectTransform_t3349966182 * ___m_ParentCanvasRectTransform_49;
	// System.Int32 GUIAnimFREE::m_MoveIdle_Attemp
	int32_t ___m_MoveIdle_Attemp_50;
	// System.Int32 GUIAnimFREE::m_MoveIdle_AttempMax
	int32_t ___m_MoveIdle_AttempMax_51;
	// System.Single GUIAnimFREE::m_MoveIdle_AttempMax_TimeInterval
	float ___m_MoveIdle_AttempMax_TimeInterval_52;
	// System.Boolean GUIAnimFREE::m_MoveIdle_StartSucceed
	bool ___m_MoveIdle_StartSucceed_53;

public:
	inline static int32_t get_offset_of_m_Parent_Canvas_2() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_Parent_Canvas_2)); }
	inline Canvas_t209405766 * get_m_Parent_Canvas_2() const { return ___m_Parent_Canvas_2; }
	inline Canvas_t209405766 ** get_address_of_m_Parent_Canvas_2() { return &___m_Parent_Canvas_2; }
	inline void set_m_Parent_Canvas_2(Canvas_t209405766 * value)
	{
		___m_Parent_Canvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Parent_Canvas_2, value);
	}

	inline static int32_t get_offset_of_m_CameraLeftEdge_3() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CameraLeftEdge_3)); }
	inline float get_m_CameraLeftEdge_3() const { return ___m_CameraLeftEdge_3; }
	inline float* get_address_of_m_CameraLeftEdge_3() { return &___m_CameraLeftEdge_3; }
	inline void set_m_CameraLeftEdge_3(float value)
	{
		___m_CameraLeftEdge_3 = value;
	}

	inline static int32_t get_offset_of_m_CameraRightEdge_4() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CameraRightEdge_4)); }
	inline float get_m_CameraRightEdge_4() const { return ___m_CameraRightEdge_4; }
	inline float* get_address_of_m_CameraRightEdge_4() { return &___m_CameraRightEdge_4; }
	inline void set_m_CameraRightEdge_4(float value)
	{
		___m_CameraRightEdge_4 = value;
	}

	inline static int32_t get_offset_of_m_CameraTopEdge_5() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CameraTopEdge_5)); }
	inline float get_m_CameraTopEdge_5() const { return ___m_CameraTopEdge_5; }
	inline float* get_address_of_m_CameraTopEdge_5() { return &___m_CameraTopEdge_5; }
	inline void set_m_CameraTopEdge_5(float value)
	{
		___m_CameraTopEdge_5 = value;
	}

	inline static int32_t get_offset_of_m_CameraBottomEdge_6() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CameraBottomEdge_6)); }
	inline float get_m_CameraBottomEdge_6() const { return ___m_CameraBottomEdge_6; }
	inline float* get_address_of_m_CameraBottomEdge_6() { return &___m_CameraBottomEdge_6; }
	inline void set_m_CameraBottomEdge_6(float value)
	{
		___m_CameraBottomEdge_6 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldTopLeft_7() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CanvasWorldTopLeft_7)); }
	inline Vector3_t2243707580  get_m_CanvasWorldTopLeft_7() const { return ___m_CanvasWorldTopLeft_7; }
	inline Vector3_t2243707580 * get_address_of_m_CanvasWorldTopLeft_7() { return &___m_CanvasWorldTopLeft_7; }
	inline void set_m_CanvasWorldTopLeft_7(Vector3_t2243707580  value)
	{
		___m_CanvasWorldTopLeft_7 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldTopCenter_8() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CanvasWorldTopCenter_8)); }
	inline Vector3_t2243707580  get_m_CanvasWorldTopCenter_8() const { return ___m_CanvasWorldTopCenter_8; }
	inline Vector3_t2243707580 * get_address_of_m_CanvasWorldTopCenter_8() { return &___m_CanvasWorldTopCenter_8; }
	inline void set_m_CanvasWorldTopCenter_8(Vector3_t2243707580  value)
	{
		___m_CanvasWorldTopCenter_8 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldTopRight_9() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CanvasWorldTopRight_9)); }
	inline Vector3_t2243707580  get_m_CanvasWorldTopRight_9() const { return ___m_CanvasWorldTopRight_9; }
	inline Vector3_t2243707580 * get_address_of_m_CanvasWorldTopRight_9() { return &___m_CanvasWorldTopRight_9; }
	inline void set_m_CanvasWorldTopRight_9(Vector3_t2243707580  value)
	{
		___m_CanvasWorldTopRight_9 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldMiddleLeft_10() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CanvasWorldMiddleLeft_10)); }
	inline Vector3_t2243707580  get_m_CanvasWorldMiddleLeft_10() const { return ___m_CanvasWorldMiddleLeft_10; }
	inline Vector3_t2243707580 * get_address_of_m_CanvasWorldMiddleLeft_10() { return &___m_CanvasWorldMiddleLeft_10; }
	inline void set_m_CanvasWorldMiddleLeft_10(Vector3_t2243707580  value)
	{
		___m_CanvasWorldMiddleLeft_10 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldMiddleCenter_11() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CanvasWorldMiddleCenter_11)); }
	inline Vector3_t2243707580  get_m_CanvasWorldMiddleCenter_11() const { return ___m_CanvasWorldMiddleCenter_11; }
	inline Vector3_t2243707580 * get_address_of_m_CanvasWorldMiddleCenter_11() { return &___m_CanvasWorldMiddleCenter_11; }
	inline void set_m_CanvasWorldMiddleCenter_11(Vector3_t2243707580  value)
	{
		___m_CanvasWorldMiddleCenter_11 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldMiddleRight_12() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CanvasWorldMiddleRight_12)); }
	inline Vector3_t2243707580  get_m_CanvasWorldMiddleRight_12() const { return ___m_CanvasWorldMiddleRight_12; }
	inline Vector3_t2243707580 * get_address_of_m_CanvasWorldMiddleRight_12() { return &___m_CanvasWorldMiddleRight_12; }
	inline void set_m_CanvasWorldMiddleRight_12(Vector3_t2243707580  value)
	{
		___m_CanvasWorldMiddleRight_12 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldBottomLeft_13() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CanvasWorldBottomLeft_13)); }
	inline Vector3_t2243707580  get_m_CanvasWorldBottomLeft_13() const { return ___m_CanvasWorldBottomLeft_13; }
	inline Vector3_t2243707580 * get_address_of_m_CanvasWorldBottomLeft_13() { return &___m_CanvasWorldBottomLeft_13; }
	inline void set_m_CanvasWorldBottomLeft_13(Vector3_t2243707580  value)
	{
		___m_CanvasWorldBottomLeft_13 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldBottomCenter_14() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CanvasWorldBottomCenter_14)); }
	inline Vector3_t2243707580  get_m_CanvasWorldBottomCenter_14() const { return ___m_CanvasWorldBottomCenter_14; }
	inline Vector3_t2243707580 * get_address_of_m_CanvasWorldBottomCenter_14() { return &___m_CanvasWorldBottomCenter_14; }
	inline void set_m_CanvasWorldBottomCenter_14(Vector3_t2243707580  value)
	{
		___m_CanvasWorldBottomCenter_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasWorldBottomRight_15() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CanvasWorldBottomRight_15)); }
	inline Vector3_t2243707580  get_m_CanvasWorldBottomRight_15() const { return ___m_CanvasWorldBottomRight_15; }
	inline Vector3_t2243707580 * get_address_of_m_CanvasWorldBottomRight_15() { return &___m_CanvasWorldBottomRight_15; }
	inline void set_m_CanvasWorldBottomRight_15(Vector3_t2243707580  value)
	{
		___m_CanvasWorldBottomRight_15 = value;
	}

	inline static int32_t get_offset_of_m_TotalBounds_16() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_TotalBounds_16)); }
	inline Bounds_t3033363703  get_m_TotalBounds_16() const { return ___m_TotalBounds_16; }
	inline Bounds_t3033363703 * get_address_of_m_TotalBounds_16() { return &___m_TotalBounds_16; }
	inline void set_m_TotalBounds_16(Bounds_t3033363703  value)
	{
		___m_TotalBounds_16 = value;
	}

	inline static int32_t get_offset_of_m_MoveOriginal_17() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_MoveOriginal_17)); }
	inline Vector3_t2243707580  get_m_MoveOriginal_17() const { return ___m_MoveOriginal_17; }
	inline Vector3_t2243707580 * get_address_of_m_MoveOriginal_17() { return &___m_MoveOriginal_17; }
	inline void set_m_MoveOriginal_17(Vector3_t2243707580  value)
	{
		___m_MoveOriginal_17 = value;
	}

	inline static int32_t get_offset_of_m_RotationOriginal_18() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_RotationOriginal_18)); }
	inline Quaternion_t4030073918  get_m_RotationOriginal_18() const { return ___m_RotationOriginal_18; }
	inline Quaternion_t4030073918 * get_address_of_m_RotationOriginal_18() { return &___m_RotationOriginal_18; }
	inline void set_m_RotationOriginal_18(Quaternion_t4030073918  value)
	{
		___m_RotationOriginal_18 = value;
	}

	inline static int32_t get_offset_of_m_ScaleOriginal_19() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_ScaleOriginal_19)); }
	inline Vector3_t2243707580  get_m_ScaleOriginal_19() const { return ___m_ScaleOriginal_19; }
	inline Vector3_t2243707580 * get_address_of_m_ScaleOriginal_19() { return &___m_ScaleOriginal_19; }
	inline void set_m_ScaleOriginal_19(Vector3_t2243707580  value)
	{
		___m_ScaleOriginal_19 = value;
	}

	inline static int32_t get_offset_of_m_FadeOriginal_20() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_FadeOriginal_20)); }
	inline float get_m_FadeOriginal_20() const { return ___m_FadeOriginal_20; }
	inline float* get_address_of_m_FadeOriginal_20() { return &___m_FadeOriginal_20; }
	inline void set_m_FadeOriginal_20(float value)
	{
		___m_FadeOriginal_20 = value;
	}

	inline static int32_t get_offset_of_m_FadeOriginalTextOutline_21() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_FadeOriginalTextOutline_21)); }
	inline float get_m_FadeOriginalTextOutline_21() const { return ___m_FadeOriginalTextOutline_21; }
	inline float* get_address_of_m_FadeOriginalTextOutline_21() { return &___m_FadeOriginalTextOutline_21; }
	inline void set_m_FadeOriginalTextOutline_21(float value)
	{
		___m_FadeOriginalTextOutline_21 = value;
	}

	inline static int32_t get_offset_of_m_FadeOriginalTextShadow_22() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_FadeOriginalTextShadow_22)); }
	inline float get_m_FadeOriginalTextShadow_22() const { return ___m_FadeOriginalTextShadow_22; }
	inline float* get_address_of_m_FadeOriginalTextShadow_22() { return &___m_FadeOriginalTextShadow_22; }
	inline void set_m_FadeOriginalTextShadow_22(float value)
	{
		___m_FadeOriginalTextShadow_22 = value;
	}

	inline static int32_t get_offset_of_m_MoveIn_23() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_MoveIn_23)); }
	inline cMoveIn_t4117120096 * get_m_MoveIn_23() const { return ___m_MoveIn_23; }
	inline cMoveIn_t4117120096 ** get_address_of_m_MoveIn_23() { return &___m_MoveIn_23; }
	inline void set_m_MoveIn_23(cMoveIn_t4117120096 * value)
	{
		___m_MoveIn_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_MoveIn_23, value);
	}

	inline static int32_t get_offset_of_m_RotationIn_24() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_RotationIn_24)); }
	inline cRotationIn_t171166949 * get_m_RotationIn_24() const { return ___m_RotationIn_24; }
	inline cRotationIn_t171166949 ** get_address_of_m_RotationIn_24() { return &___m_RotationIn_24; }
	inline void set_m_RotationIn_24(cRotationIn_t171166949 * value)
	{
		___m_RotationIn_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_RotationIn_24, value);
	}

	inline static int32_t get_offset_of_m_ScaleIn_25() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_ScaleIn_25)); }
	inline cScaleIn_t627124389 * get_m_ScaleIn_25() const { return ___m_ScaleIn_25; }
	inline cScaleIn_t627124389 ** get_address_of_m_ScaleIn_25() { return &___m_ScaleIn_25; }
	inline void set_m_ScaleIn_25(cScaleIn_t627124389 * value)
	{
		___m_ScaleIn_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_ScaleIn_25, value);
	}

	inline static int32_t get_offset_of_m_FadeIn_26() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_FadeIn_26)); }
	inline cFade_t422155280 * get_m_FadeIn_26() const { return ___m_FadeIn_26; }
	inline cFade_t422155280 ** get_address_of_m_FadeIn_26() { return &___m_FadeIn_26; }
	inline void set_m_FadeIn_26(cFade_t422155280 * value)
	{
		___m_FadeIn_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_FadeIn_26, value);
	}

	inline static int32_t get_offset_of_m_GETweenScaleLoop_27() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_GETweenScaleLoop_27)); }
	inline GETweenItem_t3020157540 * get_m_GETweenScaleLoop_27() const { return ___m_GETweenScaleLoop_27; }
	inline GETweenItem_t3020157540 ** get_address_of_m_GETweenScaleLoop_27() { return &___m_GETweenScaleLoop_27; }
	inline void set_m_GETweenScaleLoop_27(GETweenItem_t3020157540 * value)
	{
		___m_GETweenScaleLoop_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_GETweenScaleLoop_27, value);
	}

	inline static int32_t get_offset_of_m_ScaleLoop_28() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_ScaleLoop_28)); }
	inline cPingPongScale_t2863356814 * get_m_ScaleLoop_28() const { return ___m_ScaleLoop_28; }
	inline cPingPongScale_t2863356814 ** get_address_of_m_ScaleLoop_28() { return &___m_ScaleLoop_28; }
	inline void set_m_ScaleLoop_28(cPingPongScale_t2863356814 * value)
	{
		___m_ScaleLoop_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_ScaleLoop_28, value);
	}

	inline static int32_t get_offset_of_m_GETweenFadeLoop_29() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_GETweenFadeLoop_29)); }
	inline GETweenItem_t3020157540 * get_m_GETweenFadeLoop_29() const { return ___m_GETweenFadeLoop_29; }
	inline GETweenItem_t3020157540 ** get_address_of_m_GETweenFadeLoop_29() { return &___m_GETweenFadeLoop_29; }
	inline void set_m_GETweenFadeLoop_29(GETweenItem_t3020157540 * value)
	{
		___m_GETweenFadeLoop_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_GETweenFadeLoop_29, value);
	}

	inline static int32_t get_offset_of_m_FadeLoop_30() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_FadeLoop_30)); }
	inline cPingPongFade_t3145526934 * get_m_FadeLoop_30() const { return ___m_FadeLoop_30; }
	inline cPingPongFade_t3145526934 ** get_address_of_m_FadeLoop_30() { return &___m_FadeLoop_30; }
	inline void set_m_FadeLoop_30(cPingPongFade_t3145526934 * value)
	{
		___m_FadeLoop_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_FadeLoop_30, value);
	}

	inline static int32_t get_offset_of_m_MoveOut_31() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_MoveOut_31)); }
	inline cMoveOut_t3349073713 * get_m_MoveOut_31() const { return ___m_MoveOut_31; }
	inline cMoveOut_t3349073713 ** get_address_of_m_MoveOut_31() { return &___m_MoveOut_31; }
	inline void set_m_MoveOut_31(cMoveOut_t3349073713 * value)
	{
		___m_MoveOut_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_MoveOut_31, value);
	}

	inline static int32_t get_offset_of_m_RotationOut_32() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_RotationOut_32)); }
	inline cRotationOut_t2609569348 * get_m_RotationOut_32() const { return ___m_RotationOut_32; }
	inline cRotationOut_t2609569348 ** get_address_of_m_RotationOut_32() { return &___m_RotationOut_32; }
	inline void set_m_RotationOut_32(cRotationOut_t2609569348 * value)
	{
		___m_RotationOut_32 = value;
		Il2CppCodeGenWriteBarrier(&___m_RotationOut_32, value);
	}

	inline static int32_t get_offset_of_m_ScaleOut_33() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_ScaleOut_33)); }
	inline cScaleOut_t572845632 * get_m_ScaleOut_33() const { return ___m_ScaleOut_33; }
	inline cScaleOut_t572845632 ** get_address_of_m_ScaleOut_33() { return &___m_ScaleOut_33; }
	inline void set_m_ScaleOut_33(cScaleOut_t572845632 * value)
	{
		___m_ScaleOut_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_ScaleOut_33, value);
	}

	inline static int32_t get_offset_of_m_FadeOut_34() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_FadeOut_34)); }
	inline cFade_t422155280 * get_m_FadeOut_34() const { return ___m_FadeOut_34; }
	inline cFade_t422155280 ** get_address_of_m_FadeOut_34() { return &___m_FadeOut_34; }
	inline void set_m_FadeOut_34(cFade_t422155280 * value)
	{
		___m_FadeOut_34 = value;
		Il2CppCodeGenWriteBarrier(&___m_FadeOut_34, value);
	}

	inline static int32_t get_offset_of_m_MoveVariable_35() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_MoveVariable_35)); }
	inline float get_m_MoveVariable_35() const { return ___m_MoveVariable_35; }
	inline float* get_address_of_m_MoveVariable_35() { return &___m_MoveVariable_35; }
	inline void set_m_MoveVariable_35(float value)
	{
		___m_MoveVariable_35 = value;
	}

	inline static int32_t get_offset_of_m_RotationVariable_36() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_RotationVariable_36)); }
	inline float get_m_RotationVariable_36() const { return ___m_RotationVariable_36; }
	inline float* get_address_of_m_RotationVariable_36() { return &___m_RotationVariable_36; }
	inline void set_m_RotationVariable_36(float value)
	{
		___m_RotationVariable_36 = value;
	}

	inline static int32_t get_offset_of_m_ScaleVariable_37() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_ScaleVariable_37)); }
	inline float get_m_ScaleVariable_37() const { return ___m_ScaleVariable_37; }
	inline float* get_address_of_m_ScaleVariable_37() { return &___m_ScaleVariable_37; }
	inline void set_m_ScaleVariable_37(float value)
	{
		___m_ScaleVariable_37 = value;
	}

	inline static int32_t get_offset_of_m_FadeVariable_38() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_FadeVariable_38)); }
	inline float get_m_FadeVariable_38() const { return ___m_FadeVariable_38; }
	inline float* get_address_of_m_FadeVariable_38() { return &___m_FadeVariable_38; }
	inline void set_m_FadeVariable_38(float value)
	{
		___m_FadeVariable_38 = value;
	}

	inline static int32_t get_offset_of_m_InitialDone_39() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_InitialDone_39)); }
	inline bool get_m_InitialDone_39() const { return ___m_InitialDone_39; }
	inline bool* get_address_of_m_InitialDone_39() { return &___m_InitialDone_39; }
	inline void set_m_InitialDone_39(bool value)
	{
		___m_InitialDone_39 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_40() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_RectTransform_40)); }
	inline RectTransform_t3349966182 * get_m_RectTransform_40() const { return ___m_RectTransform_40; }
	inline RectTransform_t3349966182 ** get_address_of_m_RectTransform_40() { return &___m_RectTransform_40; }
	inline void set_m_RectTransform_40(RectTransform_t3349966182 * value)
	{
		___m_RectTransform_40 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_40, value);
	}

	inline static int32_t get_offset_of_m_Image_41() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_Image_41)); }
	inline Image_t2042527209 * get_m_Image_41() const { return ___m_Image_41; }
	inline Image_t2042527209 ** get_address_of_m_Image_41() { return &___m_Image_41; }
	inline void set_m_Image_41(Image_t2042527209 * value)
	{
		___m_Image_41 = value;
		Il2CppCodeGenWriteBarrier(&___m_Image_41, value);
	}

	inline static int32_t get_offset_of_m_Toggle_42() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_Toggle_42)); }
	inline Toggle_t3976754468 * get_m_Toggle_42() const { return ___m_Toggle_42; }
	inline Toggle_t3976754468 ** get_address_of_m_Toggle_42() { return &___m_Toggle_42; }
	inline void set_m_Toggle_42(Toggle_t3976754468 * value)
	{
		___m_Toggle_42 = value;
		Il2CppCodeGenWriteBarrier(&___m_Toggle_42, value);
	}

	inline static int32_t get_offset_of_m_Text_43() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_Text_43)); }
	inline Text_t356221433 * get_m_Text_43() const { return ___m_Text_43; }
	inline Text_t356221433 ** get_address_of_m_Text_43() { return &___m_Text_43; }
	inline void set_m_Text_43(Text_t356221433 * value)
	{
		___m_Text_43 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_43, value);
	}

	inline static int32_t get_offset_of_m_TextOutline_44() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_TextOutline_44)); }
	inline Outline_t1417504278 * get_m_TextOutline_44() const { return ___m_TextOutline_44; }
	inline Outline_t1417504278 ** get_address_of_m_TextOutline_44() { return &___m_TextOutline_44; }
	inline void set_m_TextOutline_44(Outline_t1417504278 * value)
	{
		___m_TextOutline_44 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextOutline_44, value);
	}

	inline static int32_t get_offset_of_m_TextShadow_45() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_TextShadow_45)); }
	inline Shadow_t4269599528 * get_m_TextShadow_45() const { return ___m_TextShadow_45; }
	inline Shadow_t4269599528 ** get_address_of_m_TextShadow_45() { return &___m_TextShadow_45; }
	inline void set_m_TextShadow_45(Shadow_t4269599528 * value)
	{
		___m_TextShadow_45 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextShadow_45, value);
	}

	inline static int32_t get_offset_of_m_RawImage_46() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_RawImage_46)); }
	inline RawImage_t2749640213 * get_m_RawImage_46() const { return ___m_RawImage_46; }
	inline RawImage_t2749640213 ** get_address_of_m_RawImage_46() { return &___m_RawImage_46; }
	inline void set_m_RawImage_46(RawImage_t2749640213 * value)
	{
		___m_RawImage_46 = value;
		Il2CppCodeGenWriteBarrier(&___m_RawImage_46, value);
	}

	inline static int32_t get_offset_of_m_Slider_47() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_Slider_47)); }
	inline Slider_t297367283 * get_m_Slider_47() const { return ___m_Slider_47; }
	inline Slider_t297367283 ** get_address_of_m_Slider_47() { return &___m_Slider_47; }
	inline void set_m_Slider_47(Slider_t297367283 * value)
	{
		___m_Slider_47 = value;
		Il2CppCodeGenWriteBarrier(&___m_Slider_47, value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_48() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_CanvasRenderer_48)); }
	inline CanvasRenderer_t261436805 * get_m_CanvasRenderer_48() const { return ___m_CanvasRenderer_48; }
	inline CanvasRenderer_t261436805 ** get_address_of_m_CanvasRenderer_48() { return &___m_CanvasRenderer_48; }
	inline void set_m_CanvasRenderer_48(CanvasRenderer_t261436805 * value)
	{
		___m_CanvasRenderer_48 = value;
		Il2CppCodeGenWriteBarrier(&___m_CanvasRenderer_48, value);
	}

	inline static int32_t get_offset_of_m_ParentCanvasRectTransform_49() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_ParentCanvasRectTransform_49)); }
	inline RectTransform_t3349966182 * get_m_ParentCanvasRectTransform_49() const { return ___m_ParentCanvasRectTransform_49; }
	inline RectTransform_t3349966182 ** get_address_of_m_ParentCanvasRectTransform_49() { return &___m_ParentCanvasRectTransform_49; }
	inline void set_m_ParentCanvasRectTransform_49(RectTransform_t3349966182 * value)
	{
		___m_ParentCanvasRectTransform_49 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParentCanvasRectTransform_49, value);
	}

	inline static int32_t get_offset_of_m_MoveIdle_Attemp_50() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_MoveIdle_Attemp_50)); }
	inline int32_t get_m_MoveIdle_Attemp_50() const { return ___m_MoveIdle_Attemp_50; }
	inline int32_t* get_address_of_m_MoveIdle_Attemp_50() { return &___m_MoveIdle_Attemp_50; }
	inline void set_m_MoveIdle_Attemp_50(int32_t value)
	{
		___m_MoveIdle_Attemp_50 = value;
	}

	inline static int32_t get_offset_of_m_MoveIdle_AttempMax_51() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_MoveIdle_AttempMax_51)); }
	inline int32_t get_m_MoveIdle_AttempMax_51() const { return ___m_MoveIdle_AttempMax_51; }
	inline int32_t* get_address_of_m_MoveIdle_AttempMax_51() { return &___m_MoveIdle_AttempMax_51; }
	inline void set_m_MoveIdle_AttempMax_51(int32_t value)
	{
		___m_MoveIdle_AttempMax_51 = value;
	}

	inline static int32_t get_offset_of_m_MoveIdle_AttempMax_TimeInterval_52() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_MoveIdle_AttempMax_TimeInterval_52)); }
	inline float get_m_MoveIdle_AttempMax_TimeInterval_52() const { return ___m_MoveIdle_AttempMax_TimeInterval_52; }
	inline float* get_address_of_m_MoveIdle_AttempMax_TimeInterval_52() { return &___m_MoveIdle_AttempMax_TimeInterval_52; }
	inline void set_m_MoveIdle_AttempMax_TimeInterval_52(float value)
	{
		___m_MoveIdle_AttempMax_TimeInterval_52 = value;
	}

	inline static int32_t get_offset_of_m_MoveIdle_StartSucceed_53() { return static_cast<int32_t>(offsetof(GUIAnimFREE_t2360261712, ___m_MoveIdle_StartSucceed_53)); }
	inline bool get_m_MoveIdle_StartSucceed_53() const { return ___m_MoveIdle_StartSucceed_53; }
	inline bool* get_address_of_m_MoveIdle_StartSucceed_53() { return &___m_MoveIdle_StartSucceed_53; }
	inline void set_m_MoveIdle_StartSucceed_53(bool value)
	{
		___m_MoveIdle_StartSucceed_53 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
