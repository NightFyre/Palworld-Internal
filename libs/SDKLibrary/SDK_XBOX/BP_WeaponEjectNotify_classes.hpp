#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass BP_WeaponEjectNotify.BP_WeaponEjectNotify_C
class UBP_WeaponEjectNotify_C : public UAnimNotify
{
public:
	class UClass*                                EjectCasing;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_WeaponEjectNotify_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APalWeaponBase* K2Node_DynamicCast_AsPal_Weapon_Base, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
};

}


