#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x60 - 0x48)
// BlueprintGeneratedClass BP_Status_Drown.BP_Status_Drown_C
class UBP_Status_Drown_C : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsDrowning;                                        // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer;                                             // 0x58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_Drown_C* GetDefaultObj();

	void GetSlipDamage(int32* Damage, class UPalCharacterParameterComponent* Parameter, const struct FFixedPoint64& CallFunc_GetMaxHP_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Max_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	void GetOwnerHP(int64* OwnerHP, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, bool CallFunc_IsValid_ReturnValue, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue);
	void IsDrownInWater(bool* IsDrawningInWater, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FFixedPoint64& CallFunc_GetSP_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FixedPoint64Integer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsSwimming_ReturnValue);
	void IsDrown(bool* IsDrawning, bool CallFunc_IsDrownInWater_IsDrawningInWater);
	void _________SlipDamage();
	void OnBeginStatus();
	void OnEndStatus();
	void ExecuteUbergraph_BP_Status_Drown(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int64 CallFunc_GetOwnerHP_OwnerHP, int32 CallFunc_GetSlipDamage_Damage, bool CallFunc_LessEqual_Int64Int64_ReturnValue);
};

}


