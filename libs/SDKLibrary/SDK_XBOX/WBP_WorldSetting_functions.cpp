#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WorldSetting.WBP_WorldSetting_C
// (None)

class UClass* UWBP_WorldSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WorldSetting_C");

	return Clss;
}


// WBP_WorldSetting_C WBP_WorldSetting.Default__WBP_WorldSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WorldSetting_C* UWBP_WorldSetting_C::GetDefaultObj()
{
	static class UWBP_WorldSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WorldSetting_C*>(UWBP_WorldSetting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnClosedWorldNameInputWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OnClosedWorldNameInputWindow(class UPalHUDDispatchParameterBase* Param, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnClosedWorldNameInputWindow");

	Params::UWBP_WorldSetting_C_OnClosedWorldNameInputWindow_Params Parms{};

	Parms.Param = Param;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OpenWorldNameInputWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDDispatchParameter_WorldNameInput_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetWorldName_WorldName                                  (ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OpenWorldNameInputWindow(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_HUDDispatchParameter_WorldNameInput_C* CallFunc_SpawnObject_ReturnValue, const class FString& CallFunc_GetWorldName_WorldName, const struct FGuid& CallFunc_Push_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OpenWorldNameInputWindow");

	Params::UWBP_WorldSetting_C_OpenWorldNameInputWindow_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetWorldName_WorldName = CallFunc_GetWorldName_WorldName;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnClosedStartGameDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_TargetWidget                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldSettings     CallFunc_GetEditedWorldSetting_WorldSetting                      (None)
// bool                               CallFunc_CompleteSetting_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OnClosedStartGameDialog(bool bResult, class UWidget* CallFunc_GetFocusTarget_TargetWidget, const struct FPalOptionWorldSettings& CallFunc_GetEditedWorldSetting_WorldSetting, bool CallFunc_CompleteSetting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnClosedStartGameDialog");

	Params::UWBP_WorldSetting_C_OnClosedStartGameDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_GetFocusTarget_TargetWidget = CallFunc_GetFocusTarget_TargetWidget;
	Parms.CallFunc_GetEditedWorldSetting_WorldSetting = CallFunc_GetEditedWorldSetting_WorldSetting;
	Parms.CallFunc_CompleteSetting_ReturnValue = CallFunc_CompleteSetting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OpenStartGameCheckDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewLocalVar_0                                                    (Edit, BlueprintVisible, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_WorldSetting_C::OpenStartGameCheckDialog(const struct FDataTableRowHandle& NewLocalVar_0, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OpenStartGameCheckDialog");

	Params::UWBP_WorldSetting_C_OpenStartGameCheckDialog_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.StartNewGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalOptionWorldSettings     Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPalOptionWorldSettings     NewLocalVar_1                                                    (Edit, BlueprintVisible)
// class FString                      CallFunc_GetWorldName_WorldName                                  (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalGameInstance_C*       K2Node_DynamicCast_AsBP_Pal_Game_Instance                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameInstance*            K2Node_DynamicCast_AsPal_Game_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::StartNewGame(const struct FPalOptionWorldSettings& Option, const struct FPalOptionWorldSettings& NewLocalVar_1, const class FString& CallFunc_GetWorldName_WorldName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UPalGameInstance* K2Node_DynamicCast_AsPal_Game_Instance, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "StartNewGame");

	Params::UWBP_WorldSetting_C_StartNewGame_Params Parms{};

	Parms.Option = Option;
	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.CallFunc_GetWorldName_WorldName = CallFunc_GetWorldName_WorldName;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_Game_Instance = K2Node_DynamicCast_AsBP_Pal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Game_Instance = K2Node_DynamicCast_AsPal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnClosedSaveSettingDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldSettings     CallFunc_GetEditedWorldSetting_WorldSetting                      (None)
// class UWidget*                     CallFunc_GetFocusTarget_TargetWidget                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompleteSetting_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OnClosedSaveSettingDialog(bool bResult, const struct FPalOptionWorldSettings& CallFunc_GetEditedWorldSetting_WorldSetting, class UWidget* CallFunc_GetFocusTarget_TargetWidget, bool CallFunc_CompleteSetting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnClosedSaveSettingDialog");

	Params::UWBP_WorldSetting_C_OnClosedSaveSettingDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_GetEditedWorldSetting_WorldSetting = CallFunc_GetEditedWorldSetting_WorldSetting;
	Parms.CallFunc_GetFocusTarget_TargetWidget = CallFunc_GetFocusTarget_TargetWidget;
	Parms.CallFunc_CompleteSetting_ReturnValue = CallFunc_CompleteSetting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OpenCheckSaveSettingDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewLocalVar                                                      (Edit, BlueprintVisible, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_WorldSetting_C::OpenCheckSaveSettingDialog(const struct FDataTableRowHandle& NewLocalVar, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OpenCheckSaveSettingDialog");

	Params::UWBP_WorldSetting_C_OpenCheckSaveSettingDialog_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsTextEditing_IsEditing                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OnCancelAction(bool CallFunc_IsTextEditing_IsEditing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnCancelAction");

	Params::UWBP_WorldSetting_C_OnCancelAction_Params Parms{};

	Parms.CallFunc_IsTextEditing_IsEditing = CallFunc_IsTextEditing_IsEditing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_TargetWidget                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_WorldSetting_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_WorldSetting_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_TargetWidget = CallFunc_GetFocusTarget_TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_WorldSetting_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_0_OnClickedCancel__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_WorldSetting_C::BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_0_OnClickedCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_0_OnClickedCancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_1_OnClickedConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_WorldSetting_C::BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_1_OnClickedConfirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_1_OnClickedConfirm__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.OnCompletedSaveSetting
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsSuccess                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::OnCompletedSaveSetting(bool IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "OnCompletedSaveSetting");

	Params::UWBP_WorldSetting_C_OnCompletedSaveSetting_Params Parms{};

	Parms.IsSuccess = IsSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WorldSetting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WorldSetting_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_2_OnClickedWorldNameInputButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_WorldSetting_C::BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_2_OnClickedWorldNameInputButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_2_OnClickedWorldNameInputButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WorldSetting.WBP_WorldSetting_C.ExecuteUbergraph_WBP_WorldSetting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_WorldSetting*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// bool                               CallFunc_IsEditedSetting_IsEdited                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsSuccess                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WorldSetting_C::ExecuteUbergraph_WBP_WorldSetting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_WorldSetting* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_IsEditedSetting_IsEdited, bool K2Node_Event_IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WorldSetting_C", "ExecuteUbergraph_WBP_WorldSetting");

	Params::UWBP_WorldSetting_C_ExecuteUbergraph_WBP_WorldSetting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_IsEditedSetting_IsEdited = CallFunc_IsEditedSetting_IsEdited;
	Parms.K2Node_Event_IsSuccess = K2Node_Event_IsSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


