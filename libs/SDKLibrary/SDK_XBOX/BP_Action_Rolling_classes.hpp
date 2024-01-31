#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x248 - 0x228)
// BlueprintGeneratedClass BP_Action_Rolling.BP_Action_Rolling_C
class UBP_Action_Rolling_C : public UBP_ActionStepBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               TempVelocity;                                      // 0x230(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Rolling_C* GetDefaultObj();

	void OnBeginAction();
	void EndStep();
	void OnBreakAction();
	void ExecuteUbergraph_BP_Action_Rolling(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}


