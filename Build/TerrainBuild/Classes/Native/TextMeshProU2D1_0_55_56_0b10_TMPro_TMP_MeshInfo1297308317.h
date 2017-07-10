#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1658499504;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
struct Vector3_t2243707580 ;
struct Vector4_t2243707581 ;
struct Vector2_t2243707579 ;
struct Color32_t874517518 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_MeshInfo
struct  TMP_MeshInfo_t1297308317 
{
public:
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t1356156583 * ___mesh_3;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_4;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_t1172311765* ___vertices_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_t1172311765* ___normals_6;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_t1658499504* ___tangents_7;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_t686124026* ___uvs0_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_t686124026* ___uvs2_9;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t30278651* ___colors32_10;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t3030399641* ___triangles_11;

public:
	inline static int32_t get_offset_of_mesh_3() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317, ___mesh_3)); }
	inline Mesh_t1356156583 * get_mesh_3() const { return ___mesh_3; }
	inline Mesh_t1356156583 ** get_address_of_mesh_3() { return &___mesh_3; }
	inline void set_mesh_3(Mesh_t1356156583 * value)
	{
		___mesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_3, value);
	}

	inline static int32_t get_offset_of_vertexCount_4() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317, ___vertexCount_4)); }
	inline int32_t get_vertexCount_4() const { return ___vertexCount_4; }
	inline int32_t* get_address_of_vertexCount_4() { return &___vertexCount_4; }
	inline void set_vertexCount_4(int32_t value)
	{
		___vertexCount_4 = value;
	}

	inline static int32_t get_offset_of_vertices_5() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317, ___vertices_5)); }
	inline Vector3U5BU5D_t1172311765* get_vertices_5() const { return ___vertices_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_vertices_5() { return &___vertices_5; }
	inline void set_vertices_5(Vector3U5BU5D_t1172311765* value)
	{
		___vertices_5 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_5, value);
	}

	inline static int32_t get_offset_of_normals_6() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317, ___normals_6)); }
	inline Vector3U5BU5D_t1172311765* get_normals_6() const { return ___normals_6; }
	inline Vector3U5BU5D_t1172311765** get_address_of_normals_6() { return &___normals_6; }
	inline void set_normals_6(Vector3U5BU5D_t1172311765* value)
	{
		___normals_6 = value;
		Il2CppCodeGenWriteBarrier(&___normals_6, value);
	}

	inline static int32_t get_offset_of_tangents_7() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317, ___tangents_7)); }
	inline Vector4U5BU5D_t1658499504* get_tangents_7() const { return ___tangents_7; }
	inline Vector4U5BU5D_t1658499504** get_address_of_tangents_7() { return &___tangents_7; }
	inline void set_tangents_7(Vector4U5BU5D_t1658499504* value)
	{
		___tangents_7 = value;
		Il2CppCodeGenWriteBarrier(&___tangents_7, value);
	}

	inline static int32_t get_offset_of_uvs0_8() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317, ___uvs0_8)); }
	inline Vector2U5BU5D_t686124026* get_uvs0_8() const { return ___uvs0_8; }
	inline Vector2U5BU5D_t686124026** get_address_of_uvs0_8() { return &___uvs0_8; }
	inline void set_uvs0_8(Vector2U5BU5D_t686124026* value)
	{
		___uvs0_8 = value;
		Il2CppCodeGenWriteBarrier(&___uvs0_8, value);
	}

	inline static int32_t get_offset_of_uvs2_9() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317, ___uvs2_9)); }
	inline Vector2U5BU5D_t686124026* get_uvs2_9() const { return ___uvs2_9; }
	inline Vector2U5BU5D_t686124026** get_address_of_uvs2_9() { return &___uvs2_9; }
	inline void set_uvs2_9(Vector2U5BU5D_t686124026* value)
	{
		___uvs2_9 = value;
		Il2CppCodeGenWriteBarrier(&___uvs2_9, value);
	}

	inline static int32_t get_offset_of_colors32_10() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317, ___colors32_10)); }
	inline Color32U5BU5D_t30278651* get_colors32_10() const { return ___colors32_10; }
	inline Color32U5BU5D_t30278651** get_address_of_colors32_10() { return &___colors32_10; }
	inline void set_colors32_10(Color32U5BU5D_t30278651* value)
	{
		___colors32_10 = value;
		Il2CppCodeGenWriteBarrier(&___colors32_10, value);
	}

	inline static int32_t get_offset_of_triangles_11() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317, ___triangles_11)); }
	inline Int32U5BU5D_t3030399641* get_triangles_11() const { return ___triangles_11; }
	inline Int32U5BU5D_t3030399641** get_address_of_triangles_11() { return &___triangles_11; }
	inline void set_triangles_11(Int32U5BU5D_t3030399641* value)
	{
		___triangles_11 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_11, value);
	}
};

struct TMP_MeshInfo_t1297308317_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_t874517518  ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t2243707580  ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_t2243707581  ___s_DefaultTangent_2;

public:
	inline static int32_t get_offset_of_s_DefaultColor_0() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317_StaticFields, ___s_DefaultColor_0)); }
	inline Color32_t874517518  get_s_DefaultColor_0() const { return ___s_DefaultColor_0; }
	inline Color32_t874517518 * get_address_of_s_DefaultColor_0() { return &___s_DefaultColor_0; }
	inline void set_s_DefaultColor_0(Color32_t874517518  value)
	{
		___s_DefaultColor_0 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_1() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317_StaticFields, ___s_DefaultNormal_1)); }
	inline Vector3_t2243707580  get_s_DefaultNormal_1() const { return ___s_DefaultNormal_1; }
	inline Vector3_t2243707580 * get_address_of_s_DefaultNormal_1() { return &___s_DefaultNormal_1; }
	inline void set_s_DefaultNormal_1(Vector3_t2243707580  value)
	{
		___s_DefaultNormal_1 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_2() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t1297308317_StaticFields, ___s_DefaultTangent_2)); }
	inline Vector4_t2243707581  get_s_DefaultTangent_2() const { return ___s_DefaultTangent_2; }
	inline Vector4_t2243707581 * get_address_of_s_DefaultTangent_2() { return &___s_DefaultTangent_2; }
	inline void set_s_DefaultTangent_2(Vector4_t2243707581  value)
	{
		___s_DefaultTangent_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t1297308317_marshaled_pinvoke
{
	Mesh_t1356156583 * ___mesh_3;
	int32_t ___vertexCount_4;
	Vector3_t2243707580 * ___vertices_5;
	Vector3_t2243707580 * ___normals_6;
	Vector4_t2243707581 * ___tangents_7;
	Vector2_t2243707579 * ___uvs0_8;
	Vector2_t2243707579 * ___uvs2_9;
	Color32_t874517518 * ___colors32_10;
	int32_t* ___triangles_11;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t1297308317_marshaled_com
{
	Mesh_t1356156583 * ___mesh_3;
	int32_t ___vertexCount_4;
	Vector3_t2243707580 * ___vertices_5;
	Vector3_t2243707580 * ___normals_6;
	Vector4_t2243707581 * ___tangents_7;
	Vector2_t2243707579 * ___uvs0_8;
	Vector2_t2243707579 * ___uvs2_9;
	Color32_t874517518 * ___colors32_10;
	int32_t* ___triangles_11;
};
