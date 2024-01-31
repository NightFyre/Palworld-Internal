#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_SimpleLeave.BP_AIAction_SimpleLeave_C
// (None)

class UClass* UBP_AIAction_SimpleLeave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_SimpleLeave_C");

	return Clss;
}


// BP_AIAction_SimpleLeave_C BP_AIAction_SimpleLeave.Default__BP_AIAction_SimpleLeave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_SimpleLeave_C* UBP_AIAction_SimpleLeave_C::GetDefaultObj()
{
	static class UBP_AIAction_SimpleLeave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_SimpleLeave_C*>(UBP_AIAction_SimpleLeave_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_SimpleLeave.BP_AIAction_SimpleLeave_C.ForceEndAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_SimpleLeave_C::ForceEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_SimpleLeave_C", "ForceEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_SimpleLeave.BP_AIAction_SimpleLeave_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_SimpleLeave_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_SimpleLeave_C", "ActionTick");

	Params::UBP_AIAction_SimpleLeave_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_SimpleLeave.BP_AIAction_SimpleLeave_C.ExecuteUbergraph_BP_AIAction_SimpleLeave
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_SimpleLeave_C::ExecuteUbergraph_BP_AIAction_SimpleLeave(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsFalling_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_SimpleLeave_C", "ExecuteUbergraph_BP_AIAction_SimpleLeave");

	Params::UBP_AIAction_SimpleLeave_C_ExecuteUbergraph_BP_AIAction_SimpleLeave_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


