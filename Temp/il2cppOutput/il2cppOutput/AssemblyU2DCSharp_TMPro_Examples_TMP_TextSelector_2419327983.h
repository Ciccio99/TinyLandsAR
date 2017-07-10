#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;
// System.String
struct String_t;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.Camera
struct Camera_t189460977;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t2398608976;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_TextSelector_B
struct  TMP_TextSelector_B_t2419327983  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform TMPro.Examples.TMP_TextSelector_B::TextPopup_Prefab_01
	RectTransform_t3349966182 * ___TextPopup_Prefab_01_2;
	// UnityEngine.RectTransform TMPro.Examples.TMP_TextSelector_B::m_TextPopup_RectTransform
	RectTransform_t3349966182 * ___m_TextPopup_RectTransform_3;
	// TMPro.TextMeshProUGUI TMPro.Examples.TMP_TextSelector_B::m_TextPopup_TMPComponent
	TextMeshProUGUI_t934157183 * ___m_TextPopup_TMPComponent_4;
	// TMPro.TextMeshProUGUI TMPro.Examples.TMP_TextSelector_B::m_TextMeshPro
	TextMeshProUGUI_t934157183 * ___m_TextMeshPro_7;
	// UnityEngine.Canvas TMPro.Examples.TMP_TextSelector_B::m_Canvas
	Canvas_t209405766 * ___m_Canvas_8;
	// UnityEngine.Camera TMPro.Examples.TMP_TextSelector_B::m_Camera
	Camera_t189460977 * ___m_Camera_9;
	// System.Boolean TMPro.Examples.TMP_TextSelector_B::isHoveringObject
	bool ___isHoveringObject_10;
	// System.Int32 TMPro.Examples.TMP_TextSelector_B::m_selectedWord
	int32_t ___m_selectedWord_11;
	// System.Int32 TMPro.Examples.TMP_TextSelector_B::m_selectedLink
	int32_t ___m_selectedLink_12;
	// System.Int32 TMPro.Examples.TMP_TextSelector_B::m_lastIndex
	int32_t ___m_lastIndex_13;
	// UnityEngine.Matrix4x4 TMPro.Examples.TMP_TextSelector_B::m_matrix
	Matrix4x4_t2933234003  ___m_matrix_14;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.TMP_TextSelector_B::m_cachedMeshInfoVertexData
	TMP_MeshInfoU5BU5D_t2398608976* ___m_cachedMeshInfoVertexData_15;

