#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB8 - 0xA0)
// BlueprintGeneratedClass BP_HumanCryComponent.BP_HumanCryComponent_C
class UBP_HumanCryComponent_C : public UPalCryComponentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                         CryingCharacter;                                   // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CurrentActionClass;                                // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_HumanCryComponent_C* GetDefaultObj();

	void PlayCry(class UAkAudioEvent* AkEvent, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue);
	void BP_HumanCryComponent_AutoGenFunc(class UPalActionBase* Action, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void Initialize(class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HumanCryComponent(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}


