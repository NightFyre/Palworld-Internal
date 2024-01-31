#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_CombatGunState_FireMove_FlameThrower.BP_AINPC_CombatGunState_FireMove_FlameThrower_C
// (None)

class UClass* UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_CombatGunState_FireMove_FlameThrower_C");

	return Clss;
}


// BP_AINPC_CombatGunState_FireMove_FlameThrower_C BP_AINPC_CombatGunState_FireMove_FlameThrower.Default__BP_AINPC_CombatGunState_FireMove_FlameThrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_CombatGunState_FireMove_FlameThrower_C* UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::GetDefaultObj()
{
	static class UBP_AINPC_CombatGunState_FireMove_FlameThrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_CombatGunState_FireMove_FlameThrower_C*>(UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_CombatGunState_FireMove_FlameThrower.BP_AINPC_CombatGunState_FireMove_FlameThrower_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_FlameThrower_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatGunState_FireMove_FlameThrower.BP_AINPC_CombatGunState_FireMove_FlameThrower_C.StateExit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_FlameThrower_C", "StateExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatGunState_FireMove_FlameThrower.BP_AINPC_CombatGunState_FireMove_FlameThrower_C.ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomMoveTimeMin_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower(int32 EntryPoint, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, float CallFunc_GetRandomMoveTimeMin_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_FlameThrower_C", "ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower");

	Params::UBP_AINPC_CombatGunState_FireMove_FlameThrower_C_ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_GetControllerRef_NPCAICon_1 = CallFunc_GetControllerRef_NPCAICon_1;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle_1 = CallFunc_GetWeaponHandle_WeaponHandle_1;
	Parms.CallFunc_GetRandomMoveTimeMin_ReturnValue = CallFunc_GetRandomMoveTimeMin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


