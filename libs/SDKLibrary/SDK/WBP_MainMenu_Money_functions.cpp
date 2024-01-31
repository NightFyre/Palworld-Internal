#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Money.WBP_MainMenu_Money_C
// (None)

class UClass* UWBP_MainMenu_Money_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Money_C");

	return Clss;
}


// WBP_MainMenu_Money_C WBP_MainMenu_Money.Default__WBP_MainMenu_Money_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Money_C* UWBP_MainMenu_Money_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Money_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Money_C*>(UWBP_MainMenu_Money_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Money.WBP_MainMenu_Money_C.WBP_MainMenu_Money_AutoGenFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              NowMoney                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)

void UWBP_MainMenu_Money_C::WBP_MainMenu_Money_AutoGenFunc(int64 NowMoney, class FText CallFunc_Conv_Int64ToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Money_C", "WBP_MainMenu_Money_AutoGenFunc");

	Params::UWBP_MainMenu_Money_C_WBP_MainMenu_Money_AutoGenFunc_Params Parms{};

	Parms.NowMoney = NowMoney;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Money.WBP_MainMenu_Money_C.UpdateMoney
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NowMoney                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_MainMenu_Money_C::UpdateMoney(const class FString& NowMoney, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Money_C", "UpdateMoney");

	Params::UWBP_MainMenu_Money_C_UpdateMoney_Params Parms{};

	Parms.NowMoney = NowMoney;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Money.WBP_MainMenu_Money_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Money_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Money_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Money.WBP_MainMenu_Money_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Money_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Money_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Money.WBP_MainMenu_Money_C.ExecuteUbergraph_WBP_MainMenu_Money
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMoneyData*               CallFunc_GetLocalMoneyData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetNowMoney_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_Int64ToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Money_C::ExecuteUbergraph_WBP_MainMenu_Money(int32 EntryPoint, class UPalMoneyData* CallFunc_GetLocalMoneyData_ReturnValue, int64 CallFunc_GetNowMoney_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_Int64ToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Money_C", "ExecuteUbergraph_WBP_MainMenu_Money");

	Params::UWBP_MainMenu_Money_C_ExecuteUbergraph_WBP_MainMenu_Money_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalMoneyData_ReturnValue = CallFunc_GetLocalMoneyData_ReturnValue;
	Parms.CallFunc_GetNowMoney_ReturnValue = CallFunc_GetNowMoney_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_Int64ToString_ReturnValue = CallFunc_Conv_Int64ToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


