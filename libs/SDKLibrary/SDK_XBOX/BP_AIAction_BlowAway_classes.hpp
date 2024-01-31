#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x140 - 0x130)
// BlueprintGeneratedClass BP_AIAction_BlowAway.BP_AIAction_BlowAway_C
class UBP_AIAction_BlowAway_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalActionComponent*                   ActionComp;                                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_BlowAway_C* GetDefaultObj();

	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_BlowAway(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1);
};

}


