#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BossBattle_BossEliminated.WBP_BossBattle_BossEliminated_C
// (None)

class UClass* UWBP_BossBattle_BossEliminated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BossBattle_BossEliminated_C");

	return Clss;
}


// WBP_BossBattle_BossEliminated_C WBP_BossBattle_BossEliminated.Default__WBP_BossBattle_BossEliminated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BossBattle_BossEliminated_C* UWBP_BossBattle_BossEliminated_C::GetDefaultObj()
{
	static class UWBP_BossBattle_BossEliminated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BossBattle_BossEliminated_C*>(UWBP_BossBattle_BossEliminated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BossBattle_BossEliminated.WBP_BossBattle_BossEliminated_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BossBattle_BossEliminated_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_BossEliminated_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossBattle_BossEliminated.WBP_BossBattle_BossEliminated_C.ExecuteUbergraph_WBP_BossBattle_BossEliminated
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_BossEliminated_C::ExecuteUbergraph_WBP_BossBattle_BossEliminated(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_BossEliminated_C", "ExecuteUbergraph_WBP_BossBattle_BossEliminated");

	Params::UWBP_BossBattle_BossEliminated_C_ExecuteUbergraph_WBP_BossBattle_BossEliminated_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


