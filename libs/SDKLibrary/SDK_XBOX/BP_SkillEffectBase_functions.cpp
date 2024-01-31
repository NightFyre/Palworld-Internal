#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffectBase.BP_SkillEffectBase_C
// (Actor)

class UClass* ABP_SkillEffectBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffectBase_C");

	return Clss;
}


// BP_SkillEffectBase_C BP_SkillEffectBase.Default__BP_SkillEffectBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffectBase_C* ABP_SkillEffectBase_C::GetDefaultObj()
{
	static class ABP_SkillEffectBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffectBase_C*>(ABP_SkillEffectBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.FindTargetLocationConsiderRide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     TargetPos                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindTargetConsiderRide_TargetActor                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetAttackTargetLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::FindTargetLocationConsiderRide(struct FVector* TargetPos, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class AActor* CallFunc_FindTargetConsiderRide_TargetActor, const struct FVector& CallFunc_GetAttackTargetLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "FindTargetLocationConsiderRide");

	Params::ABP_SkillEffectBase_C_FindTargetLocationConsiderRide_Params Parms{};

	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_FindTargetConsiderRide_TargetActor = CallFunc_FindTargetConsiderRide_TargetActor;
	Parms.CallFunc_GetAttackTargetLocation_ReturnValue = CallFunc_GetAttackTargetLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetPos != nullptr)
		*TargetPos = std::move(Parms.TargetPos);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.GetHomingEndDot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Dot                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::GetHomingEndDot(double* Dot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "GetHomingEndDot");

	Params::ABP_SkillEffectBase_C_GetHomingEndDot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dot != nullptr)
		*Dot = Parms.Dot;

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.FindTargetConsiderRide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNearestEnemyByLocation_OutMinRange                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetNearestEnemyByLocation_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTargetActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::FindTargetConsiderRide(class AActor** TargetActor, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue_1, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_GetNearestEnemyByLocation_OutMinRange, class APalCharacter* CallFunc_GetNearestEnemyByLocation_ReturnValue, class AActor* CallFunc_GetActionTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "FindTargetConsiderRide");

	Params::ABP_SkillEffectBase_C_FindTargetConsiderRide_Params Parms{};

	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwnerCharacter_ReturnValue_1 = CallFunc_GetOwnerCharacter_ReturnValue_1;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_GetNearestEnemyByLocation_OutMinRange = CallFunc_GetNearestEnemyByLocation_OutMinRange;
	Parms.CallFunc_GetNearestEnemyByLocation_ReturnValue = CallFunc_GetNearestEnemyByLocation_ReturnValue;
	Parms.CallFunc_GetActionTargetActor_ReturnValue = CallFunc_GetActionTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.Is Hitable Target Collision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyHitComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherHitComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHitAble                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetTrainerPlayer_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::Is_Hitable_Target_Collision(class UPrimitiveComponent* MyHitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherHitComp, bool* IsHitAble, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "Is Hitable Target Collision");

	Params::ABP_SkillEffectBase_C_Is_Hitable_Target_Collision_Params Parms{};

	Parms.MyHitComp = MyHitComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherHitComp = OtherHitComp;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_GetTrainerPlayer_ReturnValue = CallFunc_GetTrainerPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue_1 = CallFunc_FindOwnerPalCharacter_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHitAble != nullptr)
		*IsHitAble = Parms.IsHitAble;

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.GetPredictedTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActionTargetLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::GetPredictedTargetLocation(struct FVector* Location, const struct FVector& CallFunc_GetActionTargetLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "GetPredictedTargetLocation");

	Params::ABP_SkillEffectBase_C_GetPredictedTargetLocation_Params Parms{};

	Parms.CallFunc_GetActionTargetLocation_ReturnValue = CallFunc_GetActionTargetLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.GetOwnerAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalActionBase*              Action                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_GetCurrentAction_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::GetOwnerAction(class UPalActionBase** Action, class AActor* CallFunc_GetOwner_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "GetOwnerAction");

	Params::ABP_SkillEffectBase_C_GetOwnerAction_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetCurrentAction_ReturnValue = CallFunc_GetCurrentAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.HasProjectileMoveComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProjectileMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SkillEffectBase_C::HasProjectileMoveComp(class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "HasProjectileMoveComp");

	Params::ABP_SkillEffectBase_C_HasProjectileMoveComp_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.SetHomingTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProjectileMovementComponent*ProjectileMoveComp                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProjectileMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::SetHomingTarget(class AActor* Target, bool* Success, class UProjectileMovementComponent* ProjectileMoveComp, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "SetHomingTarget");

	Params::ABP_SkillEffectBase_C_SetHomingTarget_Params Parms{};

	Parms.Target = Target;
	Parms.ProjectileMoveComp = ProjectileMoveComp;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.CheckToStopHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetHomingEndDot_Dot                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTargetActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProjectileMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTargetActor_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::CheckToStopHoming(double CallFunc_GetHomingEndDot_Dot, class AActor* CallFunc_GetActionTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetActionTargetActor_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "CheckToStopHoming");

	Params::ABP_SkillEffectBase_C_CheckToStopHoming_Params Parms{};

	Parms.CallFunc_GetHomingEndDot_Dot = CallFunc_GetHomingEndDot_Dot;
	Parms.CallFunc_GetActionTargetActor_ReturnValue = CallFunc_GetActionTargetActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActionTargetActor_ReturnValue_1 = CallFunc_GetActionTargetActor_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.ApplyDamageCustomHit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttackerHitComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             DefenderHitComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      FoliageIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo              CallFunc_MakeDamageInfoByWazaType_ReturnValue                    (None)

