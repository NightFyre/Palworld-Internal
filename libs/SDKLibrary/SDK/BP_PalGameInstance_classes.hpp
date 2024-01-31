#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x810 - 0x760)
// BlueprintGeneratedClass BP_PalGameInstance.BP_PalGameInstance_C
class UBP_PalGameInstance_C : public UPalGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x760(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULoadingProcessTask*                   CurrentLoadingTask;                                // 0x768(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_FadeWidget*   LoadingFadeParameter;                              // 0x770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                 LoadWorld;                                         // 0x778(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	bool                                         ShowedCharaMake;                                   // 0x7A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class APalCutsceneActor>       OpeningActor;                                      // 0x7B0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  CutsceneName;                                      // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCutsceneActor*                     OpeningCutscene;                                   // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlagName;                                          // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayingID;                                         // 0x7F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CreateSessionErrorMsgId;                           // 0x800(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_PalGameInstance_C* GetDefaultObj();

	void SetActivePlayerActor(bool Active, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetDefaultPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BP_PalGameInstance_AutoGenFunc(bool bResult);
	void Completed_32AFD11A49E65B7255FF4BA375D305CC(bool IsSuccess, const class FString& ErrorStr);
	void StartLoading(class UWBP_LoadingScreen_Transition_C*& CurrentLoadingWidget);
	void LoadingFinished();
	void ShowCharacterMakeScreen();
	void OnFinishCutscene(bool IsSkipped);
	void SetupGameInit();
	void StartOpening();
	void LoadLevel(TSoftObjectPtr<class UWorld> Level, class FString& Options, bool AutoClose);
	void StartGame(bool bNewGame, bool bListenServer);
	void ________(bool bResult);
	void OnShowSelectRespawnMap();
	void SetPlayerSelectMap(bool IsSelecting);
	void OnCloseMap(class UPalHUDDispatchParameterBase* Param);
	void OnCompleteSetup();
	void ExecuteUbergraph_BP_PalGameInstance(int32 EntryPoint, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCreateSessionAsyncFunction* CallFunc_CreateSessionAsyncFunction_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UWBP_LoadingScreen_Transition_C* K2Node_CustomEvent_CurrentLoadingWidget, bool CallFunc_IsValid_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameter_CharacterMake* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue, bool K2Node_CustomEvent_IsSkipped, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue_1, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Map_Contains_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_2, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_2, class ULoadingProcessTask* CallFunc_CreateLoadingScreenProcessTask_ReturnValue, TSoftObjectPtr<class UWorld> K2Node_CustomEvent_Level, const class FString& K2Node_CustomEvent_Options, bool K2Node_CustomEvent_AutoClose, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsPlayFromTitle_ReturnValue, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue_2, bool CallFunc_IsEnableBotLocationFlag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_bNewGame, bool K2Node_CustomEvent_bListenServer, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool K2Node_CustomEvent_bResult, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_4, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_5, bool Temp_bool_Variable, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_3, bool Temp_bool_Variable_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_4, class UPalHUDDispatchParameter_WorldMap* CallFunc_SpawnObject_ReturnValue_1, bool K2Node_CustomEvent_IsSelecting, const struct FGuid& CallFunc_ShowCommonUI_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_3, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_Param, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsEnableBotLocationFlag_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_5, const class FString& Temp_string_Variable, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_6, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_7, const struct FGuid& CallFunc_Push_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue_2, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool K2Node_CustomEvent_IsSuccess, const class FString& K2Node_CustomEvent_ErrorStr, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue_3, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue_4, bool CallFunc_IsSelectedInitMapPoint_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_2, bool CallFunc_IsMultiplayRestricted_ReturnValue, class UPalGameInstance* CallFunc_GetPalGameInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPal_Cutscene_Actor, bool K2Node_ClassDynamicCast_bSuccess, class APalCutsceneActor* CallFunc_SpawnCutsceneActor_ReturnValue);
};

}


