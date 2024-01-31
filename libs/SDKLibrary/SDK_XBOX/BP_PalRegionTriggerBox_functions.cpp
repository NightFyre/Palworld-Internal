#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRegionTriggerBox.BP_PalRegionTriggerBox_C
// (Actor)

class UClass* ABP_PalRegionTriggerBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRegionTriggerBox_C");

	return Clss;
}


// BP_PalRegionTriggerBox_C BP_PalRegionTriggerBox.Default__BP_PalRegionTriggerBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalRegionTriggerBox_C* ABP_PalRegionTriggerBox_C::GetDefaultObj()
{
	static class ABP_PalRegionTriggerBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalRegionTriggerBox_C*>(ABP_PalRegionTriggerBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalRegionTriggerBox.BP_PalRegionTriggerBox_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRegionTriggerBox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRegionTriggerBox_C", "ReceiveActorBeginOverlap");

	Params::ABP_PalRegionTriggerBox_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalRegionTriggerBox.BP_PalRegionTriggerBox_C.ExecuteUbergraph_BP_PalRegionTriggerBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalRegionTriggerBox_C::ExecuteUbergraph_BP_PalRegionTriggerBox(int32 EntryPoint, class AActor* K2Node_Event_OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalRegionTriggerBox_C", "ExecuteUbergraph_BP_PalRegionTriggerBox");

	Params::ABP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


