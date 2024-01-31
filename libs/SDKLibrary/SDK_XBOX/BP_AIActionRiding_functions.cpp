#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionRiding.BP_AIActionRiding_C
// (None)

class UClass* UBP_AIActionRiding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionRiding_C");

	return Clss;
}


// BP_AIActionRiding_C BP_AIActionRiding.Default__BP_AIActionRiding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionRiding_C* UBP_AIActionRiding_C::GetDefaultObj()
{
	static class UBP_AIActionRiding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionRiding_C*>(UBP_AIActionRiding_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIActionRiding.BP_AIActionRiding_C.SetRidingCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               RidingCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRiding_C::SetRidingCharacter(class APalCharacter* RidingCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionRiding_C", "SetRidingCharacter");

	Params::UBP_AIActionRiding_C_SetRidingCharacter_Params Parms{};

	Parms.RidingCharacter = RidingCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionRiding.BP_AIActionRiding_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRiding_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionRiding_C", "ActionStart");

	Params::UBP_AIActionRiding_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionRiding.BP_AIActionRiding_C.OnCoopReleaseDelegate_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIActionRiding_C::OnCoopReleaseDelegate______0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionRiding_C", "OnCoopReleaseDelegate_¤ÙóÈ_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionRiding.BP_AIActionRiding_C.ExecuteUbergraph_BP_AIActionRiding
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalRiderComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOff_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalRideMarkerComponent*     CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalRiderComponent*          CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Ride_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionRiding_C::ExecuteUbergraph_BP_AIActionRiding(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetOff_ReturnValue, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_Ride_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionRiding_C", "ExecuteUbergraph_BP_AIActionRiding");

	Params::UBP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOff_ReturnValue = CallFunc_GetOff_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_Ride_ReturnValue = CallFunc_Ride_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


