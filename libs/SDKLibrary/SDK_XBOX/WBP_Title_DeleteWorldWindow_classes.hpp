#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x460 - 0x430)
// WidgetBlueprintGeneratedClass WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C
class UWBP_Title_DeleteWorldWindow_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                      EditableTextBox_DELETE;                            // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_57;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton_Cancel;                           // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton_Confirm;                          // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_C*                WBP_PalCommonWindow;                               // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Title_DeleteWorldWindow_C* GetDefaultObj();

	void OnClosedDeleteCheckDialog(bool bResult, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_HUDDIspatchParameter_DeleteWorld_C* K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World, bool K2Node_DynamicCast_bSuccess);
	void OpenCheckDialog(const struct FDataTableRowHandle& NewLocalVar, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text);
	class UWidget* BP_GetDesiredFocusTarget();
	void SetEnableConfirmButton(bool IsEnable, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1);
	void Construct();
	void OnSetup();
	void BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_Title_DeleteWorldWindow_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Title_DeleteWorldWindow(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalDialogParameterBase* K2Node_DynamicCast_AsPal_Dialog_Parameter_Base, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1);
};

}


