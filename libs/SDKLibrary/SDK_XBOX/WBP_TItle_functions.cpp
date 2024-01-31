#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TItle.WBP_TItle_C
// (None)

class UClass* UWBP_TItle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TItle_C");

	return Clss;
}


// WBP_TItle_C WBP_TItle.Default__WBP_TItle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TItle_C* UWBP_TItle_C::GetDefaultObj()
{
	static class UWBP_TItle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TItle_C*>(UWBP_TItle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TItle.WBP_TItle_C.WBP_TItle_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TItle_C::WBP_TItle_AutoGenFunc(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TItle_C", "WBP_TItle_AutoGenFunc");

	Params::UWBP_TItle_C_WBP_TItle_AutoGenFunc_Params Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TItle.WBP_TItle_C.OnClosedQuitGameDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_TItle_C::OnClosedQuitGameDialog(bool bResult, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TItle_C", "OnClosedQuitGameDialog");

	Params::UWBP_TItle_C_OnClosedQuitGameDialog_Params Parms{};

	Parms.bResult = bResult;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TItle.WBP_TItle_C.OpenQuitGameDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewLocalVar                                                      (Edit, BlueprintVisible, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_TItle_C::OpenQuitGameDialog(const struct FDataTableRowHandle& NewLocalVar, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TItle_C", "OpenQuitGameDialog");

	Params::UWBP_TItle_C_OpenQuitGameDialog_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TItle.WBP_TItle_C.OnClickedMenu_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Title_MenuButton_C*     ButtonWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_PalUITitleMenuButtonTypeCallFunc_GetMenuType_BindedMenuType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParame_JoinGameInputCode*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_2                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_3                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_4                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_5                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TItle_C::OnClickedMenu_Internal(class UWBP_Title_MenuButton_C* ButtonWidget, const struct FGuid& CallFunc_Push_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, enum class E_PalUITitleMenuButtonType CallFunc_GetMenuType_BindedMenuType, class UPalHUDDispatchParame_JoinGameInputCode* CallFunc_SpawnObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGuid& CallFunc_Push_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue_2, const struct FGuid& CallFunc_Push_ReturnValue_3, const struct FGuid& CallFunc_Push_ReturnValue_4, const struct FGuid& CallFunc_Push_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TItle_C", "OnClickedMenu_Internal");

	Params::UWBP_TItle_C_OnClickedMenu_Internal_Params Parms{};

	Parms.ButtonWidget = ButtonWidget;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetMenuType_BindedMenuType = CallFunc_GetMenuType_BindedMenuType;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Push_ReturnValue_1 = CallFunc_Push_ReturnValue_1;
	Parms.CallFunc_Push_ReturnValue_2 = CallFunc_Push_ReturnValue_2;
	Parms.CallFunc_Push_ReturnValue_3 = CallFunc_Push_ReturnValue_3;
	Parms.CallFunc_Push_ReturnValue_4 = CallFunc_Push_ReturnValue_4;
	Parms.CallFunc_Push_ReturnValue_5 = CallFunc_Push_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TItle.WBP_TItle_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopButton_TargetWidget                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_TItle_C::BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetTopButton_TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TItle_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_TItle_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTopButton_TargetWidget = CallFunc_GetTopButton_TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_TItle.WBP_TItle_C.Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPocketpairUserInfo*         UserInfo                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorStr                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_TItle_C::Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD(class UPocketpairUserInfo* UserInfo, bool bSuccess, const class FString& ErrorStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TItle_C", "Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD");

	Params::UWBP_TItle_C_Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD_Params Parms{};

	Parms.UserInfo = UserInfo;
	Parms.bSuccess = bSuccess;
	Parms.ErrorStr = ErrorStr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TItle.WBP_TItle_C.BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_Title_MenuButton_C*     ButtonWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TItle_C::BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature(class UWBP_Title_MenuButton_C* ButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TItle_C", "BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature");

	Params::UWBP_TItle_C_BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature_Params Parms{};

	Parms.ButtonWidget = ButtonWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TItle.WBP_TItle_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TItle_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TItle_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TItle.WBP_TItle_C.SwitchUser
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TItle_C::SwitchUser()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TItle_C", "SwitchUser");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TItle.WBP_TItle_C.ExecuteUbergraph_WBP_TItle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCanOpenExternalWebSite_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPocketpairUserInfo*         K2Node_CustomEvent_UserInfo                                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ErrorStr                                      (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UPocketpairUserInfo*         Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPocketpairUserSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Title_MenuButton_C*     K2Node_ComponentBoundEvent_ButtonWidget                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USwitchUserUIDefaultOnlineSubsystemAsyncFunction*CallFunc_SwitchUserUIAsyncFunction_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameInstance*            K2Node_DynamicCast_AsPal_Game_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameInstance*            CallFunc_GetPalGameInstance_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TItle_C::ExecuteUbergraph_WBP_TItle(int32 EntryPoint, bool CallFunc_IsCanOpenExternalWebSite_ReturnValue, class UPocketpairUserInfo* K2Node_CustomEvent_UserInfo, bool K2Node_CustomEvent_bSuccess, const class FString& K2Node_CustomEvent_ErrorStr, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& Temp_string_Variable, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class UPocketpairUserInfo* Temp_object_Variable, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UWBP_Title_MenuButton_C* K2Node_ComponentBoundEvent_ButtonWidget, class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* CallFunc_SwitchUserUIAsyncFunction_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UPalGameInstance* K2Node_DynamicCast_AsPal_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalGameInstance* CallFunc_GetPalGameInstance_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TItle_C", "ExecuteUbergraph_WBP_TItle");

	Params::UWBP_TItle_C_ExecuteUbergraph_WBP_TItle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsCanOpenExternalWebSite_ReturnValue = CallFunc_IsCanOpenExternalWebSite_ReturnValue;
	Parms.K2Node_CustomEvent_UserInfo = K2Node_CustomEvent_UserInfo;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CustomEvent_ErrorStr = K2Node_CustomEvent_ErrorStr;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ButtonWidget = K2Node_ComponentBoundEvent_ButtonWidget;
	Parms.CallFunc_SwitchUserUIAsyncFunction_ReturnValue = CallFunc_SwitchUserUIAsyncFunction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Game_Instance = K2Node_DynamicCast_AsPal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPalGameInstance_ReturnValue = CallFunc_GetPalGameInstance_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


