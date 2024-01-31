#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Ingame_PlayerGauge_KeyGuide.WBP_Ingame_PlayerGauge_KeyGuide_C
// (None)

class UClass* UWBP_Ingame_PlayerGauge_KeyGuide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Ingame_PlayerGauge_KeyGuide_C");

	return Clss;
}


// WBP_Ingame_PlayerGauge_KeyGuide_C WBP_Ingame_PlayerGauge_KeyGuide.Default__WBP_Ingame_PlayerGauge_KeyGuide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Ingame_PlayerGauge_KeyGuide_C* UWBP_Ingame_PlayerGauge_KeyGuide_C::GetDefaultObj()
{
	static class UWBP_Ingame_PlayerGauge_KeyGuide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Ingame_PlayerGauge_KeyGuide_C*>(UWBP_Ingame_PlayerGauge_KeyGuide_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Ingame_PlayerGauge_KeyGuide.WBP_Ingame_PlayerGauge_KeyGuide_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Ingame_PlayerGauge_KeyGuide_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_KeyGuide_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_PlayerGauge_KeyGuide.WBP_Ingame_PlayerGauge_KeyGuide_C.ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_Ingame_PlayerGauge_KeyGuide_C::ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide(int32 EntryPoint, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_KeyGuide_C", "ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide");

	Params::UWBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


