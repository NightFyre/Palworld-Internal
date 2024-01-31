#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x91 - 0x31)
// BlueprintGeneratedClass BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C
class UBP_AIAction_CombatGunState_SideDashMove_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_3F4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPalCharacterMovementCustomMode   Sprint;                                            // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GoalPos;                                           // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Timer;                                             // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SelfPos;                                           // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PathFindSuccess;                                   // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_CombatGunState_SideDashMove_C* GetDefaultObj();

	void FindMoveGoal(struct FVector* Goal, bool* Success, const TArray<struct FVector>& GoalAbleList, double Distance_Right, double Distance_Forward, const struct FVector& SelfForward, const struct FVector& SelfRight, const struct FVector& SelfToTargetNormal, const TArray<struct FVector>& GoalList, const struct FVector& SelfToTarget, double ToTargetDistance, double CallFunc_VSizeXY_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector& CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation, bool CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue);
	void StateEnter();
	void StateExit();
	void StateTick(float DeltaTime);
	void ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove(int32 EntryPoint, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement_1, const struct FVector& CallFunc_FindMoveGoal_Goal, bool CallFunc_FindMoveGoal_Success, float K2Node_Event_DeltaTime, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_6, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_7, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_8, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_2, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_9, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_10, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_3, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_11, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_4, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


