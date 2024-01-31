#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x5A0 - 0x558)
// WidgetBlueprintGeneratedClass WBP_WorldSetting.WBP_WorldSetting_C
class UWBP_WorldSetting_C : public UPalUIWorldSettingBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_69;                                          // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonWaiting_C*                  WBP_CommonWaiting;                                 // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldMenu_Head_C*           WBP_Title_WorldMenu_Head;                          // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSettings_C*            WBP_Title_WorldSettings;                           // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   WaitingSaveMsgID;                                  // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Is_New_World;                                      // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_HUDDispatchParameter_WorldNameInput_C* WorldNameInputDispatchParameter;                   // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_WorldSetting_C* GetDefaultObj();

	void OnClosedWorldNameInputWindow(class UPalHUDDispatchParameterBase* Param, bool CallFunc_IsValid_ReturnValue);
	void OpenWorldNameInputWindow(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_HUDDispatchParameter_WorldNameInput_C* CallFunc_SpawnObject_ReturnValue, const class FString& CallFunc_GetWorldName_WorldName, const struct FGuid& CallFunc_Push_ReturnValue);
	void OnClosedStartGameDialog(bool bResult, class UWidget* CallFunc_GetFocusTarget_TargetWidget, const struct FPalOptionWorldSettings& CallFunc_GetEditedWorldSetting_WorldSetting, bool CallFunc_CompleteSetting_ReturnValue);
	void OpenStartGameCheckDialog(const struct FDataTableRowHandle& NewLocalVar_0, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text);
	void StartNewGame(const struct FPalOptionWorldSettings& Option, const struct FPalOptionWorldSettings& NewLocalVar_1, const class FString& CallFunc_GetWorldName_WorldName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UPalGameInstance* K2Node_DynamicCast_AsPal_Game_Instance, bool K2Node_DynamicCast_bSuccess_1);
	void OnClosedSaveSettingDialog(bool bResult, const struct FPalOptionWorldSettings& CallFunc_GetEditedWorldSetting_WorldSetting, class UWidget* CallFunc_GetFocusTarget_TargetWidget, bool CallFunc_CompleteSetting_ReturnValue);
	void OpenCheckSaveSettingDialog(const struct FDataTableRowHandle& NewLocalVar, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text);
	void OnCancelAction(bool CallFunc_IsTextEditing_IsEditing);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_TargetWidget);
	void OnSetup();
	void BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_0_OnClickedCancel__DelegateSignature();
	void BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_1_OnClickedConfirm__DelegateSignature();
	void OnCompletedSaveSetting(bool IsSuccess);
	void Construct();
	void Destruct();
	void BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_2_OnClickedWorldNameInputButton__DelegateSignature();
	void ExecuteUbergraph_WBP_WorldSetting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_WorldSetting* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_IsEditedSetting_IsEdited, bool K2Node_Event_IsSuccess);
};

}


