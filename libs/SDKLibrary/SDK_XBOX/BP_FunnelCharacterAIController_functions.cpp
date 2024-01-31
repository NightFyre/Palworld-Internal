#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C
// (Actor)

class UClass* ABP_FunnelCharacterAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FunnelCharacterAIController_C");

	return Clss;
}


// BP_FunnelCharacterAIController_C BP_FunnelCharacterAIController.Default__BP_FunnelCharacterAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FunnelCharacterAIController_C* ABP_FunnelCharacterAIController_C::GetDefaultObj()
{
	static class ABP_FunnelCharacterAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FunnelCharacterAIController_C*>(ABP_FunnelCharacterAIController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.SetEnableReticleTargetFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_FunnelCharacter_C*       K2Node_DynamicCast_AsBP_Funnel_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerPal_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetTrainerPlayer_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FunnelCharacterAIController_C::SetEnableReticleTargetFlag(bool Enable, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_FunnelCharacter_C* K2Node_DynamicCast_AsBP_Funnel_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetOwnerPal_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FunnelCharacterAIController_C", "SetEnableReticleTargetFlag");

	Params::ABP_FunnelCharacterAIController_C_SetEnableReticleTargetFlag_Params Parms{};

	Parms.Enable = Enable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Funnel_Character = K2Node_DynamicCast_AsBP_Funnel_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwnerPal_ReturnValue = CallFunc_GetOwnerPal_ReturnValue;
	Parms.CallFunc_GetTrainerPlayer_ReturnValue = CallFunc_GetTrainerPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.OnInactive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FunnelCharacterAIController_C::OnInactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FunnelCharacterAIController_C", "OnInactive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.OnActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalFunnelCharacter*         K2Node_DynamicCast_AsPal_Funnel_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_GetCompositeRoot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionFunnelCharacterDefault*K2Node_DynamicCast_AsPal_AIAction_Funnel_Character_Default       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FunnelCharacterAIController_C::OnActive(class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalFunnelCharacter* K2Node_DynamicCast_AsPal_Funnel_Character, bool K2Node_DynamicCast_bSuccess, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess_1, class UPalAIActionCompositeBase* CallFunc_GetCompositeRoot_ReturnValue, class UPalAIActionFunnelCharacterDefault* K2Node_DynamicCast_AsPal_AIAction_Funnel_Character_Default, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FunnelCharacterAIController_C", "OnActive");

	Params::ABP_FunnelCharacterAIController_C_OnActive_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Funnel_Character = K2Node_DynamicCast_AsPal_Funnel_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCompositeRoot_ReturnValue = CallFunc_GetCompositeRoot_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Funnel_Character_Default = K2Node_DynamicCast_AsPal_AIAction_Funnel_Character_Default;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.StopAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMovementComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FunnelCharacterAIController_C::StopAction(class APawn* CallFunc_K2_GetPawn_ReturnValue, class UMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FunnelCharacterAIController_C", "StopAction");

	Params::ABP_FunnelCharacterAIController_C_StopAction_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.PlayDefaultAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionCompositeBase*   CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FunnelCharacterAIController_C::PlayDefaultAction(class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionCompositeBase* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FunnelCharacterAIController_C", "PlayDefaultAction");

	Params::ABP_FunnelCharacterAIController_C_PlayDefaultAction_Params Parms{};

	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FunnelCharacterAIController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FunnelCharacterAIController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FunnelCharacterAIController.BP_FunnelCharacterAIController_C.ExecuteUbergraph_BP_FunnelCharacterAIController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FunnelCharacterAIController_C::ExecuteUbergraph_BP_FunnelCharacterAIController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FunnelCharacterAIController_C", "ExecuteUbergraph_BP_FunnelCharacterAIController");

	Params::ABP_FunnelCharacterAIController_C_ExecuteUbergraph_BP_FunnelCharacterAIController_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


