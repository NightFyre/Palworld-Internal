#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x290 - 0x278)
// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C
class UWBP_InventoryEquipment_PalIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                IconPal;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynamicMaterial;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_InventoryEquipment_PalIcon_C* GetDefaultObj();

	void Setup(class FName IconId);
	void ExecuteUbergraph_WBP_InventoryEquipment_PalIcon(int32 EntryPoint, class FName K2Node_CustomEvent_IconId, const struct FPalDataTableRowName_PalMonsterData& K2Node_MakeStruct_PalDataTableRowName_PalMonsterData, TSoftObjectPtr<class UTexture2D> CallFunc_GetPalIconInfoByCharacterID_outIcon, bool CallFunc_GetPalIconInfoByCharacterID_outIsRare, bool CallFunc_GetPalIconInfoByCharacterID_outIsBoss);
};

}


