#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x4D0 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalItemListBlock.WBP_PalItemListBlock_C
class UWBP_PalItemListBlock_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InventoryListContent_C*           WBP_InventoryListContent;                          // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                ItemSlotButtonClass;                               // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnLeftClickedAnyContent;                           // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMiddleClickedAnyContent;                         // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRightClickedAnyContent;                          // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoverdAnyContent;                                // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEndHoveredAnyContent;                            // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFocusedAnyContent;                               // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnfocusedAnyContent;                             // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCreatedSlotButton;                               // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             ChildrenPadding;                                   // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDragDetectedAnyContent;                          // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRequestUseItem;                                  // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PalItemListBlock_C* GetDefaultObj();

	void On_Drag_Detected_Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnRequestUse_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void IsAllSlotEmpty(bool* IsALLEmpty, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetAllItemSlotButtons(TArray<class UWBP_PalItemSlotButtonBase_C*>* SlotButtons, const TArray<class UWBP_PalItemSlotButtonBase_C*>& Buttons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllContents_contents, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalItemSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void EditCreatedSlotWidget(class UWBP_PalItemSlotButtonBase_C* CreatedSlotWidget, class UWidget** EditedWidget);
	void GetFocusTarget(class UWidget** NewParam, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalItemSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	void ClearFiltering(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllContents_contents, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void FilteringFromItemTypeB(TArray<enum class EPalItemTypeB>& DisplayItemTypesB, bool IsEmptySlotDIsplay, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons, TArray<class UWidget*>& CallFunc_GetAllContents_contents, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, enum class EPalItemTypeB CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item_1, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_2, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void FilteringFromItemTypeA(TArray<enum class EPalItemTypeA>& DisplayTypesA, bool IsEmptySlotDIsplay, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons, TArray<class UWidget*>& CallFunc_GetAllContents_contents, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_BooleanAND_ReturnValue_1, enum class EPalItemTypeA CallFunc_Array_Get_Item_2, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnUnfocusedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnFocusedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void Focus(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalItemSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess);
	void SetListName(class FText InName);
	void CreateItemSlotWidget(class UPalItemSlot* TargetSlot, bool IsEnableQuickMove, bool IgnoreEmptySlot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalItemSlotButtonBase_C* CallFunc_Create_ReturnValue, class UWidget* CallFunc_EditCreatedSlotWidget_editedWidget);
	void OnLeftClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType);
	void OnMiddletClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnRightClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType);
	void OnEndHoveredSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnHoveredSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void ChangeItemSlotButtonClass(class UClass* NewClass);
	void AddItemSlot(class UPalItemSlot* TargetSlot);
	void AddItemContainer(class UPalItemContainer* TargetContainer, bool IsEnableQuickMove, bool IgnoreEmptySlot, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPalItemSlot* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_PalItemListBlock(int32 EntryPoint);
	void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
	void OnMiddleClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnDragDetectedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnCreatedSlotButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* CreatedWidget);
	void OnUnfocusedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnFocusedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnRightClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType);
	void OnEndHoveredAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnHoverdAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnLeftClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType);
};

}


