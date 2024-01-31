#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x148 - 0x140)
// BlueprintGeneratedClass BP_AIAction_BaseCampFighterGunner.BP_AIAction_BaseCampFighterGunner_C
class UBP_AIAction_BaseCampFighterGunner_C : public UPalAIActionBaseCampFighter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIAction_BaseCampFighterGunner_C* GetDefaultObj();

	void ChangeActionWait();
	void ActionStart(class APawn* ControlledPawn);
	void NotifyOrderCommand(enum class EPalMapBaseCampWorkerOrderType OrderType);
	void ExecuteUbergraph_BP_AIAction_BaseCampFighterGunner(int32 EntryPoint, class UPawnActionsComponent* CallFunc_GetOwnerComponent_ReturnValue, class APawn* K2Node_Event_ControlledPawn, class UBP_AIAction_BaseCampFighterGunner_Wait_C* CallFunc_SpawnObject_ReturnValue, enum class EPalMapBaseCampWorkerOrderType K2Node_Event_OrderType, bool K2Node_SwitchEnum_CmpSuccess);
};

}


