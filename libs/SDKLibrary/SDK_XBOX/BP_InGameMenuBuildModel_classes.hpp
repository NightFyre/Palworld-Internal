#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// BlueprintGeneratedClass BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C
class UBP_InGameMenuBuildModel_C : public UPalUIInGameMainMenuBuildModel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalUIBuildModel_C*                 BuildModel;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EPalBuildObjectTypeA              InitialTypeA;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUpdateInventoryDelegate;                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_InGameMenuBuildModel_C* GetDefaultObj();

	void Setup(class UBP_PalUIBuildModel_C* CallFunc_SpawnObject_ReturnValue);
	void SetInitialTypeA(enum class EPalBuildObjectTypeA TypeA);
	void OnUpdateInventory(class UPalItemContainer* Container);
	void ExecuteUbergraph_BP_InGameMenuBuildModel(int32 EntryPoint, class UPalItemContainer* K2Node_Event_Container);
	void OnUpdateInventoryDelegate__DelegateSignature();
};

}


