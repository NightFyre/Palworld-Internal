#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x510 - 0x460)
// WidgetBlueprintGeneratedClass WBP_MainMenu.WBP_MainMenu_C
class UWBP_MainMenu_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Close_Main_Menu;                               // 0x468(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Open_Main_menu;                                // 0x470(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Tab;                                 // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                   WBP_Tab_00;                                        // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                   WBP_Tab_01;                                        // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                   WBP_Tab_02;                                        // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                   WBP_Tab_03;                                        // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                   WBP_Tab_04;                                        // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Tab_C*                   WBP_Tab_05;                                        // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Main_Menu_Tab_Key_C*              WBP_Tab_Key_L;                                     // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Main_Menu_Tab_Key_C*              WBP_Tab_Key_R;                                     // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class EPalUIInGameMainMenuTabType, class UWBP_MainMenu_Tab_C*> TabWidgetMap;                                      // 0x4C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_C* GetDefaultObj();

	void GetTabWidgetByMenuType(enum class EPalUIInGameMainMenuTabType MenuType, class UWBP_MainMenu_Tab_C** TabWidget, class UWBP_MainMenu_Tab_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SelectByMainMenuType(enum class EPalUIInGameMainMenuTabType Type, class UWBP_MainMenu_Tab_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_GetIndexByWidget_FindedIndex);
	void OnClickedTabEvent(class UWBP_MainMenu_Tab_C* TabWidget, int32 CallFunc_GetIndexByWidget_FindedIndex);
	void RegisterPanelWidget(class UPanelWidget** PanelWidget);
	void OnChangedIndexEvent(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, class UWBP_MainMenu_Tab_C* K2Node_DynamicCast_AsWBP_Main_Menu_Tab, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Array_Get_Item, class UWBP_MainMenu_Tab_C* K2Node_DynamicCast_AsWBP_Main_Menu_Tab_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValidIndex_IsValid);
	void OnPrevEvent(int32 OldIndex, int32 NewIndex, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void OnNextEvent(int32 OldIndex, int32 NewIndex, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Anm_Focus(enum class EPalUIInGameMainMenuTabType Type);
	void Anm_FocusToNormal(enum class EPalUIInGameMainMenuTabType Type);
	void Anm_Open();
	void OnInitialized();
	void BndEvt__WBP_MainMenu_WBP_Tab_Key_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_MainMenu_WBP_Tab_Key_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_MainMenu(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EPalUIInGameMainMenuTabType K2Node_CustomEvent_type_1, enum class EPalUIInGameMainMenuTabType K2Node_CustomEvent_type, class UWBP_MainMenu_Tab_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWBP_MainMenu_Tab_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<enum class EPalUIInGameMainMenuTabType>& CallFunc_Map_Keys_Keys, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_MainMenu_Tab_C* K2Node_DynamicCast_AsWBP_Main_Menu_Tab, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EPalUIInGameMainMenuTabType CallFunc_Array_Get_Item_1, class UWBP_MainMenu_Tab_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2);
};

}


