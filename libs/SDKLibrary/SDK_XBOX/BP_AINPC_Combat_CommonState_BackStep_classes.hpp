#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x40 - 0x31)
// BlueprintGeneratedClass BP_AINPC_Combat_CommonState_BackStep.BP_AINPC_Combat_CommonState_BackStep_C
class UBP_AINPC_Combat_CommonState_BackStep_C : public UBP_AINPC_CombatState_Base_C
{
public:
	uint8                                        Pad_15C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AINPC_Combat_CommonState_BackStep_C* GetDefaultObj();

	void StateEnter();
	void StateTick(float DeltaTime);
	void ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep(int32 EntryPoint, class APalCharacter* CallFunc_GetSelfActor_SelfActor, class APalCharacter* CallFunc_GetSelfActor_SelfActor_1, class AActor* CallFunc_GetTargetActor_TargetActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APalCharacter* CallFunc_GetSelfActor_SelfActor_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, class AActor* CallFunc_GetTargetActor_TargetActor_1, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class APalCharacter* CallFunc_GetSelfActor_SelfActor_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetSelfActor_SelfActor_4, class AActor* CallFunc_GetTargetActor_TargetActor_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_GetTargetActor_TargetActor_3);
};

}


