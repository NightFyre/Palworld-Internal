#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C
// (None)

class UClass* UBP_AIAction_Invader_StandbyBaseCamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Invader_StandbyBaseCamp_C");

	return Clss;
}


// BP_AIAction_Invader_StandbyBaseCamp_C BP_AIAction_Invader_StandbyBaseCamp.Default__BP_AIAction_Invader_StandbyBaseCamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Invader_StandbyBaseCamp_C* UBP_AIAction_Invader_StandbyBaseCamp_C::GetDefaultObj()
{
	static class UBP_AIAction_Invader_StandbyBaseCamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Invader_StandbyBaseCamp_C*>(UBP_AIAction_Invader_StandbyBaseCamp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.SightCheckAndResponse
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAIResponseType      Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OverrideIsDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ChangeNextAction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCheatManager*            CallFunc_GetPalCheatManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAISensorComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDisableEnemyEyeSight_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       CallFunc_SightCheckAllPlayer_InSightPlayers                      (ReferenceParm)
// class APalCharacter*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_StandbyBaseCamp_C::SightCheckAndResponse(enum class EPalAIResponseType Current, bool OverrideIsDamage, bool* ChangeNextAction, class AController* CallFunc_GetController_ReturnValue, class UPalCheatManager* CallFunc_GetPalCheatManager_ReturnValue, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsDisableEnemyEyeSight_ReturnValue, TArray<class APalCharacter*>& CallFunc_SightCheckAllPlayer_InSightPlayers, class APalCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Invader_StandbyBaseCamp_C", "SightCheckAndResponse");

	Params::UBP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse_Params Parms{};

	Parms.Current = Current;
	Parms.OverrideIsDamage = OverrideIsDamage;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetPalCheatManager_ReturnValue = CallFunc_GetPalCheatManager_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsDisableEnemyEyeSight_ReturnValue = CallFunc_IsDisableEnemyEyeSight_ReturnValue;
	Parms.CallFunc_SightCheckAllPlayer_InSightPlayers = CallFunc_SightCheckAllPlayer_InSightPlayers;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ChangeNextAction != nullptr)
		*ChangeNextAction = Parms.ChangeNextAction;

}


// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.OnSquadMemberDeadEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInbfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_AIAction_Invader_StandbyBaseCamp_C::OnSquadMemberDeadEvent(const struct FPalDeadInfo& DeadInbfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Invader_StandbyBaseCamp_C", "OnSquadMemberDeadEvent");

	Params::UBP_AIAction_Invader_StandbyBaseCamp_C_OnSquadMemberDeadEvent_Params Parms{};

	Parms.DeadInbfo = DeadInbfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.SoundEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EmitLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_StandbyBaseCamp_C::SoundEvent(const struct FVector& EmitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Invader_StandbyBaseCamp_C", "SoundEvent");

	Params::UBP_AIAction_Invader_StandbyBaseCamp_C_SoundEvent_Params Parms{};

	Parms.EmitLocation = EmitLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.Fun_Damage_AIResponse
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class APalCharacter*               TempTarget                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_StandbyBaseCamp_C::Fun_Damage_AIResponse(const struct FPalDamageResult& DamageResult, class APalCharacter* TempTarget, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Invader_StandbyBaseCamp_C", "Fun_Damage_AIResponse");

	Params::UBP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse_Params Parms{};

	Parms.DamageResult = DamageResult;
	Parms.TempTarget = TempTarget;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_StandbyBaseCamp_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Invader_StandbyBaseCamp_C", "ActionTick");

	Params::UBP_AIAction_Invader_StandbyBaseCamp_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SightCheckAndResponse_ChangeNextAction                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Invader_StandbyBaseCamp_C::ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp(int32 EntryPoint, bool CallFunc_SightCheckAndResponse_ChangeNextAction, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Invader_StandbyBaseCamp_C", "ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp");

	Params::UBP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SightCheckAndResponse_ChangeNextAction = CallFunc_SightCheckAndResponse_ChangeNextAction;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


