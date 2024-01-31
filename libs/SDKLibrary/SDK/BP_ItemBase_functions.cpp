#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemBase.BP_ItemBase_C
// (Actor)

class UClass* ABP_ItemBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemBase_C");

	return Clss;
}


// BP_ItemBase_C BP_ItemBase.Default__BP_ItemBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemBase_C* ABP_ItemBase_C::GetDefaultObj()
{
	static class ABP_ItemBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemBase_C*>(ABP_ItemBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemBase.BP_ItemBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemBase.BP_ItemBase_C.ExecuteUbergraph_BP_ItemBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemBase_C::ExecuteUbergraph_BP_ItemBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemBase_C", "ExecuteUbergraph_BP_ItemBase");

	Params::ABP_ItemBase_C_ExecuteUbergraph_BP_ItemBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


