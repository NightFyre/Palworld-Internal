#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x558 - 0x4F8)
// BlueprintGeneratedClass BP_NPCAIController.BP_NPCAIController_C
class ABP_NPCAIController_C : public APalAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_OtomoPalHolderComponentForNPC_C*   BP_OtomoPalHolderComponentForNPC;                  // 0x500(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                 PalAISensor;                                       // 0x508(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AIADamageReaction_C*               BP_AIADamageReaction;                              // 0x510(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DefaultActionClass;                                // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                 WeaponHandle;                                      // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentNotifyListener_C*       IncidentNotifyListener;                            // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Filter_Incident_Ids;                               // 0x530(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FF_NPC_PathWalkArray                  PathWalk;                                          // 0x540(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                  OtomoName;                                         // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NPCAIController_C* GetDefaultObj();

	void GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess);
	void GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard, class UPalAIBlackboardBase* CallFunc_GetLeaderPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess);
	void ForceBattleStartToTarget(class AActor* TargetActor, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, bool CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue);
	void IsSleeping(bool* IsSleep, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ForceEscapeStartFortOutSide(class AActor* StartActor, class AActor* TargetActor, bool CallFunc_IsSleeping_IsSleep, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void TalkEnd_Func(class AActor* SelfActor, class AActor* TargetActor, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPawnAction* CallFunc_GetCurrentAction_BP_ReturnValue, class UBP_AIAction_NPC_Talking_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Talking, bool K2Node_DynamicCast_bSuccess_1);
	void TalkStart_Func(class AActor* SelfActor, class AActor* TargetActor, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UPawnAction* CallFunc_GetCurrentAction_BP_ReturnValue, class UBP_AIAction_NPC_Talking_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Talking, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsTalking_IsTalking);
	void ForceBattleStartForOutside(class AActor* StartActor, bool CallFunc_IsSleeping_IsSleep, class AActor* CallFunc_CopyTargetFromOtherAI_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void StartEscapeMode(class AActor* TargetActor, bool ByOutSide, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void SetAutoDefaultAIAction(bool CallFunc_IsValidClass_ReturnValue);
	void SetSpawnedInfo(const struct FVector& SpawnerLoc, double ReturnRadius, const struct FF_NPC_PathWalkArray& PathWalk, class FName Otomo, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard);
	void ReturnToTerritory(class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void StartCombatMode(class AActor* TempEscapeTarget, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, TSubclassOf<class UPalAIActionBase> CallFunc_GetCombatClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue);
	void GetWeaponHandle(class UPalNPCAIWeaponHandle** WeaponHandle);
	void SetupWeaponHandle(class APalWeaponBase* Weapon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void StartDefaultAIAction(class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UBP_AIAction_NPC_Relax_PathWalk_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk, bool K2Node_DynamicCast_bSuccess_1);
	void OverrideDefaultAction(class UClass* DefaultAction);
	void CreateOtomo();
	void _________0(const struct FPalInstanceID& ID);
	void _________4(class AController* HolderController, class APalCharacter* OtomoPal);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceivePossess(class APawn* PossessedPawn);
	void SetupAI_BP();
	void OnShootDeclementBullet();
	void GoBack_Teritory();
	void _________1();
	void _________2(const struct FPalDeadInfo& DeadInfo);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnNpcTalkIncidentNotify(class UPalIncidentNotifyListener* Listener, enum class EPalIncidentState IncidentState, struct FPalIncidentNotifyParameter& Parameter);
	void NotifyTalkStart(class APalPlayerCharacter* TalkPlayer);
	void NotifyTalkEnd(class APalPlayerCharacter* TalkPlayer);
	void ExecuteUbergraph_BP_NPCAIController(int32 EntryPoint, class APalPlayerCharacter* K2Node_Event_TalkPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_PalIncidentNotifyListener_NPCTalk_C* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, const struct FGuid& K2Node_MakeStruct_Guid, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, const struct FPalInstanceID& K2Node_CustomEvent_ID, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_GetIndividualHandle_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_AddOtomoHandleToFreeSlot_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_SynchronizedGroup_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_GetLevel_ReturnValue, class AController* K2Node_CustomEvent_HolderController, class APalCharacter* K2Node_CustomEvent_OtomoPal, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetInitializedCharacterSaveParemter_outParameter, bool CallFunc_GetInitializedCharacterSaveParemter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalSquad* CallFunc_GetSquad_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UBP_NPCAIWeaponHandle_C* CallFunc_SpawnObject_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, bool CallFunc_IsEndInitialize_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class FName CallFunc_GetCharacterID_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_5, enum class EPalWeaponType CallFunc_GetWeaponType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class APawn* CallFunc_K2_GetPawn_ReturnValue_6, class UPalSquad* CallFunc_GetSquad_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsSquadBehaviour_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsSquadBehaviour_ReturnValue_1, class UPalSquad* CallFunc_GetSquad_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPalIndividualCharacterHandle* CallFunc_CreateIndividual_ReturnValue, class UPalIncidentNotifyListener* K2Node_CustomEvent_Listener, enum class EPalIncidentState K2Node_CustomEvent_IncidentState, const struct FPalIncidentNotifyParameter& K2Node_CustomEvent_Parameter, bool K2Node_SwitchEnum_CmpSuccess, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_8, class UPalSquad* CallFunc_GetSquad_ReturnValue_3, class UPalSquad* CallFunc_GetSquad_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsDedicatedServer_ReturnValue, class APalPlayerCharacter* K2Node_Event_TalkPlayer_1);
};

}


