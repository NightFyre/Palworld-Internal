#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C
// (Actor)

class UClass* ABP_NormalStationaryLauncherBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NormalStationaryLauncherBase_C");

	return Clss;
}


// BP_NormalStationaryLauncherBase_C BP_NormalStationaryLauncherBase.Default__BP_NormalStationaryLauncherBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NormalStationaryLauncherBase_C* ABP_NormalStationaryLauncherBase_C::GetDefaultObj()
{
	static class ABP_NormalStationaryLauncherBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NormalStationaryLauncherBase_C*>(ABP_NormalStationaryLauncherBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.OnRep_EnableLauncher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NormalStationaryLauncherBase_C::OnRep_EnableLauncher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "OnRep_EnableLauncher");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetAttackableDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_NormalStationaryLauncherBase_C::GetAttackableDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetAttackableDistance");

	Params::ABP_NormalStationaryLauncherBase_C_GetAttackableDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetMuzzleRotateLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     RotateLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetMuzzleRotateLocation(struct FVector* RotateLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetMuzzleRotateLocation");

	Params::ABP_NormalStationaryLauncherBase_C_GetMuzzleRotateLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RotateLocation != nullptr)
		*RotateLocation = std::move(Parms.RotateLocation);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetRotateMuzzleRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        Muzzle                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetRotateMuzzleRef(class UStaticMeshComponent** Muzzle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetRotateMuzzleRef");

	Params::ABP_NormalStationaryLauncherBase_C_GetRotateMuzzleRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Muzzle != nullptr)
		*Muzzle = Parms.Muzzle;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetAttackableAngle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_NormalStationaryLauncherBase_C::GetAttackableAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetAttackableAngle");

	Params::ABP_NormalStationaryLauncherBase_C_GetAttackableAngle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetPullTriggerInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             PullTriggerInterval                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetPullTriggerInterval(double* PullTriggerInterval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetPullTriggerInterval");

	Params::ABP_NormalStationaryLauncherBase_C_GetPullTriggerInterval_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PullTriggerInterval != nullptr)
		*PullTriggerInterval = Parms.PullTriggerInterval;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetShootNumMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ShootNumMax                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetShootNumMax(int32* ShootNumMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetShootNumMax");

	Params::ABP_NormalStationaryLauncherBase_C_GetShootNumMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShootNumMax != nullptr)
		*ShootNumMax = Parms.ShootNumMax;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetWeaponDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_NormalStationaryLauncherBase_C::GetWeaponDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetWeaponDamage");

	Params::ABP_NormalStationaryLauncherBase_C_GetWeaponDamage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetOwnerCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class APalCharacter* ABP_NormalStationaryLauncherBase_C::GetOwnerCharacter(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetOwnerCharacter");

	Params::ABP_NormalStationaryLauncherBase_C_GetOwnerCharacter_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.SetOwnerCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class APalCharacter>OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::SetOwnerCharacter(TSoftObjectPtr<class APalCharacter> OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "SetOwnerCharacter");

	Params::ABP_NormalStationaryLauncherBase_C_SetOwnerCharacter_Params Parms{};

	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.SetAttackTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::SetAttackTarget(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "SetAttackTarget");

	Params::ABP_NormalStationaryLauncherBase_C_SetAttackTarget_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.SetEnableLauncher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::SetEnableLauncher(bool Enable, bool CallFunc_EqualEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "SetEnableLauncher");

	Params::ABP_NormalStationaryLauncherBase_C_SetEnableLauncher_Params Parms{};

	Parms.Enable = Enable;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.RotatePitchToTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LerpSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::RotatePitchToTarget(const struct FVector& TargetLocation, double LerpSpeed, double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "RotatePitchToTarget");

	Params::ABP_NormalStationaryLauncherBase_C_RotatePitchToTarget_Params Parms{};

	Parms.TargetLocation = TargetLocation;
	Parms.LerpSpeed = LerpSpeed;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GeyEjectionPortTransform
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GeyEjectionPortTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GeyEjectionPortTransform");

	Params::ABP_NormalStationaryLauncherBase_C_GeyEjectionPortTransform_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.Is UseEjectionPort
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsUse                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::Is_UseEjectionPort(bool* IsUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "Is UseEjectionPort");

	Params::ABP_NormalStationaryLauncherBase_C_Is_UseEjectionPort_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsUse != nullptr)
		*IsUse = Parms.IsUse;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.OnSpawnedBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalBullet*                  Bullet                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::OnSpawnedBullet(class APalBullet* Bullet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "OnSpawnedBullet");

	Params::ABP_NormalStationaryLauncherBase_C_OnSpawnedBullet_Params Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetShotAnimation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NormalStationaryLauncherBase_C::GetShotAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetShotAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.OnShoot
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::OnShoot(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "OnShoot");

	Params::ABP_NormalStationaryLauncherBase_C_OnShoot_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetBulletClass
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      NewParam                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetBulletClass(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetBulletClass");

	Params::ABP_NormalStationaryLauncherBase_C_GetBulletClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetBlurAngle
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetBlurAngle");

	Params::ABP_NormalStationaryLauncherBase_C_GetBlurAngle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.CalcShootBlurRotator
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             BlurAngle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    BlurRotator                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Blur                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::CalcShootBlurRotator(double BlurAngle, struct FRotator* BlurRotator, const struct FRotator& Blur, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "CalcShootBlurRotator");

	Params::ABP_NormalStationaryLauncherBase_C_CalcShootBlurRotator_Params Parms{};

	Parms.BlurAngle = BlurAngle;
	Parms.Blur = Blur;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (BlurRotator != nullptr)
		*BlurRotator = std::move(Parms.BlurRotator);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetMuzzleEffectParticle
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UParticleSystem*             Particle_System                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetMuzzleEffectParticle(class UParticleSystem** Particle_System)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetMuzzleEffectParticle");

	Params::ABP_NormalStationaryLauncherBase_C_GetMuzzleEffectParticle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Particle_System != nullptr)
		*Particle_System = Parms.Particle_System;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetMuzzleEffect
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraSystem*              NewParam                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetMuzzleEffect(class UNiagaraSystem** NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetMuzzleEffect");

	Params::ABP_NormalStationaryLauncherBase_C_GetMuzzleEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetMuzzleLocation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     MuzzleLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetMuzzleLocation(struct FVector* MuzzleLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetMuzzleLocation");

	Params::ABP_NormalStationaryLauncherBase_C_GetMuzzleLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MuzzleLocation != nullptr)
		*MuzzleLocation = std::move(Parms.MuzzleLocation);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetMuzzleRotator
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    Rotator                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_NormalStationaryLauncherBase_C::GetMuzzleRotator(struct FRotator* Rotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetMuzzleRotator");

	Params::ABP_NormalStationaryLauncherBase_C_GetMuzzleRotator_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetInitializeInterval
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetInitializeInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetInitializeInterval");

	Params::ABP_NormalStationaryLauncherBase_C_GetInitializeInterval_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.GetShootInterval
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::GetShootInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "GetShootInterval");

	Params::ABP_NormalStationaryLauncherBase_C_GetShootInterval_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.EjectAmmo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GeyEjectionPortTransform_Transform                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_UseEjectionPort_isUse                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Ammo_C*                  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::EjectAmmo(const struct FTransform& CallFunc_GeyEjectionPortTransform_Transform, bool CallFunc_Is_UseEjectionPort_isUse, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Ammo_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "EjectAmmo");

	Params::ABP_NormalStationaryLauncherBase_C_EjectAmmo_Params Parms{};

	Parms.CallFunc_GeyEjectionPortTransform_Transform = CallFunc_GeyEjectionPortTransform_Transform;
	Parms.CallFunc_Is_UseEjectionPort_isUse = CallFunc_Is_UseEjectionPort_isUse;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.ShootBulletInternal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Blur                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Local_SocketTransform                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWeaponDamage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetMuzzleRotator_Rotator                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetBulletClass_NewParam                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetBlurAngle_Angle                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_CalcShootBlurRotator_BlurRotator                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetMuzzleLocation_MuzzleLocation                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalBullet*                  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::ShootBulletInternal(const struct FRotator& Blur, const struct FVector& Local_SocketTransform, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, int32 CallFunc_GetWeaponDamage_ReturnValue, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator, class UClass* CallFunc_GetBulletClass_NewParam, double CallFunc_GetBlurAngle_Angle, const struct FRotator& CallFunc_CalcShootBlurRotator_BlurRotator, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APalBullet* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "ShootBulletInternal");

	Params::ABP_NormalStationaryLauncherBase_C_ShootBulletInternal_Params Parms{};

	Parms.Blur = Blur;
	Parms.Local_SocketTransform = Local_SocketTransform;
	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_GetWeaponDamage_ReturnValue = CallFunc_GetWeaponDamage_ReturnValue;
	Parms.CallFunc_GetMuzzleRotator_Rotator = CallFunc_GetMuzzleRotator_Rotator;
	Parms.CallFunc_GetBulletClass_NewParam = CallFunc_GetBulletClass_NewParam;
	Parms.CallFunc_GetBlurAngle_Angle = CallFunc_GetBlurAngle_Angle;
	Parms.CallFunc_CalcShootBlurRotator_BlurRotator = CallFunc_CalcShootBlurRotator_BlurRotator;
	Parms.CallFunc_GetMuzzleLocation_MuzzleLocation = CallFunc_GetMuzzleLocation_MuzzleLocation;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.PlayMuzzleEffectParticle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             CallFunc_GetMuzzleEffectParticle_Particle_System                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetMuzzleEffectParticle_Particle_System_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetMuzzleRotator_Rotator                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMuzzleLocation_MuzzleLocation                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::PlayMuzzleEffectParticle(class UParticleSystem* CallFunc_GetMuzzleEffectParticle_Particle_System, class UParticleSystem* CallFunc_GetMuzzleEffectParticle_Particle_System_1, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "PlayMuzzleEffectParticle");

	Params::ABP_NormalStationaryLauncherBase_C_PlayMuzzleEffectParticle_Params Parms{};

	Parms.CallFunc_GetMuzzleEffectParticle_Particle_System = CallFunc_GetMuzzleEffectParticle_Particle_System;
	Parms.CallFunc_GetMuzzleEffectParticle_Particle_System_1 = CallFunc_GetMuzzleEffectParticle_Particle_System_1;
	Parms.CallFunc_GetMuzzleRotator_Rotator = CallFunc_GetMuzzleRotator_Rotator;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMuzzleLocation_MuzzleLocation = CallFunc_GetMuzzleLocation_MuzzleLocation;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.PlayShootEffect
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              CallFunc_GetMuzzleEffect_NewParam                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetMuzzleRotator_Rotator                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMuzzleLocation_MuzzleLocation                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_GetMuzzleEffect_NewParam_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::PlayShootEffect(class UNiagaraSystem* CallFunc_GetMuzzleEffect_NewParam, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation, class UNiagaraSystem* CallFunc_GetMuzzleEffect_NewParam_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "PlayShootEffect");

	Params::ABP_NormalStationaryLauncherBase_C_PlayShootEffect_Params Parms{};

	Parms.CallFunc_GetMuzzleEffect_NewParam = CallFunc_GetMuzzleEffect_NewParam;
	Parms.CallFunc_GetMuzzleRotator_Rotator = CallFunc_GetMuzzleRotator_Rotator;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMuzzleLocation_MuzzleLocation = CallFunc_GetMuzzleLocation_MuzzleLocation;
	Parms.CallFunc_GetMuzzleEffect_NewParam_1 = CallFunc_GetMuzzleEffect_NewParam_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.ShootBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShootNumMax_ShootNumMax                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::ShootBullet(class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, int32 CallFunc_GetShootNumMax_ShootNumMax, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "ShootBullet");

	Params::ABP_NormalStationaryLauncherBase_C_ShootBullet_Params Parms{};

	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_GetShootNumMax_ShootNumMax = CallFunc_GetShootNumMax_ShootNumMax;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.OnPullTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NormalStationaryLauncherBase_C::OnPullTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "OnPullTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.OnReleaseTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NormalStationaryLauncherBase_C::OnReleaseTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "OnReleaseTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "ReceiveTick");

	Params::ABP_NormalStationaryLauncherBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NormalStationaryLauncherBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C.ExecuteUbergraph_BP_NormalStationaryLauncherBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetShootInterval_Time                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetInitializeInterval_Time                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShootNumMax_ShootNumMax                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPullTriggerInterval_PullTriggerInterval              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPullTriggerInterval_PullTriggerInterval_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalStationaryLauncherBase_C::ExecuteUbergraph_BP_NormalStationaryLauncherBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_GetShootInterval_Time, double CallFunc_GetInitializeInterval_Time, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_GetShootNumMax_ShootNumMax, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetPullTriggerInterval_PullTriggerInterval, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, double CallFunc_GetPullTriggerInterval_PullTriggerInterval_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalStationaryLauncherBase_C", "ExecuteUbergraph_BP_NormalStationaryLauncherBase");

	Params::ABP_NormalStationaryLauncherBase_C_ExecuteUbergraph_BP_NormalStationaryLauncherBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetShootInterval_Time = CallFunc_GetShootInterval_Time;
	Parms.CallFunc_GetInitializeInterval_Time = CallFunc_GetInitializeInterval_Time;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetShootNumMax_ShootNumMax = CallFunc_GetShootNumMax_ShootNumMax;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_2 = CallFunc_GetGameTimeInSeconds_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetPullTriggerInterval_PullTriggerInterval = CallFunc_GetPullTriggerInterval_PullTriggerInterval;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_1 = CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	Parms.CallFunc_GetPullTriggerInterval_PullTriggerInterval_1 = CallFunc_GetPullTriggerInterval_PullTriggerInterval_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


