#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x70 - 0x5D)
// BlueprintGeneratedClass BP_Status_Electrical.BP_Status_Electrical_C
class UBP_Status_Electrical_C : public UBP_Status_WithVisualEffect_C
{
public:
	uint8                                        Pad_3B5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          Timer;                                             // 0x68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_Electrical_C* GetDefaultObj();

	void PlayElecShockAction(const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnBeginStatus();
	void OnEndStatus();
	void OnBeginSomeStatus();
	void ExecuteUbergraph_BP_Status_Electrical(int32 EntryPoint, bool CallFunc_HasSelfPalElement_Has);
};

}


