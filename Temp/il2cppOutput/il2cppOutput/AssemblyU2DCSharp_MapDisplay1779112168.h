#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapDisplay
struct  MapDisplay_t1779112168  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Renderer MapDisplay::textureRender
	Renderer_t257310565 * ___textureRender_2;
	// UnityEngine.MeshFilter MapDisplay::meshFilter
	MeshFilter_t3026937449 * ___meshFilter_3;
	// UnityEngine.MeshRenderer MapDisplay::meshRenderer
	MeshRenderer_t1268241104 * ___meshRenderer_4;

public:
	inline static int32_t get_offset_of_textureRender_2() { return static_cast<int32_t>(offsetof(MapDisplay_t1779112168, ___textureRender_2)); }
	inline Renderer_t257310565 * get_textureRender_2() const { return ___textureRender_2; }
	inline Renderer_t257310565 ** get_address_of_textureRender_2() { return &___textureRender_2; }
	inline void set_textureRender_2(Renderer_t257310565 * value)
	{
		___textureRender_2 = value;
		Il2CppCodeGenWriteBarrier(&___textureRender_2, value);
	}

	inline static int32_t get_offset_of_meshFilter_3() { return static_cast<int32_t>(offsetof(MapDisplay_t1779112168, ___meshFilter_3)); }
	inline MeshFilter_t3026937449 * get_meshFilter_3() const { return ___meshFilter_3; }
	inline MeshFilter_t3026937449 ** get_address_of_meshFilter_3() { return &___meshFilter_3; }
	inline void set_meshFilter_3(MeshFilter_t3026937449 * value)
	{
		___meshFilter_3 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_3, value);
	}

	inline static int32_t get_offset_of_meshRenderer_4() { return static_cast<int32_t>(offsetof(MapDisplay_t1779112168, ___meshRenderer_4)); }
	inline MeshRenderer_t1268241104 * get_meshRenderer_4() const { return ___meshRenderer_4; }
	inline MeshRenderer_t1268241104 ** get_address_of_meshRenderer_4() { return &___meshRenderer_4; }
	inline void set_meshRenderer_4(MeshRenderer_t1268241104 * value)
	{
		___meshRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
