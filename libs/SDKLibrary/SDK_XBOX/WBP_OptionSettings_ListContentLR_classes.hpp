#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2D8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContentLR.WBP_OptionSettings_ListContentLR_C
class UWBP_OptionSettings_ListContentLR_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_Name;                              // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_LRBars;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentLRArrow_C* WBP_OptionSettings_ListContentLArrow;              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentLRArrow_C* WBP_OptionSettings_ListContentRArrow;              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_OptionSettings_ListContentLRBar_C*> LRBars;                                            // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        Current;                                           // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_189[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Selections;                                        // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_OptionSettings_ListContentLR_C* GetDefaultObj();

	void SelectByIndex(int32 Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UWBP_OptionSettings_ListContentLRBar_C* CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UWBP_OptionSettings_ListContentLRBar_C* CallFunc_Array_Get_Item_2);
	void GetCurrentIndex(int32* Index);
	void MoveRight();
	void MoveLeft();
	void SetupSelections(TArray<class FString>& Selections, int32 Current);
	void BndEvt__WBP_OptionSettings_ListContentLR_WBP_OptionSettings_ListContentLArrow_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_OptionSettings_ListContentLR_WBP_OptionSettings_ListContentRArrow_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_WBP_OptionSettings_ListContentLR(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Max_ReturnValue, TArray<class FString>& K2Node_CustomEvent_Selections, int32 K2Node_CustomEvent_Current, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UWBP_OptionSettings_ListContentLRBar_C* CallFunc_SpawnObject_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Variable_1, const class FString& CallFunc_Array_Get_Item_1, class UWBP_OptionSettings_ListContentLRBar_C* CallFunc_Array_Get_Item_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UWBP_OptionSettings_ListContentLRBar_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWBP_OptionSettings_ListContentLRBar_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Min_ReturnValue);
	void OnSelectionChanged__DelegateSignature(int32 Selection);
};

}


