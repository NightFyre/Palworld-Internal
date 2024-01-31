#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x563 - 0x538)
// BlueprintGeneratedClass BP_ShotgunBase.BP_ShotgunBase_C
class ABP_ShotgunBase_C : public APalWeaponBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Weapon;                                            // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       ShotInterval;                                      // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ScatteredAngle;                                    // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanShootFlag;                                      // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DirectionForReticle;                               // 0x561(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIntervalTimeEnded;                               // 0x562(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ShotgunBase_C* GetDefaultObj();

	float GetDefaultBlurAngle();
	void PlayFireSound(const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID);
	float CalcRange(class UClass* CallFunc_GetBulletClass_NewParam, class UProjectileMovementComponent* CallFunc_GetBulletProjectileComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	float CalcAccuracy(double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	float CalcDPS(TArray<struct FTransform>& CallFunc_GetShootTransformList_ShootTransformList, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, int32 CallFunc_GetWeaponBaseDamage_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void OnshotInternal(bool* IsShoted, int32 Temp_int_Array_Index_Variable, float CallFunc_GetShooterComponentBlurRate_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetBlurModifierValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetDefaultBlurAngle_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBP_HitTargetHolder_C* CallFunc_SpawnObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UClass* CallFunc_GetBulletClass_NewParam, float CallFunc_GetBlurModifierValue_ReturnValue_1, class UPalBulletCreator* CallFunc_GetBulletCreator_ReturnValue, bool CallFunc_DecrementBullet_ReturnValue, bool CallFunc_CanShoot_Can, int32 CallFunc_GetWeaponDamage_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, bool CallFunc_IsEmptyMagazine_ReturnValue, TArray<struct FTransform>& CallFunc_GetShootTransformList_ShootTransformList, const struct FTransform& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APalBullet* CallFunc_CreateBullet_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_ShotgunBullet_C* K2Node_DynamicCast_AsBP_Shotgun_Bullet, bool K2Node_DynamicCast_bSuccess, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1);
	void GetEjectionPort(struct FTransform* EjectionTransform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	struct FTransform GetLeftHandTransform(const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void GetBulletClass(class UClass** NewParam);
	void GetTargetPosition(struct FVector* TargetLocation, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue);
	void GetShootTransformList(double BaseAngle, double BlurAngle, TArray<struct FTransform>* ShootTransformList, const struct FTransform& BaseTransform, const TArray<struct FTransform>& TransformList, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_GetMuzzleTransform_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetTargetPosition_TargetLocation, const struct FTransform& CallFunc_GetMuzzleTransform_Transform_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_GetRandomFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_GetRandomFloat_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, int32 Temp_int_Variable_1, double CallFunc_Multiply_IntFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_GetRandomFloat_Min_ImplicitCast, float CallFunc_GetRandomFloat_Max_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_GetRandomFloat_Min_ImplicitCast_1, float CallFunc_GetRandomFloat_Max_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	bool IsUseLeftHandAttach();
	class FName GetEquipSocketName();
	void GetMuzzleTransform(struct FTransform* Transform, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void OnShot(bool CallFunc_OnshotInternal_IsShoted);
	void CanShoot(bool* Can, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void OnPullTrigger();
	void OnReleaseTrigger();
	void CountShotInterval();
	void ShootIntervalEvent();
	void OnAttachWeapon(class AActor* AttachActor);
	void StopReloadWhenRoll(class UPalActionBase* Action);
	void OnDetachWeapon(class AActor* DetachActor);
	void ExecuteUbergraph_BP_ShotgunBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_CanShoot_Can, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* K2Node_Event_attachActor, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* K2Node_CustomEvent_Action, class UBP_ActionStepBase_C* K2Node_DynamicCast_AsBP_Action_Step_Base, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_detachActor, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


