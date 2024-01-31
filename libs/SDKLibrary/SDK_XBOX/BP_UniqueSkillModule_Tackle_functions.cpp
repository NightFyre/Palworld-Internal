#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C
// (None)

class UClass* UBP_UniqueSkillModule_Tackle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UniqueSkillModule_Tackle_C");

	return Clss;
}


// BP_UniqueSkillModule_Tackle_C BP_UniqueSkillModule_Tackle.Default__BP_UniqueSkillModule_Tackle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UniqueSkillModule_Tackle_C* UBP_UniqueSkillModule_Tackle_C::GetDefaultObj()
{
	static class UBP_UniqueSkillModule_Tackle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UniqueSkillModule_Tackle_C*>(UBP_UniqueSkillModule_Tackle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.SetFlagName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FlagName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::SetFlagName(class FName FlagName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "SetFlagName");

	Params::UBP_UniqueSkillModule_Tackle_C_SetFlagName_Params Parms{};

	Parms.FlagName = FlagName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.GetCurrentState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAction_Unique_Tackle   State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::GetCurrentState(enum class EAction_Unique_Tackle* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "GetCurrentState");

	Params::UBP_UniqueSkillModule_Tackle_C_GetCurrentState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.UpdateYaw
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    TargetRotation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             DifYaw                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TargetYaw                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AbsDifYaw                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxYaw                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CurrentRotation                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetAttackTargetLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetAttackTargetLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_DeltaTime_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::UpdateYaw(const struct FRotator& TargetRotation, double DifYaw, double TargetYaw, double AbsDifYaw, double MaxYaw, const struct FRotator& CurrentRotation, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_SetActorRotation_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, class AActor* CallFunc_GetActionTarget_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, const struct FVector& CallFunc_GetAttackTargetLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetAttackTargetLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue_1, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1, float CallFunc_RInterpTo_DeltaTime_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "UpdateYaw");

	Params::UBP_UniqueSkillModule_Tackle_C_UpdateYaw_Params Parms{};

	Parms.TargetRotation = TargetRotation;
	Parms.DifYaw = DifYaw;
	Parms.TargetYaw = TargetYaw;
	Parms.AbsDifYaw = AbsDifYaw;
	Parms.MaxYaw = MaxYaw;
	Parms.CurrentRotation = CurrentRotation;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_GetActionTarget_ReturnValue = CallFunc_GetActionTarget_ReturnValue;
	Parms.CallFunc_GetActionTarget_ReturnValue_1 = CallFunc_GetActionTarget_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.CallFunc_GetAttackTargetLocation_ReturnValue = CallFunc_GetAttackTargetLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetAttackTargetLocation_ReturnValue_1 = CallFunc_GetAttackTargetLocation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue_1 = CallFunc_RInterpTo_ReturnValue_1;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue_1 = CallFunc_K2_SetActorRotation_ReturnValue_1;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast = CallFunc_RInterpTo_InterpSpeed_ImplicitCast;
	Parms.CallFunc_RInterpTo_DeltaTime_ImplicitCast = CallFunc_RInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1 = CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1;
	Parms.CallFunc_RInterpTo_DeltaTime_ImplicitCast_1 = CallFunc_RInterpTo_DeltaTime_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.UpdateVelocity
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PreVelocity                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeXY_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::UpdateVelocity(const struct FVector& PreVelocity, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_VSizeXY_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "UpdateVelocity");

	Params::UBP_UniqueSkillModule_Tackle_C_UpdateVelocity_Params Parms{};

	Parms.PreVelocity = PreVelocity;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_VSizeXY_ReturnValue = CallFunc_VSizeXY_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.TerminateMotion
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::TerminateMotion(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "TerminateMotion");

	Params::UBP_UniqueSkillModule_Tackle_C_TerminateMotion_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.ControllInput
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::ControllInput(double DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Montage_IsPlaying_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast, float CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "ControllInput");

	Params::UBP_UniqueSkillModule_Tackle_C_ControllInput_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Montage_IsPlaying_ReturnValue = CallFunc_Montage_IsPlaying_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast = CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast;
	Parms.CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast = CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnNotifyEnd_26A182C445668EE79190E6AE1D795120
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnNotifyEnd_26A182C445668EE79190E6AE1D795120(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnNotifyEnd_26A182C445668EE79190E6AE1D795120");

	Params::UBP_UniqueSkillModule_Tackle_C_OnNotifyEnd_26A182C445668EE79190E6AE1D795120_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnNotifyBegin_26A182C445668EE79190E6AE1D795120
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnNotifyBegin_26A182C445668EE79190E6AE1D795120(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnNotifyBegin_26A182C445668EE79190E6AE1D795120");

	Params::UBP_UniqueSkillModule_Tackle_C_OnNotifyBegin_26A182C445668EE79190E6AE1D795120_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnInterrupted_26A182C445668EE79190E6AE1D795120
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnInterrupted_26A182C445668EE79190E6AE1D795120(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnInterrupted_26A182C445668EE79190E6AE1D795120");

	Params::UBP_UniqueSkillModule_Tackle_C_OnInterrupted_26A182C445668EE79190E6AE1D795120_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnBlendOut_26A182C445668EE79190E6AE1D795120
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnBlendOut_26A182C445668EE79190E6AE1D795120(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnBlendOut_26A182C445668EE79190E6AE1D795120");

	Params::UBP_UniqueSkillModule_Tackle_C_OnBlendOut_26A182C445668EE79190E6AE1D795120_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnCompleted_26A182C445668EE79190E6AE1D795120
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnCompleted_26A182C445668EE79190E6AE1D795120(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnCompleted_26A182C445668EE79190E6AE1D795120");

	Params::UBP_UniqueSkillModule_Tackle_C_OnCompleted_26A182C445668EE79190E6AE1D795120_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnBeginModule
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UniqueSkillModule_Tackle_C::OnBeginModule()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnBeginModule");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnEndModule
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UniqueSkillModule_Tackle_C::OnEndModule()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnEndModule");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.TickModule
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::TickModule(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "TickModule");

	Params::UBP_UniqueSkillModule_Tackle_C_TickModule_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnEndAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UniqueSkillModule_Tackle_C::OnEndAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnEndAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnMontageNotifyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnMontageNotifyEvent(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnMontageNotifyEvent");

	Params::UBP_UniqueSkillModule_Tackle_C_OnMontageNotifyEvent_Params Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnStartTossin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UniqueSkillModule_Tackle_C::OnStartTossin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnStartTossin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.ExecuteUbergraph_BP_UniqueSkillModule_Tackle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAnimInstance*            K2Node_DynamicCast_AsPal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_5                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue_2                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_6                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAnimInstance*            K2Node_DynamicCast_AsPal_Anim_Instance_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_7                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_8                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FReserveMontage             K2Node_MakeStruct_ReserveMontage                                 (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReserveMontage             K2Node_MakeStruct_ReserveMontage_1                               (NoDestructor)
// TArray<struct FReserveMontage>     K2Node_MakeArray_Array                                           (ReferenceParm)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_9                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetFloorHitLocationByActor_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SkillEffectBase_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_10                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetFloorHitLocationByActor_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SkillEffectBase_C*       CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ControllInput_DeltaTime_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::ExecuteUbergraph_BP_UniqueSkillModule_Tackle(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class FName K2Node_CustomEvent_NotifyName_4, bool Temp_bool_IsClosed_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_2, float K2Node_Event_DeltaTime, bool Temp_bool_Has_Been_Initd_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimMontage* K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_NotifyName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayerControlActor_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_8, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_3, const struct FReserveMontage& K2Node_MakeStruct_ReserveMontage, bool CallFunc_IsValid_ReturnValue_3, const struct FReserveMontage& K2Node_MakeStruct_ReserveMontage_1, TArray<struct FReserveMontage>& K2Node_MakeArray_Array, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_9, const struct FVector& CallFunc_GetFloorHitLocationByActor_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SkillEffectBase_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_10, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_GetFloorHitLocationByActor_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_SkillEffectBase_C* CallFunc_FinishSpawningActor_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_2, bool CallFunc_IsValid_ReturnValue_6, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, double CallFunc_ControllInput_DeltaTime_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast, float CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast, float CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "ExecuteUbergraph_BP_UniqueSkillModule_Tackle");

	Params::UBP_UniqueSkillModule_Tackle_C_ExecuteUbergraph_BP_UniqueSkillModule_Tackle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsPlayerControlActor_ReturnValue = CallFunc_IsPlayerControlActor_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.CallFunc_GetActionCharacter_ReturnValue_4 = CallFunc_GetActionCharacter_ReturnValue_4;
	Parms.CallFunc_GetMainMesh_ReturnValue_1 = CallFunc_GetMainMesh_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Anim_Instance = K2Node_DynamicCast_AsPal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_5 = CallFunc_GetActionCharacter_ReturnValue_5;
	Parms.CallFunc_GetMainMesh_ReturnValue_2 = CallFunc_GetMainMesh_ReturnValue_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue_6 = CallFunc_GetActionCharacter_ReturnValue_6;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_Anim_Instance_1 = K2Node_DynamicCast_AsPal_Anim_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue_7 = CallFunc_GetActionCharacter_ReturnValue_7;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_8 = CallFunc_GetActionCharacter_ReturnValue_8;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.K2Node_MakeStruct_ReserveMontage = K2Node_MakeStruct_ReserveMontage;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_MakeStruct_ReserveMontage_1 = K2Node_MakeStruct_ReserveMontage_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetActionCharacter_ReturnValue_9 = CallFunc_GetActionCharacter_ReturnValue_9;
	Parms.CallFunc_GetFloorHitLocationByActor_ReturnValue = CallFunc_GetFloorHitLocationByActor_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetActionCharacter_ReturnValue_10 = CallFunc_GetActionCharacter_ReturnValue_10;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_GetFloorHitLocationByActor_ReturnValue_1 = CallFunc_GetFloorHitLocationByActor_ReturnValue_1;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_ControllInput_DeltaTime_ImplicitCast = CallFunc_ControllInput_DeltaTime_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast = CallFunc_SetMaxAccelerationMultiplier_speed_ImplicitCast;
	Parms.CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast = CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast;
	Parms.CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast = CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnCompletedEndMontageDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UniqueSkillModule_Tackle_C::OnCompletedEndMontageDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnCompletedEndMontageDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnMontageNotifyDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnMontageNotifyDelegate__DelegateSignature(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnMontageNotifyDelegate__DelegateSignature");

	Params::UBP_UniqueSkillModule_Tackle_C_OnMontageNotifyDelegate__DelegateSignature_Params Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnEndAttackDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UniqueSkillModule_Tackle_C::OnEndAttackDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnEndAttackDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UniqueSkillModule_Tackle.BP_UniqueSkillModule_Tackle_C.OnSpawnedLoopEffect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SkillEffectBase_C*       LoopEffect                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueSkillModule_Tackle_C::OnSpawnedLoopEffect__DelegateSignature(class ABP_SkillEffectBase_C* LoopEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UniqueSkillModule_Tackle_C", "OnSpawnedLoopEffect__DelegateSignature");

	Params::UBP_UniqueSkillModule_Tackle_C_OnSpawnedLoopEffect__DelegateSignature_Params Parms{};

	Parms.LoopEffect = LoopEffect;

	UObject::ProcessEvent(Func, &Parms);

}

}


