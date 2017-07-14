#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "TextMeshProU2D1_0_55_56_0b10_TMPro_TMP_TextElement2285620223.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Sprite
struct  TMP_Sprite_t104383505  : public TMP_TextElement_t2285620223
{
public:
	// System.String TMPro.TMP_Sprite::name
	String_t* ___name_9;
	// System.Int32 TMPro.TMP_Sprite::hashCode
	int32_t ___hashCode_10;
	// System.Int32 TMPro.TMP_Sprite::unicode
	int32_t ___unicode_11;
	// UnityEngine.Vector2 TMPro.TMP_Sprite::pivot
	Vector2_t2243707579  ___pivot_12;
	// UnityEngine.Sprite TMPro.TMP_Sprite::sprite
	Sprite_t309593783 * ___sprite_13;

public:
	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(TMP_Sprite_t104383505, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier(&___name_9, value);
	}

	inline static int32_t get_offset_of_hashCode_10() { return static_cast<int32_t>(offsetof(TMP_Sprite_t104383505, ___hashCode_10)); }
	inline int32_t get_hashCode_10() const { return ___hashCode_10; }
	inline int32_t* get_address_of_hashCode_10() { return &___hashCode_10; }
	inline void set_hashCode_10(int32_t value)
	{
		___hashCode_10 = value;
	}

	inline static int32_t get_offset_of_unicode_11() { return static_cast<int32_t>(offsetof(TMP_Sprite_t104383505, ___unicode_11)); }
	inline int32_t get_unicode_11() const { return ___unicode_11; }
	inline int32_t* get_address_of_unicode_11() { return &___unicode_11; }
	inline void set_unicode_11(int32_t value)
	{
		___unicode_11 = value;
	}

	inline static int32_t get_offset_of_pivot_12() { return static_cast<int32_t>(offsetof(TMP_Sprite_t104383505, ___pivot_12)); }
	inline Vector2_t2243707579  get_pivot_12() const { return ___pivot_12; }
	inline Vector2_t2243707579 * get_address_of_pivot_12() { return &___pivot_12; }
	inline void set_pivot_12(Vector2_t2243707579  value)
	{
		___pivot_12 = value;
	}

	inline static int32_t get_offset_of_sprite_13() { return static_cast<int32_t>(offsetof(TMP_Sprite_t104383505, ___sprite_13)); }
	inline Sprite_t309593783 * get_sprite_13() const { return ___sprite_13; }
	inline Sprite_t309593783 ** get_address_of_sprite_13() { return &___sprite_13; }
	inline void set_sprite_13(Sprite_t309593783 * value)
	{
		___sprite_13 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
