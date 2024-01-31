#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Control_Settings.WBP_Control_Settings_C
// (None)

class UClass* UWBP_Control_Settings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Control_Settings_C");

	return Clss;
}


// WBP_Control_Settings_C WBP_Control_Settings.Default__WBP_Control_Settings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Control_Settings_C* UWBP_Control_Settings_C::GetDefaultObj()
{
	static class UWBP_Control_Settings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Control_Settings_C*>(UWBP_Control_Settings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Control_Settings.WBP_Control_Settings_C.GetDesiredFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Target                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCommonButtonBase_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::GetDesiredFocusTarget(class UWidget** Target, class UWBP_PalCommonButtonBase_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "GetDesiredFocusTarget");

	Params::UWBP_Control_Settings_C_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Control_Settings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.ApplySettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Control_Settings_C::ApplySettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "ApplySettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.SetDefault
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Control_Settings_C::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "SetDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.SwitchTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Next                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::SwitchTab(bool Next)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "SwitchTab");

	Params::UWBP_Control_Settings_C_SwitchTab_Params Parms{};

	Parms.Next = Next;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.SwitchPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::SwitchPanel(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "SwitchPanel");

	Params::UWBP_Control_Settings_C_SwitchPanel_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnDashChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnDashChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnDashChanged");

	Params::UWBP_Control_Settings_C_OnDashChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnMouseSensiChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnMouseSensiChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnMouseSensiChanged");

	Params::UWBP_Control_Settings_C_OnMouseSensiChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnMouseAIMChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnMouseAIMChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnMouseAIMChanged");

	Params::UWBP_Control_Settings_C_OnMouseAIMChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnMouseYChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnMouseYChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnMouseYChanged");

	Params::UWBP_Control_Settings_C_OnMouseYChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnMouseXChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnMouseXChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnMouseXChanged");

	Params::UWBP_Control_Settings_C_OnMouseXChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnGPDashChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnGPDashChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnGPDashChanged");

	Params::UWBP_Control_Settings_C_OnGPDashChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnGPAimChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnGPAimChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnGPAimChanged");

	Params::UWBP_Control_Settings_C_OnGPAimChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnRStickThreChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnRStickThreChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnRStickThreChanged");

	Params::UWBP_Control_Settings_C_OnRStickThreChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnLStickThreChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnLStickThreChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnLStickThreChanged");

	Params::UWBP_Control_Settings_C_OnLStickThreChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnRStickSensiChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnRStickSensiChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnRStickSensiChanged");

	Params::UWBP_Control_Settings_C_OnRStickSensiChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnRStickYChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnRStickYChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnRStickYChanged");

	Params::UWBP_Control_Settings_C_OnRStickYChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnRStickXChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnRStickXChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnRStickXChanged");

	Params::UWBP_Control_Settings_C_OnRStickXChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnVibChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnVibChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnVibChanged");

	Params::UWBP_Control_Settings_C_OnVibChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.OnHideChatChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::OnHideChatChanged(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "OnHideChatChanged");

	Params::UWBP_Control_Settings_C_OnHideChatChanged_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Control_Settings.WBP_Control_Settings_C.ExecuteUbergraph_WBP_Control_Settings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUGCFilter_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOptionSubsystem*         CallFunc_GetOptionSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionPadSettings       CallFunc_GetPadSettings_ReturnValue                              (ConstParm, NoDestructor)
// struct FPalOptionLocalStaticSettingsCallFunc_GetOptionLocalStaticSettings_ReturnValue                (ConstParm, NoDestructor)
// struct FPalOptionKeyboardSettings  CallFunc_GetKeyboardSettings_ReturnValue                         (ConstParm, NoDestructor)
// bool                               K2Node_CustomEvent_Next                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionKeyboardSettings  K2Node_MakeStruct_PalOptionKeyboardSettings                      (NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_Target                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PalCommonButtonBase_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_Target_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionPadSettings       K2Node_MakeStruct_PalOptionPadSettings                           (NoDestructor)
// bool                               K2Node_CustomEvent_IsON_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalSupportedPlatformTypeCallFunc_GetPlatformType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UVerticalBox*>        K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_MouseSensitivity_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_MouseAimSensitivity_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_CurrentValue_ImplicitCast_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Min_ImplicitCast_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetSlider_Max_ImplicitCast_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_RightStickAimSensitivity_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_RightStickThreshold_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_LeftStickThreshold_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_RightStickSensitivity_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Control_Settings_C::ExecuteUbergraph_WBP_Control_Settings(int32 EntryPoint, bool CallFunc_IsUGCFilter_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_1, const struct FPalOptionPadSettings& CallFunc_GetPadSettings_ReturnValue, const struct FPalOptionLocalStaticSettings& CallFunc_GetOptionLocalStaticSettings_ReturnValue, const struct FPalOptionKeyboardSettings& CallFunc_GetKeyboardSettings_ReturnValue, bool K2Node_CustomEvent_Next, class UVerticalBox* CallFunc_Array_Get_Item, class UVerticalBox* CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UVerticalBox* CallFunc_Array_Get_Item_2, class UVerticalBox* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_Index, class UVerticalBox* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_IsON_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double K2Node_CustomEvent_Value_5, double K2Node_CustomEvent_Value_4, bool K2Node_CustomEvent_IsON_6, bool K2Node_CustomEvent_IsON_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FPalOptionKeyboardSettings& K2Node_MakeStruct_PalOptionKeyboardSettings, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_Target, TArray<class UWBP_PalCommonButtonBase_C*>& K2Node_MakeArray_Array, class UWidget* CallFunc_GetDesiredFocusTarget_Target_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FPalOptionPadSettings& K2Node_MakeStruct_PalOptionPadSettings, bool K2Node_CustomEvent_IsON_4, double K2Node_CustomEvent_Value_3, double K2Node_CustomEvent_Value_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double K2Node_CustomEvent_Value_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double K2Node_CustomEvent_Value, bool K2Node_CustomEvent_IsON_3, bool K2Node_CustomEvent_IsON_2, bool K2Node_CustomEvent_IsON_1, class UVerticalBox* CallFunc_Array_Get_Item_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, enum class EPalSupportedPlatformType CallFunc_GetPlatformType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UVerticalBox* K2Node_Select_Default_1, TArray<class UVerticalBox*>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool K2Node_CustomEvent_IsON, bool CallFunc_Not_PreBool_ReturnValue_2, double CallFunc_SetSlider_CurrentValue_ImplicitCast, double CallFunc_SetSlider_CurrentValue_ImplicitCast_1, double CallFunc_SetSlider_CurrentValue_ImplicitCast_2, double CallFunc_SetSlider_CurrentValue_ImplicitCast_3, double CallFunc_SetSlider_CurrentValue_ImplicitCast_4, double CallFunc_SetSlider_CurrentValue_ImplicitCast_5, float K2Node_SetFieldsInStruct_MouseSensitivity_ImplicitCast, double CallFunc_SetSlider_Min_ImplicitCast, double CallFunc_SetSlider_Max_ImplicitCast, float K2Node_SetFieldsInStruct_MouseAimSensitivity_ImplicitCast, double CallFunc_SetSlider_Min_ImplicitCast_1, double CallFunc_SetSlider_Max_ImplicitCast_1, double CallFunc_SetSlider_CurrentValue_ImplicitCast_6, double CallFunc_SetSlider_CurrentValue_ImplicitCast_7, double CallFunc_SetSlider_Min_ImplicitCast_2, double CallFunc_SetSlider_Max_ImplicitCast_2, double CallFunc_SetSlider_Min_ImplicitCast_3, double CallFunc_SetSlider_Max_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_SetSlider_CurrentValue_ImplicitCast_8, double CallFunc_SetSlider_CurrentValue_ImplicitCast_9, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_SetSlider_Min_ImplicitCast_4, double CallFunc_SetSlider_Max_ImplicitCast_4, double CallFunc_SetSlider_Min_ImplicitCast_5, double CallFunc_SetSlider_Max_ImplicitCast_5, double CallFunc_SetSlider_Min_ImplicitCast_6, double CallFunc_SetSlider_Max_ImplicitCast_6, double CallFunc_SetSlider_Min_ImplicitCast_7, double CallFunc_SetSlider_Max_ImplicitCast_7, double CallFunc_SetSlider_Min_ImplicitCast_8, double CallFunc_SetSlider_Max_ImplicitCast_8, double CallFunc_SetSlider_Min_ImplicitCast_9, double CallFunc_SetSlider_Max_ImplicitCast_9, double CallFunc_SetSlider_Min_ImplicitCast_10, double CallFunc_SetSlider_Max_ImplicitCast_10, double CallFunc_SetSlider_Min_ImplicitCast_11, double CallFunc_SetSlider_Max_ImplicitCast_11, float K2Node_SetFieldsInStruct_RightStickAimSensitivity_ImplicitCast, float K2Node_SetFieldsInStruct_RightStickThreshold_ImplicitCast, float K2Node_SetFieldsInStruct_LeftStickThreshold_ImplicitCast, float K2Node_SetFieldsInStruct_RightStickSensitivity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Control_Settings_C", "ExecuteUbergraph_WBP_Control_Settings");

	Params::UWBP_Control_Settings_C_ExecuteUbergraph_WBP_Control_Settings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUGCFilter_ReturnValue = CallFunc_IsUGCFilter_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue = CallFunc_GetOptionSubsystem_ReturnValue;
	Parms.CallFunc_GetOptionSubsystem_ReturnValue_1 = CallFunc_GetOptionSubsystem_ReturnValue_1;
	Parms.CallFunc_GetPadSettings_ReturnValue = CallFunc_GetPadSettings_ReturnValue;
	Parms.CallFunc_GetOptionLocalStaticSettings_ReturnValue = CallFunc_GetOptionLocalStaticSettings_ReturnValue;
	Parms.CallFunc_GetKeyboardSettings_ReturnValue = CallFunc_GetKeyboardSettings_ReturnValue;
	Parms.K2Node_CustomEvent_Next = K2Node_CustomEvent_Next;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_IsON_7 = K2Node_CustomEvent_IsON_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Value_5 = K2Node_CustomEvent_Value_5;
	Parms.K2Node_CustomEvent_Value_4 = K2Node_CustomEvent_Value_4;
	Parms.K2Node_CustomEvent_IsON_6 = K2Node_CustomEvent_IsON_6;
	Parms.K2Node_CustomEvent_IsON_5 = K2Node_CustomEvent_IsON_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_MakeStruct_PalOptionKeyboardSettings = K2Node_MakeStruct_PalOptionKeyboardSettings;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetDesiredFocusTarget_Target = CallFunc_GetDesiredFocusTarget_Target;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetDesiredFocusTarget_Target_1 = CallFunc_GetDesiredFocusTarget_Target_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_MakeStruct_PalOptionPadSettings = K2Node_MakeStruct_PalOptionPadSettings;
	Parms.K2Node_CustomEvent_IsON_4 = K2Node_CustomEvent_IsON_4;
	Parms.K2Node_CustomEvent_Value_3 = K2Node_CustomEvent_Value_3;
	Parms.K2Node_CustomEvent_Value_2 = K2Node_CustomEvent_Value_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CustomEvent_IsON_3 = K2Node_CustomEvent_IsON_3;
	Parms.K2Node_CustomEvent_IsON_2 = K2Node_CustomEvent_IsON_2;
	Parms.K2Node_CustomEvent_IsON_1 = K2Node_CustomEvent_IsON_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_GetPlatformType_ReturnValue = CallFunc_GetPlatformType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_IsON = K2Node_CustomEvent_IsON;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast = CallFunc_SetSlider_CurrentValue_ImplicitCast;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_1 = CallFunc_SetSlider_CurrentValue_ImplicitCast_1;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_2 = CallFunc_SetSlider_CurrentValue_ImplicitCast_2;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_3 = CallFunc_SetSlider_CurrentValue_ImplicitCast_3;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_4 = CallFunc_SetSlider_CurrentValue_ImplicitCast_4;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_5 = CallFunc_SetSlider_CurrentValue_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_MouseSensitivity_ImplicitCast = K2Node_SetFieldsInStruct_MouseSensitivity_ImplicitCast;
	Parms.CallFunc_SetSlider_Min_ImplicitCast = CallFunc_SetSlider_Min_ImplicitCast;
	Parms.CallFunc_SetSlider_Max_ImplicitCast = CallFunc_SetSlider_Max_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_MouseAimSensitivity_ImplicitCast = K2Node_SetFieldsInStruct_MouseAimSensitivity_ImplicitCast;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_1 = CallFunc_SetSlider_Min_ImplicitCast_1;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_1 = CallFunc_SetSlider_Max_ImplicitCast_1;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_6 = CallFunc_SetSlider_CurrentValue_ImplicitCast_6;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_7 = CallFunc_SetSlider_CurrentValue_ImplicitCast_7;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_2 = CallFunc_SetSlider_Min_ImplicitCast_2;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_2 = CallFunc_SetSlider_Max_ImplicitCast_2;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_3 = CallFunc_SetSlider_Min_ImplicitCast_3;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_3 = CallFunc_SetSlider_Max_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_8 = CallFunc_SetSlider_CurrentValue_ImplicitCast_8;
	Parms.CallFunc_SetSlider_CurrentValue_ImplicitCast_9 = CallFunc_SetSlider_CurrentValue_ImplicitCast_9;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_4 = CallFunc_SetSlider_Min_ImplicitCast_4;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_4 = CallFunc_SetSlider_Max_ImplicitCast_4;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_5 = CallFunc_SetSlider_Min_ImplicitCast_5;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_5 = CallFunc_SetSlider_Max_ImplicitCast_5;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_6 = CallFunc_SetSlider_Min_ImplicitCast_6;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_6 = CallFunc_SetSlider_Max_ImplicitCast_6;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_7 = CallFunc_SetSlider_Min_ImplicitCast_7;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_7 = CallFunc_SetSlider_Max_ImplicitCast_7;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_8 = CallFunc_SetSlider_Min_ImplicitCast_8;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_8 = CallFunc_SetSlider_Max_ImplicitCast_8;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_9 = CallFunc_SetSlider_Min_ImplicitCast_9;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_9 = CallFunc_SetSlider_Max_ImplicitCast_9;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_10 = CallFunc_SetSlider_Min_ImplicitCast_10;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_10 = CallFunc_SetSlider_Max_ImplicitCast_10;
	Parms.CallFunc_SetSlider_Min_ImplicitCast_11 = CallFunc_SetSlider_Min_ImplicitCast_11;
	Parms.CallFunc_SetSlider_Max_ImplicitCast_11 = CallFunc_SetSlider_Max_ImplicitCast_11;
	Parms.K2Node_SetFieldsInStruct_RightStickAimSensitivity_ImplicitCast = K2Node_SetFieldsInStruct_RightStickAimSensitivity_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_RightStickThreshold_ImplicitCast = K2Node_SetFieldsInStruct_RightStickThreshold_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_LeftStickThreshold_ImplicitCast = K2Node_SetFieldsInStruct_LeftStickThreshold_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_RightStickSensitivity_ImplicitCast = K2Node_SetFieldsInStruct_RightStickSensitivity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


