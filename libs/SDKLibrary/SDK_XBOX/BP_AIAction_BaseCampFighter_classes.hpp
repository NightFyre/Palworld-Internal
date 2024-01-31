#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x148 - 0x140)
// BlueprintGeneratedClass BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C
class UBP_AIAction_BaseCampFighter_C : public UPalAIActionBaseCampFighter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIAction_BaseCampFighter_C* GetDefaultObj();

	void ActionStart(class APawn* ControlledPawn);
	void NotifyOrderCommand(enum class EPalMapBaseCampWorkerOrderType OrderType);
	void ActionResume(class APawn* ControlledPawn);
	void ChangeActionWait();
	void ExecuteUbergraph_BP_AIAction_BaseCampFighter(int32 EntryPoint, class UPawnActionsComponent* CallFunc_GetOwnerComponent_ReturnValue, class APawn* K2Node_Event_ControlledPawn_1, class UBP_AIAction_BaseCampFighter_Wait_C* CallFunc_SpawnObject_ReturnValue, enum class EPalMapBaseCampWorkerOrderType K2Node_Event_OrderType, bool CallFunc_IsBattleOrderType_ReturnValue, class APawn* K2Node_Event_ControlledPawn);
};

}


