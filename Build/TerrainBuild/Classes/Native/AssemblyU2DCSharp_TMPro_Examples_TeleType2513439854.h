#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TeleType
struct  TeleType_t2513439854  : public MonoBehaviour_t1158329972
{
public:
	// System.String TMPro.Examples.TeleType::label01
	String_t* ___label01_2;
	// System.String TMPro.Examples.TeleType::label02
	String_t* ___label02_3;
	// TMPro.TMP_Text TMPro.Examples.TeleType::m_textMeshPro
	TMP_Text_t1920000777 * ___m_textMeshPro_4;

public:
	inline static int32_t get_offset_of_label01_2() { return static_cast<int32_t>(offsetof(TeleType_t2513439854, ___label01_2)); }
	inline String_t* get_label01_2() const { return ___label01_2; }
	inline String_t** get_address_of_label01_2() { return &___label01_2; }
	inline void set_label01_2(String_t* value)
	{
		___label01_2 = value;
		Il2CppCodeGenWriteBarrier(&___label01_2, value);
	}

	inline static int32_t get_offset_of_label02_3() { return static_cast<int32_t>(offsetof(TeleType_t2513439854, ___label02_3)); }
	inline String_t* get_label02_3() const { return ___label02_3; }
	inline String_t** get_address_of_label02_3() { return &___label02_3; }
	inline void set_label02_3(String_t* value)
	{
		___label02_3 = value;
		Il2CppCodeGenWriteBarrier(&___label02_3, value);
	}

	inline static int32_t get_offset_of_m_textMeshPro_4() { return static_cast<int32_t>(offsetof(TeleType_t2513439854, ___m_textMeshPro_4)); }
	inline TMP_Text_t1920000777 * get_m_textMeshPro_4() const { return ___m_textMeshPro_4; }
	inline TMP_Text_t1920000777 ** get_address_of_m_textMeshPro_4() { return &___m_textMeshPro_4; }
	inline void set_m_textMeshPro_4(TMP_Text_t1920000777 * value)
	{
		___m_textMeshPro_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_textMeshPro_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
