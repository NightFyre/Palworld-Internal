#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2D0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C
class UWBP_CharaCre_ScrollBoxContentSet_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActivatableWidgetSwitcher*      CommonActivatableWidgetSwitcher_27;                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContent_Body_C* WBP_CharaCre_ScrollBoxContent_Body;                // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContent_Face_C* WBP_CharaCre_ScrollBoxContent_Face;                // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContent_Hair_C* WBP_CharaCre_ScrollBoxContent_Hair;                // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContent_Preset_C* WBP_CharaCre_ScrollBoxContent_Preset;              // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContent_Voice_C* WBP_CharaCre_ScrollBoxContent_Voice;               // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNotifyOpenSelectColorWindow;                     // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNotifyCloseColorSelectWindow;                    // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_ScrollBoxContentSet_C* GetDefaultObj();

	void GetSelectedEyeHSV(struct FLinearColor* HSV, const struct FLinearColor& CallFunc_GetBindedColor_Color, const struct FLinearColor& CallFunc_RGBLinearToHSV_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast);
	void GetRestoreFocusTarget(enum class E_UICharacterMakeCategory CategoryType, class UWidget** Widget, class UWBP_CharaCre_ScrollBoxContentBase_C* CallFunc_GetWidgetByCategory_Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget);
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_CharaCre_ScrollBoxContentBase_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base, bool K2Node_DynamicCast_bSuccess);
	void GetWidgetByCategory(enum class E_UICharacterMakeCategory TargetCategory, class UWBP_CharaCre_ScrollBoxContentBase_C** Widget, class UWidget* TmpWidget, bool K2Node_SwitchEnum_CmpSuccess, class UWBP_CharaCre_ScrollBoxContentBase_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_1, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_2, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_3, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue_4);
	void GetTopFocusTarget(enum class E_UICharacterMakeCategory NewCategory, class UWidget** Widget, class UWBP_CharaCre_ScrollBoxContentBase_C* CallFunc_GetWidgetByCategory_Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget);
	void ChangeMakeCategory(enum class E_UICharacterMakeCategory NewCategory, class UWBP_CharaCre_ScrollBoxContentBase_C* CallFunc_GetWidgetByCategory_Widget);
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Body_K2Node_ComponentBoundEvent_1_OnNotifyCloseSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_2_OnNotifyOpenSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Face_K2Node_ComponentBoundEvent_3_OnNotifyCloseSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_4_OnNotifyOpenSelectColorWindow__DelegateSignature();
	void BndEvt__WBP_CharaCre_ScrollBoxContentSet_WBP_CharaCre_ScrollBoxContent_Hair_K2Node_ComponentBoundEvent_5_OnNotifyCloseSelectColorWindow__DelegateSignature();
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet(int32 EntryPoint);
	void OnNotifyCloseColorSelectWindow__DelegateSignature();
	void OnNotifyOpenSelectColorWindow__DelegateSignature();
};

}


