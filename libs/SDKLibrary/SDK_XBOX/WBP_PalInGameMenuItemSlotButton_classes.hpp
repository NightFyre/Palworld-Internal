#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x601 - 0x561)
// WidgetBlueprintGeneratedClass WBP_PalInGameMenuItemSlotButton.WBP_PalInGameMenuItemSlotButton_C
class UWBP_PalInGameMenuItemSlotButton_C : public UWBP_PalItemSlotButtonBase_C
{
public:
	uint8                                        Pad_F9B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_UnselectToSelect;                              // 0x570(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_RepairOnToOff;                                 // 0x578(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Bg_Lock;                                       // 0x580(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Focus;                                         // 0x588(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Rarity_0To4;                                   // 0x590(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Bg_Empty;                                      // 0x598(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Bg_Normal;                                     // 0x5A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanelCorrution;                              // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalProgressBar*                       CorruptionProgressBar;                             // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    CorruptionRemainTime;                              // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FocusBase;                                         // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FocusFrame;                                        // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayRepair;                                     // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Durable;                               // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_ItemWeight;                                   // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_PalIcon_C*     WBP_InventoryEquipment_PalIcon;                    // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlot_C*          WBP_PalInGameMenuItemSlot;                         // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton;                            // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         HasLiftting;                                       // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalInGameMenuItemSlotButton_C* GetDefaultObj();

	void SetEnableDefaultClickSound(bool Enable);
	void SetPalGearIcon(class FName ItemId, bool Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Toggle_Corruption_Visibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void OnSetCorruptionImpl(class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetCorruptionRemainTimeText_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot_2, float CallFunc_GetCorruptionProgressRate_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void On_Notify_Durability_Impl(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void OnSetEmptySlotImpl();
	void On_Set_Valid_Slot_Impl(class UPalStaticItemDataBase* StaticItemData, int32 CallFunc_Min_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot_1, class UPalDynamicItemDataBase* CallFunc_TryGetDynamicItemData_OutDynamicItemData, bool CallFunc_TryGetDynamicItemData_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMaxDurability_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C** ItemSlotWidget);
	void RegisterButton(class UCommonButtonBase** Button);
	void AnmEvent_Focus();
	void AnmEvent_Unfocus();
	void AnmEvent_RepairMark(bool IsEnable);
	void AnmEvent_Rarity(int32 Rarity);
	void OnInitialized();
	void OnHoveredEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnDraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnDroppedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnLiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnUnhoveredEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
	void OnSetValidSlotEvent();
	void OnEmptyEvent();
	void SetSlotLock();
	void Destruct();
	void ToggleLock(bool Lock);
	void ExecuteUbergraph_WBP_PalInGameMenuItemSlotButton(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_IsEnable, int32 K2Node_CustomEvent_Rarity, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool Temp_bool_Variable_1, double CallFunc_Add_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_4, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_3, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_2, int32 K2Node_CustomEvent_LiftNum, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_1, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UWBP_PalItemSlotBase_C* CallFunc_RegisterItemSlotWidget_itemSlotWidget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, bool K2Node_CustomEvent_Lock, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast, float CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast);
};

}


