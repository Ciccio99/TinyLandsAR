#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "GETween_GETween_GETweenType2881034057.h"

// System.Action
struct Action_t3226471752;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Object
struct Il2CppObject;
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action`2<System.Single,System.Single>
struct Action_2_t3216573049;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GETweenItem
struct  GETweenItem_t3020157540  : public Il2CppObject
{
public:
	// System.Boolean GETweenItem::m_CompleteOnRepeat
	bool ___m_CompleteOnRepeat_0;
	// System.Single GETweenItem::m_Delay
	float ___m_Delay_1;
	// System.Boolean GETweenItem::m_DestroyOnComplete
	bool ___m_DestroyOnComplete_2;
	// UnityEngine.Vector3 GETweenItem::m_Diff
	Vector3_t2243707580  ___m_Diff_3;
	// System.Single GETweenItem::m_Direction
	float ___m_Direction_4;
	// UnityEngine.Vector3 GETweenItem::m_From
	Vector3_t2243707580  ___m_From_5;
	// System.Boolean GETweenItem::m_HasUpdateCallback
	bool ___m_HasUpdateCallback_6;
	// System.Boolean GETweenItem::m_HasInitiliazed
	bool ___m_HasInitiliazed_7;
	// System.Int32 GETweenItem::m_LoopCount
	int32_t ___m_LoopCount_8;
	// GETween/GETweenType GETweenItem::m_LoopType
	int32_t ___m_LoopType_9;
	// System.Action GETweenItem::m_OnComplete
	Action_t3226471752 * ___m_OnComplete_10;
	// System.Action`1<System.Object> GETweenItem::m_OnCompleteObject
	Action_1_t2491248677 * ___m_OnCompleteObject_11;
	// System.Object GETweenItem::m_OnCompleteParam
	Il2CppObject * ___m_OnCompleteParam_12;
	// System.Action`1<System.Single> GETweenItem::m_OnUpdateFloat
	Action_1_t1878309314 * ___m_OnUpdateFloat_13;
	// System.Action`2<System.Single,System.Single> GETweenItem::m_OnUpdateFloatRatio
	Action_2_t3216573049 * ___m_OnUpdateFloatRatio_14;
	// System.Single GETweenItem::m_Passed
	float ___m_Passed_15;
	// System.Single GETweenItem::m_Time
	float ___m_Time_16;
	// UnityEngine.Vector3 GETweenItem::m_To
	Vector3_t2243707580  ___m_To_17;
	// System.Boolean GETweenItem::m_Toggle
	bool ___m_Toggle_18;
	// UnityEngine.Transform GETweenItem::m_Trans
	Transform_t3275118058 * ___m_Trans_19;
	// GETween/GETweenType GETweenItem::m_TweenType
	int32_t ___m_TweenType_20;
	// System.Boolean GETweenItem::m_UseEstimatedTime
	bool ___m_UseEstimatedTime_21;
	// System.Boolean GETweenItem::m_CompleteOnStart
	bool ___m_CompleteOnStart_22;
	// System.UInt32 GETweenItem::m_ID
	uint32_t ___m_ID_23;
	// System.UInt32 GETweenItem::m_Counter
	uint32_t ___m_Counter_24;

