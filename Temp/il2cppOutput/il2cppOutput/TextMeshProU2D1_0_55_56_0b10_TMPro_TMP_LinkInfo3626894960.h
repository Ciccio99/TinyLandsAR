#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// System.Char[]
struct CharU5BU5D_t1328083999;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_LinkInfo
struct  TMP_LinkInfo_t3626894960 
{
public:
	// TMPro.TMP_Text TMPro.TMP_LinkInfo::textComponent
	TMP_Text_t1920000777 * ___textComponent_0;
	// System.Int32 TMPro.TMP_LinkInfo::hashCode
	int32_t ___hashCode_1;
	// System.Int32 TMPro.TMP_LinkInfo::linkIdFirstCharacterIndex
	int32_t ___linkIdFirstCharacterIndex_2;
	// System.Int32 TMPro.TMP_LinkInfo::linkIdLength
	int32_t ___linkIdLength_3;
	// System.Int32 TMPro.TMP_LinkInfo::linkTextfirstCharacterIndex
	int32_t ___linkTextfirstCharacterIndex_4;
	// System.Int32 TMPro.TMP_LinkInfo::linkTextLength
	int32_t ___linkTextLength_5;
	// System.Char[] TMPro.TMP_LinkInfo::linkID
	CharU5BU5D_t1328083999* ___linkID_6;

public:
	inline static int32_t get_offset_of_textComponent_0() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t3626894960, ___textComponent_0)); }
	inline TMP_Text_t1920000777 * get_textComponent_0() const { return ___textComponent_0; }
	inline TMP_Text_t1920000777 ** get_address_of_textComponent_0() { return &___textComponent_0; }
	inline void set_textComponent_0(TMP_Text_t1920000777 * value)
	{
		___textComponent_0 = value;
		Il2CppCodeGenWriteBarrier(&___textComponent_0, value);
	}

	inline static int32_t get_offset_of_hashCode_1() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t3626894960, ___hashCode_1)); }
	inline int32_t get_hashCode_1() const { return ___hashCode_1; }
	inline int32_t* get_address_of_hashCode_1() { return &___hashCode_1; }
	inline void set_hashCode_1(int32_t value)
	{
		___hashCode_1 = value;
	}

	inline static int32_t get_offset_of_linkIdFirstCharacterIndex_2() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t3626894960, ___linkIdFirstCharacterIndex_2)); }
	inline int32_t get_linkIdFirstCharacterIndex_2() const { return ___linkIdFirstCharacterIndex_2; }
	inline int32_t* get_address_of_linkIdFirstCharacterIndex_2() { return &___linkIdFirstCharacterIndex_2; }
	inline void set_linkIdFirstCharacterIndex_2(int32_t value)
	{
		___linkIdFirstCharacterIndex_2 = value;
	}

	inline static int32_t get_offset_of_linkIdLength_3() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t3626894960, ___linkIdLength_3)); }
	inline int32_t get_linkIdLength_3() const { return ___linkIdLength_3; }
	inline int32_t* get_address_of_linkIdLength_3() { return &___linkIdLength_3; }
	inline void set_linkIdLength_3(int32_t value)
	{
		___linkIdLength_3 = value;
	}

	inline static int32_t get_offset_of_linkTextfirstCharacterIndex_4() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t3626894960, ___linkTextfirstCharacterIndex_4)); }
	inline int32_t get_linkTextfirstCharacterIndex_4() const { return ___linkTextfirstCharacterIndex_4; }
	inline int32_t* get_address_of_linkTextfirstCharacterIndex_4() { return &___linkTextfirstCharacterIndex_4; }
	inline void set_linkTextfirstCharacterIndex_4(int32_t value)
	{
		___linkTextfirstCharacterIndex_4 = value;
	}

	inline static int32_t get_offset_of_linkTextLength_5() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t3626894960, ___linkTextLength_5)); }
	inline int32_t get_linkTextLength_5() const { return ___linkTextLength_5; }
	inline int32_t* get_address_of_linkTextLength_5() { return &___linkTextLength_5; }
	inline void set_linkTextLength_5(int32_t value)
	{
		___linkTextLength_5 = value;
	}

	inline static int32_t get_offset_of_linkID_6() { return static_cast<int32_t>(offsetof(TMP_LinkInfo_t3626894960, ___linkID_6)); }
	inline CharU5BU5D_t1328083999* get_linkID_6() const { return ___linkID_6; }
	inline CharU5BU5D_t1328083999** get_address_of_linkID_6() { return &___linkID_6; }
	inline void set_linkID_6(CharU5BU5D_t1328083999* value)
	{
		___linkID_6 = value;
		Il2CppCodeGenWriteBarrier(&___linkID_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.TMP_LinkInfo
struct TMP_LinkInfo_t3626894960_marshaled_pinvoke
{
	TMP_Text_t1920000777 * ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	uint8_t* ___linkID_6;
};
// Native definition for COM marshalling of TMPro.TMP_LinkInfo
struct TMP_LinkInfo_t3626894960_marshaled_com
{
	TMP_Text_t1920000777 * ___textComponent_0;
	int32_t ___hashCode_1;
	int32_t ___linkIdFirstCharacterIndex_2;
	int32_t ___linkIdLength_3;
	int32_t ___linkTextfirstCharacterIndex_4;
	int32_t ___linkTextLength_5;
	uint8_t* ___linkID_6;
};
