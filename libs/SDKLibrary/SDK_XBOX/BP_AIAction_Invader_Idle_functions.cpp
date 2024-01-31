#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Invader_Idle.BP_AIAction_Invader_Idle_C
// (None)

class UClass* UBP_AIAction_Invader_Idle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Invader_Idle_C");

	return Clss;
}


// BP_AIAction_Invader_Idle_C BP_AIAction_Invader_Idle.Default__BP_AIAction_Invader_Idle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Invader_Idle_C* UBP_AIAction_Invader_Idle_C::GetDefaultObj()
{
	static class UBP_AIAction_Invader_Idle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Invader_Idle_C*>(UBP_AIAction_Invader_Idle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Invader_Idle.BP_AIAction_Invader_Idle_C.ExecuteUbergraph_BP_AIAction_Invader_Idle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_Idle_C::ExecuteUbergraph_BP_AIAction_Invader_Idle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Invader_Idle_C", "ExecuteUbergraph_BP_AIAction_Invader_Idle");

	Params::UBP_AIAction_Invader_Idle_C_ExecuteUbergraph_BP_AIAction_Invader_Idle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


