#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x148 - 0x138)
// BlueprintGeneratedClass BP_Action_CapturedCage.BP_Action_CapturedCage_C
class UBP_Action_CapturedCage_C : public UPalActionBase
{
public:
	uint8                                        Pad_4E71[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Action_CapturedCage_C* GetDefaultObj();

	void OnBeginAction();
	void ExecuteUbergraph_BP_Action_CapturedCage(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue);
};

}


