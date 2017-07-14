#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIAnimSystemFREE/<LoadLevelDelay>d__19
struct  U3CLoadLevelDelayU3Ed__19_t416228859  : public Il2CppObject
{
public:
	// System.Int32 GUIAnimSystemFREE/<LoadLevelDelay>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GUIAnimSystemFREE/<LoadLevelDelay>d__19::<>2__current
	Il2CppObject * ___U3CU3E2__current_1;
	// System.Single GUIAnimSystemFREE/<LoadLevelDelay>d__19::delay
	float ___delay_2;
	// System.String GUIAnimSystemFREE/<LoadLevelDelay>d__19::LevelName
	String_t* ___LevelName_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadLevelDelayU3Ed__19_t416228859, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadLevelDelayU3Ed__19_t416228859, ___U3CU3E2__current_1)); }
	inline Il2CppObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Il2CppObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Il2CppObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3E2__current_1, value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CLoadLevelDelayU3Ed__19_t416228859, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_LevelName_3() { return static_cast<int32_t>(offsetof(U3CLoadLevelDelayU3Ed__19_t416228859, ___LevelName_3)); }
	inline String_t* get_LevelName_3() const { return ___LevelName_3; }
	inline String_t** get_address_of_LevelName_3() { return &___LevelName_3; }
	inline void set_LevelName_3(String_t* value)
	{
		___LevelName_3 = value;
		Il2CppCodeGenWriteBarrier(&___LevelName_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
