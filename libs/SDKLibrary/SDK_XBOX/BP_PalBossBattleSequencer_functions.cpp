#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalBossBattleSequencer.BP_PalBossBattleSequencer_C
// (None)

class UClass* UBP_PalBossBattleSequencer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalBossBattleSequencer_C");

	return Clss;
}


// BP_PalBossBattleSequencer_C BP_PalBossBattleSequencer.Default__BP_PalBossBattleSequencer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalBossBattleSequencer_C* UBP_PalBossBattleSequencer_C::GetDefaultObj()
{
	static class UBP_PalBossBattleSequencer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalBossBattleSequencer_C*>(UBP_PalBossBattleSequencer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalBossBattleSequencer.BP_PalBossBattleSequencer_C.Tick_ForBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalBossBattleSequencer_C::Tick_ForBP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalBossBattleSequencer_C", "Tick_ForBP");

	Params::UBP_PalBossBattleSequencer_C_Tick_ForBP_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalBossBattleSequencer.BP_PalBossBattleSequencer_C.ExecuteUbergraph_BP_PalBossBattleSequencer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalBossBattleSequencer_C::ExecuteUbergraph_BP_PalBossBattleSequencer(int32 EntryPoint, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalBossBattleSequencer_C", "ExecuteUbergraph_BP_PalBossBattleSequencer");

	Params::UBP_PalBossBattleSequencer_C_ExecuteUbergraph_BP_PalBossBattleSequencer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


