#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_OptionSettings_ClickableButton.WBP_OptionSettings_ClickableButton_C
// (None)

class UClass* UWBP_OptionSettings_ClickableButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_OptionSettings_ClickableButton_C");

	return Clss;
}


// WBP_OptionSettings_ClickableButton_C WBP_OptionSettings_ClickableButton.Default__WBP_OptionSettings_ClickableButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_OptionSettings_ClickableButton_C* UWBP_OptionSettings_ClickableButton_C::GetDefaultObj()
{
	static class UWBP_OptionSettings_ClickableButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_OptionSettings_ClickableButton_C*>(UWBP_OptionSettings_ClickableButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_OptionSettings_ClickableButton.WBP_OptionSettings_ClickableButton_C.BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ClickableButton_C::BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ClickableButton_C", "BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ClickableButton.WBP_OptionSettings_ClickableButton_C.BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ClickableButton_C::BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ClickableButton_C", "BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ClickableButton.WBP_OptionSettings_ClickableButton_C.BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ClickableButton_C::BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ClickableButton_C", "BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ClickableButton.WBP_OptionSettings_ClickableButton_C.ExecuteUbergraph_WBP_OptionSettings_ClickableButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ClickableButton_C::ExecuteUbergraph_WBP_OptionSettings_ClickableButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ClickableButton_C", "ExecuteUbergraph_WBP_OptionSettings_ClickableButton");

	Params::UWBP_OptionSettings_ClickableButton_C_ExecuteUbergraph_WBP_OptionSettings_ClickableButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ClickableButton.WBP_OptionSettings_ClickableButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ClickableButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ClickableButton_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


