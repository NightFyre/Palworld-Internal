#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x4B8 - 0x460)
// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_TabList.WBP_InventoryEquipment_TabList_C
class UWBP_InventoryEquipment_TabList_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Canvas_InventoryTab;                               // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_SortButton;                                 // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_1;                                   // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_368;                                         // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TabIconBase;                                       // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_InventoryTabButton_C* WBP_InventoryEquipment_InventoryTabButton_Essential; // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_InventoryTabButton_C* WBP_InventoryEquipment_InventoryTabButton_Inventory; // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton_Sort;                       // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedSortButton;                               // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_InventoryEquipment_TabList_C* GetDefaultObj();

	void OnChangedIndex_Binded(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_InventoryEquipment_InventoryTabButton_C* K2Node_DynamicCast_AsWBP_Inventory_Equipment_Inventory_Tab_Button, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_InventoryEquipment_InventoryTabButton_C* K2Node_DynamicCast_AsWBP_Inventory_Equipment_Inventory_Tab_Button_1, bool K2Node_DynamicCast_bSuccess_1);
	void OnPrev_Binded(int32 OldIndex, int32 NewIndex);
	void OnNext_Binded(int32 OldIndex, int32 NewIndex);
	void RegisterPanelWidget(class UPanelWidget** PanelWidget);
	void OnInitialized();
	void BndEvt__WBP_InventoryEquipment_TabList_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Essential_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button);
	void BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Inventory_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button);
	void ExecuteUbergraph_WBP_InventoryEquipment_TabList(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UWBP_InventoryEquipment_InventoryTabButton_C* K2Node_ComponentBoundEvent_Button_1, class UWBP_InventoryEquipment_InventoryTabButton_C* K2Node_ComponentBoundEvent_Button);
	void OnClickedSortButton__DelegateSignature();
};

}