public:
	inline static int32_t get_offset_of_m_CompleteOnRepeat_0() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_CompleteOnRepeat_0)); }
	inline bool get_m_CompleteOnRepeat_0() const { return ___m_CompleteOnRepeat_0; }
	inline bool* get_address_of_m_CompleteOnRepeat_0() { return &___m_CompleteOnRepeat_0; }
	inline void set_m_CompleteOnRepeat_0(bool value)
	{
		___m_CompleteOnRepeat_0 = value;
	}

	inline static int32_t get_offset_of_m_Delay_1() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_Delay_1)); }
	inline float get_m_Delay_1() const { return ___m_Delay_1; }
	inline float* get_address_of_m_Delay_1() { return &___m_Delay_1; }
	inline void set_m_Delay_1(float value)
	{
		___m_Delay_1 = value;
	}

	inline static int32_t get_offset_of_m_DestroyOnComplete_2() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_DestroyOnComplete_2)); }
	inline bool get_m_DestroyOnComplete_2() const { return ___m_DestroyOnComplete_2; }
	inline bool* get_address_of_m_DestroyOnComplete_2() { return &___m_DestroyOnComplete_2; }
	inline void set_m_DestroyOnComplete_2(bool value)
	{
		___m_DestroyOnComplete_2 = value;
	}

	inline static int32_t get_offset_of_m_Diff_3() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_Diff_3)); }
	inline Vector3_t2243707580  get_m_Diff_3() const { return ___m_Diff_3; }
	inline Vector3_t2243707580 * get_address_of_m_Diff_3() { return &___m_Diff_3; }
	inline void set_m_Diff_3(Vector3_t2243707580  value)
	{
		___m_Diff_3 = value;
	}

	inline static int32_t get_offset_of_m_Direction_4() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_Direction_4)); }
	inline float get_m_Direction_4() const { return ___m_Direction_4; }
	inline float* get_address_of_m_Direction_4() { return &___m_Direction_4; }
	inline void set_m_Direction_4(float value)
	{
		___m_Direction_4 = value;
	}

	inline static int32_t get_offset_of_m_From_5() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_From_5)); }
	inline Vector3_t2243707580  get_m_From_5() const { return ___m_From_5; }
	inline Vector3_t2243707580 * get_address_of_m_From_5() { return &___m_From_5; }
	inline void set_m_From_5(Vector3_t2243707580  value)
	{
		___m_From_5 = value;
	}

	inline static int32_t get_offset_of_m_HasUpdateCallback_6() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_HasUpdateCallback_6)); }
	inline bool get_m_HasUpdateCallback_6() const { return ___m_HasUpdateCallback_6; }
	inline bool* get_address_of_m_HasUpdateCallback_6() { return &___m_HasUpdateCallback_6; }
	inline void set_m_HasUpdateCallback_6(bool value)
	{
		___m_HasUpdateCallback_6 = value;
	}

	inline static int32_t get_offset_of_m_HasInitiliazed_7() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_HasInitiliazed_7)); }
	inline bool get_m_HasInitiliazed_7() const { return ___m_HasInitiliazed_7; }
	inline bool* get_address_of_m_HasInitiliazed_7() { return &___m_HasInitiliazed_7; }
	inline void set_m_HasInitiliazed_7(bool value)
	{
		___m_HasInitiliazed_7 = value;
	}

	inline static int32_t get_offset_of_m_LoopCount_8() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_LoopCount_8)); }
	inline int32_t get_m_LoopCount_8() const { return ___m_LoopCount_8; }
	inline int32_t* get_address_of_m_LoopCount_8() { return &___m_LoopCount_8; }
	inline void set_m_LoopCount_8(int32_t value)
	{
		___m_LoopCount_8 = value;
	}

	inline static int32_t get_offset_of_m_LoopType_9() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_LoopType_9)); }
	inline int32_t get_m_LoopType_9() const { return ___m_LoopType_9; }
	inline int32_t* get_address_of_m_LoopType_9() { return &___m_LoopType_9; }
	inline void set_m_LoopType_9(int32_t value)
	{
		___m_LoopType_9 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_10() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_OnComplete_10)); }
	inline Action_t3226471752 * get_m_OnComplete_10() const { return ___m_OnComplete_10; }
	inline Action_t3226471752 ** get_address_of_m_OnComplete_10() { return &___m_OnComplete_10; }
	inline void set_m_OnComplete_10(Action_t3226471752 * value)
	{
		___m_OnComplete_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnComplete_10, value);
	}

	inline static int32_t get_offset_of_m_OnCompleteObject_11() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_OnCompleteObject_11)); }
	inline Action_1_t2491248677 * get_m_OnCompleteObject_11() const { return ___m_OnCompleteObject_11; }
	inline Action_1_t2491248677 ** get_address_of_m_OnCompleteObject_11() { return &___m_OnCompleteObject_11; }
	inline void set_m_OnCompleteObject_11(Action_1_t2491248677 * value)
	{
		___m_OnCompleteObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnCompleteObject_11, value);
	}

	inline static int32_t get_offset_of_m_OnCompleteParam_12() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_OnCompleteParam_12)); }
	inline Il2CppObject * get_m_OnCompleteParam_12() const { return ___m_OnCompleteParam_12; }
	inline Il2CppObject ** get_address_of_m_OnCompleteParam_12() { return &___m_OnCompleteParam_12; }
	inline void set_m_OnCompleteParam_12(Il2CppObject * value)
	{
		___m_OnCompleteParam_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnCompleteParam_12, value);
	}

	inline static int32_t get_offset_of_m_OnUpdateFloat_13() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_OnUpdateFloat_13)); }
	inline Action_1_t1878309314 * get_m_OnUpdateFloat_13() const { return ___m_OnUpdateFloat_13; }
	inline Action_1_t1878309314 ** get_address_of_m_OnUpdateFloat_13() { return &___m_OnUpdateFloat_13; }
	inline void set_m_OnUpdateFloat_13(Action_1_t1878309314 * value)
	{
		___m_OnUpdateFloat_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnUpdateFloat_13, value);
	}

	inline static int32_t get_offset_of_m_OnUpdateFloatRatio_14() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_OnUpdateFloatRatio_14)); }
	inline Action_2_t3216573049 * get_m_OnUpdateFloatRatio_14() const { return ___m_OnUpdateFloatRatio_14; }
	inline Action_2_t3216573049 ** get_address_of_m_OnUpdateFloatRatio_14() { return &___m_OnUpdateFloatRatio_14; }
	inline void set_m_OnUpdateFloatRatio_14(Action_2_t3216573049 * value)
	{
		___m_OnUpdateFloatRatio_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnUpdateFloatRatio_14, value);
	}

	inline static int32_t get_offset_of_m_Passed_15() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_Passed_15)); }
	inline float get_m_Passed_15() const { return ___m_Passed_15; }
	inline float* get_address_of_m_Passed_15() { return &___m_Passed_15; }
	inline void set_m_Passed_15(float value)
	{
		___m_Passed_15 = value;
	}

	inline static int32_t get_offset_of_m_Time_16() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_Time_16)); }
	inline float get_m_Time_16() const { return ___m_Time_16; }
	inline float* get_address_of_m_Time_16() { return &___m_Time_16; }
	inline void set_m_Time_16(float value)
	{
		___m_Time_16 = value;
	}

	inline static int32_t get_offset_of_m_To_17() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_To_17)); }
	inline Vector3_t2243707580  get_m_To_17() const { return ___m_To_17; }
	inline Vector3_t2243707580 * get_address_of_m_To_17() { return &___m_To_17; }
	inline void set_m_To_17(Vector3_t2243707580  value)
	{
		___m_To_17 = value;
	}

	inline static int32_t get_offset_of_m_Toggle_18() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_Toggle_18)); }
	inline bool get_m_Toggle_18() const { return ___m_Toggle_18; }
	inline bool* get_address_of_m_Toggle_18() { return &___m_Toggle_18; }
	inline void set_m_Toggle_18(bool value)
	{
		___m_Toggle_18 = value;
	}

	inline static int32_t get_offset_of_m_Trans_19() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_Trans_19)); }
	inline Transform_t3275118058 * get_m_Trans_19() const { return ___m_Trans_19; }
	inline Transform_t3275118058 ** get_address_of_m_Trans_19() { return &___m_Trans_19; }
	inline void set_m_Trans_19(Transform_t3275118058 * value)
	{
		___m_Trans_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_Trans_19, value);
	}

	inline static int32_t get_offset_of_m_TweenType_20() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_TweenType_20)); }
	inline int32_t get_m_TweenType_20() const { return ___m_TweenType_20; }
	inline int32_t* get_address_of_m_TweenType_20() { return &___m_TweenType_20; }
	inline void set_m_TweenType_20(int32_t value)
	{
		___m_TweenType_20 = value;
	}

	inline static int32_t get_offset_of_m_UseEstimatedTime_21() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_UseEstimatedTime_21)); }
	inline bool get_m_UseEstimatedTime_21() const { return ___m_UseEstimatedTime_21; }
	inline bool* get_address_of_m_UseEstimatedTime_21() { return &___m_UseEstimatedTime_21; }
	inline void set_m_UseEstimatedTime_21(bool value)
	{
		___m_UseEstimatedTime_21 = value;
	}

	inline static int32_t get_offset_of_m_CompleteOnStart_22() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_CompleteOnStart_22)); }
	inline bool get_m_CompleteOnStart_22() const { return ___m_CompleteOnStart_22; }
	inline bool* get_address_of_m_CompleteOnStart_22() { return &___m_CompleteOnStart_22; }
	inline void set_m_CompleteOnStart_22(bool value)
	{
		___m_CompleteOnStart_22 = value;
	}

	inline static int32_t get_offset_of_m_ID_23() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_ID_23)); }
	inline uint32_t get_m_ID_23() const { return ___m_ID_23; }
	inline uint32_t* get_address_of_m_ID_23() { return &___m_ID_23; }
	inline void set_m_ID_23(uint32_t value)
	{
		___m_ID_23 = value;
	}

	inline static int32_t get_offset_of_m_Counter_24() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540, ___m_Counter_24)); }
	inline uint32_t get_m_Counter_24() const { return ___m_Counter_24; }
	inline uint32_t* get_address_of_m_Counter_24() { return &___m_Counter_24; }
	inline void set_m_Counter_24(uint32_t value)
	{
		___m_Counter_24 = value;
	}
};

struct GETweenItem_t3020157540_StaticFields
{
public:
	// System.UInt32 GETweenItem::m_GCounter
	uint32_t ___m_GCounter_25;

public:
	inline static int32_t get_offset_of_m_GCounter_25() { return static_cast<int32_t>(offsetof(GETweenItem_t3020157540_StaticFields, ___m_GCounter_25)); }
	inline uint32_t get_m_GCounter_25() const { return ___m_GCounter_25; }
	inline uint32_t* get_address_of_m_GCounter_25() { return &___m_GCounter_25; }
	inline void set_m_GCounter_25(uint32_t value)
	{
		___m_GCounter_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
