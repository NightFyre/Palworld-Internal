#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C
// (None)

class UClass* UWBP_Title_DeleteWorldWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Title_DeleteWorldWindow_C");

	return Clss;
}


// WBP_Title_DeleteWorldWindow_C WBP_Title_DeleteWorldWindow.Default__WBP_Title_DeleteWorldWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Title_DeleteWorldWindow_C* UWBP_Title_DeleteWorldWindow_C::GetDefaultObj()
{
	static class UWBP_Title_DeleteWorldWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Title_DeleteWorldWindow_C*>(UWBP_Title_DeleteWorldWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.OnClosedDeleteCheckDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDDIspatchParameter_DeleteWorld_C*K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_DeleteWorldWindow_C::OnClosedDeleteCheckDialog(bool bResult, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_HUDDIspatchParameter_DeleteWorld_C* K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "OnClosedDeleteCheckDialog");

	Params::UWBP_Title_DeleteWorldWindow_C_OnClosedDeleteCheckDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World = K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.OpenCheckDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewLocalVar                                                      (Edit, BlueprintVisible, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_Title_DeleteWorldWindow_C::OpenCheckDialog(const struct FDataTableRowHandle& NewLocalVar, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "OpenCheckDialog");

	Params::UWBP_Title_DeleteWorldWindow_C_OpenCheckDialog_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Title_DeleteWorldWindow_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Title_DeleteWorldWindow_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.SetEnableConfirmButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_DeleteWorldWindow_C::SetEnableConfirmButton(bool IsEnable, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "SetEnableConfirmButton");

	Params::UWBP_Title_DeleteWorldWindow_C_SetEnableConfirmButton_Params Parms{};

	Parms.IsEnable = IsEnable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Title_DeleteWorldWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Title_DeleteWorldWindow_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Title_DeleteWorldWindow_C::BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_DeleteWorldWindow_C::BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_Title_DeleteWorldWindow_C_BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Title_DeleteWorldWindow_C::BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.BndEvt__WBP_Title_DeleteWorldWindow_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Title_DeleteWorldWindow_C::BndEvt__WBP_Title_DeleteWorldWindow_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "BndEvt__WBP_Title_DeleteWorldWindow_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C.ExecuteUbergraph_WBP_Title_DeleteWorldWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDialogParameterBase*     K2Node_DynamicCast_AsPal_Dialog_Parameter_Base                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_DeleteWorldWindow_C::ExecuteUbergraph_WBP_Title_DeleteWorldWindow(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalDialogParameterBase* K2Node_DynamicCast_AsPal_Dialog_Parameter_Base, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_DeleteWorldWindow_C", "ExecuteUbergraph_WBP_Title_DeleteWorldWindow");

	Params::UWBP_Title_DeleteWorldWindow_C_ExecuteUbergraph_WBP_Title_DeleteWorldWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Dialog_Parameter_Base = K2Node_DynamicCast_AsPal_Dialog_Parameter_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


