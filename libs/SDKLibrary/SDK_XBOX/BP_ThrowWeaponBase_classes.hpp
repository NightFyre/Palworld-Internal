#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x558 - 0x538)
// BlueprintGeneratedClass BP_ThrowWeaponBase.BP_ThrowWeaponBase_C
class ABP_ThrowWeaponBase_C : public APalWeaponBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ThrowEventDispatcher;                              // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_ThrowWeaponBase_C* GetDefaultObj();

	bool IsEnableAutoAim();
	void GetBulletShootRotation(struct FRotator* BulletRotate, const struct FVector& CallFunc_GetTargetLocation_Location, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue);
	void ChangeRideThrowMontage(class UBP_ShooterAnime_ThrowBase_C* ShooterAnime, class UAnimMontage* NextMontage, const struct FVector& CameraForward, const struct FVector& PlayerForward, class APalPlayerCharacter* Player, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_GetCameraRotator_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EPalRidePositionType CallFunc_GetCurrentRidePositionType_ReturnValue, bool CallFunc_IsRiding_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalShooterAnimeAssetBase* CallFunc_GetThrowAnimAsset_ReturnValue, class UBP_ShooterAnime_ThrowBase_C* K2Node_DynamicCast_AsBP_Shooter_Anime_Throw_Base, bool K2Node_DynamicCast_bSuccess_1);
	void GetRideMontageByDirection(bool* Suceess, class UAnimMontage** NextAnim);
	void GetTargetLocation(struct FVector* Location, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetThrowObjectClass(class UClass** ThrowObject);
	void OnThrow(float CallFunc_GetSneakAttackRate_ReturnValue, int32 CallFunc_GetWeaponDamage_ReturnValue, const struct FRotator& CallFunc_GetBulletShootRotation_BulletRotate, bool CallFunc_DecrementBullet_ReturnValue, class UClass* CallFunc_GetThrowObjectClass_ThrowObject, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class APalBullet* K2Node_DynamicCast_AsPal_Bullet, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void OnWeaponNotify(enum class EWeaponNotifyType Type);
	void OnPullTrigger();
	void ExecuteUbergraph_BP_ThrowWeaponBase(int32 EntryPoint, enum class EWeaponNotifyType K2Node_Event_type, bool K2Node_SwitchEnum_CmpSuccess);
	void ThrowEventDispatcher__DelegateSignature(class AActor* Bullet);
};

}


