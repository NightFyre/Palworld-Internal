#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x530 - 0x430)
// WidgetBlueprintGeneratedClass WBP_Buildup_Pal.WBP_Buildup_Pal_C
class UWBP_Buildup_Pal_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_Tab;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Select;                                            // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_Item_C*               WBP_Buildup_Pal_Item;                              // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_Item_C*               WBP_Buildup_Pal_Item_1;                            // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_Item_C*               WBP_Buildup_Pal_Item_2;                            // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_Pal_Status_C*             WBP_Buildup_Pal_Status;                            // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_TabButton_C*              WBP_Buildup_TabButton_Reset;                       // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Buildup_TabButton_C*              WBP_Buildup_TabButton_Upgrade;                     // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalDetail_C*    WBP_IngameMenu_PalBox_PalDetail;                   // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList;                                  // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList_1;                                // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList_2;                                // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList_3;                                // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList_4;                                // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                WBP_PalKeyGuideIcon_1;                             // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Menu_PalList_C*>           PalList;                                           // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_Buildup_Pal_Item_C*>       UpgradeItems;                                      // 0x4C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FName>                          UpgradeItemIds;                                    // 0x4D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   PreTabMsgId;                                       // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NextTabMsgId;                                      // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UPalIndividualCharacterHandle*         CurrentHandle;                                     // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PinDetail;                                         // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hovering;                                          // 0x511(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56E7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentTab;                                        // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResultSuccess;                                     // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Replicate_Status;                                  // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Requested;                                         // 0x51A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56E8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ItemUpdateTimer;                                   // 0x520(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  TabActionName;                                     // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Buildup_Pal_C* GetDefaultObj();

	void UpdateItemInfo(const TArray<struct FPalStaticItemIdAndNum>& TempItemMap, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UWBP_Buildup_Pal_Item_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UUserWidget* CallFunc_GetFocusTarget_Widget, bool CallFunc_IsValid_ReturnValue);
	void ReciveResult(enum class EPalCharacterStatusOperationResult Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Refresh_Info(class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue);
	void InvokeReset(class UPalNetworkCharacterStatusOperationComponent* CallFunc_NetCharacterStatusOperation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InvokeRankUp(enum class EPalCharacterStatusOperationName Status, int32 TargetRank, class UPalNetworkCharacterStatusOperationComponent* CallFunc_NetCharacterStatusOperation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CloseAction(bool CallFunc_IsValid_ReturnValue);
	void OnClickPalList(class UPalIndividualCharacterHandle* Handle, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_2, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item_1, class UUserWidget* CallFunc_GetFocusTarget_Widget, bool CallFunc_IsVisible_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void OnUnhoverPalList();
	void OnHoverPalList(class UPalIndividualCharacterHandle* Handle);
	void Setup(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UPalNetworkCharacterStatusOperationComponent* CallFunc_NetCharacterStatusOperation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, enum class ESlateVisibility Temp_byte_Variable_1, class FName CallFunc_Array_Get_Item, TArray<class FName>& K2Node_MakeArray_Array, class UWBP_Buildup_Pal_Item_C* CallFunc_Array_Get_Item_1, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UDataTable* CallFunc_GetCharacterUpgradeDataTable_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, const struct FPalCharacterUpgradeMasterData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool Temp_bool_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item_4, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetSlots_Slots, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item_5, bool CallFunc_IsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void OnSetup();
	void Destruct();
	void SwitchUpgrade();
	void SwitchReset();
	void SwitchTab(int32 Tab);
	void SynchroCheck();
	void Replicated_Status();
	void BndEvt__WBP_Buildup_Pal_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Buildup_Pal(int32 EntryPoint, TArray<class UWBP_Menu_PalList_C*>& K2Node_MakeArray_Array, TArray<class UWBP_Buildup_Pal_Item_C*>& K2Node_MakeArray_Array_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_CharacterStatusOperator* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Character_Status_Operator, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_Tab, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue, class UPalNetworkCharacterStatusOperationComponent* CallFunc_NetCharacterStatusOperation_ReturnValue);
};

}


