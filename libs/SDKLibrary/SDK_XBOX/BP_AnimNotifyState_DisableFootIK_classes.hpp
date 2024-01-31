#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass BP_AnimNotifyState_DisableFootIK.BP_AnimNotifyState_DisableFootIK_C
class UBP_AnimNotifyState_DisableFootIK_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UBP_AnimNotifyState_DisableFootIK_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_FindOwnerActor_ReturnValue, class UPalFootIKComponent* CallFunc_GetComponentByClass_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_FindOwnerActor_ReturnValue, class UPalFootIKComponent* CallFunc_GetComponentByClass_ReturnValue);
	class FString GetNotifyName();
};

}