void ABP_SkillEffectBase_C::ApplyDamageCustomHit(class AActor* Defender, class USceneComponent* AttackerHitComponent, class USceneComponent* DefenderHitComponent, const struct FVector& HitLocation, TArray<int32>& FoliageIndex, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, const struct FPalDamageInfo& CallFunc_MakeDamageInfoByWazaType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "ApplyDamageCustomHit");

	Params::ABP_SkillEffectBase_C_ApplyDamageCustomHit_Params Parms{};

	Parms.Defender = Defender;
	Parms.AttackerHitComponent = AttackerHitComponent;
	Parms.DefenderHitComponent = DefenderHitComponent;
	Parms.HitLocation = HitLocation;
	Parms.FoliageIndex = FoliageIndex;
	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_MakeDamageInfoByWazaType_ReturnValue = CallFunc_MakeDamageInfoByWazaType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.IsValidHitCustomRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      HitTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         MyHitComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         HitTargetComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHit                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsApplicableDamage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::IsValidHitCustomRange(class AActor* HitTarget, class UPrimitiveComponent* MyHitComponent, class UPrimitiveComponent* HitTargetComponent, bool* IsHit, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, bool CallFunc_IsApplicableDamage_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "IsValidHitCustomRange");

	Params::ABP_SkillEffectBase_C_IsValidHitCustomRange_Params Parms{};

	Parms.HitTarget = HitTarget;
	Parms.MyHitComponent = MyHitComponent;
	Parms.HitTargetComponent = HitTargetComponent;
	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_IsApplicableDamage_ReturnValue = CallFunc_IsApplicableDamage_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.Print Log When Collision Object Type Is Bullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkillEffectBase_C::Print_Log_When_Collision_Object_Type_Is_Bullet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "Print Log When Collision Object Type Is Bullet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.Spawn Elemental Hit Effect Far
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EffectScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>EffectPath                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// double                             Scale                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWazaDatabase*            CallFunc_GetWazaDatabase_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalWazaDatabaseRaw         CallFunc_FindWazaForBP_OutData                                   (None)
// bool                               CallFunc_FindWazaForBP_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::Spawn_Elemental_Hit_Effect_Far(const struct FVector& Location, double EffectScale, TSoftObjectPtr<class UNiagaraSystem> EffectPath, double Scale, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class UPalWazaDatabase* CallFunc_GetWazaDatabase_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FPalWazaDatabaseRaw& CallFunc_FindWazaForBP_OutData, bool CallFunc_FindWazaForBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "Spawn Elemental Hit Effect Far");

	Params::ABP_SkillEffectBase_C_Spawn_Elemental_Hit_Effect_Far_Params Parms{};

	Parms.Location = Location;
	Parms.EffectScale = EffectScale;
	Parms.EffectPath = EffectPath;
	Parms.Scale = Scale;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_GetWazaDatabase_ReturnValue = CallFunc_GetWazaDatabase_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_FindWazaForBP_OutData = CallFunc_FindWazaForBP_OutData;
	Parms.CallFunc_FindWazaForBP_ReturnValue = CallFunc_FindWazaForBP_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.OnLoaded_15409DED4FCA4A2F1D5599B619A24205
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::OnLoaded_15409DED4FCA4A2F1D5599B619A24205(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "OnLoaded_15409DED4FCA4A2F1D5599B619A24205");

	Params::ABP_SkillEffectBase_C_OnLoaded_15409DED4FCA4A2F1D5599B619A24205_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkillEffectBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "ReceiveTick");

	Params::ABP_SkillEffectBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.OnHitDelegate_§ŸÛ»
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyHitComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherHitActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherHitComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      FoliageIndex                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HitCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::OnHitDelegate_____(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "OnHitDelegate_§ŸÛ»");

	Params::ABP_SkillEffectBase_C_OnHitDelegate______Params Parms{};

	Parms.MyHitComponent = MyHitComponent;
	Parms.OtherHitActor = OtherHitActor;
	Parms.OtherHitComponent = OtherHitComponent;
	Parms.FoliageIndex = FoliageIndex;
	Parms.HitLocation = HitLocation;
	Parms.HitCount = HitCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.LoadAndPlayEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UNiagaraSystem>Niagara_System                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::LoadAndPlayEffect(TSoftObjectPtr<class UNiagaraSystem> Niagara_System, const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "LoadAndPlayEffect");

	Params::ABP_SkillEffectBase_C_LoadAndPlayEffect_Params Parms{};

	Parms.Niagara_System = Niagara_System;
	Parms.Transform = Transform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaSecond                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "FadeOutEffect");

	Params::ABP_SkillEffectBase_C_FadeOutEffect_Params Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.OnHitGround
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkillEffectBase_C::OnHitGround()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "OnHitGround");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.OnHitCustomRange
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyHitComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherHitActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherHitComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      FoliageIndex                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HitCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::OnHitCustomRange(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "OnHitCustomRange");

	Params::ABP_SkillEffectBase_C_OnHitCustomRange_Params Parms{};

	Parms.MyHitComponent = MyHitComponent;
	Parms.OtherHitActor = OtherHitActor;
	Parms.OtherHitComponent = OtherHitComponent;
	Parms.FoliageIndex = FoliageIndex;
	Parms.HitLocation = HitLocation;
	Parms.HitCount = HitCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "ReceiveEndPlay");

	Params::ABP_SkillEffectBase_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.BndEvt__BP_SkillEffectBase_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                      Defencer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo              DamageInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              HitCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         AttackerComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::BndEvt__BP_SkillEffectBase_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "BndEvt__BP_SkillEffectBase_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");

	Params::ABP_SkillEffectBase_C_BndEvt__BP_SkillEffectBase_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature_Params Parms{};

	Parms.Defencer = Defencer;
	Parms.DamageInfo = DamageInfo;
	Parms.HitCount = HitCount;
	Parms.AttackerComponent = AttackerComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffectBase.BP_SkillEffectBase_C.ExecuteUbergraph_BP_SkillEffectBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_MyHitComponent_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherHitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherHitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_CustomEvent_FoliageIndex_1                                (ConstParm, ReferenceParm)
