#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x102 (0x50A - 0x408)
// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContent.WBP_OptionSettings_ListContent_C
class UWBP_OptionSettings_ListContent_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_NormalToFocus;                                 // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Base;                                              // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Base_Focus;                                        // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_Name;                              // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             Button;                                            // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ClickableButton_C* WBP_OptionSettings_ClickableButton;                // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentButton_C* WBP_OptionSettings_ListContentButton;              // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentLR_C*   WBP_OptionSettings_ListContentLR;                  // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentSlider_C* WBP_OptionSettings_ListContentSlider;              // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContentSwitch_C* WBP_OptionSettings_ListContentSwitch;              // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   SettingNameMsgId;                                  // 0x468(0x10)(Edit, BlueprintVisible, NoDestructor)
	TArray<class FString>                        ScreenSelections;                                  // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Current;                                           // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  BackAction;                                        // 0x48C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  LeftPressed;                                       // 0x490(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  LeftReleased;                                      // 0x494(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  RightPressed;                                      // 0x498(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  RightReleased;                                     // 0x49C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                  BackActionName;                                    // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LeftActionName;                                    // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RightActionName;                                   // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Editing;                                           // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SubtractTimer;                                     // 0x4C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          AddTimer;                                          // 0x4C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OriginalColor;                                     // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ChangePercent;                                     // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockMouseClick;                                   // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnKeyConfigClicked;                                // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  ActionKeyName;                                     // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  Input_Type;                                        // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalKeyConfigAxisFilterType       Filter_Type;                                       // 0x509(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_OptionSettings_ListContent_C* GetDefaultObj();

	void InputMethodChanged(enum class ECommonInputType InputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Construct();
	void SetSelecter(TArray<struct FDataTableRowHandle>& Selections, int32 Current);
	void SetResolution(const struct FIntPoint& CurrentResolution, TArray<struct FIntPoint>& Resolutions);
	void SetSwitcher(bool CurrentOn);
	void SetSelecter_String(TArray<class FString>& Selections, int32 Current);
	void SetSlider(double CurrentValue, double Min, double Max, double FixedChangeValue, bool UseFixedValue);
	void BackToList();
	void Gamepad_LeftPress();
	void Gamepad_RightPress();
	void Gamepad_LeftRelease();
	void SubtractValue();
	void AddValue();
	void Gamepad_RightRelease();
	void SetClickableButton();
	void SetConfigButton(class FName ActionName, enum class ECommonInputType InputType, enum class EPalKeyConfigAxisFilterType FilterType);
	void SetKeyIcon(const struct FKey& Key, enum class ECommonInputType InputType);
	void SetKeyWarning(bool EnableWarning);
	void SetInteractable(bool CanInteract);
	void BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OptionSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_OptionSettings_ListContent(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, const struct FSlateBrush& CallFunc_GetMappedKeyIcon_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FDataTableRowHandle>& K2Node_CustomEvent_Selections_1, int32 K2Node_CustomEvent_Current_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FIntPoint& K2Node_CustomEvent_CurrentResolution, TArray<struct FIntPoint>& K2Node_CustomEvent_Resolutions, const struct FIntPoint& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool K2Node_CustomEvent_CurrentOn, TArray<class FString>& K2Node_CustomEvent_Selections, int32 K2Node_CustomEvent_Current, double K2Node_CustomEvent_CurrentValue, double K2Node_CustomEvent_Min, double K2Node_CustomEvent_Max, double K2Node_CustomEvent_FixedChangeValue, bool K2Node_CustomEvent_UseFixedValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalUserWidget* CallFunc_FindOwningActivatableWidget_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, class UPalUserWidget* CallFunc_FindOwningActivatableWidget_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, class UPalUserWidget* CallFunc_FindOwningActivatableWidget_ReturnValue_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, const struct FPalSlateNavigationSetting& K2Node_MakeStruct_PalSlateNavigationSetting, bool CallFunc_IsVisible_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsVisible_ReturnValue_5, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, class FName K2Node_CustomEvent_ActionName, enum class ECommonInputType K2Node_CustomEvent_InputType_1, enum class EPalKeyConfigAxisFilterType K2Node_CustomEvent_FilterType, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_6, const struct FKey& K2Node_CustomEvent_Key, enum class ECommonInputType K2Node_CustomEvent_InputType, const struct FSlateBrush& CallFunc_GetKeyIconByKey_ReturnValue, bool K2Node_CustomEvent_EnableWarning, bool K2Node_CustomEvent_CanInteract, double CallFunc_SelectFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void OnKeyConfigClicked__DelegateSignature(class FName KeyName, enum class ECommonInputType InputType, enum class EPalKeyConfigAxisFilterType AxisType);
};

}


