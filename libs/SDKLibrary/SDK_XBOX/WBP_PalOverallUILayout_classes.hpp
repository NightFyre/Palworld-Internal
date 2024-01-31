#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x460 - 0x308)
// WidgetBlueprintGeneratedClass WBP_PalOverallUILayout.WBP_PalOverallUILayout_C
class UWBP_PalOverallUILayout_C : public UPalPrimaryGameLayoutBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_3;                                     // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Fade;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         GameLayer_Stack;                                   // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         GameMenu_Stack_1;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         GameMenu_Stack_2;                                  // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         GameMenu_Stack_3;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         GameMenu_Stack_4;                                  // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         GameMenu_Stack_5;                                  // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         GameMenu_Stack_6;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         GameMenu_Stack_7;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         Menu_Stack;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         Modal_Stack;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AutoSave_C*                       WBP_AutoSave;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonReward_C*                   WBP_CommonReward;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_ItemInfo_C*    WBP_InventoryEquipment_ItemInfo;                   // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Cursor_C*                WBP_MainMenu_Cursor;                               // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalActionBar_C*                   WBP_PalActionBar_C_8;                              // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLiftItem_C*                    WBP_PalLiftItem;                                   // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class EPalFadeWidgetLayerType, class UCanvasPanel*> FadeWidgetCanvasMap;                               // 0x3A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<enum class EPalFadeWidgetType, class UClass*> FadeWidgetMap;                                     // 0x3F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EPalFadeWidgetLayerType>   WaitFadeOutLayers;                                 // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPalUILiftSlotModel*                   LiftSlotModel;                                     // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalOverallUILayout_C* GetDefaultObj();

	void OnInitialized();
	void ShowFocusCursor(class UWidget* TargetWidget);
	void HideFocusCursor();
	void FadeIn(enum class EPalFadeWidgetLayerType LayerType, class UPalHUDDispatchParameter_FadeWidget* FadeParameter);
	void FadeOut(enum class EPalFadeWidgetLayerType LayerType);
	void ShowCommonItemInfo(struct FPalUICommonItemInfoDisplayData& DisplayData);
	void HideCommonItemInfo();
	void ShowLiftIcon();
	void HideLiftIcon();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetupLiftIcon();
	void ShowCommonReward(struct FPalUICommonRewardDisplayData& RewardDisplayData);
	void ExecuteUbergraph_WBP_PalOverallUILayout(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, TArray<class UCanvasPanel*>& CallFunc_Map_Values_Values, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UWidget* K2Node_Event_TargetWidget, class UPanelWidget* CallFunc_GetParent_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, int32 Temp_int_Array_Index_Variable_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UCanvasPanel* CallFunc_Array_Get_Item, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_PalFadeWidgetBase_C* K2Node_DynamicCast_AsWBP_Pal_Fade_Widget_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, enum class EPalFadeWidgetLayerType K2Node_Event_LayerType_1, class UPalHUDDispatchParameter_FadeWidget* K2Node_Event_FadeParameter, class UCanvasPanel* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class UWBP_PalFadeWidgetBase_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, enum class EPalFadeWidgetLayerType K2Node_Event_LayerType, class UCanvasPanel* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FAnchors& K2Node_MakeStruct_Anchors_1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FPalUICommonItemInfoDisplayData& K2Node_Event_DisplayData, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, class UCanvasPanel* CallFunc_SpawnObject_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Array_Index_Variable_2, class UWidget* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsLift_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, class UPalUILiftSlotModel* CallFunc_GetLiftSlotModel_ReturnValue, const struct FPalUICommonRewardDisplayData& K2Node_Event_RewardDisplayData, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


