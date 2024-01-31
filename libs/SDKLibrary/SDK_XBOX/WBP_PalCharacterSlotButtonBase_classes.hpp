#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9B (0x4A3 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C
class UWBP_PalCharacterSlotButtonBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonButtonBase*                     My_Button;                                         // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotBase_C*           MyCharacterSlotWidget;                             // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedButton;                                   // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRightClickedButton;                              // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredButton;                                   // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhoveredButton;                                 // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFocusedWidget;                                   // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnFocusedWidget;                                 // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDragged;                                         // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDropped;                                         // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsDragging;                                        // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableDragDrop;                                  // 0x4A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableClick;                                     // 0x4A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalCharacterSlotButtonBase_C* GetDefaultObj();

	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UWBP_PalCharacterSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void OnDropped_Internal();
	void OnDragged_Internal();
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UWBP_PalCommonCharacterSlotButton_C* CallFunc_Create_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void Focus(bool CallFunc_IsValid_ReturnValue);
	void OnRightClicked_Internal();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void OnUnhovered_Internal(class UCommonButtonBase* Button);
	void OnHovered_Internal(class UCommonButtonBase* Button);
	void OnClicked_Internal(class UCommonButtonBase* Button, bool Temp_bool_Variable, enum class EPalItemSlotPressType Temp_byte_Variable, enum class EPalItemSlotPressType Temp_byte_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, enum class EPalItemSlotPressType K2Node_Select_Default);
	void BindButtonEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue);
	void GetTargetSlot(class UPalIndividualCharacterSlot** TargetSlot, bool CallFunc_IsValid_ReturnValue);
	void RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C** CharacterSlotWidget);
	void Setup(class UPalIndividualCharacterSlot* TargetSlot, bool CallFunc_IsValid_ReturnValue);
	void RegisterButton(class UCommonButtonBase** Button);
	void OnInitialized();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_PalCharacterSlotButtonBase(int32 EntryPoint, class UCommonButtonBase* CallFunc_RegisterButton_button, class UWBP_PalCharacterSlotBase_C* CallFunc_RegisterCharacterSlotWidget_characterSlotWidget, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent);
	void OnDropped__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnDragged__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnRightClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* ButtonBase);
	void OnUnhoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnUnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnHoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
};

}


