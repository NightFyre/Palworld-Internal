#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C
// (None)

class UClass* UBP_AIAction_Visitor_WaitInBaseCamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Visitor_WaitInBaseCamp_C");

	return Clss;
}


// BP_AIAction_Visitor_WaitInBaseCamp_C BP_AIAction_Visitor_WaitInBaseCamp.Default__BP_AIAction_Visitor_WaitInBaseCamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Visitor_WaitInBaseCamp_C* UBP_AIAction_Visitor_WaitInBaseCamp_C::GetDefaultObj()
{
	static class UBP_AIAction_Visitor_WaitInBaseCamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Visitor_WaitInBaseCamp_C*>(UBP_AIAction_Visitor_WaitInBaseCamp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_WaitInBaseCamp_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_WaitInBaseCamp_C", "ActionStart");

	Params::UBP_AIAction_Visitor_WaitInBaseCamp_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_WaitInBaseCamp_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_WaitInBaseCamp_C", "ActionTick");

	Params::UBP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_WaitInBaseCamp_C::ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_WaitInBaseCamp_C", "ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp");

	Params::UBP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.OnWaitTimeFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_Visitor_WaitInBaseCamp_C::OnWaitTimeFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_WaitInBaseCamp_C", "OnWaitTimeFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


