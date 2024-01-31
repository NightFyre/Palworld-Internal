#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CookingFryingPan.BP_CookingFryingPan_C
// (Actor)

class UClass* ABP_CookingFryingPan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CookingFryingPan_C");

	return Clss;
}


// BP_CookingFryingPan_C BP_CookingFryingPan.Default__BP_CookingFryingPan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CookingFryingPan_C* ABP_CookingFryingPan_C::GetDefaultObj()
{
	static class ABP_CookingFryingPan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CookingFryingPan_C*>(ABP_CookingFryingPan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CookingFryingPan.BP_CookingFryingPan_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CookingFryingPan_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingFryingPan_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CookingFryingPan.BP_CookingFryingPan_C.ExecuteUbergraph_BP_CookingFryingPan
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CookingFryingPan_C::ExecuteUbergraph_BP_CookingFryingPan(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingFryingPan_C", "ExecuteUbergraph_BP_CookingFryingPan");

	Params::ABP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


