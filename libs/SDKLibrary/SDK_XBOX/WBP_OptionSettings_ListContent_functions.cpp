#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C
// (None)

class UClass* UWBP_OptionSettings_ListContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_OptionSettings_ListContent_C");

	return Clss;
}


// WBP_OptionSettings_ListContent_C WBP_OptionSettings_ListContent.Default__WBP_OptionSettings_ListContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_OptionSettings_ListContent_C* UWBP_OptionSettings_ListContent_C::GetDefaultObj()
{
	static class UWBP_OptionSettings_ListContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_OptionSettings_ListContent_C*>(UWBP_OptionSettings_ListContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.InputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::InputMethodChanged(enum class ECommonInputType InputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "InputMethodChanged");

	Params::UWBP_OptionSettings_ListContent_C_InputMethodChanged_Params Parms{};

	Parms.InputType = InputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SetSelecter
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Selections                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Current                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::SetSelecter(TArray<struct FDataTableRowHandle>& Selections, int32 Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SetSelecter");

	Params::UWBP_OptionSettings_ListContent_C_SetSelecter_Params Parms{};

	Parms.Selections = Selections;
	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SetResolution
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   CurrentResolution                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           Resolutions                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_OptionSettings_ListContent_C::SetResolution(const struct FIntPoint& CurrentResolution, TArray<struct FIntPoint>& Resolutions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SetResolution");

	Params::UWBP_OptionSettings_ListContent_C_SetResolution_Params Parms{};

	Parms.CurrentResolution = CurrentResolution;
	Parms.Resolutions = Resolutions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SetSwitcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CurrentOn                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::SetSwitcher(bool CurrentOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SetSwitcher");

	Params::UWBP_OptionSettings_ListContent_C_SetSwitcher_Params Parms{};

	Parms.CurrentOn = CurrentOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SetSelecter_String
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Selections                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Current                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::SetSelecter_String(TArray<class FString>& Selections, int32 Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SetSelecter_String");

	Params::UWBP_OptionSettings_ListContent_C_SetSelecter_String_Params Parms{};

	Parms.Selections = Selections;
	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SetSlider
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FixedChangeValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseFixedValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::SetSlider(double CurrentValue, double Min, double Max, double FixedChangeValue, bool UseFixedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SetSlider");

	Params::UWBP_OptionSettings_ListContent_C_SetSlider_Params Parms{};

	Parms.CurrentValue = CurrentValue;
	Parms.Min = Min;
	Parms.Max = Max;
	Parms.FixedChangeValue = FixedChangeValue;
	Parms.UseFixedValue = UseFixedValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.BackToList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContent_C::BackToList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "BackToList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.Gamepad_LeftPress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContent_C::Gamepad_LeftPress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "Gamepad_LeftPress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.Gamepad_RightPress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContent_C::Gamepad_RightPress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "Gamepad_RightPress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.Gamepad_LeftRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContent_C::Gamepad_LeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "Gamepad_LeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SubtractValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContent_C::SubtractValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SubtractValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.addValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContent_C::AddValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "addValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.Gamepad_RightRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContent_C::Gamepad_RightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "Gamepad_RightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SetClickableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContent_C::SetClickableButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SetClickableButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SetConfigButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalKeyConfigAxisFilterTypeFilterType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::SetConfigButton(class FName ActionName, enum class ECommonInputType InputType, enum class EPalKeyConfigAxisFilterType FilterType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SetConfigButton");

	Params::UWBP_OptionSettings_ListContent_C_SetConfigButton_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.InputType = InputType;
	Parms.FilterType = FilterType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SetKeyIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::SetKeyIcon(const struct FKey& Key, enum class ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SetKeyIcon");

	Params::UWBP_OptionSettings_ListContent_C_SetKeyIcon_Params Parms{};

	Parms.Key = Key;
	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SetKeyWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableWarning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::SetKeyWarning(bool EnableWarning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SetKeyWarning");

	Params::UWBP_OptionSettings_ListContent_C_SetKeyWarning_Params Parms{};

	Parms.EnableWarning = EnableWarning;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.SetInteractable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanInteract                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::SetInteractable(bool CanInteract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "SetInteractable");

	Params::UWBP_OptionSettings_ListContent_C_SetInteractable_Params Parms{};

	Parms.CanInteract = CanInteract;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_OptionSettings_ListContent_C_BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_OptionSettings_ListContent_C_BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_OptionSettings_ListContent_C_BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.ExecuteUbergraph_WBP_OptionSettings_ListContent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetMappedKeyIcon_ReturnValue                            (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_CustomEvent_Selections_1                                  (ConstParm, ReferenceParm)
// int32                              K2Node_CustomEvent_Current_1                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_CustomEvent_CurrentResolution                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           K2Node_CustomEvent_Resolutions                                   (ConstParm, ReferenceParm)
// struct FIntPoint                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CurrentOn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_CustomEvent_Selections                                    (ConstParm, ReferenceParm)
// int32                              K2Node_CustomEvent_Current                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_CurrentValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Min                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Max                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_FixedChangeValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseFixedValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUserWidget*              CallFunc_FindOwningActivatableWidget_ReturnValue                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// class UPalUserWidget*              CallFunc_FindOwningActivatableWidget_ReturnValue_1               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// class UPalUserWidget*              CallFunc_FindOwningActivatableWidget_ReturnValue_2               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_2                     (NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalSlateNavigationSetting  K2Node_MakeStruct_PalSlateNavigationSetting                      (NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_3                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_4                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_InputType_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalKeyConfigAxisFilterTypeK2Node_CustomEvent_FilterType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_Key                                           (HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_InputType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetKeyIconByKey_ReturnValue                             (None)
// bool                               K2Node_CustomEvent_EnableWarning                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CanInteract                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::ExecuteUbergraph_WBP_OptionSettings_ListContent(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, const struct FSlateBrush& CallFunc_GetMappedKeyIcon_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FDataTableRowHandle>& K2Node_CustomEvent_Selections_1, int32 K2Node_CustomEvent_Current_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FIntPoint& K2Node_CustomEvent_CurrentResolution, TArray<struct FIntPoint>& K2Node_CustomEvent_Resolutions, const struct FIntPoint& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool K2Node_CustomEvent_CurrentOn, TArray<class FString>& K2Node_CustomEvent_Selections, int32 K2Node_CustomEvent_Current, double K2Node_CustomEvent_CurrentValue, double K2Node_CustomEvent_Min, double K2Node_CustomEvent_Max, double K2Node_CustomEvent_FixedChangeValue, bool K2Node_CustomEvent_UseFixedValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalUserWidget* CallFunc_FindOwningActivatableWidget_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, class UPalUserWidget* CallFunc_FindOwningActivatableWidget_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, class UPalUserWidget* CallFunc_FindOwningActivatableWidget_ReturnValue_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, const struct FPalSlateNavigationSetting& K2Node_MakeStruct_PalSlateNavigationSetting, bool CallFunc_IsVisible_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsVisible_ReturnValue_5, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, class FName K2Node_CustomEvent_ActionName, enum class ECommonInputType K2Node_CustomEvent_InputType_1, enum class EPalKeyConfigAxisFilterType K2Node_CustomEvent_FilterType, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_6, const struct FKey& K2Node_CustomEvent_Key, enum class ECommonInputType K2Node_CustomEvent_InputType, const struct FSlateBrush& CallFunc_GetKeyIconByKey_ReturnValue, bool K2Node_CustomEvent_EnableWarning, bool K2Node_CustomEvent_CanInteract, double CallFunc_SelectFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "ExecuteUbergraph_WBP_OptionSettings_ListContent");

	Params::UWBP_OptionSettings_ListContent_C_ExecuteUbergraph_WBP_OptionSettings_ListContent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetMappedKeyIcon_ReturnValue = CallFunc_GetMappedKeyIcon_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_Selections_1 = K2Node_CustomEvent_Selections_1;
	Parms.K2Node_CustomEvent_Current_1 = K2Node_CustomEvent_Current_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_CurrentResolution = K2Node_CustomEvent_CurrentResolution;
	Parms.K2Node_CustomEvent_Resolutions = K2Node_CustomEvent_Resolutions;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentOn = K2Node_CustomEvent_CurrentOn;
	Parms.K2Node_CustomEvent_Selections = K2Node_CustomEvent_Selections;
	Parms.K2Node_CustomEvent_Current = K2Node_CustomEvent_Current;
	Parms.K2Node_CustomEvent_CurrentValue = K2Node_CustomEvent_CurrentValue;
	Parms.K2Node_CustomEvent_Min = K2Node_CustomEvent_Min;
	Parms.K2Node_CustomEvent_Max = K2Node_CustomEvent_Max;
	Parms.K2Node_CustomEvent_FixedChangeValue = K2Node_CustomEvent_FixedChangeValue;
	Parms.K2Node_CustomEvent_UseFixedValue = K2Node_CustomEvent_UseFixedValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_FindOwningActivatableWidget_ReturnValue = CallFunc_FindOwningActivatableWidget_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_FindOwningActivatableWidget_ReturnValue_1 = CallFunc_FindOwningActivatableWidget_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.CallFunc_FindOwningActivatableWidget_ReturnValue_2 = CallFunc_FindOwningActivatableWidget_ReturnValue_2;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_2 = CallFunc_RegisterActionBinding_ReturnValue_2;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.K2Node_MakeStruct_PalSlateNavigationSetting = K2Node_MakeStruct_PalSlateNavigationSetting;
	Parms.CallFunc_IsVisible_ReturnValue_3 = CallFunc_IsVisible_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_3 = CallFunc_RegisterActionBinding_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_4 = CallFunc_IsVisible_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_4 = CallFunc_RegisterActionBinding_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsVisible_ReturnValue_5 = CallFunc_IsVisible_ReturnValue_5;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CustomEvent_ActionName = K2Node_CustomEvent_ActionName;
	Parms.K2Node_CustomEvent_InputType_1 = K2Node_CustomEvent_InputType_1;
	Parms.K2Node_CustomEvent_FilterType = K2Node_CustomEvent_FilterType;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_6 = CallFunc_IsVisible_ReturnValue_6;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_InputType = K2Node_CustomEvent_InputType;
	Parms.CallFunc_GetKeyIconByKey_ReturnValue = CallFunc_GetKeyIconByKey_ReturnValue;
	Parms.K2Node_CustomEvent_EnableWarning = K2Node_CustomEvent_EnableWarning;
	Parms.K2Node_CustomEvent_CanInteract = K2Node_CustomEvent_CanInteract;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C.OnKeyConfigClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        KeyName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalKeyConfigAxisFilterTypeAxisType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContent_C::OnKeyConfigClicked__DelegateSignature(class FName KeyName, enum class ECommonInputType InputType, enum class EPalKeyConfigAxisFilterType AxisType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContent_C", "OnKeyConfigClicked__DelegateSignature");

	Params::UWBP_OptionSettings_ListContent_C_OnKeyConfigClicked__DelegateSignature_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.InputType = InputType;
	Parms.AxisType = AxisType;

	UObject::ProcessEvent(Func, &Parms);

}

}


