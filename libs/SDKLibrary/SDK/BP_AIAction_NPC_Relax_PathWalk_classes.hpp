#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x271 - 0x1F1)
// BlueprintGeneratedClass BP_AIAction_NPC_Relax_PathWalk.BP_AIAction_NPC_Relax_PathWalk_C
class UBP_AIAction_NPC_Relax_PathWalk_C : public UBP_AIAction_NPC_RelaxBase_C
{
public:
	uint8                                        Pad_4365[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_NPC_WalkPathPoint_1_C*             Path;                                              // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentPointIndex;                                 // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4366[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetPoint;                                       // 0x210(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WaitMode;                                          // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4367[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalActionBase*                        WaitAction;                                        // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkArray                  PathArray;                                         // 0x238(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                               PrevLocation;                                      // 0x248(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StuckTime;                                         // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAlreadyStuck;                                    // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NPC_Relax_PathWalk_C* GetDefaultObj();

	void OnStuck();
	void OnTargetPointUpdateStart();
	void PlayWaitAction(const struct FF_NPC_PathWalkPoint& CallFunc_Array_Get_Item, const struct FF_NPC_PathWalkPoint& CallFunc_Array_Get_Item_1, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void SetupWalkPath(const struct FF_NPC_PathWalkArray& PathInfo);
	void UpdateNextTargetPoint(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FF_NPC_PathWalkPoint& CallFunc_Array_Get_Item);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_NPC_Relax_PathWalk(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn_2, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsNearTwoPoint_ReturnValue, class APawn* K2Node_Event_ControlledPawn_1, bool CallFunc_IsValid_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsFalling_ReturnValue, class APawn* K2Node_Event_ControlledPawn_3, enum class EPawnActionResult K2Node_Event_WithResult, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* K2Node_Event_ControlledPawn_4, const struct FF_NPC_PathWalkPoint& CallFunc_Array_Get_Item, const struct FF_NPC_PathWalkPoint& CallFunc_Array_Get_Item_1, const struct FF_NPC_PathWalkPoint& CallFunc_Array_Get_Item_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_IsNearTwoPoint_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, double K2Node_VariableSet_DeltaTime_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


