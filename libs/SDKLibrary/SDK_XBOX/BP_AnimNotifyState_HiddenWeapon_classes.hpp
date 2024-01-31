#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass BP_AnimNotifyState_HiddenWeapon.BP_AnimNotifyState_HiddenWeapon_C
class UBP_AnimNotifyState_HiddenWeapon_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UBP_AnimNotifyState_HiddenWeapon_C* GetDefaultObj();

	class FString GetNotifyName();
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, const class FString& CallFunc_GetObjectName_ReturnValue, class AActor* CallFunc_FindOwnerActor_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, const class FString& CallFunc_GetObjectName_ReturnValue, class AActor* CallFunc_FindOwnerActor_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


