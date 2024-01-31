#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContentLRArrow.WBP_OptionSettings_ListContentLRArrow_C
// (None)

class UClass* UWBP_OptionSettings_ListContentLRArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_OptionSettings_ListContentLRArrow_C");

	return Clss;
}


// WBP_OptionSettings_ListContentLRArrow_C WBP_OptionSettings_ListContentLRArrow.Default__WBP_OptionSettings_ListContentLRArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_OptionSettings_ListContentLRArrow_C* UWBP_OptionSettings_ListContentLRArrow_C::GetDefaultObj()
{
	static class UWBP_OptionSettings_ListContentLRArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_OptionSettings_ListContentLRArrow_C*>(UWBP_OptionSettings_ListContentLRArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_OptionSettings_ListContentLRArrow.WBP_OptionSettings_ListContentLRArrow_C.ClickInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentLRArrow_C::ClickInternal(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentLRArrow_C", "ClickInternal");

	Params::UWBP_OptionSettings_ListContentLRArrow_C_ClickInternal_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentLRArrow.WBP_OptionSettings_ListContentLRArrow_C.Click
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContentLRArrow_C::Click()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentLRArrow_C", "Click");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_OptionSettings_ListContentLRArrow.WBP_OptionSettings_ListContentLRArrow_C.BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentLRArrow_C::BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentLRArrow_C", "BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_OptionSettings_ListContentLRArrow_C_BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentLRArrow.WBP_OptionSettings_ListContentLRArrow_C.BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentLRArrow_C::BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentLRArrow_C", "BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_OptionSettings_ListContentLRArrow_C_BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentLRArrow.WBP_OptionSettings_ListContentLRArrow_C.BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentLRArrow_C::BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentLRArrow_C", "BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_OptionSettings_ListContentLRArrow_C_BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentLRArrow.WBP_OptionSettings_ListContentLRArrow_C.ExecuteUbergraph_WBP_OptionSettings_ListContentLRArrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentLRArrow_C::ExecuteUbergraph_WBP_OptionSettings_ListContentLRArrow(int32 EntryPoint, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentLRArrow_C", "ExecuteUbergraph_WBP_OptionSettings_ListContentLRArrow");

	Params::UWBP_OptionSettings_ListContentLRArrow_C_ExecuteUbergraph_WBP_OptionSettings_ListContentLRArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentLRArrow.WBP_OptionSettings_ListContentLRArrow_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_OptionSettings_ListContentLRArrow_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentLRArrow_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


