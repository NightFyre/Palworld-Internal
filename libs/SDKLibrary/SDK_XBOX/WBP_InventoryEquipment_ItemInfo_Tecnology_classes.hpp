#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x298 - 0x278)
// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_ItemInfo_Tecnology.WBP_InventoryEquipment_ItemInfo_Tecnology_C
class UWBP_InventoryEquipment_ItemInfo_Tecnology_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_WorkSpace;                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_TechDetails;                           // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WorkSpaceInfo;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_InventoryEquipment_ItemInfo_Tecnology_C* GetDefaultObj();

	void GetStockNum(class FName StaticItemId, bool WithStock, int32* Stock, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_SelectInt_ReturnValue, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1);
	void SetWorkSpaceInfo();
	void SetDetails(TArray<struct FPalStaticItemIdAndNum>& MatDetail, bool WithStock);
	void ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FPalStaticItemIdAndNum>& K2Node_CustomEvent_MatDetail, bool K2Node_CustomEvent_WithStock, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item, class UWBP_InventoryEquipment_ItemInfo_TecnologyList_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetStockNum_Stock, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetItemName_outName, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue);
};

}


