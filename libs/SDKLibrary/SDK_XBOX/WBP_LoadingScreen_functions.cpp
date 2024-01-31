#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoadingScreen.WBP_LoadingScreen_C
// (None)

class UClass* UWBP_LoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoadingScreen_C");

	return Clss;
}


// WBP_LoadingScreen_C WBP_LoadingScreen.Default__WBP_LoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoadingScreen_C* UWBP_LoadingScreen_C::GetDefaultObj()
{
	static class UWBP_LoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoadingScreen_C*>(UWBP_LoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.SetBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_C::SetBgColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "SetBgColor");

	Params::UWBP_LoadingScreen_C_SetBgColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ToggleVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visiable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_C::ToggleVisibility(bool Visiable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "ToggleVisibility");

	Params::UWBP_LoadingScreen_C_ToggleVisibility_Params Parms{};

	Parms.Visiable = Visiable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visiable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_C::ExecuteUbergraph_WBP_LoadingScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_Visiable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "ExecuteUbergraph_WBP_LoadingScreen");

	Params::UWBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Visiable = K2Node_CustomEvent_Visiable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


