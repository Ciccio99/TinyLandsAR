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

// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnvMapAnimator
struct  EnvMapAnimator_t1635389402  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 EnvMapAnimator::RotationSpeeds
	Vector3_t2243707580  ___RotationSpeeds_2;
	// TMPro.TMP_Text EnvMapAnimator::m_textMeshPro
	TMP_Text_t1920000777 * ___m_textMeshPro_3;
	// UnityEngine.Material EnvMapAnimator::m_material
	Material_t193706927 * ___m_material_4;

public:
	inline static int32_t get_offset_of_RotationSpeeds_2() { return static_cast<int32_t>(offsetof(EnvMapAnimator_t1635389402, ___RotationSpeeds_2)); }
	inline Vector3_t2243707580  get_RotationSpeeds_2() const { return ___RotationSpeeds_2; }
	inline Vector3_t2243707580 * get_address_of_RotationSpeeds_2() { return &___RotationSpeeds_2; }
	inline void set_RotationSpeeds_2(Vector3_t2243707580  value)
	{
		___RotationSpeeds_2 = value;
	}

	inline static int32_t get_offset_of_m_textMeshPro_3() { return static_cast<int32_t>(offsetof(EnvMapAnimator_t1635389402, ___m_textMeshPro_3)); }
	inline TMP_Text_t1920000777 * get_m_textMeshPro_3() const { return ___m_textMeshPro_3; }
	inline TMP_Text_t1920000777 ** get_address_of_m_textMeshPro_3() { return &___m_textMeshPro_3; }
	inline void set_m_textMeshPro_3(TMP_Text_t1920000777 * value)
	{
		___m_textMeshPro_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_textMeshPro_3, value);
	}

	inline static int32_t get_offset_of_m_material_4() { return static_cast<int32_t>(offsetof(EnvMapAnimator_t1635389402, ___m_material_4)); }
	inline Material_t193706927 * get_m_material_4() const { return ___m_material_4; }
	inline Material_t193706927 ** get_address_of_m_material_4() { return &___m_material_4; }
	inline void set_m_material_4(Material_t193706927 * value)
	{
		___m_material_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_material_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
