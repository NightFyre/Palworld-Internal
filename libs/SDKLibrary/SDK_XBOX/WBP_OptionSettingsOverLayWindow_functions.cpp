#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C
// (None)

class UClass* UWBP_OptionSettingsOverLayWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_OptionSettingsOverLayWindow_C");

	return Clss;
}


// WBP_OptionSettingsOverLayWindow_C WBP_OptionSettingsOverLayWindow.Default__WBP_OptionSettingsOverLayWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_OptionSettingsOverLayWindow_C* UWBP_OptionSettingsOverLayWindow_C::GetDefaultObj()
{
	static class UWBP_OptionSettingsOverLayWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_OptionSettingsOverLayWindow_C*>(UWBP_OptionSettingsOverLayWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnKeySetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        NewKey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class EPalKeyConfigCategory   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalKeyConfigCategory   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalKeyConfigCategory   Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalKeyConfigCategory   Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalKeyConfigCategory   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalKeyAction               K2Node_MakeStruct_PalKeyAction                                   (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalKeyConfigCategory   K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInput*             CallFunc_GetLocalPalPlayerInput_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnableKey_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_OptionSettingsOverLayWindow_C::OnKeySetting(const struct FKey& NewKey, enum class EPalKeyConfigCategory Temp_byte_Variable, enum class EPalKeyConfigCategory Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class EPalKeyConfigCategory Temp_byte_Variable_2, enum class EPalKeyConfigCategory Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPalKeyConfigCategory K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const struct FPalKeyAction& K2Node_MakeStruct_PalKeyAction, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EPalKeyConfigCategory K2Node_Select_Default_1, class FName K2Node_Select_Default_2, class UPalPlayerInput* CallFunc_GetLocalPalPlayerInput_ReturnValue, bool CallFunc_IsEnableKey_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "OnKeySetting");

	Params::UWBP_OptionSettingsOverLayWindow_C_OnKeySetting_Params Parms{};

	Parms.NewKey = NewKey;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_MakeStruct_PalKeyAction = K2Node_MakeStruct_PalKeyAction;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetLocalPalPlayerInput_ReturnValue = CallFunc_GetLocalPalPlayerInput_ReturnValue;
	Parms.CallFunc_IsEnableKey_ReturnValue = CallFunc_IsEnableKey_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue = CallFunc_K2_InvalidateTimerHandle_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_OptionSettingsOverLayWindow_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "OnKeyDown");

	Params::UWBP_OptionSettingsOverLayWindow_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_OptionSettingsOverLayWindow_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_OptionSettingsOverLayWindow_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettingsOverLayWindow_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.ResetCommandText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettingsOverLayWindow_C::ResetCommandText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "ResetCommandText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.SetPadKeyA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettingsOverLayWindow_C::SetPadKeyA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "SetPadKeyA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.ExecuteUbergraph_WBP_OptionSettingsOverLayWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDDispatchParameter_KeyConfig_C*K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Key_Config         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalKeyAction               K2Node_MakeStruct_PalKeyAction                                   (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_OptionSettingsOverLayWindow_C::ExecuteUbergraph_WBP_OptionSettingsOverLayWindow(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_HUDDispatchParameter_KeyConfig_C* K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Key_Config, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FPalKeyAction& K2Node_MakeStruct_PalKeyAction, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_Select_Default, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettingsOverLayWindow_C", "ExecuteUbergraph_WBP_OptionSettingsOverLayWindow");

	Params::UWBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Key_Config = K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Key_Config;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_PalKeyAction = K2Node_MakeStruct_PalKeyAction;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


