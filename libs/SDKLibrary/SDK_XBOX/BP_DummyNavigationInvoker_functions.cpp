#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DummyNavigationInvoker.BP_DummyNavigationInvoker_C
// (Actor)

class UClass* ABP_DummyNavigationInvoker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DummyNavigationInvoker_C");

	return Clss;
}


// BP_DummyNavigationInvoker_C BP_DummyNavigationInvoker.Default__BP_DummyNavigationInvoker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DummyNavigationInvoker_C* ABP_DummyNavigationInvoker_C::GetDefaultObj()
{
	static class ABP_DummyNavigationInvoker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DummyNavigationInvoker_C*>(ABP_DummyNavigationInvoker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DummyNavigationInvoker.BP_DummyNavigationInvoker_C.ExecuteUbergraph_BP_DummyNavigationInvoker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DummyNavigationInvoker_C::ExecuteUbergraph_BP_DummyNavigationInvoker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DummyNavigationInvoker_C", "ExecuteUbergraph_BP_DummyNavigationInvoker");

	Params::ABP_DummyNavigationInvoker_C_ExecuteUbergraph_BP_DummyNavigationInvoker_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


