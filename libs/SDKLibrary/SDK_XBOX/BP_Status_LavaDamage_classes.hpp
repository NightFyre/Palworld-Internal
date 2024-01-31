#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x70 - 0x48)
// BlueprintGeneratedClass BP_Status_LavaDamage.BP_Status_LavaDamage_C
class UBP_Status_LavaDamage_C : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          Timer;                                             // 0x50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DurationTimer_BP;                                  // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KeyName;                                           // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DamageRate;                                        // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_LavaDamage_C* GetDefaultObj();

	void LavaDamage(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetLavaDamage_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsHittingLava_ReturnValue);
	int32 GetLavaDamage(class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	void HasSelfPalElement(enum class EPalElementType MyElement, bool* Has, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasElementType_ReturnValue);
	void OnBeginStatus();
	void OnEndStatus();
	void TickStatus(float DeltaTime);
	void ExecuteUbergraph_BP_Status_LavaDamage(int32 EntryPoint, float K2Node_Event_DeltaTime, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsHittingLava_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalStatusComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_HasSelfPalElement_Has, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_DurationTimer_BP_ImplicitCast, double K2Node_VariableSet_DurationTimer_BP_ImplicitCast_1);
};

}


