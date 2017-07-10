#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TMPro.TextMeshPro
struct TextMeshPro_t2521834357;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_TextSelector_A
struct  TMP_TextSelector_A_t2419327982  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TextMeshPro TMPro.Examples.TMP_TextSelector_A::m_TextMeshPro
	TextMeshPro_t2521834357 * ___m_TextMeshPro_2;
	// UnityEngine.Camera TMPro.Examples.TMP_TextSelector_A::m_Camera
	Camera_t189460977 * ___m_Camera_3;
	// System.Boolean TMPro.Examples.TMP_TextSelector_A::m_isHoveringObject
	bool ___m_isHoveringObject_4;
	// System.Int32 TMPro.Examples.TMP_TextSelector_A::m_selectedLink
	int32_t ___m_selectedLink_5;
	// System.Int32 TMPro.Examples.TMP_TextSelector_A::m_lastCharIndex
	int32_t ___m_lastCharIndex_6;
	// System.Int32 TMPro.Examples.TMP_TextSelector_A::m_lastWordIndex
	int32_t ___m_lastWordIndex_7;

public:
	inline static int32_t get_offset_of_m_TextMeshPro_2() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t2419327982, ___m_TextMeshPro_2)); }
	inline TextMeshPro_t2521834357 * get_m_TextMeshPro_2() const { return ___m_TextMeshPro_2; }
	inline TextMeshPro_t2521834357 ** get_address_of_m_TextMeshPro_2() { return &___m_TextMeshPro_2; }
	inline void set_m_TextMeshPro_2(TextMeshPro_t2521834357 * value)
	{
		___m_TextMeshPro_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextMeshPro_2, value);
	}

	inline static int32_t get_offset_of_m_Camera_3() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t2419327982, ___m_Camera_3)); }
	inline Camera_t189460977 * get_m_Camera_3() const { return ___m_Camera_3; }
	inline Camera_t189460977 ** get_address_of_m_Camera_3() { return &___m_Camera_3; }
	inline void set_m_Camera_3(Camera_t189460977 * value)
	{
		___m_Camera_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_3, value);
	}

	inline static int32_t get_offset_of_m_isHoveringObject_4() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t2419327982, ___m_isHoveringObject_4)); }
	inline bool get_m_isHoveringObject_4() const { return ___m_isHoveringObject_4; }
	inline bool* get_address_of_m_isHoveringObject_4() { return &___m_isHoveringObject_4; }
	inline void set_m_isHoveringObject_4(bool value)
	{
		___m_isHoveringObject_4 = value;
	}

	inline static int32_t get_offset_of_m_selectedLink_5() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t2419327982, ___m_selectedLink_5)); }
	inline int32_t get_m_selectedLink_5() const { return ___m_selectedLink_5; }
	inline int32_t* get_address_of_m_selectedLink_5() { return &___m_selectedLink_5; }
	inline void set_m_selectedLink_5(int32_t value)
	{
		___m_selectedLink_5 = value;
	}

	inline static int32_t get_offset_of_m_lastCharIndex_6() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t2419327982, ___m_lastCharIndex_6)); }
	inline int32_t get_m_lastCharIndex_6() const { return ___m_lastCharIndex_6; }
	inline int32_t* get_address_of_m_lastCharIndex_6() { return &___m_lastCharIndex_6; }
	inline void set_m_lastCharIndex_6(int32_t value)
	{
		___m_lastCharIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_lastWordIndex_7() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t2419327982, ___m_lastWordIndex_7)); }
	inline int32_t get_m_lastWordIndex_7() const { return ___m_lastWordIndex_7; }
	inline int32_t* get_address_of_m_lastWordIndex_7() { return &___m_lastWordIndex_7; }
	inline void set_m_lastWordIndex_7(int32_t value)
	{
		___m_lastWordIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
