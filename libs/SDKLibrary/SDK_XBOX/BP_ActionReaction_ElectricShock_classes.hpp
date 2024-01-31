#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x1B8 - 0x138)
// BlueprintGeneratedClass BP_ActionReaction_ElectricShock.BP_ActionReaction_ElectricShock_C
class UBP_ActionReaction_ElectricShock_C : public UPalActionBase
{
public:
	uint8                                        Pad_3A98[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       SelfTimer;                                         // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UCurveFloat*                           Curve_Right;                                       // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultMeshPosZ;                                   // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         VibEnd;                                            // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         ExistFacialNotify;                                 // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_3A99[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPalSizeType, double>        Const_VibGainMap;                                  // 0x168(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_ActionReaction_ElectricShock_C* GetDefaultObj();

	void ResetMeshLocation(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void ChangeFacial(enum class EPalFacialEyeType Eye, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void FindMontage(class UAnimMontage** NewParam, enum class EPalActionType Temp_byte_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetDisable(bool Disable, class UPalShooterComponent* Shooter, double Rate, class UPalCharacterMovementComponent* Movement, class FName FlagName, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue_2, float CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast, float CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast);
	void UpdateMeshLocation(double Gain_Right, double Timer_Right, double CallFunc_Cos_ReturnValue, double CallFunc_Sin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_ActionReaction_ElectricShock(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class UAnimMontage* CallFunc_FindMontage_NewParam, class UAnimMontage* CallFunc_FindMontage_NewParam_1, float CallFunc_PlayAnimMontage_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UAnimMontage* CallFunc_FindMontage_NewParam_2, bool CallFunc_IsValid_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UAnimMontage* CallFunc_FindMontage_NewParam_3, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ExistFacialNotifyInMontage_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
};

}


