#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C
// (None)

class UClass* UBP_AINPC_CombatGunState_MeleeAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_CombatGunState_MeleeAttack_C");

	return Clss;
}


// BP_AINPC_CombatGunState_MeleeAttack_C BP_AINPC_CombatGunState_MeleeAttack.Default__BP_AINPC_CombatGunState_MeleeAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_CombatGunState_MeleeAttack_C* UBP_AINPC_CombatGunState_MeleeAttack_C::GetDefaultObj()
{
	static class UBP_AINPC_CombatGunState_MeleeAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_CombatGunState_MeleeAttack_C*>(UBP_AINPC_CombatGunState_MeleeAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatGunState_MeleeAttack_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_MeleeAttack_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_MeleeAttack_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_MeleeAttack_C", "StateTick");

	Params::UBP_AINPC_CombatGunState_MeleeAttack_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.StateExit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatGunState_MeleeAttack_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_MeleeAttack_C", "StateExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetBodyActionComponentRef_ActionComp                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_MeleeAttack_C::ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack(int32 EntryPoint, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, float K2Node_Event_DeltaTime, class UPalActionComponent* CallFunc_GetBodyActionComponentRef_ActionComp, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_MeleeAttack_C", "ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack");

	Params::UBP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetBodyActionComponentRef_ActionComp = CallFunc_GetBodyActionComponentRef_ActionComp;
	Parms.CallFunc_PlayActionParameter_ReturnValue = CallFunc_PlayActionParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


