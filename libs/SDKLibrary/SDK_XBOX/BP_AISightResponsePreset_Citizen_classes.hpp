#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE0 - 0xD8)
// BlueprintGeneratedClass BP_AISightResponsePreset_Citizen.BP_AISightResponsePreset_Citizen_C
class UBP_AISightResponsePreset_Citizen_C : public UPalAISightResponsePreset
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AISightResponsePreset_Citizen_C* GetDefaultObj();

	void BlueprintDelegateSetup();
	void _________0(class APalCharacter* SelfCharacter, class APalCharacter* FoundCharacter);
	void ExecuteUbergraph_BP_AISightResponsePreset_Citizen(int32 EntryPoint, class APalCharacter* K2Node_CustomEvent_SelfCharacter, class APalCharacter* K2Node_CustomEvent_FoundCharacter, const class FString& CallFunc_GetDisplayName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
};

}


