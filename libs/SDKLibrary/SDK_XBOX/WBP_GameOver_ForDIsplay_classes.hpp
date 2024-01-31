#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x449 - 0x430)
// WidgetBlueprintGeneratedClass WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C
class UWBP_GameOver_ForDIsplay_C : public UPalUIGameOver
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_GameOver_Defeat_C*                WBP_GameOver_Defeat;                               // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          BlockRespawnTimerHandle;                           // 0x440(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CanRespawn;                                        // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GameOver_ForDIsplay_C* GetDefaultObj();

	void OnCancelAction();
	class UWidget* BP_GetDesiredFocusTarget();
	void OnClickedRespawnButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsExistRespawnLocation_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameter_WorldMap* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue);
	void OnFinishedClose(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue);
	void OnFinishedOpen();
	void OnEndedRespawnBlockTime();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void Destruct();
	void ExecuteUbergraph_WBP_GameOver_ForDIsplay(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, int32 CallFunc_FCeil_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, TArray<struct FPalLogInfo_DropPal>& CallFunc_GetAndClearLastDropPalInfo_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, double CallFunc_FCeil_A_ImplicitCast);
};

}


