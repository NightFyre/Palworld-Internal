#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x5C - 0x48)
// BlueprintGeneratedClass BP_Status_UNKOTimer.BP_Status_UNKOTimer_C
class UBP_Status_UNKOTimer_C : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          Timer;                                             // 0x50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        OneDay_Second;                                     // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_UNKOTimer_C* GetDefaultObj();

	void OnBeginStatus();
	void OnEndStatus();
	void _________0();
	void ExecuteUbergraph_BP_Status_UNKOTimer(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelayVariance_ImplicitCast);
};

}


