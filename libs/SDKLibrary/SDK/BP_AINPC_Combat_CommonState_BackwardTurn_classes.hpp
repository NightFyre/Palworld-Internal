#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x50 - 0x31)
// BlueprintGeneratedClass BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C
class UBP_AINPC_Combat_CommonState_BackwardTurn_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_3F7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       RightLeftMove;                                     // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlagName;                                          // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AINPC_Combat_CommonState_BackwardTurn_C* GetDefaultObj();

	void StateTick(float DeltaTime);
	void StateEnter();
	void StateExit();
	void ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn(int32 EntryPoint, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, class AController* CallFunc_GetController_ReturnValue, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetSelfActor_SelfActor, class AActor* CallFunc_GetTargetActor_TargetActor, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalShooterComponent* CallFunc_GetShooterComponent_ShooterComp, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UPalShooterComponent* CallFunc_GetShooterComponent_ShooterComp_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor_2, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1);
};

}


