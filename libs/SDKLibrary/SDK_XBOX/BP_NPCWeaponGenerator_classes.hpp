#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass BP_NPCWeaponGenerator.BP_NPCWeaponGenerator_C
class UBP_NPCWeaponGenerator_C : public UPalNPCWeaponGenerator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_NPCWeaponGenerator_C* GetDefaultObj();

	void OnSpawnEvent(class APalWeaponBase* WeaponActor);
	void ExecuteUbergraph_BP_NPCWeaponGenerator(int32 EntryPoint, class APalWeaponBase* K2Node_Event_WeaponActor, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess_1);
};

}


