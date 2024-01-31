#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass BP_AlertByKilledFriendState_SurprisedReaction.BP_AlertByKilledFriendState_SurprisedReaction_C
class UBP_AlertByKilledFriendState_SurprisedReaction_C : public UPalStateMachineStateBase_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AlertByKilledFriendState_SurprisedReaction_C* GetDefaultObj();

	void StateEnter();
	void ExecuteUbergraph_BP_AlertByKilledFriendState_SurprisedReaction(int32 EntryPoint, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_AIAction_AlertByKilledFriend_C* K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend, bool K2Node_DynamicCast_bSuccess, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue);
};

}


