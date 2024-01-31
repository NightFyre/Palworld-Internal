#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Other_Settings.WBP_Other_Settings_C
// (None)

class UClass* UWBP_Other_Settings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Other_Settings_C");

	return Clss;
}


// WBP_Other_Settings_C WBP_Other_Settings.Default__WBP_Other_Settings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Other_Settings_C* UWBP_Other_Settings_C::GetDefaultObj()
{
	static class UWBP_Other_Settings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Other_Settings_C*>(UWBP_Other_Settings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Other_Settings.WBP_Other_Settings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Other_Settings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Other_Settings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Other_Settings.WBP_Other_Settings_C.OnLanguageChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Other_Settings_C::OnLanguageChanged(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Other_Settings_C", "OnLanguageChanged");

	Params::UWBP_Other_Settings_C_OnLanguageChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Other_Settings.WBP_Other_Settings_C.ApplySettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ApplyOriginal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Other_Settings_C::ApplySettings(bool ApplyOriginal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Other_Settings_C", "ApplySettings");

	Params::UWBP_Other_Settings_C_ApplySettings_Params Parms{};

	Parms.ApplyOriginal = ApplyOriginal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Other_Settings.WBP_Other_Settings_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Other_Settings_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Other_Settings_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Other_Settings.WBP_Other_Settings_C.ExecuteUbergraph_WBP_Other_Settings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ApplyOriginal                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetLocalizedCultures_ReturnValue                        (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetLocalizedCultures_ReturnValue_1                      (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Other_Settings_C::ExecuteUbergraph_WBP_Other_Settings(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 K2Node_CustomEvent_Value, bool K2Node_CustomEvent_ApplyOriginal, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FString>& CallFunc_GetLocalizedCultures_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, TArray<class FString>& CallFunc_GetLocalizedCultures_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Other_Settings_C", "ExecuteUbergraph_WBP_Other_Settings");

	Params::UWBP_Other_Settings_C_ExecuteUbergraph_WBP_Other_Settings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CustomEvent_ApplyOriginal = K2Node_CustomEvent_ApplyOriginal;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedCultures_ReturnValue = CallFunc_GetLocalizedCultures_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetLocalizedCultures_ReturnValue_1 = CallFunc_GetLocalizedCultures_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue = CallFunc_SetCurrentLanguageAndLocale_ReturnValue;
	Parms.CallFunc_SetCurrentCulture_ReturnValue = CallFunc_SetCurrentCulture_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


