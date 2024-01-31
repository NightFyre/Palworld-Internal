#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x61 - 0x48)
// BlueprintGeneratedClass BP_Status_FallDamage.BP_Status_FallDamage_C
class UBP_Status_FallDamage_C : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Const_DamageStartHeight;                           // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_DeathHeight;                                 // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGlider;                                          // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_FallDamage_C* GetDefaultObj();

	void GetLastJumpedZ(double* Z, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetLastJumpedLocation_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1);
	void LandDamage(double Diff, double CallFunc_GetLastJumpedZ_Z, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FFixedPoint64& CallFunc_GetMaxHP_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FFixedPoint64& CallFunc_Convert_FloatToFixedPoint64_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FFixedPoint64& CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue, int32 CallFunc_Convert_FixedPoint64ToInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2, float CallFunc_Convert_FloatToFixedPoint64_value_ImplicitCast);
	void ResetFallStartPos(bool OnLand, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsNoFallDamageLastJumpedLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnBeginStatus();
	void OnLand(class UPalCharacterMovementComponent* Component, struct FHitResult& Hit);
	void OnModeChange(class UPalCharacterMovementComponent* Component, enum class EMovementMode PrevMode, enum class EMovementMode NewMode, enum class EPalCharacterMovementCustomMode PrevCustomMode, enum class EPalCharacterMovementCustomMode NewCustomMode);
	void OnEndStatus();
	void TickStatus(float DeltaTime);
	void SetUp_FallDamage(class APalCharacter* InCharacter);
	void ExecuteUbergraph_BP_Status_FallDamage(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsTowerBossPal_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalCharacterMovementComponent* K2Node_CustomEvent_component_1, const struct FHitResult& K2Node_CustomEvent_Hit, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalCharacterMovementComponent* K2Node_CustomEvent_component, enum class EMovementMode K2Node_CustomEvent_prevMode, enum class EMovementMode K2Node_CustomEvent_newMode, enum class EPalCharacterMovementCustomMode K2Node_CustomEvent_prevCustomMode, enum class EPalCharacterMovementCustomMode K2Node_CustomEvent_newCustomMode, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EPalCharacterMovementCustomMode CallFunc_GetCustomMovementMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_4, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_3, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_5, float K2Node_Event_DeltaTime, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_IsTowerBossPal_ReturnValue_1, class APalCharacter* K2Node_CustomEvent_InCharacter);
};

}


