#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x110 - 0x110)
// BlueprintGeneratedClass BP_PalFunnelCharacterManager.BP_PalFunnelCharacterManager_C
class UBP_PalFunnelCharacterManager_C : public UPalFunnelCharacterManager
{
public:

	static class UClass* StaticClass();
	static class UBP_PalFunnelCharacterManager_C* GetDefaultObj();

	void SetFunnelCharacterActive(class APalFunnelCharacter* FunnelCharacter, bool IsActive, class APalCharacter* Trainer, const struct FVector& VEd, const struct FVector& VSt, class AController* CallFunc_GetController_ReturnValue, class ABP_FunnelCharacterAIController_C* K2Node_DynamicCast_AsBP_Funnel_Character_AIController, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_1);
};

}


