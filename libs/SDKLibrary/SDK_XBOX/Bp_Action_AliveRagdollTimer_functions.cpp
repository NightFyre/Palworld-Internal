#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bp_Action_AliveRagdollTimer.Bp_Action_AliveRagdollTimer_C
// (None)

class UClass* UBp_Action_AliveRagdollTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bp_Action_AliveRagdollTimer_C");

	return Clss;
}


// Bp_Action_AliveRagdollTimer_C Bp_Action_AliveRagdollTimer.Default__Bp_Action_AliveRagdollTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBp_Action_AliveRagdollTimer_C* UBp_Action_AliveRagdollTimer_C::GetDefaultObj()
{
	static class UBp_Action_AliveRagdollTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBp_Action_AliveRagdollTimer_C*>(UBp_Action_AliveRagdollTimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bp_Action_AliveRagdollTimer.Bp_Action_AliveRagdollTimer_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBp_Action_AliveRagdollTimer_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bp_Action_AliveRagdollTimer_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bp_Action_AliveRagdollTimer.Bp_Action_AliveRagdollTimer_C.ExecuteUbergraph_Bp_Action_AliveRagdollTimer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBp_Action_AliveRagdollTimer_C::ExecuteUbergraph_Bp_Action_AliveRagdollTimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bp_Action_AliveRagdollTimer_C", "ExecuteUbergraph_Bp_Action_AliveRagdollTimer");

	Params::UBp_Action_AliveRagdollTimer_C_ExecuteUbergraph_Bp_Action_AliveRagdollTimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


