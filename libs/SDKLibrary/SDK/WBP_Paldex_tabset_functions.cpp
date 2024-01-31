#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Paldex_tabset.WBP_Paldex_tabset_C
// (None)

class UClass* UWBP_Paldex_tabset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Paldex_tabset_C");

	return Clss;
}


// WBP_Paldex_tabset_C WBP_Paldex_tabset.Default__WBP_Paldex_tabset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Paldex_tabset_C* UWBP_Paldex_tabset_C::GetDefaultObj()
{
	static class UWBP_Paldex_tabset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Paldex_tabset_C*>(UWBP_Paldex_tabset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.OnPrevEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_tabset_C::OnPrevEvent(int32 OldIndex, int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "OnPrevEvent");

	Params::UWBP_Paldex_tabset_C_OnPrevEvent_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.OnNextEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_tabset_C::OnNextEvent(int32 OldIndex, int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "OnNextEvent");

	Params::UWBP_Paldex_tabset_C_OnNextEvent_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.OnChangedIndexEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     FocusTargetWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_tabset_C::OnChangedIndexEvent(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget, bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "OnChangedIndexEvent");

	Params::UWBP_Paldex_tabset_C_OnChangedIndexEvent_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;
	Parms.FocusTargetWidget = FocusTargetWidget;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.RegisterPanelWidget
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                PanelWidget                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_tabset_C::RegisterPanelWidget(class UPanelWidget** PanelWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "RegisterPanelWidget");

	Params::UWBP_Paldex_tabset_C_RegisterPanelWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PanelWidget != nullptr)
		*PanelWidget = Parms.PanelWidget;

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Distribution_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Paldex_tabset_C::BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Distribution_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Distribution_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Model_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Paldex_tabset_C::BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Model_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Model_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Paldex_tabset_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_R_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Paldex_tabset_C::BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_R_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_R_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_L_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Paldex_tabset_C::BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_L_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_L_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.ExecuteUbergraph_WBP_Paldex_tabset
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_tabset_C::ExecuteUbergraph_WBP_Paldex_tabset(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "ExecuteUbergraph_WBP_Paldex_tabset");

	Params::UWBP_Paldex_tabset_C_ExecuteUbergraph_WBP_Paldex_tabset_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.OnSelectedDistributionTab__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_tabset_C::OnSelectedDistributionTab__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "OnSelectedDistributionTab__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_tabset.WBP_Paldex_tabset_C.OnSelectedModelTab__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_tabset_C::OnSelectedModelTab__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_tabset_C", "OnSelectedModelTab__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