// struct FVector                     K2Node_CustomEvent_HitLocation_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_HitCount_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsApplicableDamage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Hitable_Target_Collision_IsHitAble                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>K2Node_CustomEvent_Niagara_System                                (HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_Transform                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_DeltaSecond                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWazaDatabase*            CallFunc_GetWazaDatabase_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalWazaDatabaseRaw         CallFunc_FindWazaForBP_OutData                                   (None)
// bool                               CallFunc_FindWazaForBP_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_MyHitComponent                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherHitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherHitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_CustomEvent_FoliageIndex                                  (ConstParm, ReferenceParm)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_HitCount                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidHitCustomRange_IsHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UProjectileMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHitEffectSlot*           CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_HitEffectSlot_C*         K2Node_DynamicCast_AsBP_Hit_Effect_Slot                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_Defencer                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo              K2Node_ComponentBoundEvent_damageInfo                            (None)
// int32                              K2Node_ComponentBoundEvent_hitCount                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_AttackerComponent                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

void ABP_SkillEffectBase_C::ExecuteUbergraph_BP_SkillEffectBase(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPrimitiveComponent* K2Node_CustomEvent_MyHitComponent_1, class AActor* K2Node_CustomEvent_OtherHitActor_1, class UPrimitiveComponent* K2Node_CustomEvent_OtherHitComponent_1, TArray<int32>& K2Node_CustomEvent_FoliageIndex_1, const struct FVector& K2Node_CustomEvent_HitLocation_1, int32 K2Node_CustomEvent_HitCount_1, bool CallFunc_IsApplicableDamage_ReturnValue, bool CallFunc_Is_Hitable_Target_Collision_IsHitAble, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSoftObjectPtr<class UNiagaraSystem> K2Node_CustomEvent_Niagara_System, const struct FTransform& K2Node_CustomEvent_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UObject* K2Node_CustomEvent_Loaded, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double K2Node_CustomEvent_DeltaSecond, double CallFunc_Add_DoubleDouble_ReturnValue, class UObject* Temp_object_Variable, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UPalWazaDatabase* CallFunc_GetWazaDatabase_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalWazaDatabaseRaw& CallFunc_FindWazaForBP_OutData, bool CallFunc_FindWazaForBP_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPrimitiveComponent* K2Node_CustomEvent_MyHitComponent, class AActor* K2Node_CustomEvent_OtherHitActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherHitComponent, TArray<int32>& K2Node_CustomEvent_FoliageIndex, const struct FVector& K2Node_CustomEvent_HitLocation, int32 K2Node_CustomEvent_HitCount, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValidHitCustomRange_IsHit, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPalHitEffectSlot* CallFunc_SpawnObject_ReturnValue, class UBP_HitEffectSlot_C* K2Node_DynamicCast_AsBP_Hit_Effect_Slot, bool K2Node_DynamicCast_bSuccess_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FTimerHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* K2Node_ComponentBoundEvent_Defencer, const struct FPalDamageInfo& K2Node_ComponentBoundEvent_damageInfo, int32 K2Node_ComponentBoundEvent_hitCount, class UPrimitiveComponent* K2Node_ComponentBoundEvent_AttackerComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Conv_IntToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffectBase_C", "ExecuteUbergraph_BP_SkillEffectBase");

	Params::ABP_SkillEffectBase_C_ExecuteUbergraph_BP_SkillEffectBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.K2Node_CustomEvent_MyHitComponent_1 = K2Node_CustomEvent_MyHitComponent_1;
	Parms.K2Node_CustomEvent_OtherHitActor_1 = K2Node_CustomEvent_OtherHitActor_1;
	Parms.K2Node_CustomEvent_OtherHitComponent_1 = K2Node_CustomEvent_OtherHitComponent_1;
	Parms.K2Node_CustomEvent_FoliageIndex_1 = K2Node_CustomEvent_FoliageIndex_1;
	Parms.K2Node_CustomEvent_HitLocation_1 = K2Node_CustomEvent_HitLocation_1;
	Parms.K2Node_CustomEvent_HitCount_1 = K2Node_CustomEvent_HitCount_1;
	Parms.CallFunc_IsApplicableDamage_ReturnValue = CallFunc_IsApplicableDamage_ReturnValue;
	Parms.CallFunc_Is_Hitable_Target_Collision_IsHitAble = CallFunc_Is_Hitable_Target_Collision_IsHitAble;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Niagara_System = K2Node_CustomEvent_Niagara_System;
	Parms.K2Node_CustomEvent_Transform = K2Node_CustomEvent_Transform;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.K2Node_CustomEvent_DeltaSecond = K2Node_CustomEvent_DeltaSecond;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsNiagara_System = K2Node_DynamicCast_AsNiagara_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetWazaDatabase_ReturnValue = CallFunc_GetWazaDatabase_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FindWazaForBP_OutData = CallFunc_FindWazaForBP_OutData;
	Parms.CallFunc_FindWazaForBP_ReturnValue = CallFunc_FindWazaForBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_MyHitComponent = K2Node_CustomEvent_MyHitComponent;
	Parms.K2Node_CustomEvent_OtherHitActor = K2Node_CustomEvent_OtherHitActor;
	Parms.K2Node_CustomEvent_OtherHitComponent = K2Node_CustomEvent_OtherHitComponent;
	Parms.K2Node_CustomEvent_FoliageIndex = K2Node_CustomEvent_FoliageIndex;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_HitCount = K2Node_CustomEvent_HitCount;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValidHitCustomRange_IsHit = CallFunc_IsValidHitCustomRange_IsHit;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Hit_Effect_Slot = K2Node_DynamicCast_AsBP_Hit_Effect_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Defencer = K2Node_ComponentBoundEvent_Defencer;
	Parms.K2Node_ComponentBoundEvent_damageInfo = K2Node_ComponentBoundEvent_damageInfo;
	Parms.K2Node_ComponentBoundEvent_hitCount = K2Node_ComponentBoundEvent_hitCount;
	Parms.K2Node_ComponentBoundEvent_AttackerComponent = K2Node_ComponentBoundEvent_AttackerComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


