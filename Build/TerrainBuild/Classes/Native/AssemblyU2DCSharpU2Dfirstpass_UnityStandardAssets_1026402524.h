#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1989748332.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3435258179.h"

// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_t656698834;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityStandardAssets.Vehicles.Car.WheelEffects[]
struct WheelEffectsU5BU5D_t1527820394;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t1854387467;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.CarController
struct  CarController_t1026402524  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Vehicles.Car.CarDriveType UnityStandardAssets.Vehicles.Car.CarController::m_CarDriveType
	int32_t ___m_CarDriveType_2;
	// UnityEngine.WheelCollider[] UnityStandardAssets.Vehicles.Car.CarController::m_WheelColliders
	WheelColliderU5BU5D_t656698834* ___m_WheelColliders_3;
	// UnityEngine.GameObject[] UnityStandardAssets.Vehicles.Car.CarController::m_WheelMeshes
	GameObjectU5BU5D_t3057952154* ___m_WheelMeshes_4;
	// UnityStandardAssets.Vehicles.Car.WheelEffects[] UnityStandardAssets.Vehicles.Car.CarController::m_WheelEffects
	WheelEffectsU5BU5D_t1527820394* ___m_WheelEffects_5;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Car.CarController::m_CentreOfMassOffset
	Vector3_t2243707580  ___m_CentreOfMassOffset_6;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_MaximumSteerAngle
	float ___m_MaximumSteerAngle_7;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_SteerHelper
	float ___m_SteerHelper_8;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_TractionControl
	float ___m_TractionControl_9;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_FullTorqueOverAllWheels
	float ___m_FullTorqueOverAllWheels_10;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_ReverseTorque
	float ___m_ReverseTorque_11;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_MaxHandbrakeTorque
	float ___m_MaxHandbrakeTorque_12;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_Downforce
	float ___m_Downforce_13;
	// UnityStandardAssets.Vehicles.Car.SpeedType UnityStandardAssets.Vehicles.Car.CarController::m_SpeedType
	int32_t ___m_SpeedType_14;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_Topspeed
	float ___m_Topspeed_15;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_RevRangeBoundary
	float ___m_RevRangeBoundary_17;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_SlipLimit
	float ___m_SlipLimit_18;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_BrakeTorque
	float ___m_BrakeTorque_19;
	// UnityEngine.Quaternion[] UnityStandardAssets.Vehicles.Car.CarController::m_WheelMeshLocalRotations
	QuaternionU5BU5D_t1854387467* ___m_WheelMeshLocalRotations_20;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Car.CarController::m_Prevpos
	Vector3_t2243707580  ___m_Prevpos_21;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Car.CarController::m_Pos
	Vector3_t2243707580  ___m_Pos_22;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_SteerAngle
	float ___m_SteerAngle_23;
	// System.Int32 UnityStandardAssets.Vehicles.Car.CarController::m_GearNum
	int32_t ___m_GearNum_24;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_GearFactor
	float ___m_GearFactor_25;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_OldRotation
	float ___m_OldRotation_26;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::m_CurrentTorque
	float ___m_CurrentTorque_27;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Car.CarController::m_Rigidbody
	Rigidbody_t4233889191 * ___m_Rigidbody_28;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::<Skidding>k__BackingField
	bool ___U3CSkiddingU3Ek__BackingField_30;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::<BrakeInput>k__BackingField
	float ___U3CBrakeInputU3Ek__BackingField_31;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::<Revs>k__BackingField
	float ___U3CRevsU3Ek__BackingField_32;
	// System.Single UnityStandardAssets.Vehicles.Car.CarController::<AccelInput>k__BackingField
	float ___U3CAccelInputU3Ek__BackingField_33;

