#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThrowWeaponBase.BP_ThrowWeaponBase_C
// (Actor)

class UClass* ABP_ThrowWeaponBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThrowWeaponBase_C");

	return Clss;
}


// BP_ThrowWeaponBase_C BP_ThrowWeaponBase.Default__BP_ThrowWeaponBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThrowWeaponBase_C* ABP_ThrowWeaponBase_C::GetDefaultObj()
{
	static class ABP_ThrowWeaponBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThrowWeaponBase_C*>(ABP_ThrowWeaponBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.IsEnableAutoAim
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ThrowWeaponBase_C::IsEnableAutoAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "IsEnableAutoAim");

	Params::ABP_ThrowWeaponBase_C_IsEnableAutoAim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.GetBulletShootRotation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    BulletRotate                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetTargetLocation_Location                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ThrowWeaponBase_C::GetBulletShootRotation(struct FRotator* BulletRotate, const struct FVector& CallFunc_GetTargetLocation_Location, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "GetBulletShootRotation");

	Params::ABP_ThrowWeaponBase_C_GetBulletShootRotation_Params Parms{};

	Parms.CallFunc_GetTargetLocation_Location = CallFunc_GetTargetLocation_Location;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BulletRotate != nullptr)
		*BulletRotate = std::move(Parms.BulletRotate);

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.ChangeRideThrowMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ShooterAnime_ThrowBase_C*ShooterAnime                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                NextMontage                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CameraForward                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PlayerForward                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         Player                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotator_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalRiderComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalRidePositionType    CallFunc_GetCurrentRidePositionType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRiding_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalShooterAnimeAssetBase*   CallFunc_GetThrowAnimAsset_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ShooterAnime_ThrowBase_C*K2Node_DynamicCast_AsBP_Shooter_Anime_Throw_Base                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeaponBase_C::ChangeRideThrowMontage(class UBP_ShooterAnime_ThrowBase_C* ShooterAnime, class UAnimMontage* NextMontage, const struct FVector& CameraForward, const struct FVector& PlayerForward, class APalPlayerCharacter* Player, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_GetCameraRotator_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EPalRidePositionType CallFunc_GetCurrentRidePositionType_ReturnValue, bool CallFunc_IsRiding_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalShooterAnimeAssetBase* CallFunc_GetThrowAnimAsset_ReturnValue, class UBP_ShooterAnime_ThrowBase_C* K2Node_DynamicCast_AsBP_Shooter_Anime_Throw_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "ChangeRideThrowMontage");

	Params::ABP_ThrowWeaponBase_C_ChangeRideThrowMontage_Params Parms{};

	Parms.ShooterAnime = ShooterAnime;
	Parms.NextMontage = NextMontage;
	Parms.CameraForward = CameraForward;
	Parms.PlayerForward = PlayerForward;
	Parms.Player = Player;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetCameraRotator_ReturnValue = CallFunc_GetCameraRotator_ReturnValue;
	Parms.CallFunc_Vector_Normal2D_ReturnValue = CallFunc_Vector_Normal2D_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Vector_Normal2D_ReturnValue_1 = CallFunc_Vector_Normal2D_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Character = K2Node_DynamicCast_AsPal_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetCurrentRidePositionType_ReturnValue = CallFunc_GetCurrentRidePositionType_ReturnValue;
	Parms.CallFunc_IsRiding_ReturnValue = CallFunc_IsRiding_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetThrowAnimAsset_ReturnValue = CallFunc_GetThrowAnimAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Shooter_Anime_Throw_Base = K2Node_DynamicCast_AsBP_Shooter_Anime_Throw_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.GetRideMontageByDirection
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Suceess                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                NextAnim                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeaponBase_C::GetRideMontageByDirection(bool* Suceess, class UAnimMontage** NextAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "GetRideMontageByDirection");

	Params::ABP_ThrowWeaponBase_C_GetRideMontageByDirection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Suceess != nullptr)
		*Suceess = Parms.Suceess;

	if (NextAnim != nullptr)
		*NextAnim = Parms.NextAnim;

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.GetTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeaponBase_C::GetTargetLocation(struct FVector* Location, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "GetTargetLocation");

	Params::ABP_ThrowWeaponBase_C_GetTargetLocation_Params Parms{};

	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue = CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.GetThrowObjectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ThrowObject                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeaponBase_C::GetThrowObjectClass(class UClass** ThrowObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "GetThrowObjectClass");

	Params::ABP_ThrowWeaponBase_C_GetThrowObjectClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThrowObject != nullptr)
		*ThrowObject = Parms.ThrowObject;

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.OnThrow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetSneakAttackRate_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWeaponDamage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetBulletShootRotation_BulletRotate                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DecrementBullet_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetThrowObjectClass_ThrowObject                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalBullet*                  K2Node_DynamicCast_AsPal_Bullet                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeaponBase_C::OnThrow(float CallFunc_GetSneakAttackRate_ReturnValue, int32 CallFunc_GetWeaponDamage_ReturnValue, const struct FRotator& CallFunc_GetBulletShootRotation_BulletRotate, bool CallFunc_DecrementBullet_ReturnValue, class UClass* CallFunc_GetThrowObjectClass_ThrowObject, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class APalBullet* K2Node_DynamicCast_AsPal_Bullet, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "OnThrow");

	Params::ABP_ThrowWeaponBase_C_OnThrow_Params Parms{};

	Parms.CallFunc_GetSneakAttackRate_ReturnValue = CallFunc_GetSneakAttackRate_ReturnValue;
	Parms.CallFunc_GetWeaponDamage_ReturnValue = CallFunc_GetWeaponDamage_ReturnValue;
	Parms.CallFunc_GetBulletShootRotation_BulletRotate = CallFunc_GetBulletShootRotation_BulletRotate;
	Parms.CallFunc_DecrementBullet_ReturnValue = CallFunc_DecrementBullet_ReturnValue;
	Parms.CallFunc_GetThrowObjectClass_ThrowObject = CallFunc_GetThrowObjectClass_ThrowObject;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Bullet = K2Node_DynamicCast_AsPal_Bullet;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ThrowWeaponBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.OnWeaponNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EWeaponNotifyType       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeaponBase_C::OnWeaponNotify(enum class EWeaponNotifyType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "OnWeaponNotify");

	Params::ABP_ThrowWeaponBase_C_OnWeaponNotify_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.OnPullTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThrowWeaponBase_C::OnPullTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "OnPullTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.ExecuteUbergraph_BP_ThrowWeaponBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponNotifyType       K2Node_Event_type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeaponBase_C::ExecuteUbergraph_BP_ThrowWeaponBase(int32 EntryPoint, enum class EWeaponNotifyType K2Node_Event_type, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "ExecuteUbergraph_BP_ThrowWeaponBase");

	Params::ABP_ThrowWeaponBase_C_ExecuteUbergraph_BP_ThrowWeaponBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_type = K2Node_Event_type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowWeaponBase.BP_ThrowWeaponBase_C.ThrowEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Bullet                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeaponBase_C::ThrowEventDispatcher__DelegateSignature(class AActor* Bullet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeaponBase_C", "ThrowEventDispatcher__DelegateSignature");

	Params::ABP_ThrowWeaponBase_C_ThrowEventDispatcher__DelegateSignature_Params Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);

}

}


