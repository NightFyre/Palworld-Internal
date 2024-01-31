#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x180 - 0x168)
// BlueprintGeneratedClass BP_ActionArchitecture.BP_ActionArchitecture_C
class UBP_ActionArchitecture_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                HammerActor;                                       // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlagName;                                          // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionArchitecture_C* GetDefaultObj();

	void OnEndAction();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionArchitecture(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class FName CallFunc_DecreaseFullStomachRate_Work_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class ABP_ArchitectureHammer_C* CallFunc_FinishSpawningActor_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_2, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class AController* CallFunc_GetController_ReturnValue_1, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


