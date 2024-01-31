#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_ItemInfo_Caution.WBP_InventoryEquipment_ItemInfo_Caution_C
class UWBP_InventoryEquipment_ItemInfo_Caution_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalRichTextBlock_C*                RichText_ItemName;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_InventoryEquipment_ItemInfo_Caution_C* GetDefaultObj();

	void SetRequireName(class FText Name);
	void ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Caution(int32 EntryPoint, class FText K2Node_CustomEvent_Name);
};

}


