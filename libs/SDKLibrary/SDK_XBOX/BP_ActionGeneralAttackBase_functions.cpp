#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C
// (None)

class UClass* UBP_ActionGeneralAttackBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionGeneralAttackBase_C");

	return Clss;
}


// BP_ActionGeneralAttackBase_C BP_ActionGeneralAttackBase.Default__BP_ActionGeneralAttackBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionGeneralAttackBase_C* UBP_ActionGeneralAttackBase_C::GetDefaultObj()
{
	static class UBP_ActionGeneralAttackBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionGeneralAttackBase_C*>(UBP_ActionGeneralAttackBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.Get Attack Owner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::Get_Attack_Owner(class AActor** OwnerActor, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "Get Attack Owner");

	Params::UBP_ActionGeneralAttackBase_C_Get_Attack_Owner_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetWalkSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSlow                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::SetWalkSpeed(bool IsSlow, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetWalkSpeed");

	Params::UBP_ActionGeneralAttackBase_C_SetWalkSpeed_Params Parms{};

	Parms.IsSlow = IsSlow;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.GetSkillEffectTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ActionTarget                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetRiderPlayer_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetRiderPlayer_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InHeight_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDegree_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDistance_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::GetSkillEffectTarget(class AActor** ActionTarget, class APalPlayerCharacter* CallFunc_GetRiderPlayer_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, class APalPlayerCharacter* CallFunc_GetRiderPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, class AActor* CallFunc_GetActionTarget_ReturnValue_2, class AActor* CallFunc_GetActionTarget_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InHeight_ImplicitCast, float CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDegree_ImplicitCast, float CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "GetSkillEffectTarget");

	Params::UBP_ActionGeneralAttackBase_C_GetSkillEffectTarget_Params Parms{};

	Parms.CallFunc_GetRiderPlayer_ReturnValue = CallFunc_GetRiderPlayer_ReturnValue;
	Parms.CallFunc_GetActionTarget_ReturnValue = CallFunc_GetActionTarget_ReturnValue;
	Parms.CallFunc_GetRiderPlayer_ReturnValue_1 = CallFunc_GetRiderPlayer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActionTarget_ReturnValue_1 = CallFunc_GetActionTarget_ReturnValue_1;
	Parms.CallFunc_GetActionTarget_ReturnValue_2 = CallFunc_GetActionTarget_ReturnValue_2;
	Parms.CallFunc_GetActionTarget_ReturnValue_3 = CallFunc_GetActionTarget_ReturnValue_3;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_ReturnValue = CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_ReturnValue;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InHeight_ImplicitCast = CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InHeight_ImplicitCast;
	Parms.CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDegree_ImplicitCast = CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDegree_ImplicitCast;
	Parms.CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDistance_ImplicitCast = CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionTarget != nullptr)
		*ActionTarget = Parms.ActionTarget;

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetSkillEffectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillEffectSpawnParameter  SkillEffectParams                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UClass*                      NewEffectClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::SetSkillEffectClass(struct FSkillEffectSpawnParameter& SkillEffectParams, class UClass* NewEffectClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetSkillEffectClass");

	Params::UBP_ActionGeneralAttackBase_C_SetSkillEffectClass_Params Parms{};

	Parms.SkillEffectParams = SkillEffectParams;
	Parms.NewEffectClass = NewEffectClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetSkillEffectTimeOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillEffectSpawnParameter  EffectSpawnParams                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// double                             NewTimeOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_TimeOffset_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::SetSkillEffectTimeOffset(struct FSkillEffectSpawnParameter& EffectSpawnParams, double NewTimeOffset, float K2Node_SetFieldsInStruct_TimeOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetSkillEffectTimeOffset");

	Params::UBP_ActionGeneralAttackBase_C_SetSkillEffectTimeOffset_Params Parms{};

	Parms.EffectSpawnParams = EffectSpawnParams;
	Parms.NewTimeOffset = NewTimeOffset;
	Parms.K2Node_SetFieldsInStruct_TimeOffset_ImplicitCast = K2Node_SetFieldsInStruct_TimeOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.ShortenAnimationTimeWhenPalRidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalMonsterCharacter*        K2Node_DynamicCast_AsPal_Monster_Character                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::ShortenAnimationTimeWhenPalRidden(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalMonsterCharacter* K2Node_DynamicCast_AsPal_Monster_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "ShortenAnimationTimeWhenPalRidden");

	Params::UBP_ActionGeneralAttackBase_C_ShortenAnimationTimeWhenPalRidden_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Monster_Character = K2Node_DynamicCast_AsPal_Monster_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CheckMontageFacialNotify_OneAnime
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalGeneralMontageType  AnimType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseMontageFacialNotify                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalFacialComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExistFacialNotifyInMontage_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::CheckMontageFacialNotify_OneAnime(enum class EPalGeneralMontageType AnimType, bool* UseMontageFacialNotify, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_ExistFacialNotifyInMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CheckMontageFacialNotify_OneAnime");

	Params::UBP_ActionGeneralAttackBase_C_CheckMontageFacialNotify_OneAnime_Params Parms{};

	Parms.AnimType = AnimType;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_ExistFacialNotifyInMontage_ReturnValue = CallFunc_ExistFacialNotifyInMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UseMontageFacialNotify != nullptr)
		*UseMontageFacialNotify = Parms.UseMontageFacialNotify;

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CheckMontageFacialNotify
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStaticCharacterParameterComponent*STPC                                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::CheckMontageFacialNotify(class UPalStaticCharacterParameterComponent* STPC, bool CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify, bool CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_1, bool CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_2, bool CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_3, bool CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CheckMontageFacialNotify");

	Params::UBP_ActionGeneralAttackBase_C_CheckMontageFacialNotify_Params Parms{};

	Parms.STPC = STPC;
	Parms.CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify = CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify;
	Parms.CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_1 = CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_1;
	Parms.CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_2 = CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_2;
	Parms.CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_3 = CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_3;
	Parms.CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_4 = CallFunc_CheckMontageFacialNotify_OneAnime_UseMontageFacialNotify_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.EndFacial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalFacialComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::EndFacial(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "EndFacial");

	Params::UBP_ActionGeneralAttackBase_C_EndFacial_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.TickMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddActorLocalOffset_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::TickMovement(double DeltaTime, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorLocalOffset_SweepHitResult, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "TickMovement");

	Params::UBP_ActionGeneralAttackBase_C_TickMovement_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_AddActorLocalOffset_SweepHitResult = CallFunc_K2_AddActorLocalOffset_SweepHitResult;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.AttachToOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*         Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBodyLocationType    BodyLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetAttachInformationByBodyLocation_attachComponent      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAttachInformationByBodyLocation_attachBoneName       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachInformationByBodyLocation_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::AttachToOwner(class APalSkillEffectBase* Effect, const struct FVector& Offset, class FName SocketName, enum class EPalBodyLocationType BodyLocation, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class USceneComponent* CallFunc_GetAttachInformationByBodyLocation_attachComponent, class FName CallFunc_GetAttachInformationByBodyLocation_attachBoneName, const struct FTransform& CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform, bool CallFunc_GetAttachInformationByBodyLocation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "AttachToOwner");

	Params::UBP_ActionGeneralAttackBase_C_AttachToOwner_Params Parms{};

	Parms.Effect = Effect;
	Parms.Offset = Offset;
	Parms.SocketName = SocketName;
	Parms.BodyLocation = BodyLocation;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetAttachInformationByBodyLocation_attachComponent = CallFunc_GetAttachInformationByBodyLocation_attachComponent;
	Parms.CallFunc_GetAttachInformationByBodyLocation_attachBoneName = CallFunc_GetAttachInformationByBodyLocation_attachBoneName;
	Parms.CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform = CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform;
	Parms.CallFunc_GetAttachInformationByBodyLocation_ReturnValue = CallFunc_GetAttachInformationByBodyLocation_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.CallFunc_GetMainMesh_ReturnValue_1 = CallFunc_GetMainMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CanGainSP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_ActionGeneralAttackBase_C::CanGainSP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CanGainSP");

	Params::UBP_ActionGeneralAttackBase_C_CanGainSP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CanStepCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_ActionGeneralAttackBase_C::CanStepCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CanStepCancel");

	Params::UBP_ActionGeneralAttackBase_C_CanStepCancel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CheckFastTerminate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMovementComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::CheckFastTerminate(double DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Vector_IsNearlyZero_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CheckFastTerminate");

	Params::UBP_ActionGeneralAttackBase_C_CheckFastTerminate_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Vector_IsNearlyZero_ReturnValue = CallFunc_Vector_IsNearlyZero_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.StopAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue_2                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue_3                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue_4                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value_4                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::StopAnimation(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, class UAnimMontage* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UAnimMontage* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class UAnimMontage* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_2, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_3, float CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "StopAnimation");

	Params::UBP_ActionGeneralAttackBase_C_StopAnimation_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue_1 = CallFunc_GetMainMesh_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_GetMainMesh_ReturnValue_2 = CallFunc_GetMainMesh_ReturnValue_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.CallFunc_GetMainMesh_ReturnValue_3 = CallFunc_GetMainMesh_ReturnValue_3;
	Parms.CallFunc_GetAnimInstance_ReturnValue_3 = CallFunc_GetAnimInstance_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_4 = CallFunc_GetActionCharacter_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetMainMesh_ReturnValue_4 = CallFunc_GetMainMesh_ReturnValue_4;
	Parms.CallFunc_GetAnimInstance_ReturnValue_4 = CallFunc_GetAnimInstance_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast = CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast;
	Parms.CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1 = CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_1;
	Parms.CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_2 = CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_2;
	Parms.CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_3 = CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_3;
	Parms.CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_4 = CallFunc_Montage_Stop_InBlendOutTime_ImplicitCast_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*         Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::OnSpawnEffect(class APalSkillEffectBase* Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnSpawnEffect");

	Params::UBP_ActionGeneralAttackBase_C_OnSpawnEffect_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetYawRotateRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Rate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::SetYawRotateRate(double Rate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetYawRotateRate");

	Params::UBP_ActionGeneralAttackBase_C_SetYawRotateRate_Params Parms{};

	Parms.Rate = Rate;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast = CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.Set Disable Movement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::Set_Disable_Movement(bool Enable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "Set Disable Movement");

	Params::UBP_ActionGeneralAttackBase_C_Set_Disable_Movement_Params Parms{};

	Parms.Enable = Enable;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnStartAfterAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::OnStartAfterAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnStartAfterAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnStartProcessAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnStartProcessAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnStartReadyAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalFacialComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::OnStartReadyAnimation(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnStartReadyAnimation");

	Params::UBP_ActionGeneralAttackBase_C_OnStartReadyAnimation_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.PlayAfterAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayMontageByFixLength_FixLength_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::PlayAfterAnimation(bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_PlayMontageByFixLength_FixLength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "PlayAfterAnimation");

	Params::UBP_ActionGeneralAttackBase_C_PlayAfterAnimation_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_PlayMontageByFixLength_FixLength_ImplicitCast = CallFunc_PlayMontageByFixLength_FixLength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.FindEffectByClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      EffectClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         Effect                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class APalSkillEffectBase>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         K2Node_DynamicCast_AsPal_Skill_Effect_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::FindEffectByClass(class UClass* EffectClass, class APalSkillEffectBase** Effect, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class APalSkillEffectBase> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class APalSkillEffectBase* K2Node_DynamicCast_AsPal_Skill_Effect_Base, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "FindEffectByClass");

	Params::UBP_ActionGeneralAttackBase_C_FindEffectByClass_Params Parms{};

	Parms.EffectClass = EffectClass;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Skill_Effect_Base = K2Node_DynamicCast_AsPal_Skill_Effect_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.PlayEffectByTime
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSkillEffectSpawnParameter>EffectList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ActionGeneralAttackBase_C::PlayEffectByTime(TArray<struct FSkillEffectSpawnParameter>& EffectList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "PlayEffectByTime");

	Params::UBP_ActionGeneralAttackBase_C_PlayEffectByTime_Params Parms{};

	Parms.EffectList = EffectList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.DoProcessAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::DoProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "DoProcessAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.DoAfterAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::DoAfterAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "DoAfterAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.DoEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::DoEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "DoEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetupMovementControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::SetupMovementControl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetupMovementControl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.SetDisableMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::SetDisableMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "SetDisableMovement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.Movement Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::Movement_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "Movement Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnBreakAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnBreakAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "TickAction");

	Params::UBP_ActionGeneralAttackBase_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.PlayReadyAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::PlayReadyAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "PlayReadyAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.PlayProcessAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::PlayProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "PlayProcessAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.CallEffect
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillEffectSpawnParameter  Parameter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ActionGeneralAttackBase_C::CallEffect(struct FSkillEffectSpawnParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "CallEffect");

	Params::UBP_ActionGeneralAttackBase_C_CallEffect_Params Parms{};

	Parms.Parameter = Parameter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.DoStartMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::DoStartMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "DoStartMovement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.ExecuteUbergraph_BP_ActionGeneralAttackBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSkillEffectSpawnParameter>K2Node_CustomEvent_EffectList                                    (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_5                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_6                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_7                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillEffectSpawnParameter  CallFunc_Array_Get_Item_1                                        (NoDestructor)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMontageSectionLength_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMontageSectionLength_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillEffectSpawnParameter  K2Node_CustomEvent_Parameter                                     (ConstParm, NoDestructor)
// struct FTimerHandle                CallFunc_SetTimeCallbackBySkillEffectSpawnParameter_ReturnValue  (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream               CallFunc_GetRandomStream_ReturnValue                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_5                       (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSkillEffectTarget_ActionTarget                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Get_Attack_Owner_OwnerActor                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class APalSkillEffectBase>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CheckFastTerminate_DeltaTime_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TickMovement_DeltaTime_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayMontageByMinLength_MinLength_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Play2MontageByFixLength_FixLength_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayMontageByMinLength_MinLength_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Play2MontageByFixLength_FixLength_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionGeneralAttackBase_C::ExecuteUbergraph_BP_ActionGeneralAttackBase(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, TArray<struct FSkillEffectSpawnParameter>& K2Node_CustomEvent_EffectList, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item_1, float K2Node_Event_DeltaTime, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMontageSectionLength_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UAnimMontage* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, float CallFunc_GetPlayLength_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetMontageSectionLength_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, const struct FSkillEffectSpawnParameter& K2Node_CustomEvent_Parameter, const struct FTimerHandle& CallFunc_SetTimeCallbackBySkillEffectSpawnParameter_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, const struct FRandomStream& CallFunc_GetRandomStream_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5, class AActor* CallFunc_GetSkillEffectTarget_ActionTarget, int32 CallFunc_Array_Add_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_Get_Attack_Owner_OwnerActor, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class APalSkillEffectBase* CallFunc_FinishSpawningActor_ReturnValue, TSoftObjectPtr<class APalSkillEffectBase> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_4, double CallFunc_CheckFastTerminate_DeltaTime_ImplicitCast, double CallFunc_TickMovement_DeltaTime_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_PlayMontageByMinLength_MinLength_ImplicitCast, float CallFunc_Play2MontageByFixLength_FixLength_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float CallFunc_PlayMontageByMinLength_MinLength_ImplicitCast_1, float CallFunc_Play2MontageByFixLength_FixLength_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "ExecuteUbergraph_BP_ActionGeneralAttackBase");

	Params::UBP_ActionGeneralAttackBase_C_ExecuteUbergraph_BP_ActionGeneralAttackBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.K2Node_CustomEvent_EffectList = K2Node_CustomEvent_EffectList;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_4 = CallFunc_GetActionCharacter_ReturnValue_4;
	Parms.CallFunc_GetActionCharacter_ReturnValue_5 = CallFunc_GetActionCharacter_ReturnValue_5;
	Parms.CallFunc_GetActionCharacter_ReturnValue_6 = CallFunc_GetActionCharacter_ReturnValue_6;
	Parms.CallFunc_GetActionCharacter_ReturnValue_7 = CallFunc_GetActionCharacter_ReturnValue_7;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_2 = CallFunc_NotEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_3 = CallFunc_NotEqual_DoubleDouble_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMontageSectionLength_ReturnValue = CallFunc_GetMontageSectionLength_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_GetPlayLength_ReturnValue_1 = CallFunc_GetPlayLength_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMontageSectionLength_ReturnValue_1 = CallFunc_GetMontageSectionLength_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CustomEvent_Parameter = K2Node_CustomEvent_Parameter;
	Parms.CallFunc_SetTimeCallbackBySkillEffectSpawnParameter_ReturnValue = CallFunc_SetTimeCallbackBySkillEffectSpawnParameter_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_4 = CallFunc_NotEqual_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_GetRandomStream_ReturnValue = CallFunc_GetRandomStream_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_5 = CallFunc_K2_SetTimerDelegate_ReturnValue_5;
	Parms.CallFunc_GetSkillEffectTarget_ActionTarget = CallFunc_GetSkillEffectTarget_ActionTarget;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Get_Attack_Owner_OwnerActor = CallFunc_Get_Attack_Owner_OwnerActor;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_4 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_4;
	Parms.CallFunc_CheckFastTerminate_DeltaTime_ImplicitCast = CallFunc_CheckFastTerminate_DeltaTime_ImplicitCast;
	Parms.CallFunc_TickMovement_DeltaTime_ImplicitCast = CallFunc_TickMovement_DeltaTime_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_PlayMontageByMinLength_MinLength_ImplicitCast = CallFunc_PlayMontageByMinLength_MinLength_ImplicitCast;
	Parms.CallFunc_Play2MontageByFixLength_FixLength_ImplicitCast = CallFunc_Play2MontageByFixLength_FixLength_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_PlayMontageByMinLength_MinLength_ImplicitCast_1 = CallFunc_PlayMontageByMinLength_MinLength_ImplicitCast_1;
	Parms.CallFunc_Play2MontageByFixLength_FixLength_ImplicitCast_1 = CallFunc_Play2MontageByFixLength_FixLength_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_5 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionGeneralAttackBase.BP_ActionGeneralAttackBase_C.OnProcess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionGeneralAttackBase_C::OnProcess__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionGeneralAttackBase_C", "OnProcess__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


