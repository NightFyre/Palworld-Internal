#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C
// (Actor)

class UClass* ABP_MonsterAIController_NPCOtomo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MonsterAIController_NPCOtomo_C");

	return Clss;
}


// BP_MonsterAIController_NPCOtomo_C BP_MonsterAIController_NPCOtomo.Default__BP_MonsterAIController_NPCOtomo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MonsterAIController_NPCOtomo_C* ABP_MonsterAIController_NPCOtomo_C::GetDefaultObj()
{
	static class ABP_MonsterAIController_NPCOtomo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MonsterAIController_NPCOtomo_C*>(ABP_MonsterAIController_NPCOtomo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.GetMyBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*PalBrackboard                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetMyPalBlackboard_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_NPCOtomo_C::GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_NPCOtomo_C", "GetMyBB");

	Params::ABP_MonsterAIController_NPCOtomo_C_GetMyBB_Params Parms{};

	Parms.CallFunc_GetMyPalBlackboard_ReturnValue = CallFunc_GetMyPalBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PalBrackboard != nullptr)
		*PalBrackboard = Parms.PalBrackboard;

}


// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.GetLeaderBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*LeaderPalBrackboard                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetLeaderPalBlackboard_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_NPCOtomo_C::GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard, class UPalAIBlackboardBase* CallFunc_GetLeaderPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_NPCOtomo_C", "GetLeaderBB");

	Params::ABP_MonsterAIController_NPCOtomo_C_GetLeaderBB_Params Parms{};

	Parms.CallFunc_GetLeaderPalBlackboard_ReturnValue = CallFunc_GetLeaderPalBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderPalBrackboard != nullptr)
		*LeaderPalBrackboard = Parms.LeaderPalBrackboard;

}


// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_NPCOtomo_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_NPCOtomo_C", "ReceivePossess");

	Params::ABP_MonsterAIController_NPCOtomo_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.ExecuteUbergraph_BP_MonsterAIController_NPCOtomo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_NPCOtomo_C::ExecuteUbergraph_BP_MonsterAIController_NPCOtomo(int32 EntryPoint, class APawn* K2Node_Event_PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_NPCOtomo_C", "ExecuteUbergraph_BP_MonsterAIController_NPCOtomo");

	Params::ABP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


