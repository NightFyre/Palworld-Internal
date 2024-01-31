#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_CombatMeleeState_RotateForNearSwing.BP_AINPC_CombatMeleeState_RotateForNearSwing_C
// (None)

class UClass* UBP_AINPC_CombatMeleeState_RotateForNearSwing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_CombatMeleeState_RotateForNearSwing_C");

	return Clss;
}


// BP_AINPC_CombatMeleeState_RotateForNearSwing_C BP_AINPC_CombatMeleeState_RotateForNearSwing.Default__BP_AINPC_CombatMeleeState_RotateForNearSwing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_CombatMeleeState_RotateForNearSwing_C* UBP_AINPC_CombatMeleeState_RotateForNearSwing_C::GetDefaultObj()
{
	static class UBP_AINPC_CombatMeleeState_RotateForNearSwing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_CombatMeleeState_RotateForNearSwing_C*>(UBP_AINPC_CombatMeleeState_RotateForNearSwing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_CombatMeleeState_RotateForNearSwing.BP_AINPC_CombatMeleeState_RotateForNearSwing_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatMeleeState_RotateForNearSwing_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_RotateForNearSwing_C", "StateTick");

	Params::UBP_AINPC_CombatMeleeState_RotateForNearSwing_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AINPC_CombatMeleeState_RotateForNearSwing.BP_AINPC_CombatMeleeState_RotateForNearSwing_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatMeleeState_RotateForNearSwing_C::ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing(int32 EntryPoint, class AActor* CallFunc_GetTargetActor_TargetActor, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetSelfActor_SelfActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_RotateForNearSwing_C", "ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing");

	Params::UBP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTargetActor_TargetActor = CallFunc_GetTargetActor_TargetActor;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


