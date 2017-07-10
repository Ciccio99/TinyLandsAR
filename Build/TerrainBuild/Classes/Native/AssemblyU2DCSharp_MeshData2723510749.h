#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MeshData
struct  MeshData_t2723510749  : public Il2CppObject
{
public:
	// UnityEngine.Vector3[] MeshData::vertices
	Vector3U5BU5D_t1172311765* ___vertices_0;
	// System.Int32[] MeshData::triangles
	Int32U5BU5D_t3030399641* ___triangles_1;
	// UnityEngine.Vector2[] MeshData::uvs
	Vector2U5BU5D_t686124026* ___uvs_2;
	// System.Int32 MeshData::triangleIndex
	int32_t ___triangleIndex_3;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(MeshData_t2723510749, ___vertices_0)); }
	inline Vector3U5BU5D_t1172311765* get_vertices_0() const { return ___vertices_0; }
	inline Vector3U5BU5D_t1172311765** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector3U5BU5D_t1172311765* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}

	inline static int32_t get_offset_of_triangles_1() { return static_cast<int32_t>(offsetof(MeshData_t2723510749, ___triangles_1)); }
	inline Int32U5BU5D_t3030399641* get_triangles_1() const { return ___triangles_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_triangles_1() { return &___triangles_1; }
	inline void set_triangles_1(Int32U5BU5D_t3030399641* value)
	{
		___triangles_1 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_1, value);
	}

	inline static int32_t get_offset_of_uvs_2() { return static_cast<int32_t>(offsetof(MeshData_t2723510749, ___uvs_2)); }
	inline Vector2U5BU5D_t686124026* get_uvs_2() const { return ___uvs_2; }
	inline Vector2U5BU5D_t686124026** get_address_of_uvs_2() { return &___uvs_2; }
	inline void set_uvs_2(Vector2U5BU5D_t686124026* value)
	{
		___uvs_2 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_2, value);
	}

	inline static int32_t get_offset_of_triangleIndex_3() { return static_cast<int32_t>(offsetof(MeshData_t2723510749, ___triangleIndex_3)); }
	inline int32_t get_triangleIndex_3() const { return ___triangleIndex_3; }
	inline int32_t* get_address_of_triangleIndex_3() { return &___triangleIndex_3; }
	inline void set_triangleIndex_3(int32_t value)
	{
		___triangleIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
