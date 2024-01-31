#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalDialog.WBP_PalDialog_C
// (None)

class UClass* UWBP_PalDialog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalDialog_C");

	return Clss;
}


// WBP_PalDialog_C WBP_PalDialog.Default__WBP_PalDialog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalDialog_C* UWBP_PalDialog_C::GetDefaultObj()
{
	static class UWBP_PalDialog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalDialog_C*>(UWBP_PalDialog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalDialog.WBP_PalDialog_C.OnShortcutConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDialogParameterDialog*   K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDialog_C::OnShortcutConfirm(class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalDialogParameterDialog* K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDialog_C", "OnShortcutConfirm");

	Params::UWBP_PalDialog_C_OnShortcutConfirm_Params Parms{};

	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog = K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDialog.WBP_PalDialog_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetLeftButton_rightButton                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetRightButton_button                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalDialog_C::BP_GetDesiredFocusTarget(class UCommonButtonBase* CallFunc_GetLeftButton_rightButton, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* CallFunc_GetRightButton_button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDialog_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_PalDialog_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetLeftButton_rightButton = CallFunc_GetLeftButton_rightButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRightButton_button = CallFunc_GetRightButton_button;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalDialog.WBP_PalDialog_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDialog_C::OnCancelAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDialog_C", "OnCancelAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDialog.WBP_PalDialog_C.SetupUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalDialogType          DialogType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_2                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_3                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_4                       (None)

void UWBP_PalDialog_C::SetupUI(enum class EPalDialogType DialogType, class FText Message, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class FText CallFunc_GetLocalizedTextFromHandle_Text_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDialog_C", "SetupUI");

	Params::UWBP_PalDialog_C_SetupUI_Params Parms{};

	Parms.DialogType = DialogType;
	Parms.Message = Message;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_2 = CallFunc_GetLocalizedTextFromHandle_Text_2;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_3 = CallFunc_GetLocalizedTextFromHandle_Text_3;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_4 = CallFunc_GetLocalizedTextFromHandle_Text_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDialog.WBP_PalDialog_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDialog_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDialog_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDialog.WBP_PalDialog_C.BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_2_OnClickedLeftButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PalDialog_C::BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_2_OnClickedLeftButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDialog_C", "BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_2_OnClickedLeftButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDialog.WBP_PalDialog_C.BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_3_OnClickedRightButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PalDialog_C::BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_3_OnClickedRightButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDialog_C", "BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_3_OnClickedRightButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDialog.WBP_PalDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDialog_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDialog.WBP_PalDialog_C.ExecuteUbergraph_WBP_PalDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDialogParameterDialog*   K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetLeftButton_rightButton                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetRightButton_button                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)

void UWBP_PalDialog_C::ExecuteUbergraph_WBP_PalDialog(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalDialogParameterDialog* K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonButtonBase* CallFunc_GetLeftButton_rightButton, class UCommonButtonBase* CallFunc_GetRightButton_button, class UWidget* K2Node_Select_Default, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDialog_C", "ExecuteUbergraph_WBP_PalDialog");

	Params::UWBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog = K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLeftButton_rightButton = CallFunc_GetLeftButton_rightButton;
	Parms.CallFunc_GetRightButton_button = CallFunc_GetRightButton_button;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


