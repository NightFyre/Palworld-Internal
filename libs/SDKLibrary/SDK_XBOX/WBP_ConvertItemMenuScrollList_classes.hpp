#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB6 (0x4F0 - 0x43A)
// WidgetBlueprintGeneratedClass WBP_ConvertItemMenuScrollList.WBP_ConvertItemMenuScrollList_C
class UWBP_ConvertItemMenuScrollList_C : public UWBP_PalCommonScrollList_C
{
public:
	uint8                                        Pad_29ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClickedContent;                                  // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoverdContent;                                   // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhoveredContent;                                // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFocusedContent;                                  // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnfocusedContent;                                // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<enum class EPalBuildObjectTypeB, class FName> MsgIDMap;                                          // 0x490(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_BuildObjectScrollListBlock_C*> blocks;                                            // 0x4E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_ConvertItemMenuScrollList_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Target, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_ConvertItemMenuScrollListBlock_C* K2Node_DynamicCast_AsWBP_Convert_Item_Menu_Scroll_List_Block, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetFocusTarget_target, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void FocusWithRecipeID(class FName RecipeID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_ConvertItemMenuScrollListBlock_C* K2Node_DynamicCast_AsWBP_Convert_Item_Menu_Scroll_List_Block, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_PalConvertItemMenu_RecipeSlotButton_C* K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_GetRecipeID_recipeID, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void Focus(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_ConvertItemMenuScrollListBlock_C* K2Node_DynamicCast_AsWBP_Convert_Item_Menu_Scroll_List_Block, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnUnfocusedContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void OnFocusedContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void OnUnhoveredContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void OnHoveredContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void OnClickedContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void CreateBlock(TArray<class FName>& RecipeIDArray, class UWBP_ConvertItemMenuScrollListBlock_C** CreatedBlock, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_ConvertItemMenuScrollListBlock_C* CallFunc_Create_ReturnValue);
	void AddRecipeSet(TArray<class FName>& RecipeIDArray, class UWBP_ConvertItemMenuScrollListBlock_C** CreatedBlock, class UWBP_ConvertItemMenuScrollListBlock_C* CallFunc_CreateBlock_createdBlock, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnUnfocusedContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void OnFocusedContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void OnUnhoveredContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void OnHoverdContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void OnClickedContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
};

}


