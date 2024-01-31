#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C
// (None)

class UClass* UBP_AIAction_NPC_Encount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_NPC_Encount_C");

	return Clss;
}


// BP_AIAction_NPC_Encount_C BP_AIAction_NPC_Encount.Default__BP_AIAction_NPC_Encount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_NPC_Encount_C* UBP_AIAction_NPC_Encount_C::GetDefaultObj()
{
	static class UBP_AIAction_NPC_Encount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_NPC_Encount_C*>(UBP_AIAction_NPC_Encount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C.GetShooter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalShooterComponent*        ShooterComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Encount_C::GetShooter(class UPalShooterComponent** ShooterComponent, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Encount_C", "GetShooter");

	Params::UBP_AIAction_NPC_Encount_C_GetShooter_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShooterComponent != nullptr)
		*ShooterComponent = Parms.ShooterComponent;

}


// Function BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Encount_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Encount_C", "ActionStart");

	Params::UBP_AIAction_NPC_Encount_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C.OnWeaponChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Encount_C::OnWeaponChanged(class APalWeaponBase* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Encount_C", "OnWeaponChanged");

	Params::UBP_AIAction_NPC_Encount_C_OnWeaponChanged_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C.StartCombat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_NPC_Encount_C::StartCombat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Encount_C", "StartCombat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_NPC_Encount.BP_AIAction_NPC_Encount_C.ExecuteUbergraph_BP_AIAction_NPC_Encount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidCurrentSelectPalActor_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSquad*                   CallFunc_GetSquad_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetShooter_ShooterComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*              K2Node_CustomEvent_weapon                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetAIActionClassParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Encount_C::ExecuteUbergraph_BP_AIAction_NPC_Encount(int32 EntryPoint, bool CallFunc_IsValidCurrentSelectPalActor_ReturnValue, class APawn* K2Node_Event_ControlledPawn, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_1, class UPalSquad* CallFunc_GetSquad_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController_1, bool K2Node_DynamicCast_bSuccess_2, class UPalShooterComponent* CallFunc_GetShooter_ShooterComponent, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, bool CallFunc_IsValid_ReturnValue, class APalWeaponBase* K2Node_CustomEvent_weapon, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AController* CallFunc_GetController_ReturnValue_3, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, bool CallFunc_IsValid_ReturnValue_2, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, class UBP_OtomoPalHolderComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_Encount_C", "ExecuteUbergraph_BP_AIAction_NPC_Encount");

	Params::UBP_AIAction_NPC_Encount_C_ExecuteUbergraph_BP_AIAction_NPC_Encount_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValidCurrentSelectPalActor_ReturnValue = CallFunc_IsValidCurrentSelectPalActor_ReturnValue;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController = K2Node_DynamicCast_AsBP_NPCAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSquad_ReturnValue = CallFunc_GetSquad_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController_1 = K2Node_DynamicCast_AsBP_NPCAIController_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetShooter_ShooterComponent = CallFunc_GetShooter_ShooterComponent;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_weapon = K2Node_CustomEvent_weapon;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SetAIActionClassParameter_ReturnValue = CallFunc_SetAIActionClassParameter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo = CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


