#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExplosionAttackBase.BP_ExplosionAttackBase_C
// (Actor)

class UClass* ABP_ExplosionAttackBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExplosionAttackBase_C");

	return Clss;
}


// BP_ExplosionAttackBase_C BP_ExplosionAttackBase.Default__BP_ExplosionAttackBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExplosionAttackBase_C* ABP_ExplosionAttackBase_C::GetDefaultObj()
{
	static class ABP_ExplosionAttackBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExplosionAttackBase_C*>(ABP_ExplosionAttackBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.Is Attack Able
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHit                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsApplicableDamage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::Is_Attack_Able(class AActor* Attacker, class AActor* HitActor, class UPrimitiveComponent* HitComponent, bool* IsHit, bool CallFunc_IsApplicableDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "Is Attack Able");

	Params::ABP_ExplosionAttackBase_C_Is_Attack_Able_Params Parms{};

	Parms.Attacker = Attacker;
	Parms.HitActor = HitActor;
	Parms.HitComponent = HitComponent;
	Parms.CallFunc_IsApplicableDamage_ReturnValue = CallFunc_IsApplicableDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHit != nullptr)
		*IsHit = Parms.IsHit;

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.Get Attackable Friend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsFriendAttack                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::Get_Attackable_Friend(bool* IsFriendAttack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "Get Attackable Friend");

	Params::ABP_ExplosionAttackBase_C_Get_Attackable_Friend_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsFriendAttack != nullptr)
		*IsFriendAttack = Parms.IsFriendAttack;

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetEffectValue
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::GetEffectValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "GetEffectValue");

	Params::ABP_ExplosionAttackBase_C_GetEffectValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetEffectType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalAdditionalEffectTypeEffect                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::GetEffectType(enum class EPalAdditionalEffectType* Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "GetEffectType");

	Params::ABP_ExplosionAttackBase_C_GetEffectType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalElementType         Element                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::GetElement(enum class EPalElementType* Element)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "GetElement");

	Params::ABP_ExplosionAttackBase_C_GetElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Element != nullptr)
		*Element = Parms.Element;

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.FindAttacker
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Attacker                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              K2Node_DynamicCast_AsPal_Weapon_Base                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetWeaponAttacker_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::FindAttacker(class AActor** Attacker, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class APalWeaponBase* K2Node_DynamicCast_AsPal_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetWeaponAttacker_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "FindAttacker");

	Params::ABP_ExplosionAttackBase_C_FindAttacker_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Weapon_Base = K2Node_DynamicCast_AsPal_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponAttacker_ReturnValue = CallFunc_GetWeaponAttacker_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Attacker != nullptr)
		*Attacker = Parms.Attacker;

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.GetWeaponAttackType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalAttackType          AttackType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::GetWeaponAttackType(enum class EPalAttackType* AttackType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "GetWeaponAttackType");

	Params::ABP_ExplosionAttackBase_C_GetWeaponAttackType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AttackType != nullptr)
		*AttackType = Parms.AttackType;

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetBlowPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewBlowPower                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::SetBlowPower(double NewBlowPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "SetBlowPower");

	Params::ABP_ExplosionAttackBase_C_SetBlowPower_Params Parms{};

	Parms.NewBlowPower = NewBlowPower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::SetRadius(int32 NewParam, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "SetRadius");

	Params::ABP_ExplosionAttackBase_C_SetRadius_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SnakeRate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::SetPower(int32 NewParam, double SnakeRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "SetPower");

	Params::ABP_ExplosionAttackBase_C_SetPower_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.SnakeRate = SnakeRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.OnHit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyHitComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherHitActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherHitComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      FoliageIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HitCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OwnerCharacter                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Attackable_Friend_IsFriendAttack                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Attack_Able_IsHit                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Attackable_Friend_IsFriendAttack_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalAdditionalEffectTypeCallFunc_GetEffectType_Effect                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEffectValue_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         CallFunc_GetElement_Element                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindAttacker_Attacker                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAttackType          CallFunc_GetWeaponAttackType_AttackType                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_GetOverlapFoliageIndexByComponent_ReturnValue           (ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalcBlowVelocity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalMakeDamageInfo          K2Node_MakeStruct_PalMakeDamageInfo                              (ContainsInstancedReference)
// struct FPalDamageInfo              CallFunc_MakeDamageInfo_ReturnValue                              (None)
// float                              K2Node_MakeStruct_SneakAttackRate_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::OnHit(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount, class AActor* OwnerCharacter, bool CallFunc_Get_Attackable_Friend_IsFriendAttack, bool CallFunc_Is_Attack_Able_IsHit, bool CallFunc_Get_Attackable_Friend_IsFriendAttack_1, enum class EPalAdditionalEffectType CallFunc_GetEffectType_Effect, int32 CallFunc_GetEffectValue_Value, enum class EPalElementType CallFunc_GetElement_Element, class AActor* CallFunc_FindAttacker_Attacker, enum class EPalAttackType CallFunc_GetWeaponAttackType_AttackType, TArray<int32>& CallFunc_GetOverlapFoliageIndexByComponent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_CalcBlowVelocity_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FPalMakeDamageInfo& K2Node_MakeStruct_PalMakeDamageInfo, const struct FPalDamageInfo& CallFunc_MakeDamageInfo_ReturnValue, float K2Node_MakeStruct_SneakAttackRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "OnHit");

	Params::ABP_ExplosionAttackBase_C_OnHit_Params Parms{};

	Parms.MyHitComponent = MyHitComponent;
	Parms.OtherHitActor = OtherHitActor;
	Parms.OtherHitComponent = OtherHitComponent;
	Parms.FoliageIndex = FoliageIndex;
	Parms.HitLocation = HitLocation;
	Parms.HitCount = HitCount;
	Parms.OwnerCharacter = OwnerCharacter;
	Parms.CallFunc_Get_Attackable_Friend_IsFriendAttack = CallFunc_Get_Attackable_Friend_IsFriendAttack;
	Parms.CallFunc_Is_Attack_Able_IsHit = CallFunc_Is_Attack_Able_IsHit;
	Parms.CallFunc_Get_Attackable_Friend_IsFriendAttack_1 = CallFunc_Get_Attackable_Friend_IsFriendAttack_1;
	Parms.CallFunc_GetEffectType_Effect = CallFunc_GetEffectType_Effect;
	Parms.CallFunc_GetEffectValue_Value = CallFunc_GetEffectValue_Value;
	Parms.CallFunc_GetElement_Element = CallFunc_GetElement_Element;
	Parms.CallFunc_FindAttacker_Attacker = CallFunc_FindAttacker_Attacker;
	Parms.CallFunc_GetWeaponAttackType_AttackType = CallFunc_GetWeaponAttackType_AttackType;
	Parms.CallFunc_GetOverlapFoliageIndexByComponent_ReturnValue = CallFunc_GetOverlapFoliageIndexByComponent_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_CalcBlowVelocity_ReturnValue = CallFunc_CalcBlowVelocity_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_MakeStruct_PalMakeDamageInfo = K2Node_MakeStruct_PalMakeDamageInfo;
	Parms.CallFunc_MakeDamageInfo_ReturnValue = CallFunc_MakeDamageInfo_ReturnValue;
	Parms.K2Node_MakeStruct_SneakAttackRate_ImplicitCast = K2Node_MakeStruct_SneakAttackRate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ExplosionAttackBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.DisableCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplosionAttackBase_C::DisableCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "DisableCollision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.SetupHitFilter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplosionAttackBase_C::SetupHitFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "SetupHitFilter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplosionAttackBase.BP_ExplosionAttackBase_C.ExecuteUbergraph_BP_ExplosionAttackBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHitFilter*               CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionAttackBase_C::ExecuteUbergraph_BP_ExplosionAttackBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHitFilter* CallFunc_SpawnObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplosionAttackBase_C", "ExecuteUbergraph_BP_ExplosionAttackBase");

	Params::ABP_ExplosionAttackBase_C_ExecuteUbergraph_BP_ExplosionAttackBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


