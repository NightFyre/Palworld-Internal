#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MonsterAIController_CapturedCage.BP_MonsterAIController_CapturedCage_C
// (Actor)

class UClass* ABP_MonsterAIController_CapturedCage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MonsterAIController_CapturedCage_C");

	return Clss;
}


// BP_MonsterAIController_CapturedCage_C BP_MonsterAIController_CapturedCage.Default__BP_MonsterAIController_CapturedCage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MonsterAIController_CapturedCage_C* ABP_MonsterAIController_CapturedCage_C::GetDefaultObj()
{
	static class ABP_MonsterAIController_CapturedCage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MonsterAIController_CapturedCage_C*>(ABP_MonsterAIController_CapturedCage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MonsterAIController_CapturedCage.BP_MonsterAIController_CapturedCage_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_CapturedCage_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_CapturedCage_C", "ReceivePossess");

	Params::ABP_MonsterAIController_CapturedCage_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_CapturedCage.BP_MonsterAIController_CapturedCage_C.ExecuteUbergraph_BP_MonsterAIController_CapturedCage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_CapturedCage_C::ExecuteUbergraph_BP_MonsterAIController_CapturedCage(int32 EntryPoint, class APawn* K2Node_Event_PossessedPawn, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_CapturedCage_C", "ExecuteUbergraph_BP_MonsterAIController_CapturedCage");

	Params::ABP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


