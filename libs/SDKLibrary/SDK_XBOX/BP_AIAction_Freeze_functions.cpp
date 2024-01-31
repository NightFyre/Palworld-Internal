#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Freeze.BP_AIAction_Freeze_C
// (None)

class UClass* UBP_AIAction_Freeze_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Freeze_C");

	return Clss;
}


// BP_AIAction_Freeze_C BP_AIAction_Freeze.Default__BP_AIAction_Freeze_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Freeze_C* UBP_AIAction_Freeze_C::GetDefaultObj()
{
	static class UBP_AIAction_Freeze_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Freeze_C*>(UBP_AIAction_Freeze_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Freeze.BP_AIAction_Freeze_C.ExecuteUbergraph_BP_AIAction_Freeze
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Freeze_C::ExecuteUbergraph_BP_AIAction_Freeze(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Freeze_C", "ExecuteUbergraph_BP_AIAction_Freeze");

	Params::UBP_AIAction_Freeze_C_ExecuteUbergraph_BP_AIAction_Freeze_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


