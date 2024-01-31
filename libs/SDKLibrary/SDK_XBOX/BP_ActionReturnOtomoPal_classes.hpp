#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x180 - 0x138)
// BlueprintGeneratedClass BP_ActionReturnOtomoPal.BP_ActionReturnOtomoPal_C
class UBP_ActionReturnOtomoPal_C : public UPalActionBase
{
public:
	uint8                                        Pad_3BFF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Const_PalDeactiveTime;                             // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_PlayerMotionTime;                            // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ToOtomoDirection;                                  // 0x158(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       Const_WalkSpeedRate;                               // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ReturnOtomoSphereComponent_C*      BallComponent;                                     // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionReturnOtomoPal_C* GetDefaultObj();

	void DeleteBallModel(bool CallFunc_IsValid_ReturnValue);
	void AttachBallModel(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UBP_ReturnOtomoSphereComponent_C* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void SetFlags(bool Disable, double Speed, class UPalShooterComponent* Shooter, class UPalCharacterMovementComponent* Movement, class FName FlagName, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast);
	void SetupToOtomoDirection(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void DeactivateOtomo(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_ActionReturnOtomoPal(int32 EntryPoint, class AActor* CallFunc_GetActionTarget_ReturnValue, enum class EPalActionType Temp_byte_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, float K2Node_Event_DeltaTime, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, enum class EPalActionType Temp_byte_Variable_1, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_PlayAnimMontage_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1);
};

}