public:
	inline static int32_t get_offset_of_TextPopup_Prefab_01_2() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___TextPopup_Prefab_01_2)); }
	inline RectTransform_t3349966182 * get_TextPopup_Prefab_01_2() const { return ___TextPopup_Prefab_01_2; }
	inline RectTransform_t3349966182 ** get_address_of_TextPopup_Prefab_01_2() { return &___TextPopup_Prefab_01_2; }
	inline void set_TextPopup_Prefab_01_2(RectTransform_t3349966182 * value)
	{
		___TextPopup_Prefab_01_2 = value;
		Il2CppCodeGenWriteBarrier(&___TextPopup_Prefab_01_2, value);
	}

	inline static int32_t get_offset_of_m_TextPopup_RectTransform_3() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___m_TextPopup_RectTransform_3)); }
	inline RectTransform_t3349966182 * get_m_TextPopup_RectTransform_3() const { return ___m_TextPopup_RectTransform_3; }
	inline RectTransform_t3349966182 ** get_address_of_m_TextPopup_RectTransform_3() { return &___m_TextPopup_RectTransform_3; }
	inline void set_m_TextPopup_RectTransform_3(RectTransform_t3349966182 * value)
	{
		___m_TextPopup_RectTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextPopup_RectTransform_3, value);
	}

	inline static int32_t get_offset_of_m_TextPopup_TMPComponent_4() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___m_TextPopup_TMPComponent_4)); }
	inline TextMeshProUGUI_t934157183 * get_m_TextPopup_TMPComponent_4() const { return ___m_TextPopup_TMPComponent_4; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_m_TextPopup_TMPComponent_4() { return &___m_TextPopup_TMPComponent_4; }
	inline void set_m_TextPopup_TMPComponent_4(TextMeshProUGUI_t934157183 * value)
	{
		___m_TextPopup_TMPComponent_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextPopup_TMPComponent_4, value);
	}

	inline static int32_t get_offset_of_m_TextMeshPro_7() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___m_TextMeshPro_7)); }
	inline TextMeshProUGUI_t934157183 * get_m_TextMeshPro_7() const { return ___m_TextMeshPro_7; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_m_TextMeshPro_7() { return &___m_TextMeshPro_7; }
	inline void set_m_TextMeshPro_7(TextMeshProUGUI_t934157183 * value)
	{
		___m_TextMeshPro_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextMeshPro_7, value);
	}

	inline static int32_t get_offset_of_m_Canvas_8() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___m_Canvas_8)); }
	inline Canvas_t209405766 * get_m_Canvas_8() const { return ___m_Canvas_8; }
	inline Canvas_t209405766 ** get_address_of_m_Canvas_8() { return &___m_Canvas_8; }
	inline void set_m_Canvas_8(Canvas_t209405766 * value)
	{
		___m_Canvas_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Canvas_8, value);
	}

	inline static int32_t get_offset_of_m_Camera_9() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___m_Camera_9)); }
	inline Camera_t189460977 * get_m_Camera_9() const { return ___m_Camera_9; }
	inline Camera_t189460977 ** get_address_of_m_Camera_9() { return &___m_Camera_9; }
	inline void set_m_Camera_9(Camera_t189460977 * value)
	{
		___m_Camera_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_9, value);
	}

	inline static int32_t get_offset_of_isHoveringObject_10() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___isHoveringObject_10)); }
	inline bool get_isHoveringObject_10() const { return ___isHoveringObject_10; }
	inline bool* get_address_of_isHoveringObject_10() { return &___isHoveringObject_10; }
	inline void set_isHoveringObject_10(bool value)
	{
		___isHoveringObject_10 = value;
	}

	inline static int32_t get_offset_of_m_selectedWord_11() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___m_selectedWord_11)); }
	inline int32_t get_m_selectedWord_11() const { return ___m_selectedWord_11; }
	inline int32_t* get_address_of_m_selectedWord_11() { return &___m_selectedWord_11; }
	inline void set_m_selectedWord_11(int32_t value)
	{
		___m_selectedWord_11 = value;
	}

	inline static int32_t get_offset_of_m_selectedLink_12() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___m_selectedLink_12)); }
	inline int32_t get_m_selectedLink_12() const { return ___m_selectedLink_12; }
	inline int32_t* get_address_of_m_selectedLink_12() { return &___m_selectedLink_12; }
	inline void set_m_selectedLink_12(int32_t value)
	{
		___m_selectedLink_12 = value;
	}

	inline static int32_t get_offset_of_m_lastIndex_13() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___m_lastIndex_13)); }
	inline int32_t get_m_lastIndex_13() const { return ___m_lastIndex_13; }
	inline int32_t* get_address_of_m_lastIndex_13() { return &___m_lastIndex_13; }
	inline void set_m_lastIndex_13(int32_t value)
	{
		___m_lastIndex_13 = value;
	}

	inline static int32_t get_offset_of_m_matrix_14() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___m_matrix_14)); }
	inline Matrix4x4_t2933234003  get_m_matrix_14() const { return ___m_matrix_14; }
	inline Matrix4x4_t2933234003 * get_address_of_m_matrix_14() { return &___m_matrix_14; }
	inline void set_m_matrix_14(Matrix4x4_t2933234003  value)
	{
		___m_matrix_14 = value;
	}

	inline static int32_t get_offset_of_m_cachedMeshInfoVertexData_15() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2419327983, ___m_cachedMeshInfoVertexData_15)); }
	inline TMP_MeshInfoU5BU5D_t2398608976* get_m_cachedMeshInfoVertexData_15() const { return ___m_cachedMeshInfoVertexData_15; }
	inline TMP_MeshInfoU5BU5D_t2398608976** get_address_of_m_cachedMeshInfoVertexData_15() { return &___m_cachedMeshInfoVertexData_15; }
	inline void set_m_cachedMeshInfoVertexData_15(TMP_MeshInfoU5BU5D_t2398608976* value)
	{
		___m_cachedMeshInfoVertexData_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_cachedMeshInfoVertexData_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
