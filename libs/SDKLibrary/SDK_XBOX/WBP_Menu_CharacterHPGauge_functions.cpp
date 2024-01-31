#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Menu_CharacterHPGauge.WBP_Menu_CharacterHPGauge_C
// (None)

class UClass* UWBP_Menu_CharacterHPGauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Menu_CharacterHPGauge_C");

	return Clss;
}


// WBP_Menu_CharacterHPGauge_C WBP_Menu_CharacterHPGauge.Default__WBP_Menu_CharacterHPGauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Menu_CharacterHPGauge_C* UWBP_Menu_CharacterHPGauge_C::GetDefaultObj()
{
	static class UWBP_Menu_CharacterHPGauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Menu_CharacterHPGauge_C*>(UWBP_Menu_CharacterHPGauge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Menu_CharacterHPGauge.WBP_Menu_CharacterHPGauge_C.UpdateHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int64                              CallFunc_Convert_FixedPoint64ToInt64_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// int64                              CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_CharacterHPGauge_C::UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1, class FText CallFunc_Format_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_CharacterHPGauge_C", "UpdateHP");

	Params::UWBP_Menu_CharacterHPGauge_C_UpdateHP_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.NowMaxHP = NowMaxHP;
	Parms.CallFunc_Convert_FixedPoint64ToInt64_ReturnValue = CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_1 = CallFunc_Conv_Int64ToText_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Menu_CharacterHPGauge.WBP_Menu_CharacterHPGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Menu_CharacterHPGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_CharacterHPGauge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_CharacterHPGauge.WBP_Menu_CharacterHPGauge_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Menu_CharacterHPGauge_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_CharacterHPGauge_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_CharacterHPGauge.WBP_Menu_CharacterHPGauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Menu_CharacterHPGauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_CharacterHPGauge_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_CharacterHPGauge.WBP_Menu_CharacterHPGauge_C.ExecuteUbergraph_WBP_Menu_CharacterHPGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_CharacterHPGauge_C::ExecuteUbergraph_WBP_Menu_CharacterHPGauge(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_CharacterHPGauge_C", "ExecuteUbergraph_WBP_Menu_CharacterHPGauge");

	Params::UWBP_Menu_CharacterHPGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHPGauge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


