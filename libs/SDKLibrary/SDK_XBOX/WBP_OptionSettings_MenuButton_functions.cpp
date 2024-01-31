#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_OptionSettings_MenuButton.WBP_OptionSettings_MenuButton_C
// (None)

class UClass* UWBP_OptionSettings_MenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_OptionSettings_MenuButton_C");

	return Clss;
}


// WBP_OptionSettings_MenuButton_C WBP_OptionSettings_MenuButton.Default__WBP_OptionSettings_MenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_OptionSettings_MenuButton_C* UWBP_OptionSettings_MenuButton_C::GetDefaultObj()
{
	static class UWBP_OptionSettings_MenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_OptionSettings_MenuButton_C*>(UWBP_OptionSettings_MenuButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_OptionSettings_MenuButton.WBP_OptionSettings_MenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_MenuButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_MenuButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_MenuButton.WBP_OptionSettings_MenuButton_C.BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_MenuButton_C::BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_MenuButton_C", "BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_OptionSettings_MenuButton_C_BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_MenuButton.WBP_OptionSettings_MenuButton_C.BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_MenuButton_C::BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_MenuButton_C", "BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_OptionSettings_MenuButton_C_BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_MenuButton.WBP_OptionSettings_MenuButton_C.BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_MenuButton_C::BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_MenuButton_C", "BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_OptionSettings_MenuButton_C_BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_MenuButton.WBP_OptionSettings_MenuButton_C.ReleaseFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_MenuButton_C::ReleaseFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_MenuButton_C", "ReleaseFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_MenuButton.WBP_OptionSettings_MenuButton_C.ExecuteUbergraph_WBP_OptionSettings_MenuButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_MenuButton_C::ExecuteUbergraph_WBP_OptionSettings_MenuButton(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_MenuButton_C", "ExecuteUbergraph_WBP_OptionSettings_MenuButton");

	Params::UWBP_OptionSettings_MenuButton_C_ExecuteUbergraph_WBP_OptionSettings_MenuButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_MenuButton.WBP_OptionSettings_MenuButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_MenuButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_MenuButton_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


