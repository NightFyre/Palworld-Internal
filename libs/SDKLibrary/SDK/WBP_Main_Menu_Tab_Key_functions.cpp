#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C
// (None)

class UClass* UWBP_Main_Menu_Tab_Key_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Main_Menu_Tab_Key_C");

	return Clss;
}


// WBP_Main_Menu_Tab_Key_C WBP_Main_Menu_Tab_Key.Default__WBP_Main_Menu_Tab_Key_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Main_Menu_Tab_Key_C* UWBP_Main_Menu_Tab_Key_C::GetDefaultObj()
{
	static class UWBP_Main_Menu_Tab_Key_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Main_Menu_Tab_Key_C*>(UWBP_Main_Menu_Tab_Key_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Main_Menu_Tab_Key_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Main_Menu_Tab_Key_C", "AnmEvent_Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C.AnmEvent_Unfocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Main_Menu_Tab_Key_C::AnmEvent_Unfocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Main_Menu_Tab_Key_C", "AnmEvent_Unfocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C.AnmEvent_Push
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Main_Menu_Tab_Key_C::AnmEvent_Push()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Main_Menu_Tab_Key_C", "AnmEvent_Push");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Main_Menu_Tab_Key_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Main_Menu_Tab_Key_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Main_Menu_Tab_Key_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Main_Menu_Tab_Key_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C.BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Main_Menu_Tab_Key_C::BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Main_Menu_Tab_Key_C", "BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Main_Menu_Tab_Key_C_BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C.BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Main_Menu_Tab_Key_C::BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Main_Menu_Tab_Key_C", "BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Main_Menu_Tab_Key_C_BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C.BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Main_Menu_Tab_Key_C::BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Main_Menu_Tab_Key_C", "BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Main_Menu_Tab_Key_C_BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C.ExecuteUbergraph_WBP_Main_Menu_Tab_Key
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Main_Menu_Tab_Key_C::ExecuteUbergraph_WBP_Main_Menu_Tab_Key(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Main_Menu_Tab_Key_C", "ExecuteUbergraph_WBP_Main_Menu_Tab_Key");

	Params::UWBP_Main_Menu_Tab_Key_C_ExecuteUbergraph_WBP_Main_Menu_Tab_Key_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Main_Menu_Tab_Key.WBP_Main_Menu_Tab_Key_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Main_Menu_Tab_Key_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Main_Menu_Tab_Key_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


