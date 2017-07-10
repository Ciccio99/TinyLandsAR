#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t2761625415;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t1249311527;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.ThirdPerson.AICharacterControl
struct  AICharacterControl_t1332882364  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AI.NavMeshAgent UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::<agent>k__BackingField
	NavMeshAgent_t2761625415 * ___U3CagentU3Ek__BackingField_2;
	// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::<character>k__BackingField
	ThirdPersonCharacter_t1249311527 * ___U3CcharacterU3Ek__BackingField_3;
	// UnityEngine.Transform UnityStandardAssets.Characters.ThirdPerson.AICharacterControl::target
	Transform_t3275118058 * ___target_4;

public:
	inline static int32_t get_offset_of_U3CagentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AICharacterControl_t1332882364, ___U3CagentU3Ek__BackingField_2)); }
	inline NavMeshAgent_t2761625415 * get_U3CagentU3Ek__BackingField_2() const { return ___U3CagentU3Ek__BackingField_2; }
	inline NavMeshAgent_t2761625415 ** get_address_of_U3CagentU3Ek__BackingField_2() { return &___U3CagentU3Ek__BackingField_2; }
	inline void set_U3CagentU3Ek__BackingField_2(NavMeshAgent_t2761625415 * value)
	{
		___U3CagentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CagentU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CcharacterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AICharacterControl_t1332882364, ___U3CcharacterU3Ek__BackingField_3)); }
	inline ThirdPersonCharacter_t1249311527 * get_U3CcharacterU3Ek__BackingField_3() const { return ___U3CcharacterU3Ek__BackingField_3; }
	inline ThirdPersonCharacter_t1249311527 ** get_address_of_U3CcharacterU3Ek__BackingField_3() { return &___U3CcharacterU3Ek__BackingField_3; }
	inline void set_U3CcharacterU3Ek__BackingField_3(ThirdPersonCharacter_t1249311527 * value)
	{
		___U3CcharacterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcharacterU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(AICharacterControl_t1332882364, ___target_4)); }
	inline Transform_t3275118058 * get_target_4() const { return ___target_4; }
	inline Transform_t3275118058 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t3275118058 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
