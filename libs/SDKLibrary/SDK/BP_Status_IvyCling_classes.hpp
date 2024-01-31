#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x68 - 0x5D)
// BlueprintGeneratedClass BP_Status_IvyCling.BP_Status_IvyCling_C
class UBP_Status_IvyCling_C : public UBP_Status_WithVisualEffect_C
{
public:
	uint8                                        Pad_3B3A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x60(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Status_IvyCling_C* GetDefaultObj();

	void OnBeginStatus();
	void OnEndStatus();
	void ExecuteUbergraph_BP_Status_IvyCling(int32 EntryPoint, bool CallFunc_HasSelfPalElement_Has, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue);
};

}


