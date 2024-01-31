#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C
// (None)

class UClass* UWBP_MainMenu_Pal_WorkIconText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Pal_WorkIconText_C");

	return Clss;
}


// WBP_MainMenu_Pal_WorkIconText_C WBP_MainMenu_Pal_WorkIconText.Default__WBP_MainMenu_Pal_WorkIconText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Pal_WorkIconText_C* UWBP_MainMenu_Pal_WorkIconText_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Pal_WorkIconText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Pal_WorkIconText_C*>(UWBP_MainMenu_Pal_WorkIconText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.SetSuitability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWorkSuitability     Suitability                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_GetWorkSuitabilityName_outName                          (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_WorkIconText_C::SetSuitability(enum class EPalWorkSuitability Suitability, int32 Rank, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_GetWorkSuitabilityName_outName, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIconText_C", "SetSuitability");

	Params::UWBP_MainMenu_Pal_WorkIconText_C_SetSuitability_Params Parms{};

	Parms.Suitability = Suitability;
	Parms.Rank = Rank;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetWorkSuitabilityName_outName = CallFunc_GetWorkSuitabilityName_outName;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.AnmEvent_OffToOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_WorkIconText_C::AnmEvent_OffToOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIconText_C", "AnmEvent_OffToOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.AnmEvent_ForceOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_WorkIconText_C::AnmEvent_ForceOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIconText_C", "AnmEvent_ForceOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_WorkIconText_C::ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIconText_C", "ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText");

	Params::UWBP_MainMenu_Pal_WorkIconText_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


