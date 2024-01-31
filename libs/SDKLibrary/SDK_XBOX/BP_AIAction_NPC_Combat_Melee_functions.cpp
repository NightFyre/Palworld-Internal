#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C
// (None)

class UClass* UBP_AIAction_NPC_Combat_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_NPC_Combat_Melee_C");

	return Clss;
}


// BP_AIAction_NPC_Combat_Melee_C BP_AIAction_NPC_Combat_Melee.Default__BP_AIAction_NPC_Combat_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_NPC_Combat_Melee_C* UBP_AIAction_NPC_Combat_Melee_C::GetDefaultObj()
{
	static class UBP_AIAction_NPC_Combat_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_NPC_Combat_Melee_C*>(UBP_AIAction_NPC_Combat_Melee_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.AddTimer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentTime                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Melee_C::AddTimer(double* CurrentTime, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Melee_C", "AddTimer");

	Params::UBP_AIAction_NPC_Combat_Melee_C_AddTimer_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTime != nullptr)
		*CurrentTime = Parms.CurrentTime;

}


// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.AddMeleeCombatState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPal_NPC_CombatMeleeStateMeleeState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Melee_C::AddMeleeCombatState(enum class EPal_NPC_CombatMeleeState MeleeState, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Melee_C", "AddMeleeCombatState");

	Params::UBP_AIAction_NPC_Combat_Melee_C_AddMeleeCombatState_Params Parms{};

	Parms.MeleeState = MeleeState;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.Change_NextState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPal_NPC_CombatMeleeStateNext                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Melee_C::Change_NextState(enum class EPal_NPC_CombatMeleeState Next, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Melee_C", "Change_NextState");

	Params::UBP_AIAction_NPC_Combat_Melee_C_Change_NextState_Params Parms{};

	Parms.Next = Next;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Melee_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Melee_C", "ActionResume");

	Params::UBP_AIAction_NPC_Combat_Melee_C_ActionResume_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Melee_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Melee_C", "ActionPause");

	Params::UBP_AIAction_NPC_Combat_Melee_C_ActionPause_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Melee_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Melee_C", "ActionFinished");

	Params::UBP_AIAction_NPC_Combat_Melee_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Melee_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Melee_C", "ActionTick");

	Params::UBP_AIAction_NPC_Combat_Melee_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Melee_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Melee_C", "ActionStart");

	Params::UBP_AIAction_NPC_Combat_Melee_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Melee.BP_AIAction_NPC_Combat_Melee_C.ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InFanShapAndDitance_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetBodyActionComponentRef_ActionComp                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InFanShapAndDitance_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionIsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTarget_Near                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTarget_Near_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetBodyActionComponentRef_ActionComp_1                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionIsEmpty_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InFanShapAndDitance_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TickFinishCheck_ActionFinish                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddTimer_CurrentTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddTimer_CurrentTime_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddTimer_CurrentTime_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPal_NPC_CombatMeleeStateTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEndCurrentState_IsEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Tick_DeltaTime_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_InFanShapAndDitance_Distance_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Melee_C::ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_4, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, enum class EPawnActionResult K2Node_Event_WithResult, bool CallFunc_InFanShapAndDitance_ReturnValue, class UPalActionComponent* CallFunc_GetBodyActionComponentRef_ActionComp, bool CallFunc_InFanShapAndDitance_ReturnValue_1, bool CallFunc_ActionIsEmpty_ReturnValue, bool CallFunc_IsNearTarget_Near, bool CallFunc_IsNearTarget_Near_1, class UPalActionComponent* CallFunc_GetBodyActionComponentRef_ActionComp_1, bool CallFunc_ActionIsEmpty_ReturnValue_1, bool CallFunc_InFanShapAndDitance_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TickFinishCheck_ActionFinish, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_IsValid_ReturnValue, double CallFunc_AddTimer_CurrentTime, double CallFunc_AddTimer_CurrentTime_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_AddTimer_CurrentTime_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, enum class EPal_NPC_CombatMeleeState Temp_byte_Variable, int32 CallFunc_RandomInteger_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_IsEndCurrentState_IsEnd, float CallFunc_Tick_DeltaTime_ImplicitCast, float CallFunc_InFanShapAndDitance_Distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Melee_C", "ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee");

	Params::UBP_AIAction_NPC_Combat_Melee_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn_4 = K2Node_Event_ControlledPawn_4;
	Parms.K2Node_Event_ControlledPawn_3 = K2Node_Event_ControlledPawn_3;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.CallFunc_InFanShapAndDitance_ReturnValue = CallFunc_InFanShapAndDitance_ReturnValue;
	Parms.CallFunc_GetBodyActionComponentRef_ActionComp = CallFunc_GetBodyActionComponentRef_ActionComp;
	Parms.CallFunc_InFanShapAndDitance_ReturnValue_1 = CallFunc_InFanShapAndDitance_ReturnValue_1;
	Parms.CallFunc_ActionIsEmpty_ReturnValue = CallFunc_ActionIsEmpty_ReturnValue;
	Parms.CallFunc_IsNearTarget_Near = CallFunc_IsNearTarget_Near;
	Parms.CallFunc_IsNearTarget_Near_1 = CallFunc_IsNearTarget_Near_1;
	Parms.CallFunc_GetBodyActionComponentRef_ActionComp_1 = CallFunc_GetBodyActionComponentRef_ActionComp_1;
	Parms.CallFunc_ActionIsEmpty_ReturnValue_1 = CallFunc_ActionIsEmpty_ReturnValue_1;
	Parms.CallFunc_InFanShapAndDitance_ReturnValue_2 = CallFunc_InFanShapAndDitance_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TickFinishCheck_ActionFinish = CallFunc_TickFinishCheck_ActionFinish;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddTimer_CurrentTime = CallFunc_AddTimer_CurrentTime;
	Parms.CallFunc_AddTimer_CurrentTime_1 = CallFunc_AddTimer_CurrentTime_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_AddTimer_CurrentTime_2 = CallFunc_AddTimer_CurrentTime_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_IsEndCurrentState_IsEnd = CallFunc_IsEndCurrentState_IsEnd;
	Parms.CallFunc_Tick_DeltaTime_ImplicitCast = CallFunc_Tick_DeltaTime_ImplicitCast;
	Parms.CallFunc_InFanShapAndDitance_Distance_ImplicitCast = CallFunc_InFanShapAndDitance_Distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


