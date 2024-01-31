#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C
// (None)

class UClass* UWBP_TitleLocalWorldSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TitleLocalWorldSelect_C");

	return Clss;
}


// WBP_TitleLocalWorldSelect_C WBP_TitleLocalWorldSelect.Default__WBP_TitleLocalWorldSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TitleLocalWorldSelect_C* UWBP_TitleLocalWorldSelect_C::GetDefaultObj()
{
	static class UWBP_TitleLocalWorldSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TitleLocalWorldSelect_C*>(UWBP_TitleLocalWorldSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.WBP_TitleLocalWorldSelect_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldSelect_C::WBP_TitleLocalWorldSelect_AutoGenFunc(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "WBP_TitleLocalWorldSelect_AutoGenFunc");

	Params::UWBP_TitleLocalWorldSelect_C_WBP_TitleLocalWorldSelect_AutoGenFunc_Params Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.OnClosedDeleteWorldWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDDIspatchParameter_DeleteWorld_C*K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalUILocalWorldDisplayData>CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue              (ReferenceParm)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTargetForLocalWorldList_TargetWidget            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DeleteWorld_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldSelect_C::OnClosedDeleteWorldWindow(class UPalHUDDispatchParameterBase* Param, class UBP_HUDDIspatchParameter_DeleteWorld_C* K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World, bool K2Node_DynamicCast_bSuccess, TArray<struct FPalUILocalWorldDisplayData>& CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UWidget* CallFunc_GetFocusTargetForLocalWorldList_TargetWidget, bool CallFunc_DeleteWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "OnClosedDeleteWorldWindow");

	Params::UWBP_TitleLocalWorldSelect_C_OnClosedDeleteWorldWindow_Params Parms{};

	Parms.Param = Param;
	Parms.K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World = K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue = CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_GetFocusTargetForLocalWorldList_TargetWidget = CallFunc_GetFocusTargetForLocalWorldList_TargetWidget;
	Parms.CallFunc_DeleteWorld_ReturnValue = CallFunc_DeleteWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.OnClosedWorldSettingWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldSelect_C::OnClosedWorldSettingWindow(class UPalHUDDispatchParameterBase* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "OnClosedWorldSettingWindow");

	Params::UWBP_TitleLocalWorldSelect_C_OnClosedWorldSettingWindow_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetFocusTargetForLocalWorldList_TargetWidget            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldSelect_C::OnCancelAction(class UWidget* CallFunc_GetFocusTargetForLocalWorldList_TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "OnCancelAction");

	Params::UWBP_TitleLocalWorldSelect_C_OnCancelAction_Params Parms{};

	Parms.CallFunc_GetFocusTargetForLocalWorldList_TargetWidget = CallFunc_GetFocusTargetForLocalWorldList_TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.SetupWorldList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPalUILocalWorldDisplayData>CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue              (ReferenceParm)
// class UWidget*                     CallFunc_GetFocusTargetForLocalWorldList_TargetWidget            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct FPalUILocalWorldDisplayData>CallFunc_GetWorldDisplayInfo_OutDisplayInfo                      (None)

void UWBP_TitleLocalWorldSelect_C::SetupWorldList(TArray<struct FPalUILocalWorldDisplayData>& CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue, class UWidget* CallFunc_GetFocusTargetForLocalWorldList_TargetWidget, TMap<class FString, struct FPalUILocalWorldDisplayData> CallFunc_GetWorldDisplayInfo_OutDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "SetupWorldList");

	Params::UWBP_TitleLocalWorldSelect_C_SetupWorldList_Params Parms{};

	Parms.CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue = CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue;
	Parms.CallFunc_GetFocusTargetForLocalWorldList_TargetWidget = CallFunc_GetFocusTargetForLocalWorldList_TargetWidget;
	Parms.CallFunc_GetWorldDisplayInfo_OutDisplayInfo = CallFunc_GetWorldDisplayInfo_OutDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTargetForLocalWorldList_TargetWidget            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_TitleLocalWorldSelect_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTargetForLocalWorldList_TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTargetForLocalWorldList_TargetWidget = CallFunc_GetFocusTargetForLocalWorldList_TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TitleLocalWorldSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TitleLocalWorldSelect_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TitleLocalWorldSelect_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Title_WorldSelect_ListContent_C*ButtonWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldSelect_C::BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* ButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature");

	Params::UWBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature_Params Parms{};

	Parms.ButtonWidget = ButtonWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Title_WorldSelect_CreateWorld_ListContent_C*ButtonWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldSelect_C::BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature(class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* ButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature");

	Params::UWBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature_Params Parms{};

	Parms.ButtonWidget = ButtonWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_2_OnClickedStartWorldButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TitleLocalWorldSelect_C::BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_2_OnClickedStartWorldButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_2_OnClickedStartWorldButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TitleLocalWorldSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnClickedWorldSettingButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TitleLocalWorldSelect_C::BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnClickedWorldSettingButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnClickedWorldSettingButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_4_OnClickedDeleteWorldButton__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TitleLocalWorldSelect_C::BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_4_OnClickedDeleteWorldButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_4_OnClickedDeleteWorldButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.«¹¿à¤ÙóÈ
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldSelect_C::________(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "«¹¿à¤ÙóÈ");

	Params::UWBP_TitleLocalWorldSelect_C__________Params Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Title_WorldSelect_ListContent_C*SelectedWorldButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldSelect_C::BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* SelectedWorldButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature");

	Params::UWBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature_Params Parms{};

	Parms.SelectedWorldButton = SelectedWorldButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.ExecuteUbergraph_WBP_TitleLocalWorldSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWindows_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Title_WorldSelect_CreateWorld_ListContent_C*K2Node_ComponentBoundEvent_ButtonWidget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTargetForLocalWorldList_TargetWidget            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_WorldSetting*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDDIspatchParameter_DeleteWorld_C*CallFunc_CreateDispatchParameterForK2Node_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Title_WorldSelect_ListContent_C*K2Node_ComponentBoundEvent_ButtonWidget_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBindedSaveDirectoryName_DirectoryName                (ZeroConstructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_WorldSetting*CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_2                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldSaveData     CallFunc_SelectWorld_OptionWorldData                             (None)
// bool                               CallFunc_SelectWorld_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bResult                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalGameInstance_C*       K2Node_DynamicCast_AsBP_Pal_Game_Instance                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Title_WorldSelect_ListContent_C*K2Node_ComponentBoundEvent_SelectedWorldButton                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBindedSaveDirectoryName_DirectoryName_1              (ZeroConstructor, HasGetValueTypeHash)
// struct FPalUILocalWorldDisplayData CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UWBP_TitleLocalWorldSelect_C::ExecuteUbergraph_WBP_TitleLocalWorldSelect(int32 EntryPoint, bool CallFunc_IsWindows_ReturnValue, class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* K2Node_ComponentBoundEvent_ButtonWidget, class UWidget* CallFunc_GetFocusTargetForLocalWorldList_TargetWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalHUDDispatchParameter_WorldSetting* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue, class UBP_HUDDIspatchParameter_DeleteWorld_C* CallFunc_CreateDispatchParameterForK2Node_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGuid& CallFunc_Push_ReturnValue_1, class UWBP_Title_WorldSelect_ListContent_C* K2Node_ComponentBoundEvent_ButtonWidget_1, const class FString& CallFunc_GetBindedSaveDirectoryName_DirectoryName, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalHUDDispatchParameter_WorldSetting* CallFunc_SpawnObject_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue_2, const struct FPalOptionWorldSaveData& CallFunc_SelectWorld_OptionWorldData, bool CallFunc_SelectWorld_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_bResult, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UWBP_Title_WorldSelect_ListContent_C* K2Node_ComponentBoundEvent_SelectedWorldButton, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetBindedSaveDirectoryName_DirectoryName_1, const struct FPalUILocalWorldDisplayData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TitleLocalWorldSelect_C", "ExecuteUbergraph_WBP_TitleLocalWorldSelect");

	Params::UWBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsWindows_ReturnValue = CallFunc_IsWindows_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ButtonWidget = K2Node_ComponentBoundEvent_ButtonWidget;
	Parms.CallFunc_GetFocusTargetForLocalWorldList_TargetWidget = CallFunc_GetFocusTargetForLocalWorldList_TargetWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;
	Parms.CallFunc_CreateDispatchParameterForK2Node_ReturnValue = CallFunc_CreateDispatchParameterForK2Node_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Push_ReturnValue_1 = CallFunc_Push_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_ButtonWidget_1 = K2Node_ComponentBoundEvent_ButtonWidget_1;
	Parms.CallFunc_GetBindedSaveDirectoryName_DirectoryName = CallFunc_GetBindedSaveDirectoryName_DirectoryName;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_Push_ReturnValue_2 = CallFunc_Push_ReturnValue_2;
	Parms.CallFunc_SelectWorld_OptionWorldData = CallFunc_SelectWorld_OptionWorldData;
	Parms.CallFunc_SelectWorld_ReturnValue = CallFunc_SelectWorld_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_bResult = K2Node_CustomEvent_bResult;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_Game_Instance = K2Node_DynamicCast_AsBP_Pal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_SelectedWorldButton = K2Node_ComponentBoundEvent_SelectedWorldButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBindedSaveDirectoryName_DirectoryName_1 = CallFunc_GetBindedSaveDirectoryName_DirectoryName_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


