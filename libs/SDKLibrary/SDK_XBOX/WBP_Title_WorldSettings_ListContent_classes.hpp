#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x500 - 0x408)
// WidgetBlueprintGeneratedClass WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C
class UWBP_Title_WorldSettings_ListContent_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_TextEditOnToOff;                               // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_DisableToEnable;                               // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_NormalToFocus;                                 // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_TextEdit;                                   // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_46;                                // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Caution;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_OptionTitle;                                  // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentLR_C*   WBP_OptionSettings_ListContentLR;                  // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentSlider_C* WBP_OptionSettings_ListContentSlider;              // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentSwitch_C* WBP_OptionSettings_ListContentSwitch;              // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton;                            // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSettings_ListButton_C* WBP_Title_WorldSettings_ListButton;                // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_PalTitleWorldSettingOptionType  OptionType;                                        // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   TitleMsgID;                                        // 0x478(0x10)(Edit, BlueprintVisible, NoDestructor)
	FMulticastInlineDelegateProperty_            OnSwitchChanged;                                   // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnComittedText;                                    // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        InputTextMaxLen;                                   // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChangedSelectIndex;                              // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   ButtonMsgID;                                       // 0x4C0(0x10)(Edit, BlueprintVisible, NoDestructor)
	FMulticastInlineDelegateProperty_            OnClickedSettingButton;                            // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangedValue;                                    // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         NowEnabled;                                        // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOverrideSliderStep;                              // 0x4F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B7C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OverrideSliderStepValue;                           // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Title_WorldSettings_ListContent_C* GetDefaultObj();

	void GetButtonText(class FText* Text, class FText CallFunc_GetButtonText_ButtonText);
	void SetButtonText(class FText Text);
	void Set_Name_Select_Index(int32 Index);
	void GetSelectNameIndex(int32* NowIndex, int32 CallFunc_GetCurrentIndex_Index);
	void SetupFloatValue(double NowValue, double MinValue, double MaxValue);
	void SetupIntValue(int32 Value, int32 Min, int32 Max);
	void SetEnableCautionMark(bool IsEnableMark, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void GetInputText(class FString* InputTextString, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void IsEditingText(bool* IsEditing, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void IsOn(bool* IsOn, bool CallFunc_IsOn_IsOn);
	void SetupSelectString(TArray<class FString>& SelectStrings, int32 DefaultSelectIndex);
	void SetupTextInput(const class FString& DefaultString, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnClickedInternal(bool K2Node_SwitchEnum_CmpSuccess);
	class UWidget* CustomNavi_ToRight(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsOn_IsOn);
	class UWidget* CustomNavi_ToLeft(enum class EUINavigation Navigation, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsOn_IsOn);
	void SetupOnOff(bool IsOn, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InitializeInternal(class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, const class FString& CallFunc_GetDisplayName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void AnmEvent_SetEnableBuutton(bool IsEnableButton);
	void Construct();
	void BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSwitch_K2Node_ComponentBoundEvent_3_OnSwitcherChanged__DelegateSignature(bool IsOn);
	void BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentLR_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature(int32 Selection);
	void BndEvt__WBP_Title_WorldSettings_ListContent_WBP_Title_WorldSettings_ListButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(double Value);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_Title_WorldSettings_ListContent(int32 EntryPoint, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool K2Node_CustomEvent_isEnableButton, bool Temp_bool_Variable, bool CallFunc_EqualEqual_BoolBool_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_ComponentBoundEvent_IsOn, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText K2Node_ComponentBoundEvent_Text, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Selection, const class FString& CallFunc_Left_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double K2Node_ComponentBoundEvent_Value, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnChangedValue__DelegateSignature(double NewValue);
	void OnClickedSettingButton__DelegateSignature();
	void OnChangedSelectIndex__DelegateSignature(int32 NewIndex);
	void OnComittedText__DelegateSignature(const class FString& NewString);
	void OnSwitchChanged__DelegateSignature(bool IsOn);
};

}


