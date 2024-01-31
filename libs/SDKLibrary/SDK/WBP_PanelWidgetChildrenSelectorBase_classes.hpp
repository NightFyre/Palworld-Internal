#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x460 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C
class UWBP_PanelWidgetChildrenSelectorBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        NowFocusChildIndex;                                // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_557D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChangedFocusIndex;                               // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNext;                                            // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPrev;                                            // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPanelWidget*                          MyPanelWidget;                                     // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnChangeEnableChild;                               // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PanelWidgetChildrenSelectorBase_C* GetDefaultObj();

	void GetChildrenNum(int32* ChildrenNum, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, int32 CallFunc_Array_Length_ReturnValue);
	void GetPanelChildren(bool* IsValidPanel, TArray<class UWidget*>* Children, bool CallFunc_IsValid_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void GetIndexByWidget(class UWidget* Widget, int32* FindedIndex, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, int32 CallFunc_Array_Find_ReturnValue);
	void IsValidIndex(int32 Index, bool* IsValid, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetEnableAllChildren(bool IsEnable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetEnableChild(bool IsEnable, int32 TargetIndex, bool CallFunc_IsValidIndex_IsValid, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, class UWidget* CallFunc_Array_Get_Item);
	void IsEnabeChild(int32 Index, bool* IsEnable, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, bool CallFunc_IsValidIndex_IsValid, class UWidget* CallFunc_Array_Get_Item, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SelectByIndex(int32 FocusIndex, int32 OldIndex, bool CallFunc_IsValidIndex_IsValid, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, class UWidget* CallFunc_Array_Get_Item);
	void SelectPrev(const TArray<class UWidget*>& TmpChildren, int32 OldIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsEnabeChild_IsEnable, bool CallFunc_IsEnabeChild_IsEnable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_IsEnabeChild_IsEnable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Max_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_6, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, int32 CallFunc_Max_ReturnValue_2);
	void SelectNext(int32 OldIndex, const TArray<class UWidget*>& TmpChildren, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsEnabeChild_IsEnable, int32 Temp_int_Variable, bool CallFunc_IsEnabeChild_IsEnable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_IsEnabeChild_IsEnable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3);
	void RegisterPanelWidget(class UPanelWidget** PanelWidget);
	void Construct();
	void OnInitialized();
	void ExecuteUbergraph_WBP_PanelWidgetChildrenSelectorBase(int32 EntryPoint, class UPanelWidget* CallFunc_RegisterPanelWidget_PanelWidget);
	void OnChangeEnableChild__DelegateSignature(int32 Index, class UWidget* ChildWidget, bool IsEnable);
	void OnPrev__DelegateSignature(int32 OldIndex, int32 NewIndex);
	void OnNext__DelegateSignature(int32 OldIndex, int32 NewIndex);
	void OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
};

}


