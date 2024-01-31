#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalLoupe.WBP_PalLoupe_C
// (None)

class UClass* UWBP_PalLoupe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalLoupe_C");

	return Clss;
}


// WBP_PalLoupe_C WBP_PalLoupe.Default__WBP_PalLoupe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalLoupe_C* UWBP_PalLoupe_C::GetDefaultObj()
{
	static class UWBP_PalLoupe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalLoupe_C*>(UWBP_PalLoupe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalLoupe.WBP_PalLoupe_C.UpdateHunger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowMaxHunger                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLoupe_C::UpdateHunger(double NowHunger, double NowMaxHunger, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalLoupe_C", "UpdateHunger");

	Params::UWBP_PalLoupe_C_UpdateHunger_Params Parms{};

	Parms.NowHunger = NowHunger;
	Parms.NowMaxHunger = NowMaxHunger;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalLoupe.WBP_PalLoupe_C.UpdateHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue             (NoDestructor)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetPercent_percent_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLoupe_C::UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, double CallFunc_SetPercent_percent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalLoupe_C", "UpdateHP");

	Params::UWBP_PalLoupe_C_UpdateHP_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.NowMaxHP = NowMaxHP;
	Parms.CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue = CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;
	Parms.CallFunc_SetPercent_percent_ImplicitCast = CallFunc_SetPercent_percent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalLoupe.WBP_PalLoupe_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalLoupe_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalLoupe_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalLoupe.WBP_PalLoupe_C.SetTargetPal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLoupe_C::SetTargetPal(class UPalIndividualCharacterSlot* TargetSlot, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalLoupe_C", "SetTargetPal");

	Params::UWBP_PalLoupe_C_SetTargetPal_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalLoupe.WBP_PalLoupe_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalLoupe_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalLoupe_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalLoupe.WBP_PalLoupe_C.ExecuteUbergraph_WBP_PalLoupe
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLoupe_C::ExecuteUbergraph_WBP_PalLoupe(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalLoupe_C", "ExecuteUbergraph_WBP_PalLoupe");

	Params::UWBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


