#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x4B0 - 0x460)
// WidgetBlueprintGeneratedClass WBP_Paldex_tabset.WBP_Paldex_tabset_C
class UWBP_Paldex_tabset_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_Tab;                                 // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Main_Menu_Tab_Key_C*              WBP_Main_Menu_Tab_Key_L;                           // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Main_Menu_Tab_Key_C*              WBP_Main_Menu_Tab_Key_R;                           // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_tab_C*                     WBP_Paldex_tab_Distribution;                       // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_tab_C*                     WBP_Paldex_tab_Model;                              // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelectedModelTab;                                // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSelectedDistributionTab;                         // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Paldex_tabset_C* GetDefaultObj();

	void OnPrevEvent(int32 OldIndex, int32 NewIndex);
	void OnNextEvent(int32 OldIndex, int32 NewIndex);
	void OnChangedIndexEvent(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget, bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void RegisterPanelWidget(class UPanelWidget** PanelWidget);
	void BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Distribution_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Model_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void OnInitialized();
	void BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_R_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_L_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Paldex_tabset(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnSelectedDistributionTab__DelegateSignature();
	void OnSelectedModelTab__DelegateSignature();
};

}


