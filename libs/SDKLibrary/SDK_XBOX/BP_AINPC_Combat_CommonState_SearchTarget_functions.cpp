#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_Combat_CommonState_SearchTarget.BP_AINPC_Combat_CommonState_SearchTarget_C
// (None)

class UClass* UBP_AINPC_Combat_CommonState_SearchTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_Combat_CommonState_SearchTarget_C");

	return Clss;
}


// BP_AINPC_Combat_CommonState_SearchTarget_C BP_AINPC_Combat_CommonState_SearchTarget.Default__BP_AINPC_Combat_CommonState_SearchTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_Combat_CommonState_SearchTarget_C* UBP_AINPC_Combat_CommonState_SearchTarget_C::GetDefaultObj()
{
	static class UBP_AINPC_Combat_CommonState_SearchTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_Combat_CommonState_SearchTarget_C*>(UBP_AINPC_Combat_CommonState_SearchTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_Combat_CommonState_SearchTarget.BP_AINPC_Combat_CommonState_SearchTarget_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_Combat_CommonState_SearchTarget_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_SearchTarget_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_Combat_CommonState_SearchTarget.BP_AINPC_Combat_CommonState_SearchTarget_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_Combat_CommonState_SearchTarget_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_SearchTarget_C", "StateTick");

	Params::UBP_AINPC_Combat_CommonState_SearchTarget_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AINPC_Combat_CommonState_SearchTarget.BP_AINPC_Combat_CommonState_SearchTarget_C.ExecuteUbergraph_BP_AINPC_Combat_CommonState_SearchTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_AIAction_NPC_CombatBase_C*CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_Combat_CommonState_SearchTarget_C::ExecuteUbergraph_BP_AINPC_Combat_CommonState_SearchTarget(int32 EntryPoint, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat, class UBP_AIAction_NPC_CombatBase_C* CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_SearchTarget_C", "ExecuteUbergraph_BP_AINPC_Combat_CommonState_SearchTarget");

	Params::UBP_AINPC_Combat_CommonState_SearchTarget_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_SearchTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat;
	Parms.CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1 = CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


