#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC6 (0x500 - 0x43A)
// WidgetBlueprintGeneratedClass WBP_PalItemScrollList.WBP_PalItemScrollList_C
class UWBP_PalItemScrollList_C : public UWBP_PalCommonScrollList_C
{
public:
	uint8                                        Pad_2595[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnLeftClickedSlot;                                 // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMiddleClickedSlot;                               // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRightClickedSlot;                                // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredSlot;                                     // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEndHoveredSlot;                                  // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFocusedSlot;                                     // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnfocusedSlot;                                   // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                BlockClass;                                        // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDragDetectedSlot;                                // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsDisplayItemInfo;                                 // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableQuickMoveSlot;                             // 0x4D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2596[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalItemSlotButtonBase_C*          CachedLastHoveredSlotButton;                       // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*          CachedNowHoveringSlotButton;                       // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemContainer*                     QuickMoveTargetContainer;                          // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRequestUseItem;                                  // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PalItemScrollList_C* GetDefaultObj();

	void GetAllItemSlotButton(TArray<class UWBP_PalItemSlotButtonBase_C*>* Slots, const TArray<class UWBP_PalItemSlotButtonBase_C*>& TmpSlots, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalItemListBlock_C* K2Node_DynamicCast_AsWBP_Pal_Item_List_Block, bool K2Node_DynamicCast_bSuccess, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons);
	void SetQuickMoveTargetContainer(class UPalItemContainer* TargetContainer);
	void GetLastHoveredSlotButton(class UWBP_PalItemSlotButtonBase_C** SlotButton);
	void ClearAllChildren();
	void OnDragDetected_Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnRequestUseItem_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void FilteringBySellableItemDataMap(TMap<class FName, double> SellableItemDataMap, bool IsAllNotForsale, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButton_Slots, int32 CallFunc_Array_Length_ReturnValue, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void HiddenEmptySlot(bool IsALLEmpty, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalItemListBlock_C* K2Node_DynamicCast_AsWBP_Pal_Item_List_Block, bool K2Node_DynamicCast_bSuccess, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item_1, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue);
	void GetFocusTarget(class UWidget** Target, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UWBP_PalItemListBlock_C* K2Node_DynamicCast_AsWBP_Pal_Item_List_Block, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetFocusTarget_NewParam);
	void CreateEmptyBlock(class UWBP_PalItemListBlock_C** CreatedBlock, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWBP_PalItemListBlock_C* CallFunc_CreateBlock_createdBlock, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnUnfocused_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnFocused_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void InitializeArrowVisibility(class UScrollBox* CallFunc_GetScrollBox_ScrollBox, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast);
	void Focus(class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalItemListBlock_C* K2Node_DynamicCast_AsWBP_Pal_Item_List_Block, bool K2Node_DynamicCast_bSuccess);
	void OnEndHovered_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnHovered_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnRightClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType, enum class EPalItemSlotPressType Temp_byte_Variable, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, int32 Temp_int_Variable, int32 CallFunc_GetStackCount_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 K2Node_Select_Default, const struct FPalContainerId& CallFunc_GetId_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnMiddleClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnLeftClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType);
	void CreateBlock(class UPalItemContainer* TargetContainer, class FText DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C** CreatedBlock, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetInventoryCategoryName_outName, bool CallFunc_EqualEqual_TextText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPalItemSlot* CallFunc_CreateLocalItemSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalItemListBlock_C* CallFunc_Create_ReturnValue);
	void AddItemContainer(class UPalItemContainer* TargetContainer, class FText DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C** CreatedBlock, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWBP_PalItemListBlock_C* CallFunc_CreateBlock_createdBlock, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Construct();
	void OnInitialized();
	void Destruct();
	void ExecuteUbergraph_WBP_PalItemScrollList(int32 EntryPoint);
	void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
	void OnMiddleClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnDragDetectedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnUnfocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnFocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnRightClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType);
	void OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType);
};

}


