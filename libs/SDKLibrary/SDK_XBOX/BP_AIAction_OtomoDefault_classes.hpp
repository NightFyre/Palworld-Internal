#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x58 - 0x50)
// BlueprintGeneratedClass BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C
class UBP_AIAction_OtomoDefault_C : public UPalAIActionOtomoDefault
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x50(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIAction_OtomoDefault_C* GetDefaultObj();

	void SetActionComposite(class UClass* Class, class UPalAIActionComponent* CallFunc_GetOwnerComponent_ReturnValue, class UPalAIActionCompositeBase* CallFunc_SpawnObject_ReturnValue);
	void SetAction(class UClass* Class, class AController* CallFunc_GetController_ReturnValue, class UPalAIActionComponent* CallFunc_GetOwnerComponent_ReturnValue, class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue);
	void SetActionCombat(class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class ABP_MonsterAIController_Otomo_C* K2Node_DynamicCast_AsBP_Monster_AIController_Otomo, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalAIActionCombatBase* CallFunc_SetCombatAction_AIAction, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UPalCharacterMovementComponent* K2Node_DynamicCast_AsPal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess_1);
	void SetActionBaseCampWork();
	void SetActionWork();
	void SetActionFollowTrainer();
	bool ShouldSetCombatAction(class APalCharacter* Trainer, class AController* CallFunc_GetController_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalPlayerController* CallFunc_GetPalPlayerController_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, enum class EPalOtomoPalOrderType CallFunc_GetOtomoOrder_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetBattleMode_ReturnValue);
	void SetOtomoCombatAction();
	void SetOtomoFollowAction();
	void SetOtomoWorkAction();
	void SetOtomoBaseCampAction();
	void ExecuteUbergraph_BP_AIAction_OtomoDefault(int32 EntryPoint);
};

}


