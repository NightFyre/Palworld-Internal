#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C
// (None)

class UClass* UBP_AIAction_NPC_Combat_Gun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_NPC_Combat_Gun_C");

	return Clss;
}


// BP_AIAction_NPC_Combat_Gun_C BP_AIAction_NPC_Combat_Gun.Default__BP_AIAction_NPC_Combat_Gun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_NPC_Combat_Gun_C* UBP_AIAction_NPC_Combat_Gun_C::GetDefaultObj()
{
	static class UBP_AIAction_NPC_Combat_Gun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_NPC_Combat_Gun_C*>(UBP_AIAction_NPC_Combat_Gun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.IsInMeleeAttackRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               InRange                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandleRef_WeaponHandle                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsMeleeAttackWithGun_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InConeShapAndDitance_Actor_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::IsInMeleeAttackRange(bool* InRange, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandleRef_WeaponHandle, bool CallFunc_GetIsMeleeAttackWithGun_ReturnValue, bool CallFunc_InConeShapAndDitance_Actor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "IsInMeleeAttackRange");

	Params::UBP_AIAction_NPC_Combat_Gun_C_IsInMeleeAttackRange_Params Parms{};

	Parms.CallFunc_GetWeaponHandleRef_WeaponHandle = CallFunc_GetWeaponHandleRef_WeaponHandle;
	Parms.CallFunc_GetIsMeleeAttackWithGun_ReturnValue = CallFunc_GetIsMeleeAttackWithGun_ReturnValue;
	Parms.CallFunc_InConeShapAndDitance_Actor_ReturnValue = CallFunc_InConeShapAndDitance_Actor_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InRange != nullptr)
		*InRange = Parms.InRange;

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.AddTimer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentTime                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::AddTimer(double* CurrentTime, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "AddTimer");

	Params::UBP_AIAction_NPC_Combat_Gun_C_AddTimer_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTime != nullptr)
		*CurrentTime = Parms.CurrentTime;

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.IsNear_FarRange
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Near                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNear_FarRange_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsNear_FarRange_FarRangePlusOffset_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::IsNear_FarRange(double Offset, bool* Near, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, bool CallFunc_IsNear_FarRange_ReturnValue, float CallFunc_IsNear_FarRange_FarRangePlusOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "IsNear_FarRange");

	Params::UBP_AIAction_NPC_Combat_Gun_C_IsNear_FarRange_Params Parms{};

	Parms.Offset = Offset;
	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_IsNear_FarRange_ReturnValue = CallFunc_IsNear_FarRange_ReturnValue;
	Parms.CallFunc_IsNear_FarRange_FarRangePlusOffset_ImplicitCast = CallFunc_IsNear_FarRange_FarRangePlusOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Near != nullptr)
		*Near = Parms.Near;

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.IsNear_NearRange
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Near                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNear_NearRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsNear_NearRange_NearRangePlusOffset_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::IsNear_NearRange(double Offset, bool* Near, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, bool CallFunc_IsNear_NearRange_ReturnValue, float CallFunc_IsNear_NearRange_NearRangePlusOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "IsNear_NearRange");

	Params::UBP_AIAction_NPC_Combat_Gun_C_IsNear_NearRange_Params Parms{};

	Parms.Offset = Offset;
	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_IsNear_NearRange_ReturnValue = CallFunc_IsNear_NearRange_ReturnValue;
	Parms.CallFunc_IsNear_NearRange_NearRangePlusOffset_ImplicitCast = CallFunc_IsNear_NearRange_NearRangePlusOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Near != nullptr)
		*Near = Parms.Near;

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.Change_NextState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPal_NPC_CombatGunState Next                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::Change_NextState(enum class EPal_NPC_CombatGunState Next, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "Change_NextState");

	Params::UBP_AIAction_NPC_Combat_Gun_C_Change_NextState_Params Parms{};

	Parms.Next = Next;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.Add Gun Combat State
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPal_NPC_CombatGunState GunState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::Add_Gun_Combat_State(enum class EPal_NPC_CombatGunState GunState, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "Add Gun Combat State");

	Params::UBP_AIAction_NPC_Combat_Gun_C_Add_Gun_Combat_State_Params Parms{};

	Parms.GunState = GunState;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "ActionTick");

	Params::UBP_AIAction_NPC_Combat_Gun_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "ActionStart");

	Params::UBP_AIAction_NPC_Combat_Gun_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "ActionPause");

	Params::UBP_AIAction_NPC_Combat_Gun_C_ActionPause_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "ActionResume");

	Params::UBP_AIAction_NPC_Combat_Gun_C_ActionResume_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "ActionFinished");

	Params::UBP_AIAction_NPC_Combat_Gun_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Combat_Gun.BP_AIAction_NPC_Combat_Gun_C.ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPal_NPC_CombatGunState Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TickFinishCheck_ActionFinish                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNear_FarRange_Near                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMagazineEmpty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionIsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPal_NPC_CombatGunState Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddTimer_CurrentTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddTimer_CurrentTime_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LineTraceTarget_HitToTarget                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LineTraceTarget_HitToTarget_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddTimer_CurrentTime_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UPalStateMachineStateBase>CallFunc_GetFireStateClass_ReturnValue                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_AINPC_Combat_State_Base             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandleRef_WeaponHandle                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPal_NPC_CombatGunState Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomMoveTimeMin_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandleRef_WeaponHandle_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseSideDashMovement_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LineTraceTarget_HitToTarget_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNear_FarRange_Near_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNear_FarRange_Near_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEndCurrentState_IsEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEndCurrentState_IsEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionIsEmpty_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInMeleeAttackRange_InRange                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Tick_DeltaTime_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Min_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Gun_C::ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun(int32 EntryPoint, enum class EPal_NPC_CombatGunState Temp_byte_Variable, class APawn* K2Node_Event_ControlledPawn_4, float K2Node_Event_DeltaSeconds, bool CallFunc_TickFinishCheck_ActionFinish, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsNear_FarRange_Near, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, bool CallFunc_IsMagazineEmpty_ReturnValue, bool CallFunc_ActionIsEmpty_ReturnValue, enum class EPal_NPC_CombatGunState Temp_byte_Variable_1, double CallFunc_AddTimer_CurrentTime, double CallFunc_AddTimer_CurrentTime_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, bool CallFunc_LineTraceTarget_HitToTarget, bool CallFunc_LineTraceTarget_HitToTarget_1, double CallFunc_AddTimer_CurrentTime_2, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, bool CallFunc_Map_Remove_ReturnValue, TSubclassOf<class UPalStateMachineStateBase> CallFunc_GetFireStateClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_AINPC_Combat_State_Base, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandleRef_WeaponHandle, enum class EPal_NPC_CombatGunState Temp_byte_Variable_2, float CallFunc_GetRandomMoveTimeMin_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandleRef_WeaponHandle_1, bool CallFunc_GetUseSideDashMovement_ReturnValue, bool CallFunc_LineTraceTarget_HitToTarget_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsNear_FarRange_Near_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsNear_FarRange_Near_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsEndCurrentState_IsEnd, bool CallFunc_IsEndCurrentState_IsEnd_1, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, bool CallFunc_ActionIsEmpty_ReturnValue_1, bool CallFunc_IsInMeleeAttackRange_InRange, bool CallFunc_BooleanAND_ReturnValue_3, float CallFunc_Tick_DeltaTime_ImplicitCast, double CallFunc_RandomFloatInRange_Min_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Gun_C", "ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun");

	Params::UBP_AIAction_NPC_Combat_Gun_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Gun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_ControlledPawn_4 = K2Node_Event_ControlledPawn_4;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_TickFinishCheck_ActionFinish = CallFunc_TickFinishCheck_ActionFinish;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsNear_FarRange_Near = CallFunc_IsNear_FarRange_Near;
	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.CallFunc_IsMagazineEmpty_ReturnValue = CallFunc_IsMagazineEmpty_ReturnValue;
	Parms.CallFunc_ActionIsEmpty_ReturnValue = CallFunc_ActionIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_AddTimer_CurrentTime = CallFunc_AddTimer_CurrentTime;
	Parms.CallFunc_AddTimer_CurrentTime_1 = CallFunc_AddTimer_CurrentTime_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Event_ControlledPawn_3 = K2Node_Event_ControlledPawn_3;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.CallFunc_LineTraceTarget_HitToTarget = CallFunc_LineTraceTarget_HitToTarget;
	Parms.CallFunc_LineTraceTarget_HitToTarget_1 = CallFunc_LineTraceTarget_HitToTarget_1;
	Parms.CallFunc_AddTimer_CurrentTime_2 = CallFunc_AddTimer_CurrentTime_2;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetControllerRef_NPCAICon_1 = CallFunc_GetControllerRef_NPCAICon_1;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle_1 = CallFunc_GetWeaponHandle_WeaponHandle_1;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_GetFireStateClass_ReturnValue = CallFunc_GetFireStateClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBP_AINPC_Combat_State_Base = K2Node_ClassDynamicCast_AsBP_AINPC_Combat_State_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetWeaponHandleRef_WeaponHandle = CallFunc_GetWeaponHandleRef_WeaponHandle;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetRandomMoveTimeMin_ReturnValue = CallFunc_GetRandomMoveTimeMin_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_GetWeaponHandleRef_WeaponHandle_1 = CallFunc_GetWeaponHandleRef_WeaponHandle_1;
	Parms.CallFunc_GetUseSideDashMovement_ReturnValue = CallFunc_GetUseSideDashMovement_ReturnValue;
	Parms.CallFunc_LineTraceTarget_HitToTarget_2 = CallFunc_LineTraceTarget_HitToTarget_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsNear_FarRange_Near_1 = CallFunc_IsNear_FarRange_Near_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsNear_FarRange_Near_2 = CallFunc_IsNear_FarRange_Near_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsEndCurrentState_IsEnd = CallFunc_IsEndCurrentState_IsEnd;
	Parms.CallFunc_IsEndCurrentState_IsEnd_1 = CallFunc_IsEndCurrentState_IsEnd_1;
	Parms.CallFunc_GetActionComponent_ReturnValue_1 = CallFunc_GetActionComponent_ReturnValue_1;
	Parms.CallFunc_ActionIsEmpty_ReturnValue_1 = CallFunc_ActionIsEmpty_ReturnValue_1;
	Parms.CallFunc_IsInMeleeAttackRange_InRange = CallFunc_IsInMeleeAttackRange_InRange;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Tick_DeltaTime_ImplicitCast = CallFunc_Tick_DeltaTime_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Min_ImplicitCast = CallFunc_RandomFloatInRange_Min_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


