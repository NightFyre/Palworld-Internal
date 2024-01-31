#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x151 - 0x138)
// BlueprintGeneratedClass BP_ActionCutPalMeat_Player.BP_ActionCutPalMeat_Player_C
class UBP_ActionCutPalMeat_Player_C : public UPalActionBase
{
public:
	uint8                                        Pad_3C49[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                         TargetCharacter;                                   // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDeletePal;                                       // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionCutPalMeat_Player_C* GetDefaultObj();

	void SetDisableFlag(bool Disable, class FName FlagName, double SpeedRate, class UPalCharacterMovementComponent* PlayerMovement, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast, float CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast);
	void ChangePalFacial(enum class EPalFacialEyeType Eye, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue);
	void PlayDamageMotion(enum class EPalActionType Temp_byte_Variable, class AActor* CallFunc_GetActionTarget_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue);
	void FixCutTarget(double PalHalfHeight, double PalRadius, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_RotatorFromAxisAndAngle_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_2, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, double K2Node_VariableSet_PalHalfHeight_ImplicitCast, double K2Node_VariableSet_PalRadius_ImplicitCast);
	void OnNotifyEnd_5AC216CE4E407711113F20B709C84DB5(class FName NotifyName);
	void OnNotifyBegin_5AC216CE4E407711113F20B709C84DB5(class FName NotifyName);
	void OnInterrupted_5AC216CE4E407711113F20B709C84DB5(class FName NotifyName);
	void OnBlendOut_5AC216CE4E407711113F20B709C84DB5(class FName NotifyName);
	void OnCompleted_5AC216CE4E407711113F20B709C84DB5(class FName NotifyName);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionCutPalMeat_Player(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, enum class EPalActionType Temp_byte_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class EPalActionType Temp_byte_Variable_1, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalVisualEffectBase* CallFunc_AddVisualEffect_Local_ReturnValue, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue_4, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_5, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_IsServer_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalFlyMeshHeightCtrlComponent* CallFunc_GetComponentByClass_ReturnValue_6, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


