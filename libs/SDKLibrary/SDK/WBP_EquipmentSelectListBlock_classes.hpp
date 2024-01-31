#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4D0 - 0x4D0)
// WidgetBlueprintGeneratedClass WBP_EquipmentSelectListBlock.WBP_EquipmentSelectListBlock_C
class UWBP_EquipmentSelectListBlock_C : public UWBP_PalItemListBlock_C
{
public:

	static class UClass* StaticClass();
	static class UWBP_EquipmentSelectListBlock_C* GetDefaultObj();

	void GetAllItemSlotButtons(TArray<class UWBP_PalItemSlotButtonBase_C*>* SlotButtons, const TArray<class UWBP_PalItemSlotButtonBase_C*>& Buttons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllContents_contents, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USizeBox* K2Node_DynamicCast_AsSize_Box, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalItemSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue);
	void GetFocusTarget(class UWidget** NewParam, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USizeBox* K2Node_DynamicCast_AsSize_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalItemSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess_1);
	void EditCreatedSlotWidget(class UWBP_PalItemSlotButtonBase_C* CreatedSlotWidget, class UWidget** EditedWidget, class USizeBox* CallFunc_SpawnObject_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


