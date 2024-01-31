#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AttackBulletBase.BP_AttackBulletBase_C
// (Actor)

class UClass* ABP_AttackBulletBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AttackBulletBase_C");

	return Clss;
}


// BP_AttackBulletBase_C BP_AttackBulletBase.Default__BP_AttackBulletBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AttackBulletBase_C* ABP_AttackBulletBase_C::GetDefaultObj()
{
	static class ABP_AttackBulletBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AttackBulletBase_C*>(ABP_AttackBulletBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.SetBulletHoleDecal
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              LifeSpan                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FadeScreenSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetBulletHoleDecal_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_AttackBulletBase_C::SetBulletHoleDecal(struct FHitResult& Hit, float LifeSpan, float FadeTime, float FadeScreenSize, bool CallFunc_SetBulletHoleDecal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "SetBulletHoleDecal");

	Params::ABP_AttackBulletBase_C_SetBulletHoleDecal_Params Parms{};

	Parms.Hit = Hit;
	Parms.LifeSpan = LifeSpan;
	Parms.FadeTime = FadeTime;
	Parms.FadeScreenSize = FadeScreenSize;
	Parms.CallFunc_SetBulletHoleDecal_ReturnValue = CallFunc_SetBulletHoleDecal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetOverrideNetworkOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::GetOverrideNetworkOwner(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "GetOverrideNetworkOwner");

	Params::ABP_AttackBulletBase_C_GetOverrideNetworkOwner_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetEffectValue
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::GetEffectValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "GetEffectValue");

	Params::ABP_AttackBulletBase_C_GetEffectValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetEffectType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalAdditionalEffectTypeEffect                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::GetEffectType(enum class EPalAdditionalEffectType* Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "GetEffectType");

	Params::ABP_AttackBulletBase_C_GetEffectType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetExplosionClass
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ExplosionClass                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::GetExplosionClass(class UClass** ExplosionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "GetExplosionClass");

	Params::ABP_AttackBulletBase_C_GetExplosionClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExplosionClass != nullptr)
		*ExplosionClass = Parms.ExplosionClass;

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetBulletAttackType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalAttackType          AttackType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::GetBulletAttackType(enum class EPalAttackType* AttackType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "GetBulletAttackType");

	Params::ABP_AttackBulletBase_C_GetBulletAttackType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AttackType != nullptr)
		*AttackType = Parms.AttackType;

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.SpawnBulletHole
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit_Result                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetBulletHoleDecal_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::SpawnBulletHole(const struct FHitResult& Hit_Result, bool CallFunc_SetBulletHoleDecal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "SpawnBulletHole");

	Params::ABP_AttackBulletBase_C_SpawnBulletHole_Params Parms{};

	Parms.Hit_Result = Hit_Result;
	Parms.CallFunc_SetBulletHoleDecal_ReturnValue = CallFunc_SetBulletHoleDecal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetOwnerActor
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::GetOwnerActor(class AActor** OwnerActor, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "GetOwnerActor");

	Params::ABP_AttackBulletBase_C_GetOwnerActor_Params Parms{};

	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerActor != nullptr)
		*OwnerActor = Parms.OwnerActor;

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.OnHitToActor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FPalSpecialAttackRateInfo>AttackRateInfo                                                   (Edit, BlueprintVisible)
// TArray<struct FPalSpecialAttackRateInfo>K2Node_MakeArray_Array                                           (ReferenceParm)
// class AActor*                      CallFunc_GetOverrideNetworkOwner_Actor                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAdditionalEffectTypeCallFunc_GetEffectType_Effect                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEffectValue_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalAttackType          CallFunc_GetBulletAttackType_AttackType                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDecayDamageRate_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDecayDamageRate_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwnerActor_OwnerActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwnerActor_OwnerActor_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSneakAttackRate_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWeaponDamage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         CallFunc_GetBulletElementType_NewParam                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalMakeDamageInfo          K2Node_MakeStruct_PalMakeDamageInfo                              (ContainsInstancedReference)
// struct FPalDamageInfo              CallFunc_MakeDamageInfo_ReturnValue                              (None)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& Hit, const TArray<struct FPalSpecialAttackRateInfo>& AttackRateInfo, TArray<struct FPalSpecialAttackRateInfo>& K2Node_MakeArray_Array, class AActor* CallFunc_GetOverrideNetworkOwner_Actor, enum class EPalAdditionalEffectType CallFunc_GetEffectType_Effect, int32 CallFunc_GetEffectValue_Value, enum class EPalAttackType CallFunc_GetBulletAttackType_AttackType, float CallFunc_GetDecayDamageRate_ReturnValue, float CallFunc_GetDecayDamageRate_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwnerActor_OwnerActor, class AActor* CallFunc_GetOwnerActor_OwnerActor_1, float CallFunc_GetSneakAttackRate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, int32 CallFunc_GetWeaponDamage_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, enum class EPalElementType CallFunc_GetBulletElementType_NewParam, const struct FPalMakeDamageInfo& K2Node_MakeStruct_PalMakeDamageInfo, const struct FPalDamageInfo& CallFunc_MakeDamageInfo_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "OnHitToActor");

	Params::ABP_AttackBulletBase_C_OnHitToActor_Params Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.Hit = Hit;
	Parms.AttackRateInfo = AttackRateInfo;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetOverrideNetworkOwner_Actor = CallFunc_GetOverrideNetworkOwner_Actor;
	Parms.CallFunc_GetEffectType_Effect = CallFunc_GetEffectType_Effect;
	Parms.CallFunc_GetEffectValue_Value = CallFunc_GetEffectValue_Value;
	Parms.CallFunc_GetBulletAttackType_AttackType = CallFunc_GetBulletAttackType_AttackType;
	Parms.CallFunc_GetDecayDamageRate_ReturnValue = CallFunc_GetDecayDamageRate_ReturnValue;
	Parms.CallFunc_GetDecayDamageRate_ReturnValue_1 = CallFunc_GetDecayDamageRate_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwnerActor_OwnerActor = CallFunc_GetOwnerActor_OwnerActor;
	Parms.CallFunc_GetOwnerActor_OwnerActor_1 = CallFunc_GetOwnerActor_OwnerActor_1;
	Parms.CallFunc_GetSneakAttackRate_ReturnValue = CallFunc_GetSneakAttackRate_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.CallFunc_GetWeaponDamage_ReturnValue = CallFunc_GetWeaponDamage_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetBulletElementType_NewParam = CallFunc_GetBulletElementType_NewParam;
	Parms.K2Node_MakeStruct_PalMakeDamageInfo = K2Node_MakeStruct_PalMakeDamageInfo;
	Parms.CallFunc_MakeDamageInfo_ReturnValue = CallFunc_MakeDamageInfo_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.GetBulletElementType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalElementType         NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::GetBulletElementType(enum class EPalElementType* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "GetBulletElementType");

	Params::ABP_AttackBulletBase_C_GetBulletElementType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "ReceiveTick");

	Params::ABP_AttackBulletBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttackBulletBase.BP_AttackBulletBase_C.ExecuteUbergraph_BP_AttackBulletBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttackBulletBase_C::ExecuteUbergraph_BP_AttackBulletBase(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttackBulletBase_C", "ExecuteUbergraph_BP_AttackBulletBase");

	Params::ABP_AttackBulletBase_C_ExecuteUbergraph_BP_AttackBulletBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


