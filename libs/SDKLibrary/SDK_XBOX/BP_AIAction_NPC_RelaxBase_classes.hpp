#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x1F1 - 0x158)
// BlueprintGeneratedClass BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C
class UBP_AIAction_NPC_RelaxBase_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                         SelfActor;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTimerHandle                          UnequipTimer;                                      // 0x168(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               DefaultLocation;                                   // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               DefaultForward;                                    // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         IsReturnDefaultLocationAI;                         // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDefaultLocationMotionPlayMode;                   // 0x1A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_34DF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalActionBase*                        DefaultLocationAction;                             // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	enum class EPalActionType                    DefaultActionType;                                 // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TempDeltaTime;                                     // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DefaultRotate;                                     // 0x1C0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDefaultLocationForceSet;                         // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSkipSight;                                       // 0x1D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SightSkipTimer;                                    // 0x1E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CurrentTarget;                                     // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EPalAIResponseType                CurrentResponse;                                   // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NPC_RelaxBase_C* GetDefaultObj();

	void PlayDefaultAction(const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue);
	void CancelDefaultAction(class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void SelfIsLeader(bool* IsLeader, class APalCharacter* CallFunc_GetLeader_Leader, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SoundEvent(const struct FVector& EmitLocation);
	void ActionResume(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void _________0();
	void ActionStart(class APawn* ControlledPawn);
	void ActionAbort(class APawn* ControlledPawn);
	void SetSightSkipFlag();
	void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_NPC_RelaxBase(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_ControlledPawn_5, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_4, class AController* CallFunc_GetController_ReturnValue, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class APawn* K2Node_Event_ControlledPawn_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsNearTwoPoint_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_AngleBetweenVector_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue, class APawn* K2Node_Event_ControlledPawn_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, double CallFunc_RandomFloat_ReturnValue, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class AActor* CallFunc_SightCheck_Target, enum class EPalAIResponseType CallFunc_SightCheck_ResponseType, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_SightResponse_ChangeNextAction, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_GeneralTurn_DeltaTime_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast, double K2Node_VariableSet_tempDeltaTime_ImplicitCast);
};

}


