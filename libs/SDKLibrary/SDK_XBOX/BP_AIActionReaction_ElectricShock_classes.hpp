#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x140 - 0x130)
// BlueprintGeneratedClass BP_AIActionReaction_ElectricShock.BP_AIActionReaction_ElectricShock_C
class UBP_AIActionReaction_ElectricShock_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalActionBase*                        TempAction;                                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIActionReaction_ElectricShock_C* GetDefaultObj();

	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIActionReaction_ElectricShock(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, class UPalActionBase* CallFunc_PlayAction_ReturnValue);
};

}


