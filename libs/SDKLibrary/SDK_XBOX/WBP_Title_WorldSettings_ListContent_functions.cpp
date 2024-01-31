#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C
// (None)

class UClass* UWBP_Title_WorldSettings_ListContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Title_WorldSettings_ListContent_C");

	return Clss;
}


// WBP_Title_WorldSettings_ListContent_C WBP_Title_WorldSettings_ListContent.Default__WBP_Title_WorldSettings_ListContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Title_WorldSettings_ListContent_C* UWBP_Title_WorldSettings_ListContent_C::GetDefaultObj()
{
	static class UWBP_Title_WorldSettings_ListContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Title_WorldSettings_ListContent_C*>(UWBP_Title_WorldSettings_ListContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.GetButtonText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        CallFunc_GetButtonText_ButtonText                                (None)

void UWBP_Title_WorldSettings_ListContent_C::GetButtonText(class FText* Text, class FText CallFunc_GetButtonText_ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "GetButtonText");

	Params::UWBP_Title_WorldSettings_ListContent_C_GetButtonText_Params Parms{};

	Parms.CallFunc_GetButtonText_ButtonText = CallFunc_GetButtonText_ButtonText;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Title_WorldSettings_ListContent_C::SetButtonText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "SetButtonText");

	Params::UWBP_Title_WorldSettings_ListContent_C_SetButtonText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.Set Name Select Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::Set_Name_Select_Index(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "Set Name Select Index");

	Params::UWBP_Title_WorldSettings_ListContent_C_Set_Name_Select_Index_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.GetSelectNameIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NowIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentIndex_Index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::GetSelectNameIndex(int32* NowIndex, int32 CallFunc_GetCurrentIndex_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "GetSelectNameIndex");

	Params::UWBP_Title_WorldSettings_ListContent_C_GetSelectNameIndex_Params Parms{};

	Parms.CallFunc_GetCurrentIndex_Index = CallFunc_GetCurrentIndex_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (NowIndex != nullptr)
		*NowIndex = Parms.NowIndex;

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetupFloatValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::SetupFloatValue(double NowValue, double MinValue, double MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "SetupFloatValue");

	Params::UWBP_Title_WorldSettings_ListContent_C_SetupFloatValue_Params Parms{};

	Parms.NowValue = NowValue;
	Parms.MinValue = MinValue;
	Parms.MaxValue = MaxValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetupIntValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::SetupIntValue(int32 Value, int32 Min, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "SetupIntValue");

	Params::UWBP_Title_WorldSettings_ListContent_C_SetupIntValue_Params Parms{};

	Parms.Value = Value;
	Parms.Min = Min;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetEnableCautionMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnableMark                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::SetEnableCautionMark(bool IsEnableMark, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "SetEnableCautionMark");

	Params::UWBP_Title_WorldSettings_ListContent_C_SetEnableCautionMark_Params Parms{};

	Parms.IsEnableMark = IsEnableMark;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.GetInputText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      InputTextString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::GetInputText(class FString* InputTextString, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "GetInputText");

	Params::UWBP_Title_WorldSettings_ListContent_C_GetInputText_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InputTextString != nullptr)
		*InputTextString = std::move(Parms.InputTextString);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.IsEditingText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEditing                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasKeyboardFocus_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::IsEditingText(bool* IsEditing, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "IsEditingText");

	Params::UWBP_Title_WorldSettings_ListContent_C_IsEditingText_Params Parms{};

	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_HasKeyboardFocus_ReturnValue = CallFunc_HasKeyboardFocus_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEditing != nullptr)
		*IsEditing = Parms.IsEditing;

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.IsOn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsOn                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOn_IsOn                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::IsOn(bool* IsOn, bool CallFunc_IsOn_IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "IsOn");

	Params::UWBP_Title_WorldSettings_ListContent_C_IsOn_Params Parms{};

	Parms.CallFunc_IsOn_IsOn = CallFunc_IsOn_IsOn;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOn != nullptr)
		*IsOn = Parms.IsOn;

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetupSelectString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              SelectStrings                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              DefaultSelectIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::SetupSelectString(TArray<class FString>& SelectStrings, int32 DefaultSelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "SetupSelectString");

	Params::UWBP_Title_WorldSettings_ListContent_C_SetupSelectString_Params Parms{};

	Parms.SelectStrings = SelectStrings;
	Parms.DefaultSelectIndex = DefaultSelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetupTextInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      DefaultString                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_Title_WorldSettings_ListContent_C::SetupTextInput(const class FString& DefaultString, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "SetupTextInput");

	Params::UWBP_Title_WorldSettings_ListContent_C_SetupTextInput_Params Parms{};

	Parms.DefaultString = DefaultString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnClickedInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::OnClickedInternal(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "OnClickedInternal");

	Params::UWBP_Title_WorldSettings_ListContent_C_OnClickedInternal_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.CustomNavi_ToRight
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOn_IsOn                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Title_WorldSettings_ListContent_C::CustomNavi_ToRight(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsOn_IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "CustomNavi_ToRight");

	Params::UWBP_Title_WorldSettings_ListContent_C_CustomNavi_ToRight_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsOn_IsOn = CallFunc_IsOn_IsOn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.CustomNavi_ToLeft
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOn_IsOn                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Title_WorldSettings_ListContent_C::CustomNavi_ToLeft(enum class EUINavigation Navigation, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsOn_IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "CustomNavi_ToLeft");

	Params::UWBP_Title_WorldSettings_ListContent_C_CustomNavi_ToLeft_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsOn_IsOn = CallFunc_IsOn_IsOn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetupOnOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::SetupOnOff(bool IsOn, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "SetupOnOff");

	Params::UWBP_Title_WorldSettings_ListContent_C_SetupOnOff_Params Parms{};

	Parms.IsOn = IsOn;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.InitializeInternal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::InitializeInternal(class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, const class FString& CallFunc_GetDisplayName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "InitializeInternal");

	Params::UWBP_Title_WorldSettings_ListContent_C_InitializeInternal_Params Parms{};

	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.AnmEvent_SetEnableBuutton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnableButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::AnmEvent_SetEnableBuutton(bool IsEnableButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "AnmEvent_SetEnableBuutton");

	Params::UWBP_Title_WorldSettings_ListContent_C_AnmEvent_SetEnableBuutton_Params Parms{};

	Parms.IsEnableButton = IsEnableButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_ListContent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSwitch_K2Node_ComponentBoundEvent_3_OnSwitcherChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSwitch_K2Node_ComponentBoundEvent_3_OnSwitcherChanged__DelegateSignature(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSwitch_K2Node_ComponentBoundEvent_3_OnSwitcherChanged__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSwitch_K2Node_ComponentBoundEvent_3_OnSwitcherChanged__DelegateSignature_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Title_WorldSettings_ListContent_C::BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentLR_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentLR_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature(int32 Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentLR_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentLR_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_Title_WorldSettings_ListButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_ListContent_C::BndEvt__WBP_Title_WorldSettings_ListContent_WBP_Title_WorldSettings_ListButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "BndEvt__WBP_Title_WorldSettings_ListContent_WBP_Title_WorldSettings_ListButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "PreConstruct");

	Params::UWBP_Title_WorldSettings_ListContent_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.ExecuteUbergraph_WBP_Title_WorldSettings_ListContent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isEnableButton                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsOn                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selection                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_Title_WorldSettings_ListContent_C::ExecuteUbergraph_WBP_Title_WorldSettings_ListContent(int32 EntryPoint, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool K2Node_CustomEvent_isEnableButton, bool Temp_bool_Variable, bool CallFunc_EqualEqual_BoolBool_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_ComponentBoundEvent_IsOn, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText K2Node_ComponentBoundEvent_Text, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Selection, const class FString& CallFunc_Left_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double K2Node_ComponentBoundEvent_Value, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "ExecuteUbergraph_WBP_Title_WorldSettings_ListContent");

	Params::UWBP_Title_WorldSettings_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSettings_ListContent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_isEnableButton = K2Node_CustomEvent_isEnableButton;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_IsOn = K2Node_ComponentBoundEvent_IsOn;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Selection = K2Node_ComponentBoundEvent_Selection;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnChangedValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::OnChangedValue__DelegateSignature(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "OnChangedValue__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_OnChangedValue__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnClickedSettingButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_ListContent_C::OnClickedSettingButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "OnClickedSettingButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnChangedSelectIndex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::OnChangedSelectIndex__DelegateSignature(int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "OnChangedSelectIndex__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_OnChangedSelectIndex__DelegateSignature_Params Parms{};

	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnComittedText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewString                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::OnComittedText__DelegateSignature(const class FString& NewString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "OnComittedText__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_OnComittedText__DelegateSignature_Params Parms{};

	Parms.NewString = NewString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnSwitchChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListContent_C::OnSwitchChanged__DelegateSignature(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListContent_C", "OnSwitchChanged__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListContent_C_OnSwitchChanged__DelegateSignature_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}

}


