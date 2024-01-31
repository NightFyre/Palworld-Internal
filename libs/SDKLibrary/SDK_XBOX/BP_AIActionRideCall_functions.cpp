#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionRideCall.BP_AIActionRideCall_C
// (None)

class UClass* UBP_AIActionRideCall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionRideCall_C");

	return Clss;
}


// BP_AIActionRideCall_C BP_AIActionRideCall.Default__BP_AIActionRideCall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionRideCall_C* UBP_AIActionRideCall_C::GetDefaultObj()
{
	static class UBP_AIActionRideCall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionRideCall_C*>(UBP_AIActionRideCall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIActionRideCall.BP_AIActionRideCall_C.CanRide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanRide                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalRiderComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDisableRide_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRideCall_C::CanRide(bool* CanRide, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDisableRide_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionRideCall_C", "CanRide");

	Params::UBP_AIActionRideCall_C_CanRide_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDisableRide_ReturnValue = CallFunc_IsDisableRide_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanRide != nullptr)
		*CanRide = Parms.CanRide;

}


// Function BP_AIActionRideCall.BP_AIActionRideCall_C.DoRide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIActionRiding_C*        CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PushChildAction_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRideCall_C::DoRide(class APawn* ControlledPawn, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBP_AIActionRiding_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PushChildAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionRideCall_C", "DoRide");

	Params::UBP_AIActionRideCall_C_DoRide_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_PushChildAction_ReturnValue = CallFunc_PushChildAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionRideCall.BP_AIActionRideCall_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRideCall_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionRideCall_C", "ActionTick");

	Params::UBP_AIActionRideCall_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionRideCall.BP_AIActionRideCall_C.ExecuteUbergraph_BP_AIActionRideCall
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanRide_CanRide                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCharacterRadius_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCharacterRadius_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractingPlayer_IsInteracting                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsNearTwoActor_distance_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRideCall_C::ExecuteUbergraph_BP_AIActionRideCall(int32 EntryPoint, bool CallFunc_CanRide_CanRide, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, float CallFunc_GetCharacterRadius_ReturnValue, float CallFunc_GetCharacterRadius_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsInteractingPlayer_IsInteracting, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_IsNearTwoActor_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_IsNearTwoActor_distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionRideCall_C", "ExecuteUbergraph_BP_AIActionRideCall");

	Params::UBP_AIActionRideCall_C_ExecuteUbergraph_BP_AIActionRideCall_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CanRide_CanRide = CallFunc_CanRide_CanRide;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetCharacterRadius_ReturnValue = CallFunc_GetCharacterRadius_ReturnValue;
	Parms.CallFunc_GetCharacterRadius_ReturnValue_1 = CallFunc_GetCharacterRadius_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsInteractingPlayer_IsInteracting = CallFunc_IsInteractingPlayer_IsInteracting;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsNearTwoActor_ReturnValue = CallFunc_IsNearTwoActor_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_IsNearTwoActor_distance_ImplicitCast = CallFunc_IsNearTwoActor_distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


