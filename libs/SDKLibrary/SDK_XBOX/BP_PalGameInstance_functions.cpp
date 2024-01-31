#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalGameInstance.BP_PalGameInstance_C
// (None)

class UClass* UBP_PalGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalGameInstance_C");

	return Clss;
}


// BP_PalGameInstance_C BP_PalGameInstance.Default__BP_PalGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalGameInstance_C* UBP_PalGameInstance_C::GetDefaultObj()
{
	static class UBP_PalGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalGameInstance_C*>(UBP_PalGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalGameInstance.BP_PalGameInstance_C.SetActivePlayerActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetDefaultPlayerCharacter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::SetActivePlayerActor(bool Active, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetDefaultPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "SetActivePlayerActor");

	Params::UBP_PalGameInstance_C_SetActivePlayerActor_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDefaultPlayerCharacter_ReturnValue = CallFunc_GetDefaultPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.BP_PalGameInstance_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::BP_PalGameInstance_AutoGenFunc(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "BP_PalGameInstance_AutoGenFunc");

	Params::UBP_PalGameInstance_C_BP_PalGameInstance_AutoGenFunc_Params Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.Completed_32AFD11A49E65B7255FF4BA375D305CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuccess                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorStr                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::Completed_32AFD11A49E65B7255FF4BA375D305CC(bool IsSuccess, const class FString& ErrorStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "Completed_32AFD11A49E65B7255FF4BA375D305CC");

	Params::UBP_PalGameInstance_C_Completed_32AFD11A49E65B7255FF4BA375D305CC_Params Parms{};

	Parms.IsSuccess = IsSuccess;
	Parms.ErrorStr = ErrorStr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.StartLoading
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LoadingScreen_Transition_C*CurrentLoadingWidget                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::StartLoading(class UWBP_LoadingScreen_Transition_C*& CurrentLoadingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "StartLoading");

	Params::UBP_PalGameInstance_C_StartLoading_Params Parms{};

	Parms.CurrentLoadingWidget = CurrentLoadingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.LoadingFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalGameInstance_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.ShowCharacterMakeScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalGameInstance_C::ShowCharacterMakeScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "ShowCharacterMakeScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.OnFinishCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSkipped                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::OnFinishCutscene(bool IsSkipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "OnFinishCutscene");

	Params::UBP_PalGameInstance_C_OnFinishCutscene_Params Parms{};

	Parms.IsSkipped = IsSkipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.SetupGameInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PalGameInstance_C::SetupGameInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "SetupGameInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.StartOpening
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalGameInstance_C::StartOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "StartOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.LoadLevel
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UWorld>       Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// class FString                      Options                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// bool                               AutoClose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::LoadLevel(TSoftObjectPtr<class UWorld> Level, class FString& Options, bool AutoClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "LoadLevel");

	Params::UBP_PalGameInstance_C_LoadLevel_Params Parms{};

	Parms.Level = Level;
	Parms.Options = Options;
	Parms.AutoClose = AutoClose;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.StartGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bListenServer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::StartGame(bool bNewGame, bool bListenServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "StartGame");

	Params::UBP_PalGameInstance_C_StartGame_Params Parms{};

	Parms.bNewGame = bNewGame;
	Parms.bListenServer = bListenServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.«¹¿à¤ÙóÈ
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bResult                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::________(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "«¹¿à¤ÙóÈ");

	Params::UBP_PalGameInstance_C__________Params Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.OnShowSelectRespawnMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalGameInstance_C::OnShowSelectRespawnMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "OnShowSelectRespawnMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.SetPlayerSelectMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelecting                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::SetPlayerSelectMap(bool IsSelecting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "SetPlayerSelectMap");

	Params::UBP_PalGameInstance_C_SetPlayerSelectMap_Params Parms{};

	Parms.IsSelecting = IsSelecting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.OnCloseMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::OnCloseMap(class UPalHUDDispatchParameterBase* Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "OnCloseMap");

	Params::UBP_PalGameInstance_C_OnCloseMap_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.OnCompleteSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalGameInstance_C::OnCompleteSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "OnCompleteSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalGameInstance.BP_PalGameInstance_C.ExecuteUbergraph_BP_PalGameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UPocketpairUserSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCreateSessionAsyncFunction* CallFunc_CreateSessionAsyncFunction_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UWBP_LoadingScreen_Transition_C*K2Node_CustomEvent_CurrentLoadingWidget                          (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_CharacterMake*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsSkipped                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerLocalRecordData*   CallFunc_GetLocalRecordData_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerLocalRecordData*   CallFunc_GetLocalRecordData_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadingProcessTask*         CallFunc_CreateLoadingScreenProcessTask_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UWorld>       K2Node_CustomEvent_Level                                         (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Options                                       (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_AutoClose                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayFromTitle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnableBotLocationFlag_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNewGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bListenServer                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalGameInstance_C*       K2Node_DynamicCast_AsBP_Pal_Game_Instance                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bResult                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalGameInstance_C*       K2Node_DynamicCast_AsBP_Pal_Game_Instance_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalGameInstance_C*       K2Node_DynamicCast_AsBP_Pal_Game_Instance_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalOptionWorldSettings     CallFunc_GetOptionWorldSettings_ReturnValue                      (ConstParm)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_WorldMap*CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsSelecting                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_ShowCommonUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_3                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*K2Node_CustomEvent_Param                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller_3                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnableBotLocationFlag_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_6                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_7                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ErrorStr                                      (ZeroConstructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelectedInitMapPoint_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMultiplayRestricted_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameInstance*            CallFunc_GetPalGameInstance_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsPal_Cutscene_Actor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCutsceneActor*           CallFunc_SpawnCutsceneActor_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalGameInstance_C::ExecuteUbergraph_BP_PalGameInstance(int32 EntryPoint, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCreateSessionAsyncFunction* CallFunc_CreateSessionAsyncFunction_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UWBP_LoadingScreen_Transition_C* K2Node_CustomEvent_CurrentLoadingWidget, bool CallFunc_IsValid_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameter_CharacterMake* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue, bool K2Node_CustomEvent_IsSkipped, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue_1, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Map_Contains_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_2, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_2, class ULoadingProcessTask* CallFunc_CreateLoadingScreenProcessTask_ReturnValue, TSoftObjectPtr<class UWorld> K2Node_CustomEvent_Level, const class FString& K2Node_CustomEvent_Options, bool K2Node_CustomEvent_AutoClose, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsPlayFromTitle_ReturnValue, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue_2, bool CallFunc_IsEnableBotLocationFlag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_bNewGame, bool K2Node_CustomEvent_bListenServer, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool K2Node_CustomEvent_bResult, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_4, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_5, bool Temp_bool_Variable, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_3, bool Temp_bool_Variable_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_4, class UPalHUDDispatchParameter_WorldMap* CallFunc_SpawnObject_ReturnValue_1, bool K2Node_CustomEvent_IsSelecting, const struct FGuid& CallFunc_ShowCommonUI_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_3, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_Param, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsEnableBotLocationFlag_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_5, const class FString& Temp_string_Variable, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_6, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_7, const struct FGuid& CallFunc_Push_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue_2, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool K2Node_CustomEvent_IsSuccess, const class FString& K2Node_CustomEvent_ErrorStr, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue_3, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue_4, bool CallFunc_IsSelectedInitMapPoint_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_2, bool CallFunc_IsMultiplayRestricted_ReturnValue, class UPalGameInstance* CallFunc_GetPalGameInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPal_Cutscene_Actor, bool K2Node_ClassDynamicCast_bSuccess, class APalCutsceneActor* CallFunc_SpawnCutsceneActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGameInstance_C", "ExecuteUbergraph_BP_PalGameInstance");

	Params::UBP_PalGameInstance_C_ExecuteUbergraph_BP_PalGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_CreateSessionAsyncFunction_ReturnValue = CallFunc_CreateSessionAsyncFunction_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentLoadingWidget = K2Node_CustomEvent_CurrentLoadingWidget;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;
	Parms.K2Node_CustomEvent_IsSkipped = K2Node_CustomEvent_IsSkipped;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_GetLocalRecordData_ReturnValue = CallFunc_GetLocalRecordData_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue_1 = CallFunc_GetLocalPlayerState_ReturnValue_1;
	Parms.CallFunc_GetLocalRecordData_ReturnValue_1 = CallFunc_GetLocalRecordData_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller_1 = K2Node_DynamicCast_AsPal_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue_2 = CallFunc_GetHUDService_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_2 = CallFunc_GetLocalPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller_2 = K2Node_DynamicCast_AsPal_Player_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CreateLoadingScreenProcessTask_ReturnValue = CallFunc_CreateLoadingScreenProcessTask_ReturnValue;
	Parms.K2Node_CustomEvent_Level = K2Node_CustomEvent_Level;
	Parms.K2Node_CustomEvent_Options = K2Node_CustomEvent_Options;
	Parms.K2Node_CustomEvent_AutoClose = K2Node_CustomEvent_AutoClose;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsPlayFromTitle_ReturnValue = CallFunc_IsPlayFromTitle_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue_2 = CallFunc_GetLocalPlayerState_ReturnValue_2;
	Parms.CallFunc_IsEnableBotLocationFlag_ReturnValue = CallFunc_IsEnableBotLocationFlag_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_bNewGame = K2Node_CustomEvent_bNewGame;
	Parms.K2Node_CustomEvent_bListenServer = K2Node_CustomEvent_bListenServer;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_Game_Instance = K2Node_DynamicCast_AsBP_Pal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_CustomEvent_bResult = K2Node_CustomEvent_bResult;
	Parms.K2Node_DynamicCast_AsBP_Pal_Game_Instance_1 = K2Node_DynamicCast_AsBP_Pal_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_MakeLiteralString_ReturnValue_1 = CallFunc_MakeLiteralString_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Pal_Game_Instance_2 = K2Node_DynamicCast_AsBP_Pal_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOptionWorldSettings_ReturnValue = CallFunc_GetOptionWorldSettings_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue_3 = CallFunc_GetHUDService_ReturnValue_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetHUDService_ReturnValue_4 = CallFunc_GetHUDService_ReturnValue_4;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.K2Node_CustomEvent_IsSelecting = K2Node_CustomEvent_IsSelecting;
	Parms.CallFunc_ShowCommonUI_ReturnValue = CallFunc_ShowCommonUI_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_3 = CallFunc_GetLocalPlayerController_ReturnValue_3;
	Parms.K2Node_CustomEvent_Param = K2Node_CustomEvent_Param;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller_3 = K2Node_DynamicCast_AsPal_Player_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsEnableBotLocationFlag_ReturnValue_1 = CallFunc_IsEnableBotLocationFlag_ReturnValue_1;
	Parms.CallFunc_GetHUDService_ReturnValue_5 = CallFunc_GetHUDService_ReturnValue_5;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetHUDService_ReturnValue_6 = CallFunc_GetHUDService_ReturnValue_6;
	Parms.CallFunc_GetHUDService_ReturnValue_7 = CallFunc_GetHUDService_ReturnValue_7;
	Parms.CallFunc_Push_ReturnValue_1 = CallFunc_Push_ReturnValue_1;
	Parms.CallFunc_Push_ReturnValue_2 = CallFunc_Push_ReturnValue_2;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.K2Node_CustomEvent_IsSuccess = K2Node_CustomEvent_IsSuccess;
	Parms.K2Node_CustomEvent_ErrorStr = K2Node_CustomEvent_ErrorStr;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue_3 = CallFunc_GetLocalPlayerState_ReturnValue_3;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue_4 = CallFunc_GetLocalPlayerState_ReturnValue_4;
	Parms.CallFunc_IsSelectedInitMapPoint_ReturnValue = CallFunc_IsSelectedInitMapPoint_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue_2 = CallFunc_MakeLiteralString_ReturnValue_2;
	Parms.CallFunc_IsMultiplayRestricted_ReturnValue = CallFunc_IsMultiplayRestricted_ReturnValue;
	Parms.CallFunc_GetPalGameInstance_ReturnValue = CallFunc_GetPalGameInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPal_Cutscene_Actor = K2Node_ClassDynamicCast_AsPal_Cutscene_Actor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_SpawnCutsceneActor_ReturnValue = CallFunc_SpawnCutsceneActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


