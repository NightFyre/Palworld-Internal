#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C
// (None)

class UClass* UWBP_TutorialMessage_Temp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TutorialMessage_Temp_C");

	return Clss;
}


// WBP_TutorialMessage_Temp_C WBP_TutorialMessage_Temp.Default__WBP_TutorialMessage_Temp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TutorialMessage_Temp_C* UWBP_TutorialMessage_Temp_C::GetDefaultObj()
{
	static class UWBP_TutorialMessage_Temp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TutorialMessage_Temp_C*>(UWBP_TutorialMessage_Temp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.CreateGuideText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        OutText                                                          (Parm, OutParm)

void UWBP_TutorialMessage_Temp_C::CreateGuideText(class FText InText, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "CreateGuideText");

	Params::UWBP_TutorialMessage_Temp_C_CreateGuideText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.On Input Method Changed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_CreateGuideText_OutText                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TutorialMessage_Temp_C::On_Input_Method_Changed(enum class ECommonInputType InputType, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_CreateGuideText_OutText, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "On Input Method Changed");

	Params::UWBP_TutorialMessage_Temp_C_On_Input_Method_Changed_Params Parms{};

	Parms.InputType = InputType;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_CreateGuideText_OutText = CallFunc_CreateGuideText_OutText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTutorialManager*         CallFunc_GetTutorialManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TutorialMessage_Temp_C::Setup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UPalTutorialManager* CallFunc_GetTutorialManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "Setup");

	Params::UWBP_TutorialMessage_Temp_C_Setup_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetTutorialManager_ReturnValue = CallFunc_GetTutorialManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.Finished_D8B6F6C240191DC6DD60BAADB6596025
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TutorialMessage_Temp_C::Finished_D8B6F6C240191DC6DD60BAADB6596025()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "Finished_D8B6F6C240191DC6DD60BAADB6596025");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.Finished_5267E3844738D65023A58CBEE7C11FAC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TutorialMessage_Temp_C::Finished_5267E3844738D65023A58CBEE7C11FAC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "Finished_5267E3844738D65023A58CBEE7C11FAC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.QueueTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         TutorialMsgID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_TutorialMessage_Temp_C::QueueTutorial(const struct FDataTableRowHandle& TutorialMsgID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "QueueTutorial");

	Params::UWBP_TutorialMessage_Temp_C_QueueTutorial_Params Parms{};

	Parms.TutorialMsgID = TutorialMsgID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.PresentMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TutorialMessage_Temp_C::PresentMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "PresentMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.SkipToNextMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TutorialMessage_Temp_C::SkipToNextMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "SkipToNextMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.ExecuteUbergraph_WBP_TutorialMessage_Temp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// struct FDataTableRowHandle         K2Node_CustomEvent_TutorialMsgId                                 (NoDestructor)
// class FText                        CallFunc_CreateGuideText_OutText                                 (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TutorialMessage_Temp_C::ExecuteUbergraph_WBP_TutorialMessage_Temp(int32 EntryPoint, bool CallFunc_Array_IsNotEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FDataTableRowHandle& K2Node_CustomEvent_TutorialMsgId, class FText CallFunc_CreateGuideText_OutText, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TutorialMessage_Temp_C", "ExecuteUbergraph_WBP_TutorialMessage_Temp");

	Params::UWBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_CustomEvent_TutorialMsgId = K2Node_CustomEvent_TutorialMsgId;
	Parms.CallFunc_CreateGuideText_OutText = CallFunc_CreateGuideText_OutText;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue_1 = CallFunc_GetGameSetting_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetGameSetting_ReturnValue_2 = CallFunc_GetGameSetting_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


