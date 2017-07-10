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
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Font
struct Font_t4239498691;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// TMPro.TextMeshPro
struct TextMeshPro_t2521834357;
// UnityEngine.TextMesh
struct TextMesh_t1641806576;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextMeshProFloatingText
struct  TextMeshProFloatingText_t6181308  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Font TMPro.Examples.TextMeshProFloatingText::TheFont
	Font_t4239498691 * ___TheFont_2;
	// UnityEngine.GameObject TMPro.Examples.TextMeshProFloatingText::m_floatingText
	GameObject_t1756533147 * ___m_floatingText_3;
	// TMPro.TextMeshPro TMPro.Examples.TextMeshProFloatingText::m_textMeshPro
	TextMeshPro_t2521834357 * ___m_textMeshPro_4;
	// UnityEngine.TextMesh TMPro.Examples.TextMeshProFloatingText::m_textMesh
	TextMesh_t1641806576 * ___m_textMesh_5;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_transform
	Transform_t3275118058 * ___m_transform_6;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_floatingText_Transform
	Transform_t3275118058 * ___m_floatingText_Transform_7;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_cameraTransform
	Transform_t3275118058 * ___m_cameraTransform_8;
	// UnityEngine.Vector3 TMPro.Examples.TextMeshProFloatingText::lastPOS
	Vector3_t2243707580  ___lastPOS_9;
	// UnityEngine.Quaternion TMPro.Examples.TextMeshProFloatingText::lastRotation
	Quaternion_t4030073918  ___lastRotation_10;
	// System.Int32 TMPro.Examples.TextMeshProFloatingText::SpawnType
	int32_t ___SpawnType_11;

public:
	inline static int32_t get_offset_of_TheFont_2() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t6181308, ___TheFont_2)); }
	inline Font_t4239498691 * get_TheFont_2() const { return ___TheFont_2; }
	inline Font_t4239498691 ** get_address_of_TheFont_2() { return &___TheFont_2; }
	inline void set_TheFont_2(Font_t4239498691 * value)
	{
		___TheFont_2 = value;
		Il2CppCodeGenWriteBarrier(&___TheFont_2, value);
	}

	inline static int32_t get_offset_of_m_floatingText_3() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t6181308, ___m_floatingText_3)); }
	inline GameObject_t1756533147 * get_m_floatingText_3() const { return ___m_floatingText_3; }
	inline GameObject_t1756533147 ** get_address_of_m_floatingText_3() { return &___m_floatingText_3; }
	inline void set_m_floatingText_3(GameObject_t1756533147 * value)
	{
		___m_floatingText_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_floatingText_3, value);
	}

	inline static int32_t get_offset_of_m_textMeshPro_4() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t6181308, ___m_textMeshPro_4)); }
	inline TextMeshPro_t2521834357 * get_m_textMeshPro_4() const { return ___m_textMeshPro_4; }
	inline TextMeshPro_t2521834357 ** get_address_of_m_textMeshPro_4() { return &___m_textMeshPro_4; }
	inline void set_m_textMeshPro_4(TextMeshPro_t2521834357 * value)
	{
		___m_textMeshPro_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_textMeshPro_4, value);
	}

	inline static int32_t get_offset_of_m_textMesh_5() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t6181308, ___m_textMesh_5)); }
	inline TextMesh_t1641806576 * get_m_textMesh_5() const { return ___m_textMesh_5; }
	inline TextMesh_t1641806576 ** get_address_of_m_textMesh_5() { return &___m_textMesh_5; }
	inline void set_m_textMesh_5(TextMesh_t1641806576 * value)
	{
		___m_textMesh_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_textMesh_5, value);
	}

	inline static int32_t get_offset_of_m_transform_6() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t6181308, ___m_transform_6)); }
	inline Transform_t3275118058 * get_m_transform_6() const { return ___m_transform_6; }
	inline Transform_t3275118058 ** get_address_of_m_transform_6() { return &___m_transform_6; }
	inline void set_m_transform_6(Transform_t3275118058 * value)
	{
		___m_transform_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_transform_6, value);
	}

	inline static int32_t get_offset_of_m_floatingText_Transform_7() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t6181308, ___m_floatingText_Transform_7)); }
	inline Transform_t3275118058 * get_m_floatingText_Transform_7() const { return ___m_floatingText_Transform_7; }
	inline Transform_t3275118058 ** get_address_of_m_floatingText_Transform_7() { return &___m_floatingText_Transform_7; }
	inline void set_m_floatingText_Transform_7(Transform_t3275118058 * value)
	{
		___m_floatingText_Transform_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_floatingText_Transform_7, value);
	}

	inline static int32_t get_offset_of_m_cameraTransform_8() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t6181308, ___m_cameraTransform_8)); }
	inline Transform_t3275118058 * get_m_cameraTransform_8() const { return ___m_cameraTransform_8; }
	inline Transform_t3275118058 ** get_address_of_m_cameraTransform_8() { return &___m_cameraTransform_8; }
	inline void set_m_cameraTransform_8(Transform_t3275118058 * value)
	{
		___m_cameraTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_cameraTransform_8, value);
	}

	inline static int32_t get_offset_of_lastPOS_9() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t6181308, ___lastPOS_9)); }
	inline Vector3_t2243707580  get_lastPOS_9() const { return ___lastPOS_9; }
	inline Vector3_t2243707580 * get_address_of_lastPOS_9() { return &___lastPOS_9; }
	inline void set_lastPOS_9(Vector3_t2243707580  value)
	{
		___lastPOS_9 = value;
	}

	inline static int32_t get_offset_of_lastRotation_10() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t6181308, ___lastRotation_10)); }
	inline Quaternion_t4030073918  get_lastRotation_10() const { return ___lastRotation_10; }
	inline Quaternion_t4030073918 * get_address_of_lastRotation_10() { return &___lastRotation_10; }
	inline void set_lastRotation_10(Quaternion_t4030073918  value)
	{
		___lastRotation_10 = value;
	}

	inline static int32_t get_offset_of_SpawnType_11() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t6181308, ___SpawnType_11)); }
	inline int32_t get_SpawnType_11() const { return ___SpawnType_11; }
	inline int32_t* get_address_of_SpawnType_11() { return &___SpawnType_11; }
	inline void set_SpawnType_11(int32_t value)
	{
		___SpawnType_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
