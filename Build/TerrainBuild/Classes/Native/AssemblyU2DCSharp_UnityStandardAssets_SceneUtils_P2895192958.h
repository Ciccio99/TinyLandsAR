﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList
struct DemoParticleSystemList_t3273430801;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t410733016;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;
// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_t3377687064;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t3072969947;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.SceneUtils.ParticleSceneControls
struct  ParticleSceneControls_t2895192958  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList UnityStandardAssets.SceneUtils.ParticleSceneControls::demoParticles
	DemoParticleSystemList_t3273430801 * ___demoParticles_2;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls::spawnOffset
	float ___spawnOffset_3;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls::multiply
	float ___multiply_4;
	// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::clearOnChange
	bool ___clearOnChange_5;
	// UnityEngine.UI.Text UnityStandardAssets.SceneUtils.ParticleSceneControls::titleText
	Text_t356221433 * ___titleText_6;
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls::sceneCamera
	Transform_t3275118058 * ___sceneCamera_7;
	// UnityEngine.UI.Text UnityStandardAssets.SceneUtils.ParticleSceneControls::instructionText
	Text_t356221433 * ___instructionText_8;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.ParticleSceneControls::previousButton
	Button_t2872111280 * ___previousButton_9;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.ParticleSceneControls::nextButton
	Button_t2872111280 * ___nextButton_10;
	// UnityEngine.UI.GraphicRaycaster UnityStandardAssets.SceneUtils.ParticleSceneControls::graphicRaycaster
	GraphicRaycaster_t410733016 * ___graphicRaycaster_11;
	// UnityEngine.EventSystems.EventSystem UnityStandardAssets.SceneUtils.ParticleSceneControls::eventSystem
	EventSystem_t3466835263 * ___eventSystem_12;
	// UnityStandardAssets.Effects.ParticleSystemMultiplier UnityStandardAssets.SceneUtils.ParticleSceneControls::m_ParticleMultiplier
	ParticleSystemMultiplier_t3377687064 * ___m_ParticleMultiplier_13;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.SceneUtils.ParticleSceneControls::m_CurrentParticleList
	List_1_t2644239190 * ___m_CurrentParticleList_14;
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls::m_Instance
	Transform_t3275118058 * ___m_Instance_15;
	// UnityEngine.Vector3 UnityStandardAssets.SceneUtils.ParticleSceneControls::m_CamOffsetVelocity
	Vector3_t2243707580  ___m_CamOffsetVelocity_17;
	// UnityEngine.Vector3 UnityStandardAssets.SceneUtils.ParticleSceneControls::m_LastPos
	Vector3_t2243707580  ___m_LastPos_18;

