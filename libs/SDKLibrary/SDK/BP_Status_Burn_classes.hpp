#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x88 - 0x5D)
// BlueprintGeneratedClass BP_Status_Burn.BP_Status_Burn_C
class UBP_Status_Burn_C : public UBP_Status_WithVisualEffect_C
{
public:
	uint8                                        Pad_3BA3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          Timer;                                             // 0x68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DurationTimer_BP;                                  // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KeyName;                                           // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Rate;                                              // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_Burn_C* GetDefaultObj();

	void OnBeginStatus();
	void OnEndStatus();
	void _________SlipDamage();
	void _________2();
	void TickStatus(float DeltaTime);
	void ExecuteUbergraph_BP_Status_Burn(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasSelfPalElement_Has, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_2, float K2Node_Event_DeltaTime, class APalCharacter* K2Node_DynamicCast_AsPal_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_3, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsHittingLava_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue_4, class UPalBodyTemperatureComponent* CallFunc_GetComponentByClass_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_2, class UPalBodyTemperatureComponent* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_7, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_6, class AActor* CallFunc_GetOwner_ReturnValue_8, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_7, bool CallFunc_IsBossPal_Database_ExceptRare_ReturnValue, bool CallFunc_IsTowerBossPal_ReturnValue, bool CallFunc_HasSelfPalElement_Has_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_HasSelfPalElement_Has_2, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_DurationTimer_BP_ImplicitCast, double K2Node_VariableSet_DurationTimer_BP_ImplicitCast_1);
};

}


