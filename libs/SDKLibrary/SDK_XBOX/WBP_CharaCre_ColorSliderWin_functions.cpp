#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C
// (None)

class UClass* UWBP_CharaCre_ColorSliderWin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_ColorSliderWin_C");

	return Clss;
}


// WBP_CharaCre_ColorSliderWin_C WBP_CharaCre_ColorSliderWin.Default__WBP_CharaCre_ColorSliderWin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_ColorSliderWin_C* UWBP_CharaCre_ColorSliderWin_C::GetDefaultObj()
{
	static class UWBP_CharaCre_ColorSliderWin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_ColorSliderWin_C*>(UWBP_CharaCre_ColorSliderWin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_CharaCre_ColorSliderWin_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSliderWin_C", "OnMouseButtonDown_0");

	Params::UWBP_CharaCre_ColorSliderWin_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSliderWin_C::OnInputMethodChanged(enum class ECommonInputType bNewInputType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSliderWin_C", "OnInputMethodChanged");

	Params::UWBP_CharaCre_ColorSliderWin_C_OnInputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.OnCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ColorSliderWin_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSliderWin_C", "OnCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharaCre_ColorSliderWin_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetTopFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSliderWin_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CharaCre_ColorSliderWin_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ColorSliderWin_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSliderWin_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                HSV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSliderWin_C::BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature(const struct FLinearColor& HSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSliderWin_C", "BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature");

	Params::UWBP_CharaCre_ColorSliderWin_C_BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature_Params Parms{};

	Parms.HSV = HSV;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.BndEvt__WBP_CharaCre_ColorSliderWin_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ColorSliderWin_C::BndEvt__WBP_CharaCre_ColorSliderWin_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSliderWin_C", "BndEvt__WBP_CharaCre_ColorSliderWin_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_ColorSliderWin_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSliderWin_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C.ExecuteUbergraph_WBP_CharaCre_ColorSliderWin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CharaCre_ColorSelectWindowDispatchParameter_C*K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_ComponentBoundEvent_HSV                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_ColorSliderWin_C::ExecuteUbergraph_WBP_CharaCre_ColorSliderWin(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& K2Node_ComponentBoundEvent_HSV, class FName CallFunc_Conv_StringToName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* CallFunc_GetTopFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_ColorSliderWin_C", "ExecuteUbergraph_WBP_CharaCre_ColorSliderWin");

	Params::UWBP_CharaCre_ColorSliderWin_C_ExecuteUbergraph_WBP_CharaCre_ColorSliderWin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter = K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_HSV = K2Node_ComponentBoundEvent_HSV;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


