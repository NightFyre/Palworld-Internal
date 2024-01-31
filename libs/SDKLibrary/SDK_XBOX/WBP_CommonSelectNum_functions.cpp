#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CommonSelectNum.WBP_CommonSelectNum_C
// (None)

class UClass* UWBP_CommonSelectNum_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CommonSelectNum_C");

	return Clss;
}


// WBP_CommonSelectNum_C WBP_CommonSelectNum.Default__WBP_CommonSelectNum_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CommonSelectNum_C* UWBP_CommonSelectNum_C::GetDefaultObj()
{
	static class UWBP_CommonSelectNum_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CommonSelectNum_C*>(UWBP_CommonSelectNum_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.CheckMaxCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OutString                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::CheckMaxCount(const class FString& InString, class FString* OutString, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "CheckMaxCount");

	Params::UWBP_CommonSelectNum_C_CheckMaxCount_Params Parms{};

	Parms.InString = InString;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.GetNowCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::GetNowCount(int32* Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "GetNowCount");

	Params::UWBP_CommonSelectNum_C_GetNowCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.Check Numeric
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CheckString                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      OutString                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CheckedString                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::Check_Numeric(const class FString& CheckString, class FString* OutString, const class FString& CheckedString, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_IsNumeric_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "Check Numeric");

	Params::UWBP_CommonSelectNum_C_Check_Numeric_Params Parms{};

	Parms.CheckString = CheckString;
	Parms.CheckedString = CheckedString;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsNumeric_ReturnValue = CallFunc_IsNumeric_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_CommonSelectNum_C::UpdateText(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "UpdateText");

	Params::UWBP_CommonSelectNum_C_UpdateText_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.Increment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::Increment(int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "Increment");

	Params::UWBP_CommonSelectNum_C_Increment_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.Decrement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::Decrement(int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "Decrement");

	Params::UWBP_CommonSelectNum_C_Decrement_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InMaxCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DefaultCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::Setup(int32 InMaxCount, int32 DefaultCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "Setup");

	Params::UWBP_CommonSelectNum_C_Setup_Params Parms{};

	Parms.InMaxCount = InMaxCount;
	Parms.DefaultCount = DefaultCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.BndEvt__WBP_CommonSelectNum_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CommonSelectNum_C::BndEvt__WBP_CommonSelectNum_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "BndEvt__WBP_CommonSelectNum_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_CommonSelectNum_C_BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CommonSelectNum_C::BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWBP_CommonSelectNum_C_BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.BndEvt__WBP_CommonSelectNum_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CommonSelectNum_C::BndEvt__WBP_CommonSelectNum_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "BndEvt__WBP_CommonSelectNum_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.BndEvt__WBP_CommonSelectNum_Button_318_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CommonSelectNum_C::BndEvt__WBP_CommonSelectNum_Button_318_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "BndEvt__WBP_CommonSelectNum_Button_318_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonSelectNum_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnClickedR
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonSelectNum_C::OnClickedR()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnClickedR");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnClickedL
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonSelectNum_C::OnClickedL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnClickedL");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnEscape
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonSelectNum_C::OnEscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnEscape");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnTextChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewString                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::OnTextChanged(const class FString& NewString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnTextChanged");

	Params::UWBP_CommonSelectNum_C_OnTextChanged_Params Parms{};

	Parms.NewString = NewString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.ExecuteUbergraph_WBP_CommonSelectNum
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Check_Numeric_outString                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Check_Numeric_outString_1                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CheckMaxCount_outString                                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Check_Numeric_outString_2                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CheckMaxCount_outString_1                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUISelectNumParameter*    K2Node_DynamicCast_AsPal_UISelect_Num_Parameter                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_newString                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::ExecuteUbergraph_WBP_CommonSelectNum(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Check_Numeric_outString, const class FString& CallFunc_Check_Numeric_outString_1, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_CheckMaxCount_outString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Left_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Check_Numeric_outString_2, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_CheckMaxCount_outString_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUISelectNumParameter* K2Node_DynamicCast_AsPal_UISelect_Num_Parameter, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_newString, int32 CallFunc_Conv_StringToInt_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "ExecuteUbergraph_WBP_CommonSelectNum");

	Params::UWBP_CommonSelectNum_C_ExecuteUbergraph_WBP_CommonSelectNum_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Check_Numeric_outString = CallFunc_Check_Numeric_outString;
	Parms.CallFunc_Check_Numeric_outString_1 = CallFunc_Check_Numeric_outString_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_CheckMaxCount_outString = CallFunc_CheckMaxCount_outString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Check_Numeric_outString_2 = CallFunc_Check_Numeric_outString_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_CheckMaxCount_outString_1 = CallFunc_CheckMaxCount_outString_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_UISelect_Num_Parameter = K2Node_DynamicCast_AsPal_UISelect_Num_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_newString = K2Node_CustomEvent_newString;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnTextCommited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewString                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CommonSelectNum_C::OnTextCommited__DelegateSignature(const class FString& NewString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnTextCommited__DelegateSignature");

	Params::UWBP_CommonSelectNum_C_OnTextCommited__DelegateSignature_Params Parms{};

	Parms.NewString = NewString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnLeftButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonSelectNum_C::OnLeftButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnLeftButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonSelectNum.WBP_CommonSelectNum_C.OnRightButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonSelectNum_C::OnRightButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonSelectNum_C", "OnRightButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


