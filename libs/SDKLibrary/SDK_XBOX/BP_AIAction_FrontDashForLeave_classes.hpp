#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x160 - 0x130)
// BlueprintGeneratedClass BP_AIAction_FrontDashForLeave.BP_AIAction_FrontDashForLeave_C
class UBP_AIAction_FrontDashForLeave_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                         SelfActor;                                         // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       GoalPositionList;                                  // 0x148(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       RandomRight;                                       // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_FrontDashForLeave_C* GetDefaultObj();

	void AddGoalList(double Right, double DistanceRate, const struct FVector& FrontVector, const struct FVector& RightVector, double ConstDashDistance, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void InitByOutside(class APalCharacter* SelfCharacter, class AActor* CombatTarget);
	void FindGoalPosition(struct FVector* GoalPos, bool* Success, const struct FVector& RightVector, const struct FVector& FrontVector, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_FindReachablePathLocation_OutGoalLocation, bool CallFunc_FindReachablePathLocation_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue);
	void OnFail_EAE5FEB94CA8D53F1F50028C752C9624(enum class EPathFollowingResult MovementResult);
	void OnSuccess_EAE5FEB94CA8D53F1F50028C752C9624(enum class EPathFollowingResult MovementResult);
	void OnNotifyEnd_DD579A8A44C50B0353DE318F089B04F8(class FName NotifyName);
	void OnNotifyBegin_DD579A8A44C50B0353DE318F089B04F8(class FName NotifyName);
	void OnInterrupted_DD579A8A44C50B0353DE318F089B04F8(class FName NotifyName);
	void OnBlendOut_DD579A8A44C50B0353DE318F089B04F8(class FName NotifyName);
	void OnCompleted_DD579A8A44C50B0353DE318F089B04F8(class FName NotifyName);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionAbort(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_FrontDashForLeave(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable, enum class EPalActionType Temp_byte_Variable_1, class APawn* K2Node_Event_ControlledPawn_3, const struct FVector& CallFunc_FindGoalPosition_GoalPos, bool CallFunc_FindGoalPosition_Success, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* K2Node_Event_ControlledPawn_2, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
};

}


