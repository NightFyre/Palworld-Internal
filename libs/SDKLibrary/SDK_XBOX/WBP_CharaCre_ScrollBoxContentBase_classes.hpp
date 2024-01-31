#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x428 - 0x408)
// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C
class UWBP_CharaCre_ScrollBoxContentBase_C : public UPalUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnNotifyOpenSelectColorWindow;                     // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNotifyCloseSelectColorWIndow;                    // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_ScrollBoxContentBase_C* GetDefaultObj();

	void GetRestoreFocusTarget(class UWidget** Widget);
	void OnClosedSelectColorWindow_Internal(class UPalHUDDispatchParameterBase* Param);
	void OpenColorSelectWindow(class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* Parameter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue);
	void GetTopFocusTarget(class UWidget** Widget);
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void OnNotifyCloseSelectColorWIndow__DelegateSignature();
	void OnNotifyOpenSelectColorWindow__DelegateSignature();
};

}


