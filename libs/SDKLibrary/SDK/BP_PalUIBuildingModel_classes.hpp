#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass BP_PalUIBuildingModel.BP_PalUIBuildingModel_C
class UBP_PalUIBuildingModel_C : public UPalUIBuildingModel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnUpdateInventoryDelegate;                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_PalUIBuildingModel_C* GetDefaultObj();

	void OnUpdateInventory(class UPalItemContainer* Container);
	void ExecuteUbergraph_BP_PalUIBuildingModel(int32 EntryPoint, class UPalItemContainer* K2Node_Event_Container);
	void OnUpdateInventoryDelegate__DelegateSignature();
};

}


