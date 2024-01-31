#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CaptureWireBullet.BP_CaptureWireBullet_C
// (Actor)

class UClass* ABP_CaptureWireBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CaptureWireBullet_C");

	return Clss;
}


// BP_CaptureWireBullet_C BP_CaptureWireBullet.Default__BP_CaptureWireBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CaptureWireBullet_C* ABP_CaptureWireBullet_C::GetDefaultObj()
{
	static class ABP_CaptureWireBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CaptureWireBullet_C*>(ABP_CaptureWireBullet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CaptureWireBullet.BP_CaptureWireBullet_C.UpdateRotator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_RotatorFloat_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureWireBullet_C::UpdateRotator(double DeltaTime, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_Multiply_RotatorFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureWireBullet_C", "UpdateRotator");

	Params::ABP_CaptureWireBullet_C_UpdateRotator_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Multiply_RotatorFloat_ReturnValue = CallFunc_Multiply_RotatorFloat_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_Multiply_RotatorFloat_B_ImplicitCast = CallFunc_Multiply_RotatorFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaptureWireBullet.BP_CaptureWireBullet_C.SpawnDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       Guid                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CaptureWire_C*           K2Node_DynamicCast_AsBP_Capture_Wire                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureWireBullet_C::SpawnDelegate(const struct FGuid& Guid, class AActor* Actor, class ABP_CaptureWire_C* K2Node_DynamicCast_AsBP_Capture_Wire, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureWireBullet_C", "SpawnDelegate");

	Params::ABP_CaptureWireBullet_C_SpawnDelegate_Params Parms{};

	Parms.Guid = Guid;
	Parms.Actor = Actor;
	Parms.K2Node_DynamicCast_AsBP_Capture_Wire = K2Node_DynamicCast_AsBP_Capture_Wire;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaptureWireBullet.BP_CaptureWireBullet_C.OnHitToActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CaptureWireBullet_C::OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureWireBullet_C", "OnHitToActor");

	Params::ABP_CaptureWireBullet_C_OnHitToActor_Params Parms{};

	Parms.HitComp = HitComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaptureWireBullet.BP_CaptureWireBullet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureWireBullet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureWireBullet_C", "ReceiveTick");

	Params::ABP_CaptureWireBullet_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaptureWireBullet.BP_CaptureWireBullet_C.ExecuteUbergraph_BP_CaptureWireBullet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_HitComp                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindOwnerPalCharacter_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_SpawnActorBroadcast_SpawnGuid                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnActorBroadcast_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateRotator_DeltaTime_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureWireBullet_C::ExecuteUbergraph_BP_CaptureWireBullet(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_Event_HitComp, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_Hit, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGuid& CallFunc_SpawnActorBroadcast_SpawnGuid, bool CallFunc_SpawnActorBroadcast_ReturnValue, double CallFunc_UpdateRotator_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureWireBullet_C", "ExecuteUbergraph_BP_CaptureWireBullet");

	Params::ABP_CaptureWireBullet_C_ExecuteUbergraph_BP_CaptureWireBullet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_HitComp = K2Node_Event_HitComp;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_FindOwnerPalCharacter_ReturnValue = CallFunc_FindOwnerPalCharacter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnActorBroadcast_SpawnGuid = CallFunc_SpawnActorBroadcast_SpawnGuid;
	Parms.CallFunc_SpawnActorBroadcast_ReturnValue = CallFunc_SpawnActorBroadcast_ReturnValue;
	Parms.CallFunc_UpdateRotator_DeltaTime_ImplicitCast = CallFunc_UpdateRotator_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


