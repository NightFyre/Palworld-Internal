#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x159 (0x561 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalItemSlotButtonBase.WBP_PalItemSlotButtonBase_C
class UWBP_PalItemSlotButtonBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonButtonBase*                     My_Button;                                         // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotBase_C*                MyItemSlotWidget;                                  // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedButton;                                   // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMiddleClickedButton;                             // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRightClickedButton;                              // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredButton;                                   // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhoveredButton;                                 // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFocusedWidget;                                   // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnFocusedWidget;                                 // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDragged;                                         // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDropped;                                         // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDropCanceled;                                    // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsEnableDragDrop;                                  // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLiftedButton;                                    // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFinishLiftedButton;                              // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsDisplayingItemInfo;                              // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDisplayCommonItemInfoWindow;                     // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSetEmptySlot;                                    // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSetValidSlot;                                    // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsEnableSpreadLift;                                // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUsableSlot;                                      // 0x511(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalDataTableRowName_UIInputAction    HalfLiftAction_ForPad;                             // 0x514(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    UseAction_ForPad;                                  // 0x51C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  HalfLiftActionHandle_ForPad;                       // 0x524(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalUIActionBindData                  UseActionHandle_ForPad;                            // 0x528(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsSupportedQuickMove;                              // 0x52C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableQuickEquip;                                // 0x52D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNotifyDurability;                                // 0x530(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCorruptionUpdate;                                // 0x540(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRequestUseItem;                                  // 0x550(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsShowPrice;                                       // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalItemSlotButtonBase_C* GetDefaultObj();

	void GetDisplayDragItemNum(int32* DisplayNum, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsControlDown_ForUI_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_IsShiftDown_ForUI_ReturnValue);
	void TryEquipSlot(class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_TryEquipSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TryRemoveEquipment_ReturnValue, bool CallFunc_IsEquipSlot_ReturnValue);
	void OnUseOrMoveSlotInput_Pad(class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsEmpty_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnNotifyDurability_Internal(double MaxDurability, double NowDurability);
	void OnCorruptionUpdate_Internal();
	void OnHalfLiftInput_Pad(class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UnregisterPadAction();
	void RegisterPadAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanOR_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1);
	void Unbind_Button_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnFinishLiftedButton_Internal();
	void OnLiftedButton_Internal(int32 LiftedItemNum);
	void OnSetValid_Internal();
	void OnDropCanceled_Internal(class UDragDropOperation* Operation);
	void OnSetEmpty_internal();
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UWBP_PalItemSlotButtonBase_C* K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base, bool K2Node_DynamicCast_bSuccess);
	void OnDropped_Internal();
	void OnDragged_Internal();
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, int32 CallFunc_GetDisplayDragItemNum_DisplayNum, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalItemSlotDragDropIcon_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void Focus(bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1);
	void OnUnhovered_Internal(class UCommonButtonBase* Button, class UPalHUDService* CallFunc_GetHUDService_ReturnValue);
	void OnHovered_Internal(class UCommonButtonBase* Button, const struct FVector2D& CallFunc_Vector2D_One_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalUICommonItemInfoDisplayData& K2Node_MakeStruct_PalUICommonItemInfoDisplayData, bool CallFunc_IsEmpty_ReturnValue);
	void On_Right_Clicked_Internal(class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsControlDown_ForUI_ReturnValue, bool CallFunc_IsShiftDown_ForUI_ReturnValue);
	void OnMiddleClicked_Internal();
	void OnClicked_Internal(class UCommonButtonBase* Button, bool CallFunc_IsControlDown_ForUI_ReturnValue, bool CallFunc_IsShiftDown_ForUI_ReturnValue);
	void GetTargetSlot(class UPalItemSlot** TargetSlot, bool CallFunc_IsValid_ReturnValue);
	void Bind_Button_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C** ItemSlotWidget);
	void Setup(class UPalItemSlot* TargetSlot, bool CallFunc_IsValid_ReturnValue);
	void RegisterButton(class UCommonButtonBase** Button);
	void Construct();
	void OnInitialized();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Destruct();
	void ExecuteUbergraph_WBP_PalItemSlotButtonBase(int32 EntryPoint, class UCommonButtonBase* CallFunc_RegisterButton_button, class UWBP_PalItemSlotBase_C* CallFunc_RegisterItemSlotWidget_itemSlotWidget, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UPalHUDService* CallFunc_GetHUDService_ReturnValue);
	void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
	void OnCorruptionUpdate__DelegateSignature();
	void OnNotifyDurability__DelegateSignature(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget);
	void OnSetValidSlot__DelegateSignature();
	void OnSetEmptySlot__DelegateSignature();
	void OnMiddleClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void OnFinishLiftedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnLiftedButton__DelegateSignature(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnDropCanceled__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnDropped__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnDragged__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnRightClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType);
	void OnUnhoveredButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnUnFocusedWidget__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnFocusedWidget__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnHoveredButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
};

}


