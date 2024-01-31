#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26 (0x460 - 0x43A)
// WidgetBlueprintGeneratedClass WBP_PaldexScrollList.WBP_PaldexScrollList_C
class UWBP_PaldexScrollList_C : public UWBP_PalCommonScrollList_C
{
public:
	uint8                                        Pad_5085[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHoveredAnyPanel;                                 // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedAnyPanel;                                 // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PaldexScrollList_C* GetDefaultObj();

	void ClickByCharacterID(class FName CharacterID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Paldex_List_C* K2Node_DynamicCast_AsWBP_Paldex_List, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void GetWidgetByIndex(int32 Index, class UWBP_Paldex_List_C** Widget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class UWBP_Paldex_List_C* K2Node_DynamicCast_AsWBP_Paldex_List, bool K2Node_DynamicCast_bSuccess);
	void ClickByIndex(int32 Index, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class UWBP_Paldex_List_C* K2Node_DynamicCast_AsWBP_Paldex_List, bool K2Node_DynamicCast_bSuccess);
	void OnClickedPanel_Internal(class FName CharacterID, class UWBP_Paldex_List_C* Widget);
	void GetFocusTargetByCharacterID(class FName CharacterID, class UWidget** Widget, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, class UWBP_Paldex_List_C* K2Node_DynamicCast_AsWBP_Paldex_List, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetFocusTargetByIndex(int32 Index, class UWidget** Target, class UWBP_Paldex_List_C* CallFunc_GetWidgetByIndex_Widget, bool CallFunc_IsValid_ReturnValue);
	void FocusByCharatcerID(class FName CharacterID, enum class EScrollWhenFocusChanges TmpScrollWhenFocusChanged, class UWidget* CallFunc_GetFocusTargetByCharacterID_widget, bool CallFunc_IsValid_ReturnValue);
	void FocusByIndex(int32 Index, class UWidget* CallFunc_GetFocusTargetByIndex_target, bool CallFunc_IsValid_ReturnValue);
	void CreateChild(const struct FPalUIPaldex_DisplayInfo& DisplayInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_Paldex_List_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPalScrollBoxSlot* K2Node_DynamicCast_AsPal_Scroll_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void OnHoveredPanel_Internal(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
	void AddDisplayInfo(TArray<struct FPalUIPaldex_DisplayInfo>& InfoArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FPalUIPaldex_DisplayInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnClickedAnyPanel__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* Widget);
	void OnHoveredAnyPanel__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
};

}


