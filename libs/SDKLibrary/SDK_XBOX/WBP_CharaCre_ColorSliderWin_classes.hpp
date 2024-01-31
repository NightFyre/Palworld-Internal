#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x460 - 0x430)
// WidgetBlueprintGeneratedClass WBP_CharaCre_ColorSliderWin.WBP_CharaCre_ColorSliderWin_C
class UWBP_CharaCre_ColorSliderWin_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_1;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_38;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ColorSelect_WithPreset_C* WBP_CharaCre_ColorSelect_WithPreset;               // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* MyParameter;                                       // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_ColorSliderWin_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType, bool K2Node_SwitchEnum_CmpSuccess);
	void OnCancel();
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetTopFocusTarget_Widget);
	void OnSetup();
	void BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature(const struct FLinearColor& HSV);
	void BndEvt__WBP_CharaCre_ColorSliderWin_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void OnInitialized();
	void ExecuteUbergraph_WBP_CharaCre_ColorSliderWin(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& K2Node_ComponentBoundEvent_HSV, class FName CallFunc_Conv_StringToName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* CallFunc_GetTopFocusTarget_Widget);
};

}


