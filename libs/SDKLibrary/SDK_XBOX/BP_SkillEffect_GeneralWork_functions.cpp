#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_GeneralWork.BP_SkillEffect_GeneralWork_C
// (Actor)

class UClass* ABP_SkillEffect_GeneralWork_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_GeneralWork_C");

	return Clss;
}


// BP_SkillEffect_GeneralWork_C BP_SkillEffect_GeneralWork.Default__BP_SkillEffect_GeneralWork_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_GeneralWork_C* ABP_SkillEffect_GeneralWork_C::GetDefaultObj()
{
	static class ABP_SkillEffect_GeneralWork_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_GeneralWork_C*>(ABP_SkillEffect_GeneralWork_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkillEffect_GeneralWork.BP_SkillEffect_GeneralWork_C.SetupCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetLocationPoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_GeneralWork_C::SetupCollision(const struct FVector& TargetLocationPoint, const struct FVector& ImpactPoint, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_GeneralWork_C", "SetupCollision");

	Params::ABP_SkillEffect_GeneralWork_C_SetupCollision_Params Parms{};

	Parms.TargetLocationPoint = TargetLocationPoint;
	Parms.ImpactPoint = ImpactPoint;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_GeneralWork.BP_SkillEffect_GeneralWork_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_GeneralWork_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_GeneralWork_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_GeneralWork.BP_SkillEffect_GeneralWork_C.EnableCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_GeneralWork_C::EnableCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_GeneralWork_C", "EnableCollision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_GeneralWork.BP_SkillEffect_GeneralWork_C.EndCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_GeneralWork_C::EndCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_GeneralWork_C", "EndCollision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_GeneralWork.BP_SkillEffect_GeneralWork_C.ExecuteUbergraph_BP_SkillEffect_GeneralWork
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_GeneralWork_C::ExecuteUbergraph_BP_SkillEffect_GeneralWork(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_GeneralWork_C", "ExecuteUbergraph_BP_SkillEffect_GeneralWork");

	Params::ABP_SkillEffect_GeneralWork_C_ExecuteUbergraph_BP_SkillEffect_GeneralWork_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


