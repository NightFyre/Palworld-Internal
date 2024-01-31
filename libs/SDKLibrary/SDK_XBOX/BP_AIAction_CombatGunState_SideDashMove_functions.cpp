#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C
// (None)

class UClass* UBP_AIAction_CombatGunState_SideDashMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_CombatGunState_SideDashMove_C");

	return Clss;
}


// BP_AIAction_CombatGunState_SideDashMove_C BP_AIAction_CombatGunState_SideDashMove.Default__BP_AIAction_CombatGunState_SideDashMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_CombatGunState_SideDashMove_C* UBP_AIAction_CombatGunState_SideDashMove_C::GetDefaultObj()
{
	static class UBP_AIAction_CombatGunState_SideDashMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_CombatGunState_SideDashMove_C*>(UBP_AIAction_CombatGunState_SideDashMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C.FindMoveGoal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Goal                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             GoalAbleList                                                     (Edit, BlueprintVisible)
// double                             Distance_Right                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance_Forward                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SelfForward                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SelfRight                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SelfToTargetNormal                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             GoalList                                                         (Edit, BlueprintVisible)
// struct FVector                     SelfToTarget                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ToTargetDistance                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeXY_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatGunState_SideDashMove_C::FindMoveGoal(struct FVector* Goal, bool* Success, const TArray<struct FVector>& GoalAbleList, double Distance_Right, double Distance_Forward, const struct FVector& SelfForward, const struct FVector& SelfRight, const struct FVector& SelfToTargetNormal, const TArray<struct FVector>& GoalList, const struct FVector& SelfToTarget, double ToTargetDistance, double CallFunc_VSizeXY_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector& CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation, bool CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CombatGunState_SideDashMove_C", "FindMoveGoal");

	Params::UBP_AIAction_CombatGunState_SideDashMove_C_FindMoveGoal_Params Parms{};

	Parms.GoalAbleList = GoalAbleList;
	Parms.Distance_Right = Distance_Right;
	Parms.Distance_Forward = Distance_Forward;
	Parms.SelfForward = SelfForward;
	Parms.SelfRight = SelfRight;
	Parms.SelfToTargetNormal = SelfToTargetNormal;
	Parms.GoalList = GoalList;
	Parms.SelfToTarget = SelfToTarget;
	Parms.ToTargetDistance = ToTargetDistance;
	Parms.CallFunc_VSizeXY_ReturnValue = CallFunc_VSizeXY_ReturnValue;
	Parms.CallFunc_Vector_Normal2D_ReturnValue = CallFunc_Vector_Normal2D_ReturnValue;
	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;
	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation = CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_OutGoalLocation;
	Parms.CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue = CallFunc_IsExistPathForLocation_ForBP_HeightRangeCheck_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue_1 = CallFunc_Conv_DoubleToVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_2 = CallFunc_Multiply_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue_1 = CallFunc_Conv_FloatToVector_ReturnValue_1;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_3 = CallFunc_Multiply_VectorVector_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Goal != nullptr)
		*Goal = std::move(Parms.Goal);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AIAction_CombatGunState_SideDashMove_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CombatGunState_SideDashMove_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C.StateExit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AIAction_CombatGunState_SideDashMove_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CombatGunState_SideDashMove_C", "StateExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatGunState_SideDashMove_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CombatGunState_SideDashMove_C", "StateTick");

	Params::UBP_AIAction_CombatGunState_SideDashMove_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CombatGunState_SideDashMove.BP_AIAction_CombatGunState_SideDashMove_C.ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetMovementComponentRef_Movement                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetMovementComponentRef_Movement_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindMoveGoal_Goal                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindMoveGoal_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_6              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_7              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_8              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_9              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_10             (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_11             (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_12             (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatGunState_SideDashMove_C::ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove(int32 EntryPoint, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement_1, const struct FVector& CallFunc_FindMoveGoal_Goal, bool CallFunc_FindMoveGoal_Success, float K2Node_Event_DeltaTime, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_6, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_7, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_8, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_2, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_9, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_10, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_3, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_11, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_4, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CombatGunState_SideDashMove_C", "ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove");

	Params::UBP_AIAction_CombatGunState_SideDashMove_C_ExecuteUbergraph_BP_AIAction_CombatGunState_SideDashMove_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;
	Parms.CallFunc_GetMovementComponentRef_Movement = CallFunc_GetMovementComponentRef_Movement;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1;
	Parms.CallFunc_GetMovementComponentRef_Movement_1 = CallFunc_GetMovementComponentRef_Movement_1;
	Parms.CallFunc_FindMoveGoal_Goal = CallFunc_FindMoveGoal_Goal;
	Parms.CallFunc_FindMoveGoal_Success = CallFunc_FindMoveGoal_Success;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3;
	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_5;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_6 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_6;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_7 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_7;
	Parms.CallFunc_GetControllerRef_NPCAICon_1 = CallFunc_GetControllerRef_NPCAICon_1;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_8 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_8;
	Parms.CallFunc_GetControllerRef_NPCAICon_2 = CallFunc_GetControllerRef_NPCAICon_2;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_9 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_9;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle_1 = CallFunc_GetWeaponHandle_WeaponHandle_1;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_10 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_10;
	Parms.CallFunc_GetControllerRef_NPCAICon_3 = CallFunc_GetControllerRef_NPCAICon_3;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_11 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_11;
	Parms.CallFunc_GetControllerRef_NPCAICon_4 = CallFunc_GetControllerRef_NPCAICon_4;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_12 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_12;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


