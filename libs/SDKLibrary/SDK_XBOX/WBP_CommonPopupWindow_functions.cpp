#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CommonPopupWindow.WBP_CommonPopupWindow_C
// (None)

class UClass* UWBP_CommonPopupWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CommonPopupWindow_C");

	return Clss;
}


// WBP_CommonPopupWindow_C WBP_CommonPopupWindow.Default__WBP_CommonPopupWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CommonPopupWindow_C* UWBP_CommonPopupWindow_C::GetDefaultObj()
{
	static class UWBP_CommonPopupWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CommonPopupWindow_C*>(UWBP_CommonPopupWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.SetOneButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOneButton                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonPopupWindow_C::SetOneButton(bool IsOneButton, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "SetOneButton");

	Params::UWBP_CommonPopupWindow_C_SetOneButton_Params Parms{};

	Parms.IsOneButton = IsOneButton;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.GetRightButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonPopupWindow_C::GetRightButton(class UCommonButtonBase** Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "GetRightButton");

	Params::UWBP_CommonPopupWindow_C_GetRightButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.GetLeftButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCommonButtonBase*           RightButton                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonPopupWindow_C::GetLeftButton(class UCommonButtonBase** RightButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "GetLeftButton");

	Params::UWBP_CommonPopupWindow_C_GetLeftButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RightButton != nullptr)
		*RightButton = Parms.RightButton;

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.OverrideRightButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonPopupWindow_C::OverrideRightButtonText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "OverrideRightButtonText");

	Params::UWBP_CommonPopupWindow_C_OverrideRightButtonText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.OverrideLeftButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonPopupWindow_C::OverrideLeftButtonText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "OverrideLeftButtonText");

	Params::UWBP_CommonPopupWindow_C_OverrideLeftButtonText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.SetMainText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonPopupWindow_C::SetMainText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "SetMainText");

	Params::UWBP_CommonPopupWindow_C_SetMainText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CommonPopupWindow_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CommonPopupWindow_C::BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CommonPopupWindow_C::BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CommonPopupWindow_C::BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CommonPopupWindow_C::BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.ExecuteUbergraph_WBP_CommonPopupWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)

void UWBP_CommonPopupWindow_C::ExecuteUbergraph_WBP_CommonPopupWindow(int32 EntryPoint, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "ExecuteUbergraph_WBP_CommonPopupWindow");

	Params::UWBP_CommonPopupWindow_C_ExecuteUbergraph_WBP_CommonPopupWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.OnClickedRightButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonPopupWindow_C::OnClickedRightButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "OnClickedRightButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonPopupWindow.WBP_CommonPopupWindow_C.OnClickedLeftButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonPopupWindow_C::OnClickedLeftButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonPopupWindow_C", "OnClickedLeftButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


