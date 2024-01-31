#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x4B8 - 0x430)
// WidgetBlueprintGeneratedClass WBP_ItemChest.WBP_ItemChest_C
class UWBP_ItemChest_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_Chest_C*               WBP_IngameMenu_Chest;                              // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalInventoryModel_C*               InventoryModel;                                    // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    LeftFocusInput;                                    // 0x450(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    RightFocusInput;                                   // 0x458(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    FastGetInput;                                      // 0x460(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                          CachedLastFocusedInventorySlot;                    // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                          CachedLastFocusedTargetContainerSlot;              // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    AllGetInput;                                       // 0x478(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EPalPlayerInventoryType>   DisplayInventoryType;                              // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  TabActionName;                                     // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    RefillInput;                                       // 0x498(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalContainerId                       TargetContainerId;                                 // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    SortInput;                                         // 0x4B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ItemChest_C* GetDefaultObj();

	void Sort(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void Refill(bool CallFunc_IsValid_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetInventoryTopFocustTarget_FocusTarget);
	void AllGet(class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, class UPalMapObjectDeathPenaltyStorageModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model, bool K2Node_DynamicCast_bSuccess_1, class UPalItemContainer* CallFunc_TryGetContainer_OutContainer, bool CallFunc_TryGetContainer_ReturnValue);
	void FastMove(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const struct FPalItemSlotId& CallFunc_GetSlotId_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainer_OutContainer, bool CallFunc_TryGetContainer_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, class UPalItemSlot* CallFunc_Get_ReturnValue, const struct FPalItemSlotId& CallFunc_GetSlotId_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue_2, int32 CallFunc_Num_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Setup(class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_TryGetMapObjectId_ReturnValue, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainer_OutContainer, bool CallFunc_TryGetContainer_ReturnValue, bool CallFunc_Contains_ReturnValue, class FText CallFunc_GetMapObjectName_outName, class UBP_PalInventoryModel_C* CallFunc_SpawnObject_ReturnValue);
	void OnSetup();
	void Construct();
	void ChangeFocus_Inv_Pad();
	void ChangeFocus_Chest_Pad();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_3_OnClickedQuickMoveButton__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_8_OnClickedInventorySortButton__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_12_OnClickedTargetContainerSortButton__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_13_OnUnhoveredInventorySlot__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_15_OnUnhoveredTargetContainerSlot__DelegateSignature();
	void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_16_OnClickedCloseButton__DelegateSignature();
	void ExecuteUbergraph_WBP_ItemChest(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, class UWidget* CallFunc_GetInventoryLastHoveredFocusTarget_Widget, class UWidget* CallFunc_GetInventoryTopFocustTarget_FocusTarget, bool CallFunc_IsValid_ReturnValue, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_SlotButton_1, class UWidget* CallFunc_GetTargetContainerLastHoveredFocusTarget_Widget, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_GetTargetContainerTopFocustTarget_FocusTarget, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_SlotButton, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_5);
};

}


