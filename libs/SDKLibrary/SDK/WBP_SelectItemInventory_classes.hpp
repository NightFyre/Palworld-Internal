#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x488 - 0x430)
// WidgetBlueprintGeneratedClass WBP_SelectItemInventory.WBP_SelectItemInventory_C
class UWBP_SelectItemInventory_C : public UPalUISelectItemInventoryBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Canvas_Inventory;                                  // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton_Sort_Inventory;             // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalPlayerInventoryScrollList_C*   WBP_PalPlayerInventoryScrollList;                  // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInventoryWeightInfo_C*      WBP_PlayerInventoryWeightInfo;                     // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsRequireSelectNum;                                // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_490B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalItemSlotButtonBase_C*          SelectedButton;                                    // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PalInventoryModel_C*               InventoryModel;                                    // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BgMsgID;                                           // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_SelectItemInventory_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_target);
	void OnFocusedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
	void ComplateSelect(const struct FPalItemSlotId& SlotID, int32 SelectNum, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_SelectItemInventory* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Select_Item_Inventory, bool K2Node_DynamicCast_bSuccess);
	void OnComplateSelectNum(enum class EPalUISelectNumResult ResultType, int32 SelectedNum, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, const struct FPalItemSlotId& CallFunc_GetSlotId_ReturnValue);
	void DisplaySelectNumWidget(class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, class UPalUISelectNumParameter* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue);
	void OnLeftClicked(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsValid_ReturnValue, const struct FPalItemSlotId& CallFunc_GetSlotId_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void OnInitialized();
	void OnSetup();
	void BndEvt__WBP_SelectItemInventory_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_SelectItemInventory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalHUDDispatchParameter_SelectItemInventory* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Select_Item_Inventory, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_FilteringFromInventoryType_IsEmptyDisplaySlot, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UBP_PalInventoryModel_C* CallFunc_SpawnObject_ReturnValue);
};

}


