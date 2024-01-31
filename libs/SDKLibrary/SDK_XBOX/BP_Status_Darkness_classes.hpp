#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x68 - 0x5D)
// BlueprintGeneratedClass BP_Status_Darkness.BP_Status_Darkness_C
class UBP_Status_Darkness_C : public UBP_Status_WithVisualEffect_C
{
public:
	uint8                                        Pad_3B93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x60(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Status_Darkness_C* GetDefaultObj();

	void DisableDebugSetting(bool* Disable, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnBeginStatus();
	void OnEndStatus();
	void ExecuteUbergraph_BP_Status_Darkness(int32 EntryPoint, bool CallFunc_DisableDebugSetting_Disable, bool CallFunc_HasSelfPalElement_Has, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_4, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_5, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue_4, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue_5, class UPalVisualEffectBase* CallFunc_AddVisualEffect_Local_ReturnValue, bool CallFunc_DisableDebugSetting_Disable_1);
};

}


