#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x70 - 0x5D)
// BlueprintGeneratedClass BP_Status_Freeze.BP_Status_Freeze_C
class UBP_Status_Freeze_C : public UBP_Status_WithVisualEffect_C
{
public:
	uint8                                        Pad_3B47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalAIActionBase*                      AIActionFreeze;                                    // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_Freeze_C* GetDefaultObj();

	void SetFlag(bool IsFreeze, class UPalShooterComponent* Shooter, class UPalCharacterMovementComponent* Movement, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_2);
	void OnBeginStatus();
	void OnEndStatus();
	void ExecuteUbergraph_BP_Status_Freeze(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasSelfPalElement_Has, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, bool CallFunc_HasSelfPalElement_Has_1, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class UPalBodyTemperatureComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalBodyTemperatureComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


