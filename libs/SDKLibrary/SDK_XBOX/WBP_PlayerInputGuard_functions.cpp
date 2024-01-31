#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerInputGuard.WBP_PlayerInputGuard_C
// (None)

class UClass* UWBP_PlayerInputGuard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerInputGuard_C");

	return Clss;
}


// WBP_PlayerInputGuard_C WBP_PlayerInputGuard.Default__WBP_PlayerInputGuard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerInputGuard_C* UWBP_PlayerInputGuard_C::GetDefaultObj()
{
	static class UWBP_PlayerInputGuard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerInputGuard_C*>(UWBP_PlayerInputGuard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerInputGuard.WBP_PlayerInputGuard_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerInputGuard_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInputGuard_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerInputGuard.WBP_PlayerInputGuard_C.ExecuteUbergraph_WBP_PlayerInputGuard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInputGuard_C::ExecuteUbergraph_WBP_PlayerInputGuard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerInputGuard_C", "ExecuteUbergraph_WBP_PlayerInputGuard");

	Params::UWBP_PlayerInputGuard_C_ExecuteUbergraph_WBP_PlayerInputGuard_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


