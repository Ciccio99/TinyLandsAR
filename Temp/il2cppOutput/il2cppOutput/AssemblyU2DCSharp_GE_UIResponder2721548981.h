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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GE_UIResponder
struct  GE_UIResponder_t2721548981  : public MonoBehaviour_t1158329972
{
public:
	// System.String GE_UIResponder::m_PackageTitle
	String_t* ___m_PackageTitle_2;
	// System.String GE_UIResponder::m_TargetURL
	String_t* ___m_TargetURL_3;

public:
	inline static int32_t get_offset_of_m_PackageTitle_2() { return static_cast<int32_t>(offsetof(GE_UIResponder_t2721548981, ___m_PackageTitle_2)); }
	inline String_t* get_m_PackageTitle_2() const { return ___m_PackageTitle_2; }
	inline String_t** get_address_of_m_PackageTitle_2() { return &___m_PackageTitle_2; }
	inline void set_m_PackageTitle_2(String_t* value)
	{
		___m_PackageTitle_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_PackageTitle_2, value);
	}

	inline static int32_t get_offset_of_m_TargetURL_3() { return static_cast<int32_t>(offsetof(GE_UIResponder_t2721548981, ___m_TargetURL_3)); }
	inline String_t* get_m_TargetURL_3() const { return ___m_TargetURL_3; }
	inline String_t** get_address_of_m_TargetURL_3() { return &___m_TargetURL_3; }
	inline void set_m_TargetURL_3(String_t* value)
	{
		___m_TargetURL_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_TargetURL_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
