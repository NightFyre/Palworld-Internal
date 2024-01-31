#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_Combat_CommonState_MoveToTarget.BP_AINPC_Combat_CommonState_MoveToTarget_C
// (None)

class UClass* UBP_AINPC_Combat_CommonState_MoveToTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_Combat_CommonState_MoveToTarget_C");

	return Clss;
}


// BP_AINPC_Combat_CommonState_MoveToTarget_C BP_AINPC_Combat_CommonState_MoveToTarget.Default__BP_AINPC_Combat_CommonState_MoveToTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_Combat_CommonState_MoveToTarget_C* UBP_AINPC_Combat_CommonState_MoveToTarget_C::GetDefaultObj()
{
	static class UBP_AINPC_Combat_CommonState_MoveToTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_Combat_CommonState_MoveToTarget_C*>(UBP_AINPC_Combat_CommonState_MoveToTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_Combat_CommonState_MoveToTarget.BP_AINPC_Combat_CommonState_MoveToTarget_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_Combat_CommonState_MoveToTarget_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_MoveToTarget_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_Combat_CommonState_MoveToTarget.BP_AINPC_Combat_CommonState_MoveToTarget_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_Combat_CommonState_MoveToTarget_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_MoveToTarget_C", "StateTick");

	Params::UBP_AINPC_Combat_CommonState_MoveToTarget_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AINPC_Combat_CommonState_MoveToTarget.BP_AINPC_Combat_CommonState_MoveToTarget_C.StateExit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_Combat_CommonState_MoveToTarget_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_MoveToTarget_C", "StateExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_Combat_CommonState_MoveToTarget.BP_AINPC_Combat_CommonState_MoveToTarget_C.ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_MoveToTarget_IsNearTarget                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetMovementComponentRef_Movement                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetMovementComponentRef_Movement_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetMovementComponentRef_Movement_2                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetMovementComponentRef_Movement_3                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_Combat_CommonState_MoveToTarget_C::ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget(int32 EntryPoint, float K2Node_Event_DeltaTime, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, bool CallFunc_MoveToTarget_IsNearTarget, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement_1, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement_2, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4, bool CallFunc_BooleanAND_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetMovementComponentRef_Movement_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_MoveToTarget_C", "ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget");

	Params::UBP_AINPC_Combat_CommonState_MoveToTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_MoveToTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;
	Parms.CallFunc_MoveToTarget_IsNearTarget = CallFunc_MoveToTarget_IsNearTarget;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1;
	Parms.CallFunc_GetMovementComponentRef_Movement = CallFunc_GetMovementComponentRef_Movement;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_2;
	Parms.CallFunc_GetMovementComponentRef_Movement_1 = CallFunc_GetMovementComponentRef_Movement_1;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_3;
	Parms.CallFunc_GetMovementComponentRef_Movement_2 = CallFunc_GetMovementComponentRef_Movement_2;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetMovementComponentRef_Movement_3 = CallFunc_GetMovementComponentRef_Movement_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


