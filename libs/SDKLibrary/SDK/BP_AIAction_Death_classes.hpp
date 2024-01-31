#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x140 - 0x130)
// BlueprintGeneratedClass BP_AIAction_Death.BP_AIAction_Death_C
class UBP_AIAction_Death_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsPlayer;                                          // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4423[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BoneIndex;                                         // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_Death_C* GetDefaultObj();

	bool IsInterruptibleBySleep();
	bool IsInterruptibleByRecoverHungry();
	void GetDeathActionClass(class UClass** DeathAction);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void _________0(class UPalIndividualCharacterParameter* IndividualParameter);
	void ActionResume(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_Death(int32 EntryPoint, class UClass* CallFunc_GetDeathActionClass_DeathAction, class APawn* K2Node_Event_ControlledPawn_2, class AController* CallFunc_GetController_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AController* CallFunc_GetController_ReturnValue_1, const struct FVector& CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition, const struct FVector& CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal, class FName CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName, float CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance, bool CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, int32 CallFunc_GetBoneIndex_ReturnValue, bool CallFunc_IsPlayerControlActor_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalIndividualCharacterParameter* K2Node_CustomEvent_IndividualParameter, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class APawn* K2Node_Event_ControlledPawn, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class AController* CallFunc_GetController_ReturnValue_3, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, bool CallFunc_IsPlayerControlActor_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_4, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class UClass* CallFunc_GetDeathActionClass_DeathAction_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue_1);
};

}


