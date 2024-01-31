#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_CombatMeleeState_AttackForNearSwing.BP_AINPC_CombatMeleeState_AttackForNearSwing_C
// (None)

class UClass* UBP_AINPC_CombatMeleeState_AttackForNearSwing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_CombatMeleeState_AttackForNearSwing_C");

	return Clss;
}


// BP_AINPC_CombatMeleeState_AttackForNearSwing_C BP_AINPC_CombatMeleeState_AttackForNearSwing.Default__BP_AINPC_CombatMeleeState_AttackForNearSwing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_CombatMeleeState_AttackForNearSwing_C* UBP_AINPC_CombatMeleeState_AttackForNearSwing_C::GetDefaultObj()
{
	static class UBP_AINPC_CombatMeleeState_AttackForNearSwing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_CombatMeleeState_AttackForNearSwing_C*>(UBP_AINPC_CombatMeleeState_AttackForNearSwing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_CombatMeleeState_AttackForNearSwing.BP_AINPC_CombatMeleeState_AttackForNearSwing_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatMeleeState_AttackForNearSwing_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_AttackForNearSwing_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatMeleeState_AttackForNearSwing.BP_AINPC_CombatMeleeState_AttackForNearSwing_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetBodyActionComponentRef_ActionComp                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatMeleeState_AttackForNearSwing_C::ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing(int32 EntryPoint, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, class UPalActionComponent* CallFunc_GetBodyActionComponentRef_ActionComp, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_AttackForNearSwing_C", "ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing");

	Params::UBP_AINPC_CombatMeleeState_AttackForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;
	Parms.CallFunc_GetBodyActionComponentRef_ActionComp = CallFunc_GetBodyActionComponentRef_ActionComp;
	Parms.CallFunc_PlayActionParameter_ReturnValue = CallFunc_PlayActionParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


