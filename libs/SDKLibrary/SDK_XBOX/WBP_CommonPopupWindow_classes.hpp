#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2F8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_CommonPopupWindow.WBP_CommonPopupWindow_C
class UWBP_CommonPopupWindow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Close;                                         // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                BP_PalRichTextBlock_Message;                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_RButton;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton_L;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton_R;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_C*                WBP_PalCommonWindow;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   LeftButtonMsgID;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   RightButtonMsgID;                                  // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            OnClickedLeftButton;                               // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedRightButton;                              // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_CommonPopupWindow_C* GetDefaultObj();

	void SetOneButton(bool IsOneButton, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void GetRightButton(class UCommonButtonBase** Button);
	void GetLeftButton(class UCommonButtonBase** RightButton);
	void OverrideRightButtonText(class FText Text);
	void OverrideLeftButtonText(class FText Text);
	void SetMainText(class FText Text);
	void OnInitialized();
	void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_L_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__WBP_CommonPopupWindow_WBP_CommonButton_R_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void ExecuteUbergraph_WBP_CommonPopupWindow(int32 EntryPoint, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1);
	void OnClickedRightButton__DelegateSignature();
	void OnClickedLeftButton__DelegateSignature();
};

}


