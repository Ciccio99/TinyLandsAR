#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_SpriteAssetUtil3204261111.h"
#include "TextMeshProU2D1_0_55_56_0b10_TMPro_SpriteAssetUtil2240777863.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.SpriteAssetUtilities.TexturePacker/SpriteData
struct  SpriteData_t257854902 
{
public:
	// System.String TMPro.SpriteAssetUtilities.TexturePacker/SpriteData::filename
	String_t* ___filename_0;
	// TMPro.SpriteAssetUtilities.TexturePacker/SpriteFrame TMPro.SpriteAssetUtilities.TexturePacker/SpriteData::frame
	SpriteFrame_t3204261111  ___frame_1;
	// System.Boolean TMPro.SpriteAssetUtilities.TexturePacker/SpriteData::rotated
	bool ___rotated_2;
	// System.Boolean TMPro.SpriteAssetUtilities.TexturePacker/SpriteData::trimmed
	bool ___trimmed_3;
	// TMPro.SpriteAssetUtilities.TexturePacker/SpriteFrame TMPro.SpriteAssetUtilities.TexturePacker/SpriteData::spriteSourceSize
	SpriteFrame_t3204261111  ___spriteSourceSize_4;
	// TMPro.SpriteAssetUtilities.TexturePacker/SpriteSize TMPro.SpriteAssetUtilities.TexturePacker/SpriteData::sourceSize
	SpriteSize_t2240777863  ___sourceSize_5;
	// UnityEngine.Vector2 TMPro.SpriteAssetUtilities.TexturePacker/SpriteData::pivot
	Vector2_t2243707579  ___pivot_6;

public:
	inline static int32_t get_offset_of_filename_0() { return static_cast<int32_t>(offsetof(SpriteData_t257854902, ___filename_0)); }
	inline String_t* get_filename_0() const { return ___filename_0; }
	inline String_t** get_address_of_filename_0() { return &___filename_0; }
	inline void set_filename_0(String_t* value)
	{
		___filename_0 = value;
		Il2CppCodeGenWriteBarrier(&___filename_0, value);
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(SpriteData_t257854902, ___frame_1)); }
	inline SpriteFrame_t3204261111  get_frame_1() const { return ___frame_1; }
	inline SpriteFrame_t3204261111 * get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(SpriteFrame_t3204261111  value)
	{
		___frame_1 = value;
	}

	inline static int32_t get_offset_of_rotated_2() { return static_cast<int32_t>(offsetof(SpriteData_t257854902, ___rotated_2)); }
	inline bool get_rotated_2() const { return ___rotated_2; }
	inline bool* get_address_of_rotated_2() { return &___rotated_2; }
	inline void set_rotated_2(bool value)
	{
		___rotated_2 = value;
	}

	inline static int32_t get_offset_of_trimmed_3() { return static_cast<int32_t>(offsetof(SpriteData_t257854902, ___trimmed_3)); }
	inline bool get_trimmed_3() const { return ___trimmed_3; }
	inline bool* get_address_of_trimmed_3() { return &___trimmed_3; }
	inline void set_trimmed_3(bool value)
	{
		___trimmed_3 = value;
	}

	inline static int32_t get_offset_of_spriteSourceSize_4() { return static_cast<int32_t>(offsetof(SpriteData_t257854902, ___spriteSourceSize_4)); }
	inline SpriteFrame_t3204261111  get_spriteSourceSize_4() const { return ___spriteSourceSize_4; }
	inline SpriteFrame_t3204261111 * get_address_of_spriteSourceSize_4() { return &___spriteSourceSize_4; }
	inline void set_spriteSourceSize_4(SpriteFrame_t3204261111  value)
	{
		___spriteSourceSize_4 = value;
	}

	inline static int32_t get_offset_of_sourceSize_5() { return static_cast<int32_t>(offsetof(SpriteData_t257854902, ___sourceSize_5)); }
	inline SpriteSize_t2240777863  get_sourceSize_5() const { return ___sourceSize_5; }
	inline SpriteSize_t2240777863 * get_address_of_sourceSize_5() { return &___sourceSize_5; }
	inline void set_sourceSize_5(SpriteSize_t2240777863  value)
	{
		___sourceSize_5 = value;
	}

	inline static int32_t get_offset_of_pivot_6() { return static_cast<int32_t>(offsetof(SpriteData_t257854902, ___pivot_6)); }
	inline Vector2_t2243707579  get_pivot_6() const { return ___pivot_6; }
	inline Vector2_t2243707579 * get_address_of_pivot_6() { return &___pivot_6; }
	inline void set_pivot_6(Vector2_t2243707579  value)
	{
		___pivot_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.SpriteAssetUtilities.TexturePacker/SpriteData
struct SpriteData_t257854902_marshaled_pinvoke
{
	char* ___filename_0;
	SpriteFrame_t3204261111  ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_t3204261111  ___spriteSourceSize_4;
	SpriteSize_t2240777863  ___sourceSize_5;
	Vector2_t2243707579  ___pivot_6;
};
// Native definition for COM marshalling of TMPro.SpriteAssetUtilities.TexturePacker/SpriteData
struct SpriteData_t257854902_marshaled_com
{
	Il2CppChar* ___filename_0;
	SpriteFrame_t3204261111  ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_t3204261111  ___spriteSourceSize_4;
	SpriteSize_t2240777863  ___sourceSize_5;
	Vector2_t2243707579  ___pivot_6;
};
