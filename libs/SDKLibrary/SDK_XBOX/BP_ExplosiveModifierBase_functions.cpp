#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C
// (None)

class UClass* UBP_ExplosiveModifierBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExplosiveModifierBase_C");

	return Clss;
}


// BP_ExplosiveModifierBase_C BP_ExplosiveModifierBase.Default__BP_ExplosiveModifierBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ExplosiveModifierBase_C* UBP_ExplosiveModifierBase_C::GetDefaultObj()
{
	static class UBP_ExplosiveModifierBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ExplosiveModifierBase_C*>(UBP_ExplosiveModifierBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalBullet*                  Bullet                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ExplosiveModifierBase_C::Initialize(class APalBullet* Bullet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosiveModifierBase_C", "Initialize");

	Params::UBP_ExplosiveModifierBase_C_Initialize_Params Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C.«¹¿à¤ÙóÈ_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hi                                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_ExplosiveModifierBase_C::_________0(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, struct FHitResult& Hi)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosiveModifierBase_C", "«¹¿à¤ÙóÈ_0");

	Params::UBP_ExplosiveModifierBase_C__________0_Params Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherCharacter = OtherCharacter;
	Parms.OtherComp = OtherComp;
	Parms.Hi = Hi;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C.ExecuteUbergraph_BP_ExplosiveModifierBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_HitComp                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherComp                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hi                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalBullet*                  K2Node_DynamicCast_AsPal_Bullet                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWeaponDamage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalBullet*                  K2Node_Event_bullet                                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ExplosionAttackBase_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExplosiveModifierBase_C::ExecuteUbergraph_BP_ExplosiveModifierBase(int32 EntryPoint, class UPrimitiveComponent* K2Node_CustomEvent_HitComp, class AActor* K2Node_CustomEvent_OtherCharacter, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, const struct FHitResult& K2Node_CustomEvent_Hi, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalBullet* K2Node_DynamicCast_AsPal_Bullet, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetWeaponDamage_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APalBullet* K2Node_Event_bullet, class ABP_ExplosionAttackBase_C* CallFunc_FinishSpawningActor_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_FTrunc_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosiveModifierBase_C", "ExecuteUbergraph_BP_ExplosiveModifierBase");

	Params::UBP_ExplosiveModifierBase_C_ExecuteUbergraph_BP_ExplosiveModifierBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_HitComp = K2Node_CustomEvent_HitComp;
	Parms.K2Node_CustomEvent_OtherCharacter = K2Node_CustomEvent_OtherCharacter;
	Parms.K2Node_CustomEvent_OtherComp = K2Node_CustomEvent_OtherComp;
	Parms.K2Node_CustomEvent_Hi = K2Node_CustomEvent_Hi;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Bullet = K2Node_DynamicCast_AsPal_Bullet;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponDamage_ReturnValue = CallFunc_GetWeaponDamage_ReturnValue;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue = CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_Event_bullet = K2Node_Event_bullet;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


