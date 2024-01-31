#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x58 - 0x31)
// BlueprintGeneratedClass BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C
class UBP_AINPC_CombatGunState_AimMove_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_1D85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               MoveDIrection;                                     // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AINPC_CombatGunState_AimMove_C* GetDefaultObj();

	void FindMoveGoal(bool* Success, struct FVector* GoalPos, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FVector& CallFunc_MoveDIrectionWorldSpace_Direction, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation, bool CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue);
	void MoveDIrectionWorldSpace(struct FVector* Direction, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue);
	void StateEnter();
	void StateExit();
	void StateTick(float DeltaTime);
	void ExecuteUbergraph_BP_AINPC_CombatGunState_AimMove(int32 EntryPoint, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, float K2Node_Event_DeltaTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, float CallFunc_Conv_IntToFloat_ReturnValue_1, class AActor* CallFunc_GetTargetActor_TargetActor, const struct FVector& CallFunc_MakeVector_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_2, bool CallFunc_FindMoveGoal_Success, const struct FVector& CallFunc_FindMoveGoal_GoalPos, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, class AActor* CallFunc_GetTargetActor_TargetActor_1, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor_1, class APalCharacter* CallFunc_GetSelfActor_SelfActor_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast);
};

}


