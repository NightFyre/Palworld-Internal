#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C
// (None)

class UClass* UBP_AINPC_Combat_CommonState_BackwardTurn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_Combat_CommonState_BackwardTurn_C");

	return Clss;
}


// BP_AINPC_Combat_CommonState_BackwardTurn_C BP_AINPC_Combat_CommonState_BackwardTurn.Default__BP_AINPC_Combat_CommonState_BackwardTurn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_Combat_CommonState_BackwardTurn_C* UBP_AINPC_Combat_CommonState_BackwardTurn_C::GetDefaultObj()
{
	static class UBP_AINPC_Combat_CommonState_BackwardTurn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_Combat_CommonState_BackwardTurn_C*>(UBP_AINPC_Combat_CommonState_BackwardTurn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_Combat_CommonState_BackwardTurn_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackwardTurn_C", "StateTick");

	Params::UBP_AINPC_Combat_CommonState_BackwardTurn_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_Combat_CommonState_BackwardTurn_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackwardTurn_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C.StateExit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_Combat_CommonState_BackwardTurn_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackwardTurn_C", "StateExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C.ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetShooterComponent_ShooterComp                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetShooterComponent_ShooterComp_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_Combat_CommonState_BackwardTurn_C::ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn(int32 EntryPoint, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, class AController* CallFunc_GetController_ReturnValue, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetSelfActor_SelfActor, class AActor* CallFunc_GetTargetActor_TargetActor, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalShooterComponent* CallFunc_GetShooterComponent_ShooterComp, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UPalShooterComponent* CallFunc_GetShooterComponent_ShooterComp_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor_2, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackwardTurn_C", "ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn");

	Params::UBP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_GetTargetActor_TargetActor = CallFunc_GetTargetActor_TargetActor;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetShooterComponent_ShooterComp = CallFunc_GetShooterComponent_ShooterComp;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetShooterComponent_ShooterComp_1 = CallFunc_GetShooterComponent_ShooterComp_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetSelfActor_SelfActor_1 = CallFunc_GetSelfActor_SelfActor_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetSelfActor_SelfActor_2 = CallFunc_GetSelfActor_SelfActor_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


