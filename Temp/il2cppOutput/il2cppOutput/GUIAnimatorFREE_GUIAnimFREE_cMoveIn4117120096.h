#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "GUIAnimatorFREE_GUIAnimFREE_ePosMove80034921.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "GUIAnimatorFREE_GUIAnimFREE_eEaseType875930122.h"

// GUIAnimFREE/cSounds
struct cSounds_t1738525510;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimFREE/cMoveIn
struct  cMoveIn_t4117120096  : public Il2CppObject
{
public:
	// System.Boolean GUIAnimFREE/cMoveIn::Enable
	bool ___Enable_0;
	// System.Boolean GUIAnimFREE/cMoveIn::Began
	bool ___Began_1;
	// System.Boolean GUIAnimFREE/cMoveIn::Animating
	bool ___Animating_2;
	// System.Boolean GUIAnimFREE/cMoveIn::Done
	bool ___Done_3;
	// GUIAnimFREE/ePosMove GUIAnimFREE/cMoveIn::MoveFrom
	int32_t ___MoveFrom_4;
	// UnityEngine.Vector3 GUIAnimFREE/cMoveIn::BeginPos
	Vector3_t2243707580  ___BeginPos_5;
	// UnityEngine.Vector3 GUIAnimFREE/cMoveIn::EndPos
	Vector3_t2243707580  ___EndPos_6;
	// UnityEngine.Vector3 GUIAnimFREE/cMoveIn::Position
	Vector3_t2243707580  ___Position_7;
	// GUIAnimFREE/eEaseType GUIAnimFREE/cMoveIn::EaseType
	int32_t ___EaseType_8;
	// System.Single GUIAnimFREE/cMoveIn::Time
	float ___Time_9;
	// System.Single GUIAnimFREE/cMoveIn::Delay
	float ___Delay_10;
	// GUIAnimFREE/cSounds GUIAnimFREE/cMoveIn::Sounds
	cSounds_t1738525510 * ___Sounds_11;

public:
	inline static int32_t get_offset_of_Enable_0() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___Enable_0)); }
	inline bool get_Enable_0() const { return ___Enable_0; }
	inline bool* get_address_of_Enable_0() { return &___Enable_0; }
	inline void set_Enable_0(bool value)
	{
		___Enable_0 = value;
	}

	inline static int32_t get_offset_of_Began_1() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___Began_1)); }
	inline bool get_Began_1() const { return ___Began_1; }
	inline bool* get_address_of_Began_1() { return &___Began_1; }
	inline void set_Began_1(bool value)
	{
		___Began_1 = value;
	}

	inline static int32_t get_offset_of_Animating_2() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___Animating_2)); }
	inline bool get_Animating_2() const { return ___Animating_2; }
	inline bool* get_address_of_Animating_2() { return &___Animating_2; }
	inline void set_Animating_2(bool value)
	{
		___Animating_2 = value;
	}

	inline static int32_t get_offset_of_Done_3() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___Done_3)); }
	inline bool get_Done_3() const { return ___Done_3; }
	inline bool* get_address_of_Done_3() { return &___Done_3; }
	inline void set_Done_3(bool value)
	{
		___Done_3 = value;
	}

	inline static int32_t get_offset_of_MoveFrom_4() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___MoveFrom_4)); }
	inline int32_t get_MoveFrom_4() const { return ___MoveFrom_4; }
	inline int32_t* get_address_of_MoveFrom_4() { return &___MoveFrom_4; }
	inline void set_MoveFrom_4(int32_t value)
	{
		___MoveFrom_4 = value;
	}

	inline static int32_t get_offset_of_BeginPos_5() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___BeginPos_5)); }
	inline Vector3_t2243707580  get_BeginPos_5() const { return ___BeginPos_5; }
	inline Vector3_t2243707580 * get_address_of_BeginPos_5() { return &___BeginPos_5; }
	inline void set_BeginPos_5(Vector3_t2243707580  value)
	{
		___BeginPos_5 = value;
	}

	inline static int32_t get_offset_of_EndPos_6() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___EndPos_6)); }
	inline Vector3_t2243707580  get_EndPos_6() const { return ___EndPos_6; }
	inline Vector3_t2243707580 * get_address_of_EndPos_6() { return &___EndPos_6; }
	inline void set_EndPos_6(Vector3_t2243707580  value)
	{
		___EndPos_6 = value;
	}

	inline static int32_t get_offset_of_Position_7() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___Position_7)); }
	inline Vector3_t2243707580  get_Position_7() const { return ___Position_7; }
	inline Vector3_t2243707580 * get_address_of_Position_7() { return &___Position_7; }
	inline void set_Position_7(Vector3_t2243707580  value)
	{
		___Position_7 = value;
	}

	inline static int32_t get_offset_of_EaseType_8() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___EaseType_8)); }
	inline int32_t get_EaseType_8() const { return ___EaseType_8; }
	inline int32_t* get_address_of_EaseType_8() { return &___EaseType_8; }
	inline void set_EaseType_8(int32_t value)
	{
		___EaseType_8 = value;
	}

	inline static int32_t get_offset_of_Time_9() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___Time_9)); }
	inline float get_Time_9() const { return ___Time_9; }
	inline float* get_address_of_Time_9() { return &___Time_9; }
	inline void set_Time_9(float value)
	{
		___Time_9 = value;
	}

	inline static int32_t get_offset_of_Delay_10() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___Delay_10)); }
	inline float get_Delay_10() const { return ___Delay_10; }
	inline float* get_address_of_Delay_10() { return &___Delay_10; }
	inline void set_Delay_10(float value)
	{
		___Delay_10 = value;
	}

	inline static int32_t get_offset_of_Sounds_11() { return static_cast<int32_t>(offsetof(cMoveIn_t4117120096, ___Sounds_11)); }
	inline cSounds_t1738525510 * get_Sounds_11() const { return ___Sounds_11; }
	inline cSounds_t1738525510 ** get_address_of_Sounds_11() { return &___Sounds_11; }
	inline void set_Sounds_11(cSounds_t1738525510 * value)
	{
		___Sounds_11 = value;
		Il2CppCodeGenWriteBarrier(&___Sounds_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
