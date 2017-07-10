#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TMPro_Examples_TMPro_Instruction3015313749.h"

// System.String
struct String_t;
// TMPro.TextMeshPro
struct TextMeshPro_t2521834357;
// TMPro.TextContainer
struct TextContainer_t4263764796;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMPro_InstructionOverlay
struct  TMPro_InstructionOverlay_t4177302973  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.Examples.TMPro_InstructionOverlay/FpsCounterAnchorPositions TMPro.Examples.TMPro_InstructionOverlay::AnchorPosition
	int32_t ___AnchorPosition_2;
	// TMPro.TextMeshPro TMPro.Examples.TMPro_InstructionOverlay::m_TextMeshPro
	TextMeshPro_t2521834357 * ___m_TextMeshPro_4;
	// TMPro.TextContainer TMPro.Examples.TMPro_InstructionOverlay::m_textContainer
	TextContainer_t4263764796 * ___m_textContainer_5;
	// UnityEngine.Transform TMPro.Examples.TMPro_InstructionOverlay::m_frameCounter_transform
	Transform_t3275118058 * ___m_frameCounter_transform_6;
	// UnityEngine.Camera TMPro.Examples.TMPro_InstructionOverlay::m_camera
	Camera_t189460977 * ___m_camera_7;

public:
	inline static int32_t get_offset_of_AnchorPosition_2() { return static_cast<int32_t>(offsetof(TMPro_InstructionOverlay_t4177302973, ___AnchorPosition_2)); }
	inline int32_t get_AnchorPosition_2() const { return ___AnchorPosition_2; }
	inline int32_t* get_address_of_AnchorPosition_2() { return &___AnchorPosition_2; }
	inline void set_AnchorPosition_2(int32_t value)
	{
		___AnchorPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_TextMeshPro_4() { return static_cast<int32_t>(offsetof(TMPro_InstructionOverlay_t4177302973, ___m_TextMeshPro_4)); }
	inline TextMeshPro_t2521834357 * get_m_TextMeshPro_4() const { return ___m_TextMeshPro_4; }
	inline TextMeshPro_t2521834357 ** get_address_of_m_TextMeshPro_4() { return &___m_TextMeshPro_4; }
	inline void set_m_TextMeshPro_4(TextMeshPro_t2521834357 * value)
	{
		___m_TextMeshPro_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextMeshPro_4, value);
	}

	inline static int32_t get_offset_of_m_textContainer_5() { return static_cast<int32_t>(offsetof(TMPro_InstructionOverlay_t4177302973, ___m_textContainer_5)); }
	inline TextContainer_t4263764796 * get_m_textContainer_5() const { return ___m_textContainer_5; }
	inline TextContainer_t4263764796 ** get_address_of_m_textContainer_5() { return &___m_textContainer_5; }
	inline void set_m_textContainer_5(TextContainer_t4263764796 * value)
	{
		___m_textContainer_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_textContainer_5, value);
	}

	inline static int32_t get_offset_of_m_frameCounter_transform_6() { return static_cast<int32_t>(offsetof(TMPro_InstructionOverlay_t4177302973, ___m_frameCounter_transform_6)); }
	inline Transform_t3275118058 * get_m_frameCounter_transform_6() const { return ___m_frameCounter_transform_6; }
	inline Transform_t3275118058 ** get_address_of_m_frameCounter_transform_6() { return &___m_frameCounter_transform_6; }
	inline void set_m_frameCounter_transform_6(Transform_t3275118058 * value)
	{
		___m_frameCounter_transform_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_frameCounter_transform_6, value);
	}

	inline static int32_t get_offset_of_m_camera_7() { return static_cast<int32_t>(offsetof(TMPro_InstructionOverlay_t4177302973, ___m_camera_7)); }
	inline Camera_t189460977 * get_m_camera_7() const { return ___m_camera_7; }
	inline Camera_t189460977 ** get_address_of_m_camera_7() { return &___m_camera_7; }
	inline void set_m_camera_7(Camera_t189460977 * value)
	{
		___m_camera_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_camera_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
