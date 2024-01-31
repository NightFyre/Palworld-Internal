#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x111 (0x1B1 - 0xA0)
// BlueprintGeneratedClass BP_CoopParam_Shield.BP_CoopParam_Shield_C
class UBP_CoopParam_Shield_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                         ProtectTarget;                                     // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  AttachSocketName;                                  // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_544B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StandAttachTransform;                              // 0xC0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          StandMontage;                                      // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_544C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReadyAttachTransform;                              // 0x130(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ReadyMontage;                                      // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AttachStartMontage;                                // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          DetachStartMontage;                                // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  ShieldCollisionComponentTag;                       // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGrabed;                                          // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CoopParam_Shield_C* GetDefaultObj();

	void OnCompleteCharacterInitialize(class APalCharacter* InCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ChangeFacial(bool IsCoopActionFace, enum class EPalFacialEyeType NextFacial, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue);
	void LaunchSheep(double SpeedRate, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void StopShieldAnimation(class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess);
	void PlayShieldAnimation(class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayAnimMontage_ReturnValue);
	void ChangeAnimationByWeaponState(bool IsAim, bool IsShoot, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue_1);
	void OnChangeWeaponState(bool IsAim, bool IsShooting);
	void UnbindFromShooterDelegate(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BindToShooterDelegate(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetOwnerCollision(bool IsEnable, class APalCharacter* OwnerCharacter, bool Temp_bool_Variable, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ECollisionEnabled Temp_byte_Variable_2, enum class ECollisionEnabled Temp_byte_Variable_3, int32 Temp_int_Array_Index_Variable, enum class ECollisionEnabled Temp_byte_Variable_4, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, enum class ECollisionEnabled Temp_byte_Variable_5, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class UPrimitiveComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, enum class ECollisionEnabled K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, enum class ECollisionEnabled K2Node_Select_Default_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component_1, bool K2Node_DynamicCast_bSuccess_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, enum class ECollisionEnabled K2Node_Select_Default_2, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_2);
	void DoDetach(bool IsThrowShield, class AActor* CallFunc_GetOwner_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1);
	void DoAttach(class APalCharacter* AttachTarget, class AActor* CallFunc_GetOwner_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1);
	void OnNotifyEnd_E5EB2B1E4F79E35A9836F8942DE27180(class FName NotifyName);
	void OnNotifyBegin_E5EB2B1E4F79E35A9836F8942DE27180(class FName NotifyName);
	void OnInterrupted_E5EB2B1E4F79E35A9836F8942DE27180(class FName NotifyName);
	void OnBlendOut_E5EB2B1E4F79E35A9836F8942DE27180(class FName NotifyName);
	void OnCompleted_E5EB2B1E4F79E35A9836F8942DE27180(class FName NotifyName);
	void OnNotifyEnd_8FC8CA8643E4463FC59843B864E9D2AD(class FName NotifyName);
	void OnNotifyBegin_8FC8CA8643E4463FC59843B864E9D2AD(class FName NotifyName);
	void OnInterrupted_8FC8CA8643E4463FC59843B864E9D2AD(class FName NotifyName);
	void OnBlendOut_8FC8CA8643E4463FC59843B864E9D2AD(class FName NotifyName);
	void OnCompleted_8FC8CA8643E4463FC59843B864E9D2AD(class FName NotifyName);
	void PlayAttachStartAnimation();
	void DelayEnableCollision();
	void DetachProcess();
	void ReceiveTick(float DeltaSeconds);
	void DoAttach_ToAll(class APalCharacter* TargetPlayer);
	void ReceiveBeginPlay();
	void DoDetach_ToAll(bool IsThrow);
	void ExecuteUbergraph_BP_CoopParam_Shield(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_8, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsShooting_ReturnValue, bool CallFunc_IsAiming_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_GetOwner_ReturnValue_4, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsAiming_ReturnValue_1, bool CallFunc_IsShooting_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_9, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue_1, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_1, bool CallFunc_K2_SetActorTransform_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_4, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsAiming_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsShooting_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_RInterpTo_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_3, const struct FVector& CallFunc_VInterpTo_ReturnValue, bool CallFunc_IsGliding_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, class APalCharacter* K2Node_CustomEvent_TargetPlayer, bool K2Node_CustomEvent_IsThrow, class AActor* CallFunc_GetOwner_ReturnValue_6, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue);
};

}


