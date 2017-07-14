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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_WordInfo
struct  TMP_WordInfo_t3807457612 
{
public:
	// TMPro.TMP_Text TMPro.TMP_WordInfo::textComponent
	TMP_Text_t1920000777 * ___textComponent_0;
	// System.Int32 TMPro.TMP_WordInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_1;
	// System.Int32 TMPro.TMP_WordInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_2;
	// System.Int32 TMPro.TMP_WordInfo::characterCount
	int32_t ___characterCount_3;

public:
	inline static int32_t get_offset_of_textComponent_0() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t3807457612, ___textComponent_0)); }
	inline TMP_Text_t1920000777 * get_textComponent_0() const { return ___textComponent_0; }
	inline TMP_Text_t1920000777 ** get_address_of_textComponent_0() { return &___textComponent_0; }
	inline void set_textComponent_0(TMP_Text_t1920000777 * value)
	{
		___textComponent_0 = value;
		Il2CppCodeGenWriteBarrier(&___textComponent_0, value);
	}

	inline static int32_t get_offset_of_firstCharacterIndex_1() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t3807457612, ___firstCharacterIndex_1)); }
	inline int32_t get_firstCharacterIndex_1() const { return ___firstCharacterIndex_1; }
	inline int32_t* get_address_of_firstCharacterIndex_1() { return &___firstCharacterIndex_1; }
	inline void set_firstCharacterIndex_1(int32_t value)
	{
		___firstCharacterIndex_1 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_2() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t3807457612, ___lastCharacterIndex_2)); }
	inline int32_t get_lastCharacterIndex_2() const { return ___lastCharacterIndex_2; }
	inline int32_t* get_address_of_lastCharacterIndex_2() { return &___lastCharacterIndex_2; }
	inline void set_lastCharacterIndex_2(int32_t value)
	{
		___lastCharacterIndex_2 = value;
	}

	inline static int32_t get_offset_of_characterCount_3() { return static_cast<int32_t>(offsetof(TMP_WordInfo_t3807457612, ___characterCount_3)); }
	inline int32_t get_characterCount_3() const { return ___characterCount_3; }
	inline int32_t* get_address_of_characterCount_3() { return &___characterCount_3; }
	inline void set_characterCount_3(int32_t value)
	{
		___characterCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.TMP_WordInfo
struct TMP_WordInfo_t3807457612_marshaled_pinvoke
{
	TMP_Text_t1920000777 * ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
// Native definition for COM marshalling of TMPro.TMP_WordInfo
struct TMP_WordInfo_t3807457612_marshaled_com
{
	TMP_Text_t1920000777 * ___textComponent_0;
	int32_t ___firstCharacterIndex_1;
	int32_t ___lastCharacterIndex_2;
	int32_t ___characterCount_3;
};
