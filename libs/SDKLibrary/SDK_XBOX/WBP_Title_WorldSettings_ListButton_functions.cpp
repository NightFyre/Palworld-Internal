#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Title_WorldSettings_ListButton.WBP_Title_WorldSettings_ListButton_C
// (None)

class UClass* UWBP_Title_WorldSettings_ListButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Title_WorldSettings_ListButton_C");

	return Clss;
}


// WBP_Title_WorldSettings_ListButton_C WBP_Title_WorldSettings_ListButton.Default__WBP_Title_WorldSettings_ListButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Title_WorldSettings_ListButton_C* UWBP_Title_WorldSettings_ListButton_C::GetDefaultObj()
{
	static class UWBP_Title_WorldSettings_ListButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Title_WorldSettings_ListButton_C*>(UWBP_Title_WorldSettings_ListButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Title_WorldSettings_ListButton.WBP_Title_WorldSettings_ListButton_C.GetButtonText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ButtonText                                                       (Parm, OutParm)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)

void UWBP_Title_WorldSettings_ListButton_C::GetButtonText(class FText* ButtonText, class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListButton_C", "GetButtonText");

	Params::UWBP_Title_WorldSettings_ListButton_C_GetButtonText_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonText != nullptr)
		*ButtonText = Parms.ButtonText;

}


// Function WBP_Title_WorldSettings_ListButton.WBP_Title_WorldSettings_ListButton_C.Click
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_ListButton_C::Click()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListButton_C", "Click");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Title_WorldSettings_ListButton.WBP_Title_WorldSettings_ListButton_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Title_WorldSettings_ListButton_C::SetButtonText(class FText NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListButton_C", "SetButtonText");

	Params::UWBP_Title_WorldSettings_ListButton_C_SetButtonText_Params Parms{};

	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListButton.WBP_Title_WorldSettings_ListButton_C.BndEvt__WBP_Title_WorldSettings_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListButton_C::BndEvt__WBP_Title_WorldSettings_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListButton_C", "BndEvt__WBP_Title_WorldSettings_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Title_WorldSettings_ListButton_C_BndEvt__WBP_Title_WorldSettings_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListButton.WBP_Title_WorldSettings_ListButton_C.ExecuteUbergraph_WBP_Title_WorldSettings_ListButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Title_WorldSettings_ListButton_C::ExecuteUbergraph_WBP_Title_WorldSettings_ListButton(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListButton_C", "ExecuteUbergraph_WBP_Title_WorldSettings_ListButton");

	Params::UWBP_Title_WorldSettings_ListButton_C_ExecuteUbergraph_WBP_Title_WorldSettings_ListButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Title_WorldSettings_ListButton.WBP_Title_WorldSettings_ListButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Title_WorldSettings_ListButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Title_WorldSettings_ListButton_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


