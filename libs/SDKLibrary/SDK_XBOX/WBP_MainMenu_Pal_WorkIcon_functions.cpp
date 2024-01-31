#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_WorkIcon.WBP_MainMenu_Pal_WorkIcon_C
// (None)

class UClass* UWBP_MainMenu_Pal_WorkIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Pal_WorkIcon_C");

	return Clss;
}


// WBP_MainMenu_Pal_WorkIcon_C WBP_MainMenu_Pal_WorkIcon.Default__WBP_MainMenu_Pal_WorkIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Pal_WorkIcon_C* UWBP_MainMenu_Pal_WorkIcon_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Pal_WorkIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Pal_WorkIcon_C*>(UWBP_MainMenu_Pal_WorkIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Pal_WorkIcon.WBP_MainMenu_Pal_WorkIcon_C.SetRankup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_WorkIcon_C::SetRankup(bool Enable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIcon_C", "SetRankup");

	Params::UWBP_MainMenu_Pal_WorkIcon_C_SetRankup_Params Parms{};

	Parms.Enable = Enable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_WorkIcon.WBP_MainMenu_Pal_WorkIcon_C.SetRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_WorkIcon_C::SetRank(int32 Rank, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIcon_C", "SetRank");

	Params::UWBP_MainMenu_Pal_WorkIcon_C_SetRank_Params Parms{};

	Parms.Rank = Rank;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_WorkIcon.WBP_MainMenu_Pal_WorkIcon_C.SetSuitability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWorkSuitability     WorkSuitability                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_WorkIcon_C::SetSuitability(enum class EPalWorkSuitability WorkSuitability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIcon_C", "SetSuitability");

	Params::UWBP_MainMenu_Pal_WorkIcon_C_SetSuitability_Params Parms{};

	Parms.WorkSuitability = WorkSuitability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_WorkIcon.WBP_MainMenu_Pal_WorkIcon_C.IconOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_WorkIcon_C::IconOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIcon_C", "IconOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_WorkIcon.WBP_MainMenu_Pal_WorkIcon_C.IconOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_WorkIcon_C::IconOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIcon_C", "IconOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_WorkIcon.WBP_MainMenu_Pal_WorkIcon_C.ExecuteUbergraph_WBP_MainMenu_Pal_WorkIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_WorkIcon_C::ExecuteUbergraph_WBP_MainMenu_Pal_WorkIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIcon_C", "ExecuteUbergraph_WBP_MainMenu_Pal_WorkIcon");

	Params::UWBP_MainMenu_Pal_WorkIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


