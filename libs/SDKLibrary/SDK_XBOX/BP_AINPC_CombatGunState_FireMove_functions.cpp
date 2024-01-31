#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_CombatGunState_FireMove.BP_AINPC_CombatGunState_FireMove_C
// (None)

class UClass* UBP_AINPC_CombatGunState_FireMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_CombatGunState_FireMove_C");

	return Clss;
}


// BP_AINPC_CombatGunState_FireMove_C BP_AINPC_CombatGunState_FireMove.Default__BP_AINPC_CombatGunState_FireMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_CombatGunState_FireMove_C* UBP_AINPC_CombatGunState_FireMove_C::GetDefaultObj()
{
	static class UBP_AINPC_CombatGunState_FireMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_CombatGunState_FireMove_C*>(UBP_AINPC_CombatGunState_FireMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_CombatGunState_FireMove.BP_AINPC_CombatGunState_FireMove_C.AddShootTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_FireMove_C::AddShootTimer(double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_C", "AddShootTimer");

	Params::UBP_AINPC_CombatGunState_FireMove_C_AddShootTimer_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AINPC_CombatGunState_FireMove.BP_AINPC_CombatGunState_FireMove_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatGunState_FireMove_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatGunState_FireMove.BP_AINPC_CombatGunState_FireMove_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_FireMove_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_C", "StateTick");

	Params::UBP_AINPC_CombatGunState_FireMove_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AINPC_CombatGunState_FireMove.BP_AINPC_CombatGunState_FireMove_C.ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxShootCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMagazineEmpty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetShootInterval_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttackAblePlayerCamera_AttackAble                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShootAbleSlefForwardDot_ShootAble                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_StateTick_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Temp_DeltaTime_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Interval_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_FireMove_C::ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove(int32 EntryPoint, int32 Temp_int_Variable, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, float K2Node_Event_DeltaTime, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_GetMaxShootCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsMagazineEmpty_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_2, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_2, float CallFunc_GetShootInterval_ReturnValue, bool CallFunc_AttackAblePlayerCamera_AttackAble, bool CallFunc_ShootAbleSlefForwardDot_ShootAble, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_StateTick_DeltaTime_ImplicitCast, double K2Node_VariableSet_Temp_DeltaTime_ImplicitCast, double K2Node_VariableSet_Interval_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_C", "ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove");

	Params::UBP_AINPC_CombatGunState_FireMove_C_ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerRef_NPCAICon_1 = CallFunc_GetControllerRef_NPCAICon_1;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle_1 = CallFunc_GetWeaponHandle_WeaponHandle_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetMaxShootCount_ReturnValue = CallFunc_GetMaxShootCount_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsMagazineEmpty_ReturnValue = CallFunc_IsMagazineEmpty_ReturnValue;
	Parms.CallFunc_GetControllerRef_NPCAICon_2 = CallFunc_GetControllerRef_NPCAICon_2;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle_2 = CallFunc_GetWeaponHandle_WeaponHandle_2;
	Parms.CallFunc_GetShootInterval_ReturnValue = CallFunc_GetShootInterval_ReturnValue;
	Parms.CallFunc_AttackAblePlayerCamera_AttackAble = CallFunc_AttackAblePlayerCamera_AttackAble;
	Parms.CallFunc_ShootAbleSlefForwardDot_ShootAble = CallFunc_ShootAbleSlefForwardDot_ShootAble;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_StateTick_DeltaTime_ImplicitCast = CallFunc_StateTick_DeltaTime_ImplicitCast;
	Parms.K2Node_VariableSet_Temp_DeltaTime_ImplicitCast = K2Node_VariableSet_Temp_DeltaTime_ImplicitCast;
	Parms.K2Node_VariableSet_Interval_ImplicitCast = K2Node_VariableSet_Interval_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


