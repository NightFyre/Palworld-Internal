#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C
// (None)

class UClass* UBP_AINPC_CombatGunState_AimMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_CombatGunState_AimMove_C");

	return Clss;
}


// BP_AINPC_CombatGunState_AimMove_C BP_AINPC_CombatGunState_AimMove.Default__BP_AINPC_CombatGunState_AimMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_CombatGunState_AimMove_C* UBP_AINPC_CombatGunState_AimMove_C::GetDefaultObj()
{
	static class UBP_AINPC_CombatGunState_AimMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_CombatGunState_AimMove_C*>(UBP_AINPC_CombatGunState_AimMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.FindMoveGoal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GoalPos                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MoveDIrectionWorldSpace_Direction                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_AimMove_C::FindMoveGoal(bool* Success, struct FVector* GoalPos, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FVector& CallFunc_MoveDIrectionWorldSpace_Direction, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation, bool CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "FindMoveGoal");

	Params::UBP_AINPC_CombatGunState_AimMove_C_FindMoveGoal_Params Parms{};

	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_MoveDIrectionWorldSpace_Direction = CallFunc_MoveDIrectionWorldSpace_Direction;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation = CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation;
	Parms.CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue = CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (GoalPos != nullptr)
		*GoalPos = std::move(Parms.GoalPos);

}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.MoveDIrectionWorldSpace
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_AimMove_C::MoveDIrectionWorldSpace(struct FVector* Direction, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "MoveDIrectionWorldSpace");

	Params::UBP_AINPC_CombatGunState_AimMove_C_MoveDIrectionWorldSpace_Params Parms{};

	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatGunState_AimMove_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.StateExit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatGunState_AimMove_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "StateExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_AimMove_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "StateTick");

	Params::UBP_AINPC_CombatGunState_AimMove_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AINPC_CombatGunState_AimMove.BP_AINPC_CombatGunState_AimMove_C.ExecuteUbergraph_BP_AINPC_CombatGunState_AimMove
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindMoveGoal_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindMoveGoal_GoalPos                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_AimMove_C::ExecuteUbergraph_BP_AINPC_CombatGunState_AimMove(int32 EntryPoint, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, float K2Node_Event_DeltaTime, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, float CallFunc_Conv_IntToFloat_ReturnValue_1, class AActor* CallFunc_GetTargetActor_TargetActor, const struct FVector& CallFunc_MakeVector_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_2, bool CallFunc_FindMoveGoal_Success, const struct FVector& CallFunc_FindMoveGoal_GoalPos, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, class AActor* CallFunc_GetTargetActor_TargetActor_1, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor_1, class APalCharacter* CallFunc_GetSelfActor_SelfActor_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_AimMove_C", "ExecuteUbergraph_BP_AINPC_CombatGunState_AimMove");

	Params::UBP_AINPC_CombatGunState_AimMove_C_ExecuteUbergraph_BP_AINPC_CombatGunState_AimMove_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerRef_NPCAICon_1 = CallFunc_GetControllerRef_NPCAICon_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetTargetActor_TargetActor = CallFunc_GetTargetActor_TargetActor;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetControllerRef_NPCAICon_2 = CallFunc_GetControllerRef_NPCAICon_2;
	Parms.CallFunc_FindMoveGoal_Success = CallFunc_FindMoveGoal_Success;
	Parms.CallFunc_FindMoveGoal_GoalPos = CallFunc_FindMoveGoal_GoalPos;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle_1 = CallFunc_GetWeaponHandle_WeaponHandle_1;
	Parms.CallFunc_GetTargetActor_TargetActor_1 = CallFunc_GetTargetActor_TargetActor_1;
	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetSelfActor_SelfActor_1 = CallFunc_GetSelfActor_SelfActor_1;
	Parms.CallFunc_GetSelfActor_SelfActor_2 = CallFunc_GetSelfActor_SelfActor_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetSelfActor_SelfActor_3 = CallFunc_GetSelfActor_SelfActor_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


