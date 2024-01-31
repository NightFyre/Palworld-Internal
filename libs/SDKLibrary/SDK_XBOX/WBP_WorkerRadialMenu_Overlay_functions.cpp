#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WorkerRadialMenu_Overlay.WBP_WorkerRadialMenu_Overlay_C
// (None)

class UClass* UWBP_WorkerRadialMenu_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WorkerRadialMenu_Overlay_C");

	return Clss;
}


// WBP_WorkerRadialMenu_Overlay_C WBP_WorkerRadialMenu_Overlay.Default__WBP_WorkerRadialMenu_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WorkerRadialMenu_Overlay_C* UWBP_WorkerRadialMenu_Overlay_C::GetDefaultObj()
{
	static class UWBP_WorkerRadialMenu_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WorkerRadialMenu_Overlay_C*>(UWBP_WorkerRadialMenu_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WorkerRadialMenu_Overlay.WBP_WorkerRadialMenu_Overlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WorkerRadialMenu_Overlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_Overlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorkerRadialMenu_Overlay.WBP_WorkerRadialMenu_Overlay_C.OnClosed
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_WorkerRadialMenu_Overlay_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_Overlay_C", "OnClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorkerRadialMenu_Overlay.WBP_WorkerRadialMenu_Overlay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WorkerRadialMenu_Overlay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_Overlay_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorkerRadialMenu_Overlay.WBP_WorkerRadialMenu_Overlay_C.OnSelectedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWorkerRadialMenuResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_Overlay_C::OnSelectedEvent(enum class EPalWorkerRadialMenuResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_Overlay_C", "OnSelectedEvent");

	Params::UWBP_WorkerRadialMenu_Overlay_C_OnSelectedEvent_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorkerRadialMenu_Overlay.WBP_WorkerRadialMenu_Overlay_C.OnAnyUIPushed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       PushedWidgetID                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_Overlay_C::OnAnyUIPushed(struct FGuid& PushedWidgetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_Overlay_C", "OnAnyUIPushed");

	Params::UWBP_WorkerRadialMenu_Overlay_C_OnAnyUIPushed_Params Parms{};

	Parms.PushedWidgetID = PushedWidgetID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorkerRadialMenu_Overlay.WBP_WorkerRadialMenu_Overlay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WorkerRadialMenu_Overlay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_Overlay_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorkerRadialMenu_Overlay.WBP_WorkerRadialMenu_Overlay_C.CancelEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_WorkerRadialMenu_Overlay_C::CancelEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_Overlay_C", "CancelEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorkerRadialMenu_Overlay.WBP_WorkerRadialMenu_Overlay_C.ExecuteUbergraph_WBP_WorkerRadialMenu_Overlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalWorkerRadialMenuResultK2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_WorkerRadialMenu*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Worker_Radial_Menu(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_CustomEvent_pushedWidgetID                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSameWidget_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_WorkerRadialMenu_Overlay_C::ExecuteUbergraph_WBP_WorkerRadialMenu_Overlay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPalWorkerRadialMenuResult K2Node_CustomEvent_Result, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_WorkerRadialMenu* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Worker_Radial_Menu, bool K2Node_DynamicCast_bSuccess, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FGuid& K2Node_CustomEvent_pushedWidgetID, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsSameWidget_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorkerRadialMenu_Overlay_C", "ExecuteUbergraph_WBP_WorkerRadialMenu_Overlay");

	Params::UWBP_WorkerRadialMenu_Overlay_C_ExecuteUbergraph_WBP_WorkerRadialMenu_Overlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Worker_Radial_Menu = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Worker_Radial_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.K2Node_CustomEvent_pushedWidgetID = K2Node_CustomEvent_pushedWidgetID;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsSameWidget_ReturnValue = CallFunc_IsSameWidget_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue_1 = CallFunc_GetPalmi_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


