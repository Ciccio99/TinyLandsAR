#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<TMPro.SpriteAssetUtilities.TexturePacker/SpriteData>
struct List_1_t3921943330;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.SpriteAssetUtilities.TexturePacker/SpriteDataObject
struct  SpriteDataObject_t1790914055  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<TMPro.SpriteAssetUtilities.TexturePacker/SpriteData> TMPro.SpriteAssetUtilities.TexturePacker/SpriteDataObject::frames
	List_1_t3921943330 * ___frames_0;

public:
	inline static int32_t get_offset_of_frames_0() { return static_cast<int32_t>(offsetof(SpriteDataObject_t1790914055, ___frames_0)); }
	inline List_1_t3921943330 * get_frames_0() const { return ___frames_0; }
	inline List_1_t3921943330 ** get_address_of_frames_0() { return &___frames_0; }
	inline void set_frames_0(List_1_t3921943330 * value)
	{
		___frames_0 = value;
		Il2CppCodeGenWriteBarrier(&___frames_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
