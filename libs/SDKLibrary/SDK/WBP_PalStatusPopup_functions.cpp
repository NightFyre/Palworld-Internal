#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalStatusPopup.WBP_PalStatusPopup_C
// (None)

class UClass* UWBP_PalStatusPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalStatusPopup_C");

	return Clss;
}


// WBP_PalStatusPopup_C WBP_PalStatusPopup.Default__WBP_PalStatusPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalStatusPopup_C* UWBP_PalStatusPopup_C::GetDefaultObj()
{
	static class UWBP_PalStatusPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalStatusPopup_C*>(UWBP_PalStatusPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalStatusPopup.WBP_PalStatusPopup_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Is_Editing_Nick_Name_isEditing                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalStatusPopup_C::OnCancelAction(bool CallFunc_Is_Editing_Nick_Name_isEditing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatusPopup_C", "OnCancelAction");

	Params::UWBP_PalStatusPopup_C_OnCancelAction_Params Parms{};

	Parms.CallFunc_Is_Editing_Nick_Name_isEditing = CallFunc_Is_Editing_Nick_Name_isEditing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalStatusPopup.WBP_PalStatusPopup_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PalStatusPopup_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatusPopup_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_PalStatusPopup_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PalStatusPopup.WBP_PalStatusPopup_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalStatusPopup_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatusPopup_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatusPopup.WBP_PalStatusPopup_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalStatusPopup_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatusPopup_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatusPopup.WBP_PalStatusPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalStatusPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatusPopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatusPopup.WBP_PalStatusPopup_C.BndEvt__WBP_PalStatusPopup_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PalStatusPopup_C::BndEvt__WBP_PalStatusPopup_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatusPopup_C", "BndEvt__WBP_PalStatusPopup_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalStatusPopup.WBP_PalStatusPopup_C.ExecuteUbergraph_WBP_PalStatusPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_MonsterDetail*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Monster_Detail    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)

void UWBP_PalStatusPopup_C::ExecuteUbergraph_WBP_PalStatusPopup(int32 EntryPoint, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalHUDDispatchParameter_MonsterDetail* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Monster_Detail, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalStatusPopup_C", "ExecuteUbergraph_WBP_PalStatusPopup");

	Params::UWBP_PalStatusPopup_C_ExecuteUbergraph_WBP_PalStatusPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Monster_Detail = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Monster_Detail;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


