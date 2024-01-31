#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x180 - 0x168)
// BlueprintGeneratedClass BP_ActionMining.BP_ActionMining_C
class UBP_ActionMining_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                ToolActor;                                         // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlagName;                                          // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionMining_C* GetDefaultObj();

	void OnEndAction();
	void OnBeginAction();
	void OnBeginAnimNotify(class UAnimMontage* Montage, class FName NotifyName);
	void ExecuteUbergraph_BP_ActionMining(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class FName CallFunc_DecreaseFullStomachRate_Work_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class ABP_MiningPickel_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class UAnimMontage* K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_NotifyName, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_ActionNotify_MiningImpactTiming_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_ActionNotify_MiningEndTiming_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_8, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, class AController* CallFunc_GetController_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_9, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_3, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_10, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_11, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_12, bool CallFunc_IsPalMonster_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_13, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_MiningPickel_C* CallFunc_FinishSpawningActor_ReturnValue_1);
};

}


