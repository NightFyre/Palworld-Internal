#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Title_WorldSettings_NameWindow.WBP_Title_WorldSettings_NameWindow_C
// (None)

class UClass* UWBP_Title_WorldSettings_NameWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Title_WorldSettings_NameWindow_C");

	return Clss;
}


// WBP_Title_WorldSettings_NameWindow_C WBP_Title_WorldSettings_NameWindow.Default__WBP_Title_WorldSettings_NameWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Title_WorldSettings_NameWindow_C* UWBP_Title_WorldSettings_NameWindow_C::GetDefaultObj()
{
	static class UWBP_Title_WorldSettings_NameWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Title_WorldSettings_NameWindow_C*>(UWBP_Title_WorldSettings_NameWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Title_WorldSettings_NameWindow.WBP_Title_WorldSettings_NameWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Title_WorldSettings_NameWindow_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_NameWindow_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Title_WorldSettings_NameWindow_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Title_WorldSettings_NameWindow.WBP_Title_WorldSettings_NameWindow_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_NameWindow_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_NameWindow_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings_NameWindow.WBP_Title_WorldSettings_NameWindow_C.BndEvt__WBP_Title_WorldSettings_NameWindow_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Title_WorldSettings_NameWindow_C::BndEvt__WBP_Title_WorldSettings_NameWindow_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_NameWindow_C", "BndEvt__WBP_Title_WorldSettings_NameWindow_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWBP_Title_WorldSettings_NameWindow_C_BndEvt__WBP_Title_WorldSettings_NameWindow_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_NameWindow.WBP_Title_WorldSettings_NameWindow_C.BndEvt__WBP_Title_WorldSettings_NameWindow_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_NameWindow_C::BndEvt__WBP_Title_WorldSettings_NameWindow_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_NameWindow_C", "BndEvt__WBP_Title_WorldSettings_NameWindow_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_Title_WorldSettings_NameWindow_C_BndEvt__WBP_Title_WorldSettings_NameWindow_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_NameWindow.WBP_Title_WorldSettings_NameWindow_C.BndEvt__WBP_Title_WorldSettings_NameWindow_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_NameWindow_C::BndEvt__WBP_Title_WorldSettings_NameWindow_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_NameWindow_C", "BndEvt__WBP_Title_WorldSettings_NameWindow_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings_NameWindow.WBP_Title_WorldSettings_NameWindow_C.ExecuteUbergraph_WBP_Title_WorldSettings_NameWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UBP_HUDDispatchParameter_WorldNameInput_C*K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_World_Name_Input   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue_1                                      (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDDispatchParameter_WorldNameInput_C*K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_World_Name_Input_1 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_NameWindow_C::ExecuteUbergraph_WBP_Title_WorldSettings_NameWindow(int32 EntryPoint, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UBP_HUDDispatchParameter_WorldNameInput_C* K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_World_Name_Input, bool K2Node_DynamicCast_bSuccess, class FText K2Node_ComponentBoundEvent_Text_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Left_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Left_ReturnValue_1, int32 CallFunc_Len_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue_1, class UBP_HUDDispatchParameter_WorldNameInput_C* K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_World_Name_Input_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_NameWindow_C", "ExecuteUbergraph_WBP_Title_WorldSettings_NameWindow");

	Params::UWBP_Title_WorldSettings_NameWindow_C_ExecuteUbergraph_WBP_Title_WorldSettings_NameWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_World_Name_Input = K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_World_Name_Input;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Left_ReturnValue_1 = CallFunc_Left_ReturnValue_1;
	Parms.CallFunc_Len_ReturnValue_1 = CallFunc_Len_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetParam_ReturnValue_1 = CallFunc_GetParam_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_World_Name_Input_1 = K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_World_Name_Input_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


