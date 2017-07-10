#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t2530419979;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_FontWeights
struct  TMP_FontWeights_t1564168302 
{
public:
	// TMPro.TMP_FontAsset TMPro.TMP_FontWeights::regularTypeface
	TMP_FontAsset_t2530419979 * ___regularTypeface_0;
	// TMPro.TMP_FontAsset TMPro.TMP_FontWeights::italicTypeface
	TMP_FontAsset_t2530419979 * ___italicTypeface_1;

public:
	inline static int32_t get_offset_of_regularTypeface_0() { return static_cast<int32_t>(offsetof(TMP_FontWeights_t1564168302, ___regularTypeface_0)); }
	inline TMP_FontAsset_t2530419979 * get_regularTypeface_0() const { return ___regularTypeface_0; }
	inline TMP_FontAsset_t2530419979 ** get_address_of_regularTypeface_0() { return &___regularTypeface_0; }
	inline void set_regularTypeface_0(TMP_FontAsset_t2530419979 * value)
	{
		___regularTypeface_0 = value;
		Il2CppCodeGenWriteBarrier(&___regularTypeface_0, value);
	}

	inline static int32_t get_offset_of_italicTypeface_1() { return static_cast<int32_t>(offsetof(TMP_FontWeights_t1564168302, ___italicTypeface_1)); }
	inline TMP_FontAsset_t2530419979 * get_italicTypeface_1() const { return ___italicTypeface_1; }
	inline TMP_FontAsset_t2530419979 ** get_address_of_italicTypeface_1() { return &___italicTypeface_1; }
	inline void set_italicTypeface_1(TMP_FontAsset_t2530419979 * value)
	{
		___italicTypeface_1 = value;
		Il2CppCodeGenWriteBarrier(&___italicTypeface_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.TMP_FontWeights
struct TMP_FontWeights_t1564168302_marshaled_pinvoke
{
	TMP_FontAsset_t2530419979 * ___regularTypeface_0;
	TMP_FontAsset_t2530419979 * ___italicTypeface_1;
};
// Native definition for COM marshalling of TMPro.TMP_FontWeights
struct TMP_FontWeights_t1564168302_marshaled_com
{
	TMP_FontAsset_t2530419979 * ___regularTypeface_0;
	TMP_FontAsset_t2530419979 * ___italicTypeface_1;
};
