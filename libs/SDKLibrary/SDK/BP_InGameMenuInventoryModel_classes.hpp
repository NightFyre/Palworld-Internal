#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass BP_InGameMenuInventoryModel.BP_InGameMenuInventoryModel_C
class UBP_InGameMenuInventoryModel_C : public UPalUIInGameMainMenuInventoryModel
{
public:
	class UBP_PalInventoryModel_C*               InventoryModel;                                    // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_PalLoadOutModel_C*                 LoadoutModel;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InGameMenuInventoryModel_C* GetDefaultObj();

	void Dispose();
	void Setup(class UBP_PalLoadOutModel_C* CallFunc_SpawnObject_ReturnValue, class UBP_PalInventoryModel_C* CallFunc_SpawnObject_ReturnValue_1);
};

}


