#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PredictedTarget.BP_PredictedTarget_C
// (Actor)

class UClass* ABP_PredictedTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PredictedTarget_C");

	return Clss;
}


// BP_PredictedTarget_C BP_PredictedTarget.Default__BP_PredictedTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PredictedTarget_C* ABP_PredictedTarget_C::GetDefaultObj()
{
	static class ABP_PredictedTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PredictedTarget_C*>(ABP_PredictedTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PredictedTarget.BP_PredictedTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PredictedTarget_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PredictedTarget_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PredictedTarget.BP_PredictedTarget_C.ExecuteUbergraph_BP_PredictedTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PredictedTarget_C::ExecuteUbergraph_BP_PredictedTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PredictedTarget_C", "ExecuteUbergraph_BP_PredictedTarget");

	Params::ABP_PredictedTarget_C_ExecuteUbergraph_BP_PredictedTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


