#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x4C8 - 0x430)
// WidgetBlueprintGeneratedClass WBP_InGameMainMenu.WBP_InGameMainMenu_C
class UWBP_InGameMainMenu_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_106;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_C*                       WBP_MainMenu;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_bg_C*                    WBP_MainMenu_bg;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalUserWidget*                        CurrentContentWidget;                              // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    NextTabActionName;                                 // 0x460(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    PrevTabActionName;                                 // 0x468(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    CloseMenuActionName;                               // 0x470(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPalUIInGameMainMenuTabType, struct FDataTableRowHandle> TitleMsgIDMap;                                     // 0x478(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_InGameMainMenu_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SelectGuildTab(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_Guild_ForDisplay_C* CallFunc_Create_ReturnValue);
	void SelectInventoryEquipmentTab(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_InventoryEquipment_ForDisplay_C* CallFunc_Create_ReturnValue, class UBP_InGameMenuInventoryModel_C* CallFunc_SpawnObject_ReturnValue);
	void SelectOptionTab(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_MenuESC_C* CallFunc_Create_ReturnValue);
	void OnAllNewFlagCleared_PalDex();
	void On_Unused_Status_Points_Changed(int32 UnusedPoint, bool CallFunc_Greater_IntInt_ReturnValue, class UWBP_MainMenu_Tab_C* CallFunc_GetTabWidgetByMenuType_TabWidget, bool CallFunc_IsValid_ReturnValue);
	void SetupAllAttentionDot(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void Setup_Attention_Dot(enum class EPalUIInGameMainMenuTabType Tab, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<bool>& CallFunc_Map_Values_Values, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_MainMenu_Tab_C* CallFunc_GetTabWidgetByMenuType_TabWidget, bool CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_GetUnusedStatusPoint_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsExistNewUnlockedTechnology_ReturnValue);
	void OnChangedTabIndexEvent(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget, bool CallFunc_NotEqual_IntInt_ReturnValue, class UWBP_MainMenu_Tab_C* K2Node_DynamicCast_AsWBP_Main_Menu_Tab, bool K2Node_DynamicCast_bSuccess);
	void SelectPaldexTab(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_Paldex_ForDisplay_C* CallFunc_Create_ReturnValue);
	void SetupBgText(enum class EPalUIInGameMainMenuTabType Type, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue);
	void OnCancelAction(class UWBP_PalStatus_C* K2Node_DynamicCast_AsWBP_Pal_Status, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Is_Editing_Nick_Name_isEditing, bool CallFunc_ShouldBackList_shouldBack, class UWBP_Guild_ForDisplay_C* K2Node_DynamicCast_AsWBP_Guild_for_Display, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanClose_CanCloseFlag, class UWBP_InventoryEquipment_ForDisplay_C* K2Node_DynamicCast_AsWBP_Inventory_Equipment_for_Display, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsSimulatingStatusPoint_IsSimulating);
	void AddChildToContentBody(class UPalUserWidget* Widget, const struct FAnchors& K2Node_MakeStruct_Anchors, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess);
	void OnNextTabAction();
	void OnPrevTabAction();
	void SelectPalTab(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UPalIndividualCharacterHandle*>& CallFunc_GetAllIndividualHandle_OutArray, class UWBP_PalStatus_C* CallFunc_Create_ReturnValue);
	void SelectTechnologyTab(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_TechnologyUI_C* CallFunc_Create_ReturnValue);
	void SelectTab(enum class EPalUIInGameMainMenuTabType TabType, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void SetupInputAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2);
	void AnmEvent_AllOpen();
	void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void OnSetup();
	void OnInitialized();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_InGameMainMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_InGameMainMenuParameter_C* K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Parameter, bool K2Node_DynamicCast_bSuccess);
};

}


