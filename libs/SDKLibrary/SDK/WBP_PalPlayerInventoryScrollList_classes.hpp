#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8E (0x58E - 0x500)
// WidgetBlueprintGeneratedClass WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C
class UWBP_PalPlayerInventoryScrollList_C : public UWBP_PalItemScrollList_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x500(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalUIInventoryModel*                  Model;                                             // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPalPlayerInventoryType, class UWBP_PalItemListBlock_C*> CategoryBlockMap;                                  // 0x510(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<enum class EPalPlayerInventoryType>   InventoryTypeArray;                                // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnRequestOpenUseItemPanel;                         // 0x570(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         CanUseSlot;                                        // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5495[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalDataTableRowName_UIInputAction    Handle;                                            // 0x584(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CanQuickEquip;                                     // 0x58C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowPrice;                                         // 0x58D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalPlayerInventoryScrollList_C* GetDefaultObj();

	void Open_Use_Item_Panel(class UWBP_PalItemSlotButtonBase_C* Button, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot);
	void ScrollToCategoryTop(enum class EPalPlayerInventoryType TargetType, class UWidget** TopFocusTarget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UScrollBox* CallFunc_GetScrollBox_ScrollBox_1, class UWBP_PalItemListBlock_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void Add_Player_Inventory_Block(enum class EPalPlayerInventoryType InventoryType, class UWBP_PalItemListBlock_C** CreatedBlock, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UPalItemContainer* CallFunc_TryGetContainerFromInventoryType_outContainer, bool CallFunc_TryGetContainerFromInventoryType_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetInventoryCategoryName_outName, class UWBP_PalItemListBlock_C* CallFunc_AddItemContainer_createdBlock);
	void ClearFiltering(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPalPlayerInventoryType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class EPalPlayerInventoryType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalItemListBlock_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void FilteringFromInventoryType(TArray<enum class EPalPlayerInventoryType>& DisplayTypes, bool* IsEmptyDisplaySlot, class UWBP_PalItemListBlock_C* TopBlock, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class EPalPlayerInventoryType CallFunc_Array_Get_Item, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWBP_PalItemListBlock_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<enum class EPalPlayerInventoryType>& CallFunc_Map_Keys_Keys, enum class EPalPlayerInventoryType CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_PalItemListBlock_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void FilteringFromItemTypeB(TArray<enum class EPalItemTypeB>& DisplayTypesB, bool IsEmptySlotDIsplay, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPalPlayerInventoryType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class EPalPlayerInventoryType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalItemListBlock_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void FilteringFromItemTypeA(TArray<enum class EPalItemTypeA>& DisplayTypesA, bool IsEmptySlotDIsplay, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPalPlayerInventoryType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class EPalPlayerInventoryType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_PalItemListBlock_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnLeftCllicked(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsValid_ReturnValue, const struct FPalItemSlotId& K2Node_MakeStruct_PalItemSlotId);
	void Setup(class UPalUIInventoryModel* UseModel, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, TArray<class UWBP_PalItemListBlock_C*>& CallFunc_Map_Values_Values, int32 CallFunc_Add_IntInt_ReturnValue_2, class UWBP_PalItemListBlock_C* CallFunc_Array_Get_Item, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButtons_slotButtons, int32 CallFunc_Array_Length_ReturnValue, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPalPlayerInventoryType CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UWBP_PalItemListBlock_C* CallFunc_Add_Player_Inventory_Block_createdBlock, bool CallFunc_Less_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void Construct();
	void ExecuteUbergraph_WBP_PalPlayerInventoryScrollList(int32 EntryPoint);
	void OnRequestOpenUseItemPanel__DelegateSignature(class UPalItemSlot* SelectedSlot);
};

}


