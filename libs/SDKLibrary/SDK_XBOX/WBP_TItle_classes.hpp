#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x478 - 0x420)
// WidgetBlueprintGeneratedClass WBP_TItle.WBP_TItle_C
class UWBP_TItle_C : public UPalUITitleBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Title_MenuBG_C*                   WBP_Title_MenuBG;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleMenu_C*                      WBP_TitleMenu;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ECommonUserPrivilege              Requested_Privilege;                               // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_TitleFriendButton_OLD_C*>  TitleFriendButtons;                                // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ULoadingProcessTask*                   CurrentLoadingScreen;                              // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_LoadingScreen_Transition_C*       CurrentWidget;                                     // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_TitleSaveDataButton_OLD_C*> TitleSaveDataButtons;                              // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_Title_MenuButton_C*               LastClickedButton;                                 // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_TItle_C* GetDefaultObj();

	void WBP_TItle_AutoGenFunc(bool bResult);
	void OnClosedQuitGameDialog(bool bResult, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue);
	void OpenQuitGameDialog(const struct FDataTableRowHandle& NewLocalVar, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text);
	void OnClickedMenu_Internal(class UWBP_Title_MenuButton_C* ButtonWidget, const struct FGuid& CallFunc_Push_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, enum class E_PalUITitleMenuButtonType CallFunc_GetMenuType_BindedMenuType, class UPalHUDDispatchParame_JoinGameInputCode* CallFunc_SpawnObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGuid& CallFunc_Push_ReturnValue_1, const struct FGuid& CallFunc_Push_ReturnValue_2, const struct FGuid& CallFunc_Push_ReturnValue_3, const struct FGuid& CallFunc_Push_ReturnValue_4, const struct FGuid& CallFunc_Push_ReturnValue_5);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetTopButton_TargetWidget);
	void Completed_0EC96F8E452B5A23D69FAFB13A8CD5AD(class UPocketpairUserInfo* UserInfo, bool bSuccess, const class FString& ErrorStr);
	void BndEvt__WBP_TItle_WBP_TitleMenu_K2Node_ComponentBoundEvent_6_OnClickedMenu__DelegateSignature(class UWBP_Title_MenuButton_C* ButtonWidget);
	void OnSetup();
	void SwitchUser();
	void ExecuteUbergraph_WBP_TItle(int32 EntryPoint, bool CallFunc_IsCanOpenExternalWebSite_ReturnValue, class UPocketpairUserInfo* K2Node_CustomEvent_UserInfo, bool K2Node_CustomEvent_bSuccess, const class FString& K2Node_CustomEvent_ErrorStr, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& Temp_string_Variable, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class UPocketpairUserInfo* Temp_object_Variable, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UWBP_Title_MenuButton_C* K2Node_ComponentBoundEvent_ButtonWidget, class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* CallFunc_SwitchUserUIAsyncFunction_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UPalGameInstance* K2Node_DynamicCast_AsPal_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalGameInstance* CallFunc_GetPalGameInstance_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue);
};

}


