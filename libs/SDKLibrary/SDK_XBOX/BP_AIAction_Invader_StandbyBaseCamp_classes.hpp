#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x178 - 0x158)
// BlueprintGeneratedClass BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C
class UBP_AIAction_Invader_StandbyBaseCamp_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               BaseCampPos;                                       // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_Invader_StandbyBaseCamp_C* GetDefaultObj();

	void SightCheckAndResponse(enum class EPalAIResponseType Current, bool OverrideIsDamage, bool* ChangeNextAction, class AController* CallFunc_GetController_ReturnValue, class UPalCheatManager* CallFunc_GetPalCheatManager_ReturnValue, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsDisableEnemyEyeSight_ReturnValue, TArray<class APalCharacter*>& CallFunc_SightCheckAllPlayer_InSightPlayers, class APalCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnSquadMemberDeadEvent(const struct FPalDeadInfo& DeadInbfo);
	void SoundEvent(const struct FVector& EmitLocation);
	void Fun_Damage_AIResponse(const struct FPalDamageResult& DamageResult, class APalCharacter* TempTarget, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp(int32 EntryPoint, bool CallFunc_SightCheckAndResponse_ChangeNextAction, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds);
};

}


