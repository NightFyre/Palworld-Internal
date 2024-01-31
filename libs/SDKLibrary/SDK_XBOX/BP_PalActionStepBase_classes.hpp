#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x1C8 - 0x138)
// BlueprintGeneratedClass BP_PalActionStepBase.BP_PalActionStepBase_C
class UBP_PalActionStepBase_C : public UPalActionBase
{
public:
	uint8                                        Pad_3C54[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  FlagName;                                          // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StepTime;                                          // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Timer;                                             // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalGeneralMontageType            StepType;                                          // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanEndStep;                                        // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C55[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          Montage;                                           // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CanCrouchCancel;                                   // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CrouchCancelTime;                                  // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StepDistance;                                      // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Effect;                                            // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StepEndLocation;                                   // 0x190(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayStepEffect;                                  // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StepStartLocation;                                 // 0x1B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PalActionStepBase_C* GetDefaultObj();

	void GetStepEndLocation(struct FVector* Location, double Distance, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, float CallFunc_RSign_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_RSign_V_ImplicitCast, double K2Node_VariableSet_Distance_ImplicitCast);
	void StepMove(double CallFunc_Divide_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_VLerp_Alpha_ImplicitCast);
	void CheckFrontHight(bool* CanThrough, TArray<class AActor*>& Temp_object_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void DisableMovement(bool Disable, class UPalCharacterMovementComponent* CharacterMovementComponent, bool CallFunc_Not_PreBool_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void EndStep();
	void OnEndStepWhenCrouch();
	void ExecuteUbergraph_BP_PalActionStepBase(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetStepEndLocation_Location, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_8, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1);
};

}


