#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x4C - 0x38)
// BlueprintGeneratedClass BP_PalCryNotify.BP_PalCryNotify_C
class UBP_PalCryNotify_C : public UAnimNotify
{
public:
	TArray<class FName>                          Emo_State;                                         // 0x38(0x10)(Edit, BlueprintVisible)
	int32                                        Probability;                                       // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PalCryNotify_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, int32 CallFunc_RandomInteger_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UBP_PalCryComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
};

}


