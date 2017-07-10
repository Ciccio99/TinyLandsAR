#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.PlatformerCharacter2D
struct  PlatformerCharacter2D_t607923855  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UnityStandardAssets._2D.PlatformerCharacter2D::m_MaxSpeed
	float ___m_MaxSpeed_2;
	// System.Single UnityStandardAssets._2D.PlatformerCharacter2D::m_JumpForce
	float ___m_JumpForce_3;
	// System.Single UnityStandardAssets._2D.PlatformerCharacter2D::m_CrouchSpeed
	float ___m_CrouchSpeed_4;
	// System.Boolean UnityStandardAssets._2D.PlatformerCharacter2D::m_AirControl
	bool ___m_AirControl_5;
	// UnityEngine.LayerMask UnityStandardAssets._2D.PlatformerCharacter2D::m_WhatIsGround
	LayerMask_t3188175821  ___m_WhatIsGround_6;
	// UnityEngine.Transform UnityStandardAssets._2D.PlatformerCharacter2D::m_GroundCheck
	Transform_t3275118058 * ___m_GroundCheck_7;
	// System.Boolean UnityStandardAssets._2D.PlatformerCharacter2D::m_Grounded
	bool ___m_Grounded_9;
	// UnityEngine.Transform UnityStandardAssets._2D.PlatformerCharacter2D::m_CeilingCheck
	Transform_t3275118058 * ___m_CeilingCheck_10;
	// UnityEngine.Animator UnityStandardAssets._2D.PlatformerCharacter2D::m_Anim
	Animator_t69676727 * ___m_Anim_12;
	// UnityEngine.Rigidbody2D UnityStandardAssets._2D.PlatformerCharacter2D::m_Rigidbody2D
	Rigidbody2D_t502193897 * ___m_Rigidbody2D_13;
	// System.Boolean UnityStandardAssets._2D.PlatformerCharacter2D::m_FacingRight
	bool ___m_FacingRight_14;

public:
	inline static int32_t get_offset_of_m_MaxSpeed_2() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_MaxSpeed_2)); }
	inline float get_m_MaxSpeed_2() const { return ___m_MaxSpeed_2; }
	inline float* get_address_of_m_MaxSpeed_2() { return &___m_MaxSpeed_2; }
	inline void set_m_MaxSpeed_2(float value)
	{
		___m_MaxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_JumpForce_3() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_JumpForce_3)); }
	inline float get_m_JumpForce_3() const { return ___m_JumpForce_3; }
	inline float* get_address_of_m_JumpForce_3() { return &___m_JumpForce_3; }
	inline void set_m_JumpForce_3(float value)
	{
		___m_JumpForce_3 = value;
	}

	inline static int32_t get_offset_of_m_CrouchSpeed_4() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_CrouchSpeed_4)); }
	inline float get_m_CrouchSpeed_4() const { return ___m_CrouchSpeed_4; }
	inline float* get_address_of_m_CrouchSpeed_4() { return &___m_CrouchSpeed_4; }
	inline void set_m_CrouchSpeed_4(float value)
	{
		___m_CrouchSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_AirControl_5() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_AirControl_5)); }
	inline bool get_m_AirControl_5() const { return ___m_AirControl_5; }
	inline bool* get_address_of_m_AirControl_5() { return &___m_AirControl_5; }
	inline void set_m_AirControl_5(bool value)
	{
		___m_AirControl_5 = value;
	}

	inline static int32_t get_offset_of_m_WhatIsGround_6() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_WhatIsGround_6)); }
	inline LayerMask_t3188175821  get_m_WhatIsGround_6() const { return ___m_WhatIsGround_6; }
	inline LayerMask_t3188175821 * get_address_of_m_WhatIsGround_6() { return &___m_WhatIsGround_6; }
	inline void set_m_WhatIsGround_6(LayerMask_t3188175821  value)
	{
		___m_WhatIsGround_6 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheck_7() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_GroundCheck_7)); }
	inline Transform_t3275118058 * get_m_GroundCheck_7() const { return ___m_GroundCheck_7; }
	inline Transform_t3275118058 ** get_address_of_m_GroundCheck_7() { return &___m_GroundCheck_7; }
	inline void set_m_GroundCheck_7(Transform_t3275118058 * value)
	{
		___m_GroundCheck_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_GroundCheck_7, value);
	}

	inline static int32_t get_offset_of_m_Grounded_9() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_Grounded_9)); }
	inline bool get_m_Grounded_9() const { return ___m_Grounded_9; }
	inline bool* get_address_of_m_Grounded_9() { return &___m_Grounded_9; }
	inline void set_m_Grounded_9(bool value)
	{
		___m_Grounded_9 = value;
	}

	inline static int32_t get_offset_of_m_CeilingCheck_10() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_CeilingCheck_10)); }
	inline Transform_t3275118058 * get_m_CeilingCheck_10() const { return ___m_CeilingCheck_10; }
	inline Transform_t3275118058 ** get_address_of_m_CeilingCheck_10() { return &___m_CeilingCheck_10; }
	inline void set_m_CeilingCheck_10(Transform_t3275118058 * value)
	{
		___m_CeilingCheck_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_CeilingCheck_10, value);
	}

	inline static int32_t get_offset_of_m_Anim_12() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_Anim_12)); }
	inline Animator_t69676727 * get_m_Anim_12() const { return ___m_Anim_12; }
	inline Animator_t69676727 ** get_address_of_m_Anim_12() { return &___m_Anim_12; }
	inline void set_m_Anim_12(Animator_t69676727 * value)
	{
		___m_Anim_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Anim_12, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody2D_13() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_Rigidbody2D_13)); }
	inline Rigidbody2D_t502193897 * get_m_Rigidbody2D_13() const { return ___m_Rigidbody2D_13; }
	inline Rigidbody2D_t502193897 ** get_address_of_m_Rigidbody2D_13() { return &___m_Rigidbody2D_13; }
	inline void set_m_Rigidbody2D_13(Rigidbody2D_t502193897 * value)
	{
		___m_Rigidbody2D_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody2D_13, value);
	}

	inline static int32_t get_offset_of_m_FacingRight_14() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t607923855, ___m_FacingRight_14)); }
	inline bool get_m_FacingRight_14() const { return ___m_FacingRight_14; }
	inline bool* get_address_of_m_FacingRight_14() { return &___m_FacingRight_14; }
	inline void set_m_FacingRight_14(bool value)
	{
		___m_FacingRight_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
