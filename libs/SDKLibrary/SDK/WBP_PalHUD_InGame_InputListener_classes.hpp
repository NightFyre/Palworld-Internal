#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x490 - 0x420)
// WidgetBlueprintGeneratedClass WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C
class UWBP_PalHUD_InGame_InputListener_C : public UPalUIInGameInputListener
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x428(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Ingame_Chat_C*                    WBP_Ingame_Chat;                                   // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInteractiveObjectIndicatorCanvas_C* WBP_PalInteractiveObjectIndicatorCanvas;           // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerRadialMenu_C*               WBP_PlayerRadialMenu;                              // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    EscapeActionName;                                  // 0x448(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    OpenCharacterMenuActionName;                       // 0x450(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    OpenBuildMenuActionName;                           // 0x458(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    OpenTechnologyMenuActionName;                      // 0x460(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    OpenWorldMapActionName;                            // 0x468(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    OpenPalStatusActionName;                           // 0x470(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  OpenCharacterMenuActionHandle;                     // 0x478(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalDataTableRowName_UIInputAction    OpenChatActionName;                                // 0x47C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ChageCategoryChatActionName;                       // 0x484(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  ChangeCategoryChatActionHandle;                    // 0x48C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_PalHUD_InGame_InputListener_C* GetDefaultObj();

	void OpenChat(bool CallFunc_CanChat_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue);
	void CanOpenAnyUI(bool* CanOpenUI, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OpenBuildRadialMenuWithSelectedIndex(int32 SelectedIndex, bool CallFunc_CanOpenAnyUI_CanOpenUI);
	void OpenBuildRadialMenu(class FName BuildObjectId, enum class EPalBuildObjectTypeA SelectObjectType, bool CallFunc_CanOpenAnyUI_CanOpenUI);
	void OnTriggerWorldMap(bool CallFunc_CanOpenAnyUI_CanOpenUI, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameter_WorldMap* CallFunc_SpawnObject_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, const struct FGuid& CallFunc_ShowCommonUI_ReturnValue);
	void SetupInputAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_5);
	void OpenBuildMenu(int32 BuildObjectTypeA, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EPalBuildObjectTypeA CallFunc_ToBuildObjectTypeA_ReturnValue);
	void OpenMenu_Internal(enum class EPalUIInGameMainMenuTabType TabType, enum class EPalBuildObjectTypeA BuildObjectTypeA, bool CallFunc_CanOpenAnyUI_CanOpenUI, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_InGameMainMenuParameter_C* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue);
	void OnTriggerEscape(bool CallFunc_IsAnyMenuOpened_IsOpened);
	void OnTriggerOpenPalStatus();
	void OnTriggerOpenTechnologyMenu();
	void OnTriggerOpenBuildMenu();
	void OnTriggerOpenCraftMenu();
	void OnTriggerOpenInventoryMenu();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSetup_AfterCreatedPlayer();
	void BndEvt__WBP_PalHUD_InGame_InputListener_WBP_Ingame_Chat_K2Node_ComponentBoundEvent_0_OnCompleteInput__DelegateSignature();
	void ExecuteUbergraph_WBP_PalHUD_InGame_InputListener(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue);
};

}


