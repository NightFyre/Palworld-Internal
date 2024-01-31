#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Menu_CharacterHungerGauge.WBP_Menu_CharacterHungerGauge_C
// (None)

class UClass* UWBP_Menu_CharacterHungerGauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Menu_CharacterHungerGauge_C");

	return Clss;
}


// WBP_Menu_CharacterHungerGauge_C WBP_Menu_CharacterHungerGauge.Default__WBP_Menu_CharacterHungerGauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Menu_CharacterHungerGauge_C* UWBP_Menu_CharacterHungerGauge_C::GetDefaultObj()
{
	static class UWBP_Menu_CharacterHungerGauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Menu_CharacterHungerGauge_C*>(UWBP_Menu_CharacterHungerGauge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Menu_CharacterHungerGauge.WBP_Menu_CharacterHungerGauge_C.UpdateHunger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowMaxHunger                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_CharacterHungerGauge_C::UpdateHunger(double NowHunger, double NowMaxHunger, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_CharacterHungerGauge_C", "UpdateHunger");

	Params::UWBP_Menu_CharacterHungerGauge_C_UpdateHunger_Params Parms{};

	Parms.NowHunger = NowHunger;
	Parms.NowMaxHunger = NowMaxHunger;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Menu_CharacterHungerGauge.WBP_Menu_CharacterHungerGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Menu_CharacterHungerGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_CharacterHungerGauge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_CharacterHungerGauge.WBP_Menu_CharacterHungerGauge_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Menu_CharacterHungerGauge_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_CharacterHungerGauge_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_CharacterHungerGauge.WBP_Menu_CharacterHungerGauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Menu_CharacterHungerGauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_CharacterHungerGauge_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_CharacterHungerGauge.WBP_Menu_CharacterHungerGauge_C.ExecuteUbergraph_WBP_Menu_CharacterHungerGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_CharacterHungerGauge_C::ExecuteUbergraph_WBP_Menu_CharacterHungerGauge(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_CharacterHungerGauge_C", "ExecuteUbergraph_WBP_Menu_CharacterHungerGauge");

	Params::UWBP_Menu_CharacterHungerGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHungerGauge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


