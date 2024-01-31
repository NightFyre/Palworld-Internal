#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass BP_AlertByKilledFriendState_QuestionMark.BP_AlertByKilledFriendState_QuestionMark_C
class UBP_AlertByKilledFriendState_QuestionMark_C : public UPalStateMachineStateBase_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AlertByKilledFriendState_QuestionMark_C* GetDefaultObj();

	void StateEnter();
	void ExecuteUbergraph_BP_AlertByKilledFriendState_QuestionMark(int32 EntryPoint, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UPalAIActionBase* K2Node_DynamicCast_AsPal_AIAction_Base, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue);
};

}


