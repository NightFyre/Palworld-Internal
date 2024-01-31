#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x468 - 0x430)
// WidgetBlueprintGeneratedClass WBP_Title_WorldSettings_NameWindow.WBP_Title_WorldSettings_NameWindow_C
class UWBP_Title_WorldSettings_NameWindow_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                      EditableTextBox_Name;                              // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_57;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton;                                  // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_C*                WBP_PalCommonWindow;                               // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                Default_Input_Name;                                // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Title_WorldSettings_NameWindow_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void OnSetup();
	void BndEvt__WBP_Title_WorldSettings_NameWindow_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_Title_WorldSettings_NameWindow_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__WBP_Title_WorldSettings_NameWindow_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Title_WorldSettings_NameWindow(int32 EntryPoint, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UBP_HUDDispatchParameter_WorldNameInput_C* K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_World_Name_Input, bool K2Node_DynamicCast_bSuccess, class FText K2Node_ComponentBoundEvent_Text_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Left_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Left_ReturnValue_1, int32 CallFunc_Len_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue_1, class UBP_HUDDispatchParameter_WorldNameInput_C* K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_World_Name_Input_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue);
};

}


