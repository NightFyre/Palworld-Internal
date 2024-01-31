#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C
// (None)

class UClass* UWBP_PalHUD_InGame_InputListener_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalHUD_InGame_InputListener_C");

	return Clss;
}


// WBP_PalHUD_InGame_InputListener_C WBP_PalHUD_InGame_InputListener.Default__WBP_PalHUD_InGame_InputListener_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalHUD_InGame_InputListener_C* UWBP_PalHUD_InGame_InputListener_C::GetDefaultObj()
{
	static class UWBP_PalHUD_InGame_InputListener_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalHUD_InGame_InputListener_C*>(UWBP_PalHUD_InGame_InputListener_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OpenChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanChat_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)

void UWBP_PalHUD_InGame_InputListener_C::OpenChat(bool CallFunc_CanChat_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OpenChat");

	Params::UWBP_PalHUD_InGame_InputListener_C_OpenChat_Params Parms{};

	Parms.CallFunc_CanChat_Result = CallFunc_CanChat_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.CanOpenAnyUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanOpenUI                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_InputListener_C::CanOpenAnyUI(bool* CanOpenUI, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "CanOpenAnyUI");

	Params::UWBP_PalHUD_InGame_InputListener_C_CanOpenAnyUI_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanOpenUI != nullptr)
		*CanOpenUI = Parms.CanOpenUI;

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OpenBuildRadialMenuWithSelectedIndex
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanOpenAnyUI_CanOpenUI                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_InputListener_C::OpenBuildRadialMenuWithSelectedIndex(int32 SelectedIndex, bool CallFunc_CanOpenAnyUI_CanOpenUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OpenBuildRadialMenuWithSelectedIndex");

	Params::UWBP_PalHUD_InGame_InputListener_C_OpenBuildRadialMenuWithSelectedIndex_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.CallFunc_CanOpenAnyUI_CanOpenUI = CallFunc_CanOpenAnyUI_CanOpenUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OpenBuildRadialMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BuildObjectId                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBuildObjectTypeA    SelectObjectType                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanOpenAnyUI_CanOpenUI                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_InputListener_C::OpenBuildRadialMenu(class FName BuildObjectId, enum class EPalBuildObjectTypeA SelectObjectType, bool CallFunc_CanOpenAnyUI_CanOpenUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OpenBuildRadialMenu");

	Params::UWBP_PalHUD_InGame_InputListener_C_OpenBuildRadialMenu_Params Parms{};

	Parms.BuildObjectId = BuildObjectId;
	Parms.SelectObjectType = SelectObjectType;
	Parms.CallFunc_CanOpenAnyUI_CanOpenUI = CallFunc_CanOpenAnyUI_CanOpenUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OnTriggerWorldMap
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanOpenAnyUI_CanOpenUI                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_WorldMap*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_ShowCommonUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_InputListener_C::OnTriggerWorldMap(bool CallFunc_CanOpenAnyUI_CanOpenUI, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameter_WorldMap* CallFunc_SpawnObject_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, const struct FGuid& CallFunc_ShowCommonUI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OnTriggerWorldMap");

	Params::UWBP_PalHUD_InGame_InputListener_C_OnTriggerWorldMap_Params Parms{};

	Parms.CallFunc_CanOpenAnyUI_CanOpenUI = CallFunc_CanOpenAnyUI_CanOpenUI;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_ShowCommonUI_ReturnValue = CallFunc_ShowCommonUI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.SetupInputAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_2                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_3                     (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_4                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_5                     (NoDestructor)

void UWBP_PalHUD_InGame_InputListener_C::SetupInputAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "SetupInputAction");

	Params::UWBP_PalHUD_InGame_InputListener_C_SetupInputAction_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_2 = CallFunc_RegisterActionBinding_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_3 = CallFunc_RegisterActionBinding_ReturnValue_3;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_4 = CallFunc_RegisterActionBinding_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_5 = CallFunc_RegisterActionBinding_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OpenBuildMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BuildObjectTypeA                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBuildObjectTypeA    CallFunc_ToBuildObjectTypeA_ReturnValue                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_InputListener_C::OpenBuildMenu(int32 BuildObjectTypeA, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EPalBuildObjectTypeA CallFunc_ToBuildObjectTypeA_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OpenBuildMenu");

	Params::UWBP_PalHUD_InGame_InputListener_C_OpenBuildMenu_Params Parms{};

	Parms.BuildObjectTypeA = BuildObjectTypeA;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_ToBuildObjectTypeA_ReturnValue = CallFunc_ToBuildObjectTypeA_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OpenMenu_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalUIInGameMainMenuTabTypeTabType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBuildObjectTypeA    BuildObjectTypeA                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanOpenAnyUI_CanOpenUI                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InGameMainMenuParameter_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_InputListener_C::OpenMenu_Internal(enum class EPalUIInGameMainMenuTabType TabType, enum class EPalBuildObjectTypeA BuildObjectTypeA, bool CallFunc_CanOpenAnyUI_CanOpenUI, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_InGameMainMenuParameter_C* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OpenMenu_Internal");

	Params::UWBP_PalHUD_InGame_InputListener_C_OpenMenu_Internal_Params Parms{};

	Parms.TabType = TabType;
	Parms.BuildObjectTypeA = BuildObjectTypeA;
	Parms.CallFunc_CanOpenAnyUI_CanOpenUI = CallFunc_CanOpenAnyUI_CanOpenUI;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OnTriggerEscape
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnyMenuOpened_IsOpened                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_InputListener_C::OnTriggerEscape(bool CallFunc_IsAnyMenuOpened_IsOpened)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OnTriggerEscape");

	Params::UWBP_PalHUD_InGame_InputListener_C_OnTriggerEscape_Params Parms{};

	Parms.CallFunc_IsAnyMenuOpened_IsOpened = CallFunc_IsAnyMenuOpened_IsOpened;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OnTriggerOpenPalStatus
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHUD_InGame_InputListener_C::OnTriggerOpenPalStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OnTriggerOpenPalStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OnTriggerOpenTechnologyMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHUD_InGame_InputListener_C::OnTriggerOpenTechnologyMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OnTriggerOpenTechnologyMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OnTriggerOpenBuildMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHUD_InGame_InputListener_C::OnTriggerOpenBuildMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OnTriggerOpenBuildMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OnTriggerOpenCraftMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHUD_InGame_InputListener_C::OnTriggerOpenCraftMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OnTriggerOpenCraftMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OnTriggerOpenInventoryMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHUD_InGame_InputListener_C::OnTriggerOpenInventoryMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OnTriggerOpenInventoryMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHUD_InGame_InputListener_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "Tick");

	Params::UWBP_PalHUD_InGame_InputListener_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OnSetup_AfterCreatedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHUD_InGame_InputListener_C::OnSetup_AfterCreatedPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "OnSetup_AfterCreatedPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.BndEvt__WBP_PalHUD_InGame_InputListener_WBP_Ingame_Chat_K2Node_ComponentBoundEvent_0_OnCompleteInput__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PalHUD_InGame_InputListener_C::BndEvt__WBP_PalHUD_InGame_InputListener_WBP_Ingame_Chat_K2Node_ComponentBoundEvent_0_OnCompleteInput__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "BndEvt__WBP_PalHUD_InGame_InputListener_WBP_Ingame_Chat_K2Node_ComponentBoundEvent_0_OnCompleteInput__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.ExecuteUbergraph_WBP_PalHUD_InGame_InputListener
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)

void UWBP_PalHUD_InGame_InputListener_C::ExecuteUbergraph_WBP_PalHUD_InGame_InputListener(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHUD_InGame_InputListener_C", "ExecuteUbergraph_WBP_PalHUD_InGame_InputListener");

	Params::UWBP_PalHUD_InGame_InputListener_C_ExecuteUbergraph_WBP_PalHUD_InGame_InputListener_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


