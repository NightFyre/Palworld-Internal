#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1648 - 0x1648)
// BlueprintGeneratedClass BP_PalGameSetting.BP_PalGameSetting_C
class UBP_PalGameSetting_C : public UPalGameSetting
{
public:

	static class UClass* StaticClass();
	static class UBP_PalGameSetting_C* GetDefaultObj();

	float GetWeakScale(int32 WeakCount, bool K2Node_SwitchInteger_CmpSuccess);
	float CalcCaptureRate(float CaptureItemLevel, class UPalIndividualCharacterHandle* TargetHandle, class UPalIndividualCharacterHandle* ThrowCharacterHandle, class APalCharacter* TempTargetPal, double AdditionalCaptureLevel, double Value_P, double Value_A, double NormalizedLevel, float TargetHPPercent, int32 TargetLevel, int32 Value_s, double Value_t, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCaptureRate_ByCharacterID_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, float CallFunc_GetCaptureRateByStatus_ForGameSettingBP_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class FName CallFunc_StatusPointName_AddCaptureLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_GetStatusPoint_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_FClamp_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, float K2Node_FunctionResult_ReturnValue_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2);
	float GetEnemyMarkScale(struct FVector& TargetPosition, struct FVector& SelfPosition, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}


