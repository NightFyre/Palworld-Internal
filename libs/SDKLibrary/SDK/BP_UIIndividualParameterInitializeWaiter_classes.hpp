#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// BlueprintGeneratedClass BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C
class UBP_UIIndividualParameterInitializeWaiter_C : public UObject
{
public:
	class APalCharacter*                         RegisteredCharacter;                               // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          CheckIndividualParameterTimerHandle;               // 0x40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_UIIndividualParameterInitializeWaiter_C* GetDefaultObj();

	void CheckIndividual(bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualCharacterParameterByActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnCompleteInitiaize(class APalCharacter* Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Register(class APalCharacter* TargetCharacter, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnComplete__DelegateSignature(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* SelfObject);
};

}


