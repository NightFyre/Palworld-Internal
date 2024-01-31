#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x4C0 - 0x430)
// WidgetBlueprintGeneratedClass WBP_PalDialog.WBP_PalDialog_C
class UWBP_PalDialog_C : public UPalUIDialogBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CommonPopupWindow_C*              WBP_CommonPopupWindow;                             // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalDialogParameterDialog*             Parameter;                                         // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDataTableRowHandle                   RowName_Yes;                                       // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   RowName_No;                                        // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   YesMSGID;                                          // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NoMSGID;                                           // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   DecideMSGID;                                       // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CancelMSGID;                                       // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   OkMSGID;                                           // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalDataTableRowName_UIInputAction    ShortcutConfirmInputAction;                        // 0x4B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalDialog_C* GetDefaultObj();

	void OnShortcutConfirm(class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalDialogParameterDialog* K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog, bool K2Node_DynamicCast_bSuccess);
	class UWidget* BP_GetDesiredFocusTarget(class UCommonButtonBase* CallFunc_GetLeftButton_rightButton, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* CallFunc_GetRightButton_button);
	void OnCancelAction();
	void SetupUI(enum class EPalDialogType DialogType, class FText Message, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class FText CallFunc_GetLocalizedTextFromHandle_Text_4);
	void OnSetup();
	void BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_2_OnClickedLeftButton__DelegateSignature();
	void BndEvt__WBP_PalDialog_WBP_CommonPopupWindow_K2Node_ComponentBoundEvent_3_OnClickedRightButton__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_PalDialog(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalDialogParameterDialog* K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonButtonBase* CallFunc_GetLeftButton_rightButton, class UCommonButtonBase* CallFunc_GetRightButton_button, class UWidget* K2Node_Select_Default, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue);
};

}


