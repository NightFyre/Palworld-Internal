#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionProvocation.BP_ActionProvocation_C
// (None)

class UClass* UBP_ActionProvocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionProvocation_C");

	return Clss;
}


// BP_ActionProvocation_C BP_ActionProvocation.Default__BP_ActionProvocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionProvocation_C* UBP_ActionProvocation_C::GetDefaultObj()
{
	static class UBP_ActionProvocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionProvocation_C*>(UBP_ActionProvocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionProvocation.BP_ActionProvocation_C.ExecuteUbergraph_BP_ActionProvocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionProvocation_C::ExecuteUbergraph_BP_ActionProvocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionProvocation_C", "ExecuteUbergraph_BP_ActionProvocation");

	Params::UBP_ActionProvocation_C_ExecuteUbergraph_BP_ActionProvocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


