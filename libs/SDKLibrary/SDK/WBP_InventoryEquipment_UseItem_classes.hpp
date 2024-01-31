#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x4F0 - 0x430)
// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C
class UWBP_InventoryEquipment_UseItem_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalDetail_C*    WBP_IngameMenu_PalBox_PalDetail;                   // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList;                                  // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList_1;                                // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList_2;                                // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList_3;                                // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList_4;                                // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_PalList_C*                   WBP_Menu_PalList_5;                                // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlot_C*          WBP_PalInGameMenuItemSlot;                         // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Menu_PalList_C*>           OtomoList;                                         // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UPalItemSlot*                          CurrentSlot;                                       // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            EndUseItem;                                        // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPalStaticItemDataBase*                CurrentItem;                                       // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedConsumeAmount;                               // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWazaMachine;                                     // 0x4BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WazaMachineUsed;                                   // 0x4BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MedicineUsed;                                      // 0x4BE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DAE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   SkillLearnedMsgIDHandle;                           // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                  TabActionName;                                     // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   SickCuredMsgIDHandle;                              // 0x4D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UPalIndividualCharacterParameter*      TempIndividualParameter;                           // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_InventoryEquipment_UseItem_C* GetDefaultObj();

	void TryPlayEatSound(class FName StaticItemId, class UPalIndividualCharacterParameter* TargetCharacterParameter, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetSaveParameter_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void Setup(class UPalItemSlot* SelectedItemSlot);
	void OnInitialized();
	void UseItemTo(class UPalIndividualCharacterHandle* Individual);
	void OnUseupItem();
	void ResetCacheUseAmount(class UPalItemSlot* TargetSlot);
	void OnSetup();
	void OnWazaMachineUsed(class UPalIndividualCharacterParameter* IndividualParameter, enum class EPalWazaID WazaID);
	void Refresh(bool IsConfirm);
	void BndEvt__WBP_InventoryEquipment_UseItem_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void Destruct();
	void OnMedineUsed();
	void ShowPalDetail(class UPalIndividualCharacterHandle* Individual);
	void HidePalDetail();
	void ExecuteUbergraph_WBP_InventoryEquipment_UseItem(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalItemSlot* K2Node_CustomEvent_SelectedItemSlot, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TArray<class UPalIndividualCharacterHandle*>& CallFunc_GetAllIndividualHandle_OutArray, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class UWBP_Menu_PalList_C*>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_1, class UPalIndividualCharacterHandle* K2Node_CustomEvent_Individual_1, int32 Temp_int_Variable, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalItemSlot* K2Node_CustomEvent_targetSlot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FPalItemSlotId& CallFunc_GetSlotId_ReturnValue, const struct FPalItemSlotIdAndNum& K2Node_MakeStruct_PalItemSlotIdAndNum, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item_1, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item_2, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, class UPalStaticConsumeItemData* K2Node_DynamicCast_AsPal_Static_Consume_Item_Data, bool K2Node_DynamicCast_bSuccess, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_InGameMainMenuUseItemParameter_C* K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Use_Item_Parameter, bool K2Node_DynamicCast_bSuccess_1, class UPalIndividualCharacterParameter* K2Node_CustomEvent_IndividualParameter, enum class EPalWazaID K2Node_CustomEvent_WazaId, class FText CallFunc_GetWazaName_outName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_IsConfirm, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_Format_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, bool CallFunc_IsStatusPointResetItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CanUseTargetMedicine_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_CanUseTargetMedicine_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, bool CallFunc_IsValid_ReturnValue_6, enum class EPalBaseCampWorkerSickType CallFunc_GetWorkerSick_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const class FString& CallFunc_GetNickName_outName_1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UPalIndividualCharacterHandle* K2Node_CustomEvent_Individual, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void EndUseItem__DelegateSignature();
};

}