public:
	inline static int32_t get_offset_of_m_CarDriveType_2() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_CarDriveType_2)); }
	inline int32_t get_m_CarDriveType_2() const { return ___m_CarDriveType_2; }
	inline int32_t* get_address_of_m_CarDriveType_2() { return &___m_CarDriveType_2; }
	inline void set_m_CarDriveType_2(int32_t value)
	{
		___m_CarDriveType_2 = value;
	}

	inline static int32_t get_offset_of_m_WheelColliders_3() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_WheelColliders_3)); }
	inline WheelColliderU5BU5D_t656698834* get_m_WheelColliders_3() const { return ___m_WheelColliders_3; }
	inline WheelColliderU5BU5D_t656698834** get_address_of_m_WheelColliders_3() { return &___m_WheelColliders_3; }
	inline void set_m_WheelColliders_3(WheelColliderU5BU5D_t656698834* value)
	{
		___m_WheelColliders_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_WheelColliders_3, value);
	}

	inline static int32_t get_offset_of_m_WheelMeshes_4() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_WheelMeshes_4)); }
	inline GameObjectU5BU5D_t3057952154* get_m_WheelMeshes_4() const { return ___m_WheelMeshes_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_WheelMeshes_4() { return &___m_WheelMeshes_4; }
	inline void set_m_WheelMeshes_4(GameObjectU5BU5D_t3057952154* value)
	{
		___m_WheelMeshes_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_WheelMeshes_4, value);
	}

	inline static int32_t get_offset_of_m_WheelEffects_5() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_WheelEffects_5)); }
	inline WheelEffectsU5BU5D_t1527820394* get_m_WheelEffects_5() const { return ___m_WheelEffects_5; }
	inline WheelEffectsU5BU5D_t1527820394** get_address_of_m_WheelEffects_5() { return &___m_WheelEffects_5; }
	inline void set_m_WheelEffects_5(WheelEffectsU5BU5D_t1527820394* value)
	{
		___m_WheelEffects_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_WheelEffects_5, value);
	}

	inline static int32_t get_offset_of_m_CentreOfMassOffset_6() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_CentreOfMassOffset_6)); }
	inline Vector3_t2243707580  get_m_CentreOfMassOffset_6() const { return ___m_CentreOfMassOffset_6; }
	inline Vector3_t2243707580 * get_address_of_m_CentreOfMassOffset_6() { return &___m_CentreOfMassOffset_6; }
	inline void set_m_CentreOfMassOffset_6(Vector3_t2243707580  value)
	{
		___m_CentreOfMassOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_MaximumSteerAngle_7() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_MaximumSteerAngle_7)); }
	inline float get_m_MaximumSteerAngle_7() const { return ___m_MaximumSteerAngle_7; }
	inline float* get_address_of_m_MaximumSteerAngle_7() { return &___m_MaximumSteerAngle_7; }
	inline void set_m_MaximumSteerAngle_7(float value)
	{
		___m_MaximumSteerAngle_7 = value;
	}

	inline static int32_t get_offset_of_m_SteerHelper_8() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_SteerHelper_8)); }
	inline float get_m_SteerHelper_8() const { return ___m_SteerHelper_8; }
	inline float* get_address_of_m_SteerHelper_8() { return &___m_SteerHelper_8; }
	inline void set_m_SteerHelper_8(float value)
	{
		___m_SteerHelper_8 = value;
	}

	inline static int32_t get_offset_of_m_TractionControl_9() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_TractionControl_9)); }
	inline float get_m_TractionControl_9() const { return ___m_TractionControl_9; }
	inline float* get_address_of_m_TractionControl_9() { return &___m_TractionControl_9; }
	inline void set_m_TractionControl_9(float value)
	{
		___m_TractionControl_9 = value;
	}

	inline static int32_t get_offset_of_m_FullTorqueOverAllWheels_10() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_FullTorqueOverAllWheels_10)); }
	inline float get_m_FullTorqueOverAllWheels_10() const { return ___m_FullTorqueOverAllWheels_10; }
	inline float* get_address_of_m_FullTorqueOverAllWheels_10() { return &___m_FullTorqueOverAllWheels_10; }
	inline void set_m_FullTorqueOverAllWheels_10(float value)
	{
		___m_FullTorqueOverAllWheels_10 = value;
	}

	inline static int32_t get_offset_of_m_ReverseTorque_11() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_ReverseTorque_11)); }
	inline float get_m_ReverseTorque_11() const { return ___m_ReverseTorque_11; }
	inline float* get_address_of_m_ReverseTorque_11() { return &___m_ReverseTorque_11; }
	inline void set_m_ReverseTorque_11(float value)
	{
		___m_ReverseTorque_11 = value;
	}

	inline static int32_t get_offset_of_m_MaxHandbrakeTorque_12() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_MaxHandbrakeTorque_12)); }
	inline float get_m_MaxHandbrakeTorque_12() const { return ___m_MaxHandbrakeTorque_12; }
	inline float* get_address_of_m_MaxHandbrakeTorque_12() { return &___m_MaxHandbrakeTorque_12; }
	inline void set_m_MaxHandbrakeTorque_12(float value)
	{
		___m_MaxHandbrakeTorque_12 = value;
	}

	inline static int32_t get_offset_of_m_Downforce_13() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_Downforce_13)); }
	inline float get_m_Downforce_13() const { return ___m_Downforce_13; }
	inline float* get_address_of_m_Downforce_13() { return &___m_Downforce_13; }
	inline void set_m_Downforce_13(float value)
	{
		___m_Downforce_13 = value;
	}

	inline static int32_t get_offset_of_m_SpeedType_14() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_SpeedType_14)); }
	inline int32_t get_m_SpeedType_14() const { return ___m_SpeedType_14; }
	inline int32_t* get_address_of_m_SpeedType_14() { return &___m_SpeedType_14; }
	inline void set_m_SpeedType_14(int32_t value)
	{
		___m_SpeedType_14 = value;
	}

	inline static int32_t get_offset_of_m_Topspeed_15() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_Topspeed_15)); }
	inline float get_m_Topspeed_15() const { return ___m_Topspeed_15; }
	inline float* get_address_of_m_Topspeed_15() { return &___m_Topspeed_15; }
	inline void set_m_Topspeed_15(float value)
	{
		___m_Topspeed_15 = value;
	}

	inline static int32_t get_offset_of_m_RevRangeBoundary_17() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_RevRangeBoundary_17)); }
	inline float get_m_RevRangeBoundary_17() const { return ___m_RevRangeBoundary_17; }
	inline float* get_address_of_m_RevRangeBoundary_17() { return &___m_RevRangeBoundary_17; }
	inline void set_m_RevRangeBoundary_17(float value)
	{
		___m_RevRangeBoundary_17 = value;
	}

	inline static int32_t get_offset_of_m_SlipLimit_18() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_SlipLimit_18)); }
	inline float get_m_SlipLimit_18() const { return ___m_SlipLimit_18; }
	inline float* get_address_of_m_SlipLimit_18() { return &___m_SlipLimit_18; }
	inline void set_m_SlipLimit_18(float value)
	{
		___m_SlipLimit_18 = value;
	}

	inline static int32_t get_offset_of_m_BrakeTorque_19() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_BrakeTorque_19)); }
	inline float get_m_BrakeTorque_19() const { return ___m_BrakeTorque_19; }
	inline float* get_address_of_m_BrakeTorque_19() { return &___m_BrakeTorque_19; }
	inline void set_m_BrakeTorque_19(float value)
	{
		___m_BrakeTorque_19 = value;
	}

	inline static int32_t get_offset_of_m_WheelMeshLocalRotations_20() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_WheelMeshLocalRotations_20)); }
	inline QuaternionU5BU5D_t1854387467* get_m_WheelMeshLocalRotations_20() const { return ___m_WheelMeshLocalRotations_20; }
	inline QuaternionU5BU5D_t1854387467** get_address_of_m_WheelMeshLocalRotations_20() { return &___m_WheelMeshLocalRotations_20; }
	inline void set_m_WheelMeshLocalRotations_20(QuaternionU5BU5D_t1854387467* value)
	{
		___m_WheelMeshLocalRotations_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_WheelMeshLocalRotations_20, value);
	}

	inline static int32_t get_offset_of_m_Prevpos_21() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_Prevpos_21)); }
	inline Vector3_t2243707580  get_m_Prevpos_21() const { return ___m_Prevpos_21; }
	inline Vector3_t2243707580 * get_address_of_m_Prevpos_21() { return &___m_Prevpos_21; }
	inline void set_m_Prevpos_21(Vector3_t2243707580  value)
	{
		___m_Prevpos_21 = value;
	}

	inline static int32_t get_offset_of_m_Pos_22() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_Pos_22)); }
	inline Vector3_t2243707580  get_m_Pos_22() const { return ___m_Pos_22; }
	inline Vector3_t2243707580 * get_address_of_m_Pos_22() { return &___m_Pos_22; }
	inline void set_m_Pos_22(Vector3_t2243707580  value)
	{
		___m_Pos_22 = value;
	}

	inline static int32_t get_offset_of_m_SteerAngle_23() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_SteerAngle_23)); }
	inline float get_m_SteerAngle_23() const { return ___m_SteerAngle_23; }
	inline float* get_address_of_m_SteerAngle_23() { return &___m_SteerAngle_23; }
	inline void set_m_SteerAngle_23(float value)
	{
		___m_SteerAngle_23 = value;
	}

	inline static int32_t get_offset_of_m_GearNum_24() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_GearNum_24)); }
	inline int32_t get_m_GearNum_24() const { return ___m_GearNum_24; }
	inline int32_t* get_address_of_m_GearNum_24() { return &___m_GearNum_24; }
	inline void set_m_GearNum_24(int32_t value)
	{
		___m_GearNum_24 = value;
	}

	inline static int32_t get_offset_of_m_GearFactor_25() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_GearFactor_25)); }
	inline float get_m_GearFactor_25() const { return ___m_GearFactor_25; }
	inline float* get_address_of_m_GearFactor_25() { return &___m_GearFactor_25; }
	inline void set_m_GearFactor_25(float value)
	{
		___m_GearFactor_25 = value;
	}

	inline static int32_t get_offset_of_m_OldRotation_26() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_OldRotation_26)); }
	inline float get_m_OldRotation_26() const { return ___m_OldRotation_26; }
	inline float* get_address_of_m_OldRotation_26() { return &___m_OldRotation_26; }
	inline void set_m_OldRotation_26(float value)
	{
		___m_OldRotation_26 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTorque_27() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_CurrentTorque_27)); }
	inline float get_m_CurrentTorque_27() const { return ___m_CurrentTorque_27; }
	inline float* get_address_of_m_CurrentTorque_27() { return &___m_CurrentTorque_27; }
	inline void set_m_CurrentTorque_27(float value)
	{
		___m_CurrentTorque_27 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_28() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___m_Rigidbody_28)); }
	inline Rigidbody_t4233889191 * get_m_Rigidbody_28() const { return ___m_Rigidbody_28; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Rigidbody_28() { return &___m_Rigidbody_28; }
	inline void set_m_Rigidbody_28(Rigidbody_t4233889191 * value)
	{
		___m_Rigidbody_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_28, value);
	}

	inline static int32_t get_offset_of_U3CSkiddingU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___U3CSkiddingU3Ek__BackingField_30)); }
	inline bool get_U3CSkiddingU3Ek__BackingField_30() const { return ___U3CSkiddingU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CSkiddingU3Ek__BackingField_30() { return &___U3CSkiddingU3Ek__BackingField_30; }
	inline void set_U3CSkiddingU3Ek__BackingField_30(bool value)
	{
		___U3CSkiddingU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CBrakeInputU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___U3CBrakeInputU3Ek__BackingField_31)); }
	inline float get_U3CBrakeInputU3Ek__BackingField_31() const { return ___U3CBrakeInputU3Ek__BackingField_31; }
	inline float* get_address_of_U3CBrakeInputU3Ek__BackingField_31() { return &___U3CBrakeInputU3Ek__BackingField_31; }
	inline void set_U3CBrakeInputU3Ek__BackingField_31(float value)
	{
		___U3CBrakeInputU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CRevsU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___U3CRevsU3Ek__BackingField_32)); }
	inline float get_U3CRevsU3Ek__BackingField_32() const { return ___U3CRevsU3Ek__BackingField_32; }
	inline float* get_address_of_U3CRevsU3Ek__BackingField_32() { return &___U3CRevsU3Ek__BackingField_32; }
	inline void set_U3CRevsU3Ek__BackingField_32(float value)
	{
		___U3CRevsU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CAccelInputU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(CarController_t1026402524, ___U3CAccelInputU3Ek__BackingField_33)); }
	inline float get_U3CAccelInputU3Ek__BackingField_33() const { return ___U3CAccelInputU3Ek__BackingField_33; }
	inline float* get_address_of_U3CAccelInputU3Ek__BackingField_33() { return &___U3CAccelInputU3Ek__BackingField_33; }
	inline void set_U3CAccelInputU3Ek__BackingField_33(float value)
	{
		___U3CAccelInputU3Ek__BackingField_33 = value;
	}
};

struct CarController_t1026402524_StaticFields
{
public:
	// System.Int32 UnityStandardAssets.Vehicles.Car.CarController::NoOfGears
	int32_t ___NoOfGears_16;

public:
	inline static int32_t get_offset_of_NoOfGears_16() { return static_cast<int32_t>(offsetof(CarController_t1026402524_StaticFields, ___NoOfGears_16)); }
	inline int32_t get_NoOfGears_16() const { return ___NoOfGears_16; }
	inline int32_t* get_address_of_NoOfGears_16() { return &___NoOfGears_16; }
	inline void set_NoOfGears_16(int32_t value)
	{
		___NoOfGears_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
