#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_State.WBP_MainMenu_Pal_State_C
// (None)

class UClass* UWBP_MainMenu_Pal_State_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Pal_State_C");

	return Clss;
}


// WBP_MainMenu_Pal_State_C WBP_MainMenu_Pal_State.Default__WBP_MainMenu_Pal_State_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Pal_State_C* UWBP_MainMenu_Pal_State_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Pal_State_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Pal_State_C*>(UWBP_MainMenu_Pal_State_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Pal_State.WBP_MainMenu_Pal_State_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_State_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_State_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_State.WBP_MainMenu_Pal_State_C.Set Condition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalUIConditionType     DisplayCondition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPalConditionName_outName                             (None)
// int32                              CallFunc_GetPalConditionUrgency_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_State_C::Set_Condition(enum class EPalUIConditionType DisplayCondition, class FText CallFunc_GetPalConditionName_outName, int32 CallFunc_GetPalConditionUrgency_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidgetAnimation* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_State_C", "Set Condition");

	Params::UWBP_MainMenu_Pal_State_C_Set_Condition_Params Parms{};

	Parms.DisplayCondition = DisplayCondition;
	Parms.CallFunc_GetPalConditionName_outName = CallFunc_GetPalConditionName_outName;
	Parms.CallFunc_GetPalConditionUrgency_ReturnValue = CallFunc_GetPalConditionUrgency_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_State.WBP_MainMenu_Pal_State_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_State_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_State_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_State.WBP_MainMenu_Pal_State_C.BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_State_C::BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_State_C", "BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_State_C_BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_State.WBP_MainMenu_Pal_State_C.BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_State_C::BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_State_C", "BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_State_C_BndEvt__WBP_MainMenu_Pal_State_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_State.WBP_MainMenu_Pal_State_C.ExecuteUbergraph_WBP_MainMenu_Pal_State
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidgetAnimation*>    K2Node_MakeArray_Array                                           (ReferenceParm)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_State_C::ExecuteUbergraph_WBP_MainMenu_Pal_State(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_State_C", "ExecuteUbergraph_WBP_MainMenu_Pal_State");

	Params::UWBP_MainMenu_Pal_State_C_ExecuteUbergraph_WBP_MainMenu_Pal_State_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_State.WBP_MainMenu_Pal_State_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_State_C*   StateWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_State_C::OnUnhovered__DelegateSignature(class UWBP_MainMenu_Pal_State_C* StateWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_State_C", "OnUnhovered__DelegateSignature");

	Params::UWBP_MainMenu_Pal_State_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.StateWidget = StateWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_State.WBP_MainMenu_Pal_State_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_State_C*   StateWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_State_C::OnHovered__DelegateSignature(class UWBP_MainMenu_Pal_State_C* StateWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_State_C", "OnHovered__DelegateSignature");

	Params::UWBP_MainMenu_Pal_State_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.StateWidget = StateWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


