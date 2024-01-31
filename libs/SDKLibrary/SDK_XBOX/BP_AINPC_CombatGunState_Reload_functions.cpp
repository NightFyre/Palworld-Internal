#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_CombatGunState_Reload.BP_AINPC_CombatGunState_Reload_C
// (None)

class UClass* UBP_AINPC_CombatGunState_Reload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_CombatGunState_Reload_C");

	return Clss;
}


// BP_AINPC_CombatGunState_Reload_C BP_AINPC_CombatGunState_Reload.Default__BP_AINPC_CombatGunState_Reload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_CombatGunState_Reload_C* UBP_AINPC_CombatGunState_Reload_C::GetDefaultObj()
{
	static class UBP_AINPC_CombatGunState_Reload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_CombatGunState_Reload_C*>(UBP_AINPC_CombatGunState_Reload_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_CombatGunState_Reload.BP_AINPC_CombatGunState_Reload_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatGunState_Reload_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_Reload_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatGunState_Reload.BP_AINPC_CombatGunState_Reload_C.StateExit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_CombatGunState_Reload_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_Reload_C", "StateExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_CombatGunState_Reload.BP_AINPC_CombatGunState_Reload_C.ExecuteUbergraph_BP_AINPC_CombatGunState_Reload
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetReloadTime_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       CallFunc_GetControllerRef_NPCAICon_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_Reload_C::ExecuteUbergraph_BP_AINPC_CombatGunState_Reload(int32 EntryPoint, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, float CallFunc_GetReloadTime_ReturnValue, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FVector& CallFunc_MakeVector_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_1, class AActor* CallFunc_GetTargetActor_TargetActor, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_2, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle_2, double CallFunc_MakeVector_X_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_Reload_C", "ExecuteUbergraph_BP_AINPC_CombatGunState_Reload");

	Params::UBP_AINPC_CombatGunState_Reload_C_ExecuteUbergraph_BP_AINPC_CombatGunState_Reload_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetControllerRef_NPCAICon = CallFunc_GetControllerRef_NPCAICon;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_GetReloadTime_ReturnValue = CallFunc_GetReloadTime_ReturnValue;
	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;
	Parms.CallFunc_GetControllerRef_NPCAICon_1 = CallFunc_GetControllerRef_NPCAICon_1;
	Parms.CallFunc_PlayActionParameter_ReturnValue = CallFunc_PlayActionParameter_ReturnValue;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle_1 = CallFunc_GetWeaponHandle_WeaponHandle_1;
	Parms.CallFunc_GetTargetActor_TargetActor = CallFunc_GetTargetActor_TargetActor;
	Parms.CallFunc_GetControllerRef_NPCAICon_2 = CallFunc_GetControllerRef_NPCAICon_2;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle_2 = CallFunc_GetWeaponHandle_WeaponHandle_2;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


