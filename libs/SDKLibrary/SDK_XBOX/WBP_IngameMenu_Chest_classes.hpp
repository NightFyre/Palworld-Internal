#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x358 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameMenu_Chest.WBP_IngameMenu_Chest_C
class UWBP_IngameMenu_Chest_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Canvas_Inventory;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_TargetContainer;                            // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_TargetContainerName;                          // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton_QuickMove;                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton_Sort_Inventory;             // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton_Sort_TargetContainer;       // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalItemScrollList_C*              WBP_PalItemScrollList;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalPlayerInventoryScrollList_C*   WBP_PalPlayerInventoryScrollList;                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInventoryWeightInfo_C*      WBP_PlayerInventoryWeightInfo;                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalInventoryModel_C*               Model;                                             // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedInventorySortButton;                      // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedQuickMoveButton;                          // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedTargetContainerSortButton;                // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredInventorySlot;                            // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhoveredInventorySlot;                          // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredTargetContainerSlot;                      // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhoveredTargetContainerSlot;                    // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedCloseButton;                              // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_IngameMenu_Chest_C* GetDefaultObj();

	void GetTargetContainerLastHoveredFocusTarget(class UWidget** Widget, class UWBP_PalItemSlotButtonBase_C* CallFunc_GetLastHoveredSlotButton_SlotButton, bool CallFunc_IsValid_ReturnValue);
	void GetInventoryLastHoveredFocusTarget(class UWidget** Widget, class UWBP_PalItemSlotButtonBase_C* CallFunc_GetLastHoveredSlotButton_SlotButton, bool CallFunc_IsValid_ReturnValue);
	class UWidget* CustomNavi_ToTargetContainerSortButton(enum class EUINavigation Navigation);
	class UWidget* CustomNavi_ToCloseButton(enum class EUINavigation Navigation);
	void GetTargetContainerTopFocustTarget(class UWidget** FocusTarget, class UWidget* CallFunc_GetFocusTarget_target);
	void GetInventoryTopFocustTarget(class UWidget** FocusTarget, enum class EPalPlayerInventoryType Temp_byte_Variable, class UWBP_PalItemListBlock_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item);
	void OnLeftClickedTargetContainerSLot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, const struct FPalItemSlotId& CallFunc_GetSlotId_ReturnValue);
	void Setup(class UBP_PalInventoryModel_C* Model, class UPalItemContainer* TargetContainer, bool CallFunc_IsValid_ReturnValue, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainerFromInventoryType_outContainer, bool CallFunc_TryGetContainerFromInventoryType_ReturnValue);
	void SetTagetContainerDisplayName(class FText TargetContainerName);
	void SetupTargetItemContainer(class UPalItemContainer* TargetContainer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_PalItemListBlock_C* CallFunc_AddItemContainer_createdBlock);
	void FilteringInventoryByInventoryType(TArray<enum class EPalPlayerInventoryType>& InventoryType, bool CallFunc_FilteringFromInventoryType_IsEmptyDisplaySlot);
	void SetupInventory();
	void Construct();
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_QuickMove_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_5_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_3_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_6_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_IngameMenu_Chest(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_buttonBase_3, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_buttonBase_2, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_buttonBase_1, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_buttonBase);
	void OnClickedCloseButton__DelegateSignature();
	void OnUnhoveredTargetContainerSlot__DelegateSignature();
	void OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
	void OnUnhoveredInventorySlot__DelegateSignature();
	void OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
	void OnClickedTargetContainerSortButton__DelegateSignature();
	void OnClickedQuickMoveButton__DelegateSignature();
	void OnClickedInventorySortButton__DelegateSignature();
};

}


