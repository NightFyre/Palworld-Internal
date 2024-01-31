#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x168 - 0x160)
// BlueprintGeneratedClass BP_PalActionTransportItem.BP_PalActionTransportItem_C
class UBP_PalActionTransportItem_C : public UPalActionTransportItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x160(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_PalActionTransportItem_C* GetDefaultObj();

	void FindMontage(class UAnimMontage** Montage, bool* Exist, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_FindMontange_bExist, class UAnimMontage* CallFunc_FindMontange_ReturnValue);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_PalActionTransportItem(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_ReadBlackboard_StaticItemId, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue);
};

}


