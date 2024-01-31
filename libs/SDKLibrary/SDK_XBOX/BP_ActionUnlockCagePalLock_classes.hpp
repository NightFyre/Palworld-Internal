#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x178 - 0x168)
// BlueprintGeneratedClass BP_ActionUnlockCagePalLock.BP_ActionUnlockCagePalLock_C
class UBP_ActionUnlockCagePalLock_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  FlagName;                                          // 0x170(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionUnlockCagePalLock_C* GetDefaultObj();

	void RotateToLockModel(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void OnEndAction();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionUnlockCagePalLock(int32 EntryPoint, FDelegateProperty_ Temp_delegate_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue);
};

}