public:
	inline static int32_t get_offset_of_demoParticles_2() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___demoParticles_2)); }
	inline DemoParticleSystemList_t3273430801 * get_demoParticles_2() const { return ___demoParticles_2; }
	inline DemoParticleSystemList_t3273430801 ** get_address_of_demoParticles_2() { return &___demoParticles_2; }
	inline void set_demoParticles_2(DemoParticleSystemList_t3273430801 * value)
	{
		___demoParticles_2 = value;
		Il2CppCodeGenWriteBarrier(&___demoParticles_2, value);
	}

	inline static int32_t get_offset_of_spawnOffset_3() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___spawnOffset_3)); }
	inline float get_spawnOffset_3() const { return ___spawnOffset_3; }
	inline float* get_address_of_spawnOffset_3() { return &___spawnOffset_3; }
	inline void set_spawnOffset_3(float value)
	{
		___spawnOffset_3 = value;
	}

	inline static int32_t get_offset_of_multiply_4() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___multiply_4)); }
	inline float get_multiply_4() const { return ___multiply_4; }
	inline float* get_address_of_multiply_4() { return &___multiply_4; }
	inline void set_multiply_4(float value)
	{
		___multiply_4 = value;
	}

	inline static int32_t get_offset_of_clearOnChange_5() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___clearOnChange_5)); }
	inline bool get_clearOnChange_5() const { return ___clearOnChange_5; }
	inline bool* get_address_of_clearOnChange_5() { return &___clearOnChange_5; }
	inline void set_clearOnChange_5(bool value)
	{
		___clearOnChange_5 = value;
	}

	inline static int32_t get_offset_of_titleText_6() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___titleText_6)); }
	inline Text_t356221433 * get_titleText_6() const { return ___titleText_6; }
	inline Text_t356221433 ** get_address_of_titleText_6() { return &___titleText_6; }
	inline void set_titleText_6(Text_t356221433 * value)
	{
		___titleText_6 = value;
		Il2CppCodeGenWriteBarrier(&___titleText_6, value);
	}

	inline static int32_t get_offset_of_sceneCamera_7() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___sceneCamera_7)); }
	inline Transform_t3275118058 * get_sceneCamera_7() const { return ___sceneCamera_7; }
	inline Transform_t3275118058 ** get_address_of_sceneCamera_7() { return &___sceneCamera_7; }
	inline void set_sceneCamera_7(Transform_t3275118058 * value)
	{
		___sceneCamera_7 = value;
		Il2CppCodeGenWriteBarrier(&___sceneCamera_7, value);
	}

	inline static int32_t get_offset_of_instructionText_8() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___instructionText_8)); }
	inline Text_t356221433 * get_instructionText_8() const { return ___instructionText_8; }
	inline Text_t356221433 ** get_address_of_instructionText_8() { return &___instructionText_8; }
	inline void set_instructionText_8(Text_t356221433 * value)
	{
		___instructionText_8 = value;
		Il2CppCodeGenWriteBarrier(&___instructionText_8, value);
	}

	inline static int32_t get_offset_of_previousButton_9() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___previousButton_9)); }
	inline Button_t2872111280 * get_previousButton_9() const { return ___previousButton_9; }
	inline Button_t2872111280 ** get_address_of_previousButton_9() { return &___previousButton_9; }
	inline void set_previousButton_9(Button_t2872111280 * value)
	{
		___previousButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___previousButton_9, value);
	}

	inline static int32_t get_offset_of_nextButton_10() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___nextButton_10)); }
	inline Button_t2872111280 * get_nextButton_10() const { return ___nextButton_10; }
	inline Button_t2872111280 ** get_address_of_nextButton_10() { return &___nextButton_10; }
	inline void set_nextButton_10(Button_t2872111280 * value)
	{
		___nextButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___nextButton_10, value);
	}

	inline static int32_t get_offset_of_graphicRaycaster_11() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___graphicRaycaster_11)); }
	inline GraphicRaycaster_t410733016 * get_graphicRaycaster_11() const { return ___graphicRaycaster_11; }
	inline GraphicRaycaster_t410733016 ** get_address_of_graphicRaycaster_11() { return &___graphicRaycaster_11; }
	inline void set_graphicRaycaster_11(GraphicRaycaster_t410733016 * value)
	{
		___graphicRaycaster_11 = value;
		Il2CppCodeGenWriteBarrier(&___graphicRaycaster_11, value);
	}

	inline static int32_t get_offset_of_eventSystem_12() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___eventSystem_12)); }
	inline EventSystem_t3466835263 * get_eventSystem_12() const { return ___eventSystem_12; }
	inline EventSystem_t3466835263 ** get_address_of_eventSystem_12() { return &___eventSystem_12; }
	inline void set_eventSystem_12(EventSystem_t3466835263 * value)
	{
		___eventSystem_12 = value;
		Il2CppCodeGenWriteBarrier(&___eventSystem_12, value);
	}

	inline static int32_t get_offset_of_m_ParticleMultiplier_13() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___m_ParticleMultiplier_13)); }
	inline ParticleSystemMultiplier_t3377687064 * get_m_ParticleMultiplier_13() const { return ___m_ParticleMultiplier_13; }
	inline ParticleSystemMultiplier_t3377687064 ** get_address_of_m_ParticleMultiplier_13() { return &___m_ParticleMultiplier_13; }
	inline void set_m_ParticleMultiplier_13(ParticleSystemMultiplier_t3377687064 * value)
	{
		___m_ParticleMultiplier_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParticleMultiplier_13, value);
	}

	inline static int32_t get_offset_of_m_CurrentParticleList_14() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___m_CurrentParticleList_14)); }
	inline List_1_t2644239190 * get_m_CurrentParticleList_14() const { return ___m_CurrentParticleList_14; }
	inline List_1_t2644239190 ** get_address_of_m_CurrentParticleList_14() { return &___m_CurrentParticleList_14; }
	inline void set_m_CurrentParticleList_14(List_1_t2644239190 * value)
	{
		___m_CurrentParticleList_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentParticleList_14, value);
	}

	inline static int32_t get_offset_of_m_Instance_15() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___m_Instance_15)); }
	inline Transform_t3275118058 * get_m_Instance_15() const { return ___m_Instance_15; }
	inline Transform_t3275118058 ** get_address_of_m_Instance_15() { return &___m_Instance_15; }
	inline void set_m_Instance_15(Transform_t3275118058 * value)
	{
		___m_Instance_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_Instance_15, value);
	}

	inline static int32_t get_offset_of_m_CamOffsetVelocity_17() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___m_CamOffsetVelocity_17)); }
	inline Vector3_t2243707580  get_m_CamOffsetVelocity_17() const { return ___m_CamOffsetVelocity_17; }
	inline Vector3_t2243707580 * get_address_of_m_CamOffsetVelocity_17() { return &___m_CamOffsetVelocity_17; }
	inline void set_m_CamOffsetVelocity_17(Vector3_t2243707580  value)
	{
		___m_CamOffsetVelocity_17 = value;
	}

	inline static int32_t get_offset_of_m_LastPos_18() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958, ___m_LastPos_18)); }
	inline Vector3_t2243707580  get_m_LastPos_18() const { return ___m_LastPos_18; }
	inline Vector3_t2243707580 * get_address_of_m_LastPos_18() { return &___m_LastPos_18; }
	inline void set_m_LastPos_18(Vector3_t2243707580  value)
	{
		___m_LastPos_18 = value;
	}
};

struct ParticleSceneControls_t2895192958_StaticFields
{
public:
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls::s_SelectedIndex
	int32_t ___s_SelectedIndex_16;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem UnityStandardAssets.SceneUtils.ParticleSceneControls::s_Selected
	DemoParticleSystem_t3072969947 * ___s_Selected_19;

public:
	inline static int32_t get_offset_of_s_SelectedIndex_16() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958_StaticFields, ___s_SelectedIndex_16)); }
	inline int32_t get_s_SelectedIndex_16() const { return ___s_SelectedIndex_16; }
	inline int32_t* get_address_of_s_SelectedIndex_16() { return &___s_SelectedIndex_16; }
	inline void set_s_SelectedIndex_16(int32_t value)
	{
		___s_SelectedIndex_16 = value;
	}

	inline static int32_t get_offset_of_s_Selected_19() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t2895192958_StaticFields, ___s_Selected_19)); }
	inline DemoParticleSystem_t3072969947 * get_s_Selected_19() const { return ___s_Selected_19; }
	inline DemoParticleSystem_t3072969947 ** get_address_of_s_Selected_19() { return &___s_Selected_19; }
	inline void set_s_Selected_19(DemoParticleSystem_t3072969947 * value)
	{
		___s_Selected_19 = value;
		Il2CppCodeGenWriteBarrier(&___s_Selected_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
