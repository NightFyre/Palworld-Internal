#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x190 - 0x188)
// BlueprintGeneratedClass BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C
class UBP_AIAction_BaseCampRecoverHungry_C : public UPalAIActionBaseCampRecoverHungry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIAction_BaseCampRecoverHungry_C* GetDefaultObj();

	void Change_Recover_Hungry_Action(class UClass* ChildActionClass, class UPawnActionsComponent* CallFunc_GetOwnerComponent_ReturnValue, class UPalAIActionBaseCampRecoverHungryChildBase* CallFunc_SpawnObject_ReturnValue);
	void ActionStart(class APawn* ControlledPawn);
	void ChangeActionApproach();
	void ChangeActionEat();
	void NotifyOrderCommand(enum class EPalMapBaseCampWorkerOrderType OrderType);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_1, enum class EPalMapBaseCampWorkerOrderType K2Node_Event_OrderType, bool CallFunc_IsBattleOrderType_ReturnValue, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult);
};

}


