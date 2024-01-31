#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C
// (Actor)

class UClass* ABP_PalBiomeTriggerBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalBiomeTriggerBox_C");

	return Clss;
}


// BP_PalBiomeTriggerBox_C BP_PalBiomeTriggerBox.Default__BP_PalBiomeTriggerBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalBiomeTriggerBox_C* ABP_PalBiomeTriggerBox_C::GetDefaultObj()
{
	static class ABP_PalBiomeTriggerBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalBiomeTriggerBox_C*>(ABP_PalBiomeTriggerBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PalBiomeTriggerBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalBiomeTriggerBox_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalBiomeTriggerBox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalBiomeTriggerBox_C", "ReceiveActorBeginOverlap");

	Params::ABP_PalBiomeTriggerBox_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalBiomeTriggerBox_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalBiomeTriggerBox_C", "ReceiveActorEndOverlap");

	Params::ABP_PalBiomeTriggerBox_C_ReceiveActorEndOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ExecuteUbergraph_BP_PalBiomeTriggerBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalBiomeType           CallFunc_GetBiomeType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlActor_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalBiomeTriggerBox_C::ExecuteUbergraph_BP_PalBiomeTriggerBox(int32 EntryPoint, class AActor* K2Node_Event_OtherActor_1, enum class EPalBiomeType CallFunc_GetBiomeType_ReturnValue, bool CallFunc_IsPlayerControlActor_ReturnValue, class AActor* K2Node_Event_OtherActor, bool CallFunc_IsPlayerControlActor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalBiomeTriggerBox_C", "ExecuteUbergraph_BP_PalBiomeTriggerBox");

	Params::ABP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor_1 = K2Node_Event_OtherActor_1;
	Parms.CallFunc_GetBiomeType_ReturnValue = CallFunc_GetBiomeType_ReturnValue;
	Parms.CallFunc_IsPlayerControlActor_ReturnValue = CallFunc_IsPlayerControlActor_ReturnValue;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.CallFunc_IsPlayerControlActor_ReturnValue_1 = CallFunc_IsPlayerControlActor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


