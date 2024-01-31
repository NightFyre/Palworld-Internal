#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Menu_btn.WBP_Menu_btn_C
// (None)

class UClass* UWBP_Menu_btn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Menu_btn_C");

	return Clss;
}


// WBP_Menu_btn_C WBP_Menu_btn.Default__WBP_Menu_btn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Menu_btn_C* UWBP_Menu_btn_C::GetDefaultObj()
{
	static class UWBP_Menu_btn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Menu_btn_C*>(UWBP_Menu_btn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Menu_btn.WBP_Menu_btn_C.AnmEvent_Click
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Menu_btn_C::AnmEvent_Click()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_btn_C", "AnmEvent_Click");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_btn.WBP_Menu_btn_C.AnmEvent_Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Menu_btn_C::AnmEvent_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_btn_C", "AnmEvent_Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_btn.WBP_Menu_btn_C.AnmEvent_Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Menu_btn_C::AnmEvent_Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_btn_C", "AnmEvent_Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_btn.WBP_Menu_btn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Menu_btn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_btn_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Menu_btn.WBP_Menu_btn_C.BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_btn_C::BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_btn_C", "BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Menu_btn_C_BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Menu_btn.WBP_Menu_btn_C.BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_btn_C::BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_btn_C", "BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Menu_btn_C_BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Menu_btn.WBP_Menu_btn_C.BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_btn_C::BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_btn_C", "BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Menu_btn_C_BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Menu_btn.WBP_Menu_btn_C.ExecuteUbergraph_WBP_Menu_btn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Menu_btn_C::ExecuteUbergraph_WBP_Menu_btn(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_btn_C", "ExecuteUbergraph_WBP_Menu_btn");

	Params::UWBP_Menu_btn_C_ExecuteUbergraph_WBP_Menu_btn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Menu_btn.WBP_Menu_btn_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Menu_btn_C::OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Menu_btn_C", "OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


