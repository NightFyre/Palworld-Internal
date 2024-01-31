#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalActionBarContent.WBP_PalActionBarContent_C
// (None)

class UClass* UWBP_PalActionBarContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalActionBarContent_C");

	return Clss;
}


// WBP_PalActionBarContent_C WBP_PalActionBarContent.Default__WBP_PalActionBarContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalActionBarContent_C* UWBP_PalActionBarContent_C::GetDefaultObj()
{
	static class UWBP_PalActionBarContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalActionBarContent_C*>(UWBP_PalActionBarContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalActionBarContent.WBP_PalActionBarContent_C.OnUpdateInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PalActionBarContent_C::OnUpdateInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalActionBarContent_C", "OnUpdateInputAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalActionBarContent.WBP_PalActionBarContent_C.ExecuteUbergraph_WBP_PalActionBarContent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalActionBarContent_C::ExecuteUbergraph_WBP_PalActionBarContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalActionBarContent_C", "ExecuteUbergraph_WBP_PalActionBarContent");

	Params::UWBP_PalActionBarContent_C_ExecuteUbergraph_WBP_PalActionBarContent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


