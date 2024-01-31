#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass BP_AlertByKilledFriendState_AproachDeadPoint.BP_AlertByKilledFriendState_AproachDeadPoint_C
class UBP_AlertByKilledFriendState_AproachDeadPoint_C : public UPalStateMachineStateBase_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AlertByKilledFriendState_AproachDeadPoint_C* GetDefaultObj();

	void StateTick(float DeltaTime);
	void StateExit();
	void ExecuteUbergraph_BP_AlertByKilledFriendState_AproachDeadPoint(int32 EntryPoint, class UObject* CallFunc_GetOuterObject_ReturnValue, float K2Node_Event_DeltaTime, class UBP_AIAction_AlertByKilledFriend_C* K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UBP_AIAction_AlertByKilledFriend_C* K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


