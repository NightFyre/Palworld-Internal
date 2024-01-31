#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x440 - 0x408)
// WidgetBlueprintGeneratedClass WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C
class UWBP_ConvertItemMenuScrollListBlock_C : public UPalUserWidget
{
public:
	class UWrapBox*                              WrapBox;                                           // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedAnyContent;                               // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredAnyContent;                               // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhoveredAnyContent;                             // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_ConvertItemMenuScrollListBlock_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Target, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalConvertItemMenu_RecipeSlotButton_C* K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void FocusTopContent(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_PalConvertItemMenu_RecipeSlotButton_C* K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnUnhovered_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelftWidget);
	void OnHovered_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelfWidget);
	void OnClicked_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void SetCategoryName(class FText CategoryNameText);
	void CreateRecipeIconWidget(class FName RecipeID, class UWBP_PalConvertItemMenu_RecipeSlotButton_C** CreatedWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalConvertItemMenu_RecipeSlotButton_C* CallFunc_Create_ReturnValue);
	void AddRecipeList(TArray<class FName>& RecipeIDArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, class UWBP_PalConvertItemMenu_RecipeSlotButton_C* CallFunc_CreateRecipeIconWidget_createdWidget, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue);
	void OnUnhoveredAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void OnHoveredAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
	void OnClickedAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
};

}


