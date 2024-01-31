#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Sleep_InNightWildPal.BP_AIAction_Sleep_InNightWildPal_C
// (None)

class UClass* UBP_AIAction_Sleep_InNightWildPal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Sleep_InNightWildPal_C");

	return Clss;
}


// BP_AIAction_Sleep_InNightWildPal_C BP_AIAction_Sleep_InNightWildPal.Default__BP_AIAction_Sleep_InNightWildPal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Sleep_InNightWildPal_C* UBP_AIAction_Sleep_InNightWildPal_C::GetDefaultObj()
{
	static class UBP_AIAction_Sleep_InNightWildPal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Sleep_InNightWildPal_C*>(UBP_AIAction_Sleep_InNightWildPal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Sleep_InNightWildPal.BP_AIAction_Sleep_InNightWildPal_C.OnSquadMemberDeadEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInbfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_AIAction_Sleep_InNightWildPal_C::OnSquadMemberDeadEvent(const struct FPalDeadInfo& DeadInbfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Sleep_InNightWildPal_C", "OnSquadMemberDeadEvent");

	Params::UBP_AIAction_Sleep_InNightWildPal_C_OnSquadMemberDeadEvent_Params Parms{};

	Parms.DeadInbfo = DeadInbfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Sleep_InNightWildPal.BP_AIAction_Sleep_InNightWildPal_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_InNightWildPal_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Sleep_InNightWildPal_C", "ActionTick");

	Params::UBP_AIAction_Sleep_InNightWildPal_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Sleep_InNightWildPal.BP_AIAction_Sleep_InNightWildPal_C.ExecuteUbergraph_BP_AIAction_Sleep_InNightWildPal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_GetPalAIController_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalTimeManager*             CallFunc_GetTimeManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_GetPalAIBlackboard_C>K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetLeaderBB_LeaderPalBrackboard                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_InNightWildPal_C::ExecuteUbergraph_BP_AIAction_Sleep_InNightWildPal(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class APalAIController* CallFunc_GetPalAIController_ReturnValue, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderBB_LeaderPalBrackboard, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Sleep_InNightWildPal_C", "ExecuteUbergraph_BP_AIAction_Sleep_InNightWildPal");

	Params::UBP_AIAction_Sleep_InNightWildPal_C_ExecuteUbergraph_BP_AIAction_Sleep_InNightWildPal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetPalAIController_ReturnValue = CallFunc_GetPalAIController_ReturnValue;
	Parms.CallFunc_GetTimeManager_ReturnValue = CallFunc_GetTimeManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard = K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue = CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue;
	Parms.CallFunc_GetLeaderBB_LeaderPalBrackboard = CallFunc_GetLeaderBB_LeaderPalBrackboard;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


