#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x4B0 - 0x430)
// WidgetBlueprintGeneratedClass WBP_CommonSelectNum.WBP_CommonSelectNum_C
class UWBP_CommonSelectNum_C : public UPalUISelectNumWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_318;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_58;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_0;                                 // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_454;                                         // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               LeftButton;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RightButton;                                       // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        NowCount;                                          // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxCount;                                          // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRightButtonClicked;                              // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnLeftButtonClicked;                               // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTextCommited;                                    // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        MaxDigit;                                          // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B2B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalUISelectNumParameter*              Parameter;                                         // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CommonSelectNum_C* GetDefaultObj();

	void CheckMaxCount(const class FString& InString, class FString* OutString, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue);
	void GetNowCount(int32* Count);
	void Check_Numeric(const class FString& CheckString, class FString* OutString, const class FString& CheckedString, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_IsNumeric_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void UpdateText(class FText CallFunc_Conv_IntToText_ReturnValue);
	void Increment(int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Decrement(int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Setup(int32 InMaxCount, int32 DefaultCount);
	void BndEvt__WBP_CommonSelectNum_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_CommonSelectNum_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_CommonSelectNum_Button_318_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void OnSetup();
	void OnClickedR();
	void OnClickedL();
	void OnEscape();
	void OnTextChanged(const class FString& NewString);
	void ExecuteUbergraph_WBP_CommonSelectNum(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Check_Numeric_outString, const class FString& CallFunc_Check_Numeric_outString_1, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_CheckMaxCount_outString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Left_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Check_Numeric_outString_2, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_CheckMaxCount_outString_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUISelectNumParameter* K2Node_DynamicCast_AsPal_UISelect_Num_Parameter, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_newString, int32 CallFunc_Conv_StringToInt_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void OnTextCommited__DelegateSignature(const class FString& NewString);
	void OnLeftButtonClicked__DelegateSignature();
	void OnRightButtonClicked__DelegateSignature();
};

}


