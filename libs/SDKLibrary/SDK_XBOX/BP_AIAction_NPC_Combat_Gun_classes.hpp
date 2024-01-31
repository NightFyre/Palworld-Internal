#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x87 (0x208 - 0x181)
// BlueprintGeneratedClass BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C
class UBP_AIAction_NPC_Combat_Gun_C : public UBP_AIAction_NPC_CombatBase_C
{
public:
	uint8                                        Pad_3FA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<enum class EPal_NPC_CombatGunState, class UClass*> StateMap;                                          // 0x190(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EPal_NPC_CombatGunState           CurrentState;                                      // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStopTick;                                        // 0x1E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FA2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Timer;                                             // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RandomMoveTime;                                    // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SideMoveTime;                                      // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_NearOffset;                                  // 0x200(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NPC_Combat_Gun_C* GetDefaultObj();

	void IsInMeleeAttackRange(bool* InRange, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandleRef_WeaponHandle, bool CallFunc_GetIsMeleeAttackWithGun_ReturnValue, bool CallFunc_InConeShapAndDitance_Actor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void AddTimer(double* CurrentTime, double CallFunc_Add_DoubleDouble_ReturnValue);
	void IsNear_FarRange(double Offset, bool* Near, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, bool CallFunc_IsNear_FarRange_ReturnValue, float CallFunc_IsNear_FarRange_FarRangePlusOffset_ImplicitCast);
	void IsNear_NearRange(double Offset, bool* Near, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, bool CallFunc_IsNear_NearRange_ReturnValue, float CallFunc_IsNear_NearRange_NearRangePlusOffset_ImplicitCast);
	void Change_NextState(enum class EPal_NPC_CombatGunState Next, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Add_Gun_Combat_State(enum class EPal_NPC_CombatGunState GunState, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun(int32 EntryPoint, enum class EPal_NPC_CombatGunState Temp_byte_Variable, class APawn* K2Node_Event_ControlledPawn_4, float K2Node_Event_DeltaSeconds, bool CallFunc_TickFinishCheck_ActionFinish, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsNear_FarRange_Near, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, bool CallFunc_IsMagazineEmpty_ReturnValue, bool CallFunc_ActionIsEmpty_ReturnValue, enum class EPal_NPC_CombatGunState Temp_byte_Variable_1, double CallFunc_AddTimer_CurrentTime, double CallFunc_AddTimer_CurrentTime_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, bool CallFunc_LineTraceTarget_HitToTarget, bool CallFunc_LineTraceTarget_HitToTarget_1, double CallFunc_AddTimer_CurrentTime_2, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, bool CallFunc_Map_Remove_ReturnValue, TSubclassOf<class UPalStateMachineStateBase> CallFunc_GetFireStateClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_AINPC_Combat_State_Base, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandleRef_WeaponHandle, enum class EPal_NPC_CombatGunState Temp_byte_Variable_2, float CallFunc_GetRandomMoveTimeMin_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandleRef_WeaponHandle_1, bool CallFunc_GetUseSideDashMovement_ReturnValue, bool CallFunc_LineTraceTarget_HitToTarget_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsNear_FarRange_Near_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsNear_FarRange_Near_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsEndCurrentState_IsEnd, bool CallFunc_IsEndCurrentState_IsEnd_1, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, bool CallFunc_ActionIsEmpty_ReturnValue_1, bool CallFunc_IsInMeleeAttackRange_InRange, bool CallFunc_BooleanAND_ReturnValue_3, float CallFunc_Tick_DeltaTime_ImplicitCast, double CallFunc_RandomFloatInRange_Min_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
};

}


