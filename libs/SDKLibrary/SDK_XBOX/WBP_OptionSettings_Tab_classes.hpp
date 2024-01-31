#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x2BC - 0x278)
// WidgetBlueprintGeneratedClass WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C
class UWBP_OptionSettings_Tab_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_OptionSettings_TabButton_C*       WBP_OptionSettings_TabButton;                      // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_TabButton_C*       WBP_OptionSettings_TabButton_1;                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_TabButton_C*       WBP_OptionSettings_TabButton_2;                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_OptionSettings_TabButton_C*> Tabs;                                              // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_OptionSettings_TabButton_C*> ActiveTabs;                                        // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        Current;                                           // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_OptionSettings_Tab_C* GetDefaultObj();

	void SwitchTab(bool Next);
	void SetupTabs(TArray<struct FDataTableRowHandle>& Names);
	void Setup(class UWBP_OptionSettings_C* SettingPanel);
	void SwitchTabTo(int32 Index);
	void ExecuteUbergraph_WBP_OptionSettings_Tab(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item, bool K2Node_CustomEvent_Next, TArray<class UWBP_OptionSettings_TabButton_C*>& K2Node_MakeArray_Array, TArray<struct FDataTableRowHandle>& K2Node_CustomEvent_Names, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_2, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_2, int32 Temp_int_Variable_1, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_3, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_5, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_6, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_7, bool CallFunc_Greater_IntInt_ReturnValue, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_8, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_9, class UWBP_OptionSettings_C* K2Node_CustomEvent_SettingPanel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_Index, bool CallFunc_NotEqual_IntInt_ReturnValue, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_10);
};

}


