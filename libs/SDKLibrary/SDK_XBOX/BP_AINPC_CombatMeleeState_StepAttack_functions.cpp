#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_CombatMeleeState_StepAttack.BP_AINPC_CombatMeleeState_StepAttack_C
// (None)

class UClass* UBP_AINPC_CombatMeleeState_StepAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_CombatMeleeState_StepAttack_C");

	return Clss;
}


// BP_AINPC_CombatMeleeState_StepAttack_C BP_AINPC_CombatMeleeState_StepAttack.Default__BP_AINPC_CombatMeleeState_StepAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_CombatMeleeState_StepAttack_C* UBP_AINPC_CombatMeleeState_StepAttack_C::GetDefaultObj()
{
	static class UBP_AINPC_CombatMeleeState_StepAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_CombatMeleeState_StepAttack_C*>(UBP_AINPC_CombatMeleeState_StepAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_CombatMeleeState_StepAttack.BP_AINPC_CombatMeleeState_StepAttack_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatMeleeState_StepAttack_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_StepAttack_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatMeleeState_StepAttack.BP_AINPC_CombatMeleeState_StepAttack_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)
// class UPalActionComponent*         CallFunc_GetBodyActionComponentRef_ActionComp                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatMeleeState_StepAttack_C::ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack(int32 EntryPoint, class AActor* CallFunc_GetTargetActor_TargetActor, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UPalActionComponent* CallFunc_GetBodyActionComponentRef_ActionComp, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_StepAttack_C", "ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack");

	Params::UBP_AINPC_CombatMeleeState_StepAttack_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTargetActor_TargetActor = CallFunc_GetTargetActor_TargetActor;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;
	Parms.CallFunc_GetBodyActionComponentRef_ActionComp = CallFunc_GetBodyActionComponentRef_ActionComp;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1;
	Parms.CallFunc_PlayActionParameter_ReturnValue = CallFunc_PlayActionParameter_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


