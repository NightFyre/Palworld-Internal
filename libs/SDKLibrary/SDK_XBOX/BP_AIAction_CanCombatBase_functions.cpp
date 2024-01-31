#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C
// (None)

class UClass* UBP_AIAction_CanCombatBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_CanCombatBase_C");

	return Clss;
}


// BP_AIAction_CanCombatBase_C BP_AIAction_CanCombatBase.Default__BP_AIAction_CanCombatBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_CanCombatBase_C* UBP_AIAction_CanCombatBase_C::GetDefaultObj()
{
	static class UBP_AIAction_CanCombatBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_CanCombatBase_C*>(UBP_AIAction_CanCombatBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SelfMoveToLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Goal                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_GetPalAIController_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingRequestResultCallFunc_MoveToLocation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::SelfMoveToLocation(const struct FVector& Goal, class APalAIController* CallFunc_GetPalAIController_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "SelfMoveToLocation");

	Params::UBP_AIAction_CanCombatBase_C_SelfMoveToLocation_Params Parms{};

	Parms.Goal = Goal;
	Parms.CallFunc_GetPalAIController_ReturnValue = CallFunc_GetPalAIController_ReturnValue;
	Parms.CallFunc_MoveToLocation_ReturnValue = CallFunc_MoveToLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.IsLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Leader                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLeader_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::IsLeader(bool* Leader, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "IsLeader");

	Params::UBP_AIAction_CanCombatBase_C_IsLeader_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLeader_ReturnValue = CallFunc_IsLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Leader != nullptr)
		*Leader = Parms.Leader;

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.OnSquadMemberDeadEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInbfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TArray<class APalCharacter*>       KillerList                                                       (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AActor*                      TempKiller                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionBase*            CallFunc_SetAIActionClassParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAISensorComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_GetPalAIController_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_SelectResponseBySenses_OutTargetCharacter               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIResponseType      CallFunc_SelectResponseBySenses_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetMyPalBlackboard_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAISensorComponent*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInSightKillerAndDeadBody_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::OnSquadMemberDeadEvent(const struct FPalDeadInfo& DeadInbfo, const TArray<class APalCharacter*>& KillerList, class AActor* TempKiller, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, class APalAIController* CallFunc_GetPalAIController_ReturnValue, class APalCharacter* CallFunc_SelectResponseBySenses_OutTargetCharacter, enum class EPalAIResponseType CallFunc_SelectResponseBySenses_ReturnValue, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_3, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsInSightKillerAndDeadBody_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "OnSquadMemberDeadEvent");

	Params::UBP_AIAction_CanCombatBase_C_OnSquadMemberDeadEvent_Params Parms{};

	Parms.DeadInbfo = DeadInbfo;
	Parms.KillerList = KillerList;
	Parms.TempKiller = TempKiller;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_SetAIActionClassParameter_ReturnValue = CallFunc_SetAIActionClassParameter_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetPalAIController_ReturnValue = CallFunc_GetPalAIController_ReturnValue;
	Parms.CallFunc_SelectResponseBySenses_OutTargetCharacter = CallFunc_SelectResponseBySenses_OutTargetCharacter;
	Parms.CallFunc_SelectResponseBySenses_ReturnValue = CallFunc_SelectResponseBySenses_ReturnValue;
	Parms.CallFunc_GetMyPalBlackboard_ReturnValue = CallFunc_GetMyPalBlackboard_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsInSightKillerAndDeadBody_ReturnValue = CallFunc_IsInSightKillerAndDeadBody_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.StartFriendlyLookatMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionBase*            CallFunc_SetAIActionClassParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::StartFriendlyLookatMode(class AActor* TargetActor, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "StartFriendlyLookatMode");

	Params::UBP_AIAction_CanCombatBase_C_StartFriendlyLookatMode_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_SetAIActionClassParameter_ReturnValue = CallFunc_SetAIActionClassParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.GetLeaderPalBrackBoard
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*BB                                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_GetPalAIController_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetLeaderPalBlackboard_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::GetLeaderPalBrackBoard(class UBP_PalAIBlackboard_Common_C** BB, class APalAIController* CallFunc_GetPalAIController_ReturnValue, class UPalAIBlackboardBase* CallFunc_GetLeaderPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "GetLeaderPalBrackBoard");

	Params::UBP_AIAction_CanCombatBase_C_GetLeaderPalBrackBoard_Params Parms{};

	Parms.CallFunc_GetPalAIController_ReturnValue = CallFunc_GetPalAIController_ReturnValue;
	Parms.CallFunc_GetLeaderPalBlackboard_ReturnValue = CallFunc_GetLeaderPalBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (BB != nullptr)
		*BB = Parms.BB;

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.Fun_Damage_AIResponse
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class APalCharacter*               TempTargetActor                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       AttackerList                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAISensorComponent*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_SelectResponseBySenses_OutTargetCharacter               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIResponseType      CallFunc_SelectResponseBySenses_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::Fun_Damage_AIResponse(const struct FPalDamageResult& DamageResult, class APalCharacter* TempTargetActor, const TArray<class APalCharacter*>& AttackerList, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APalCharacter* CallFunc_SelectResponseBySenses_OutTargetCharacter, enum class EPalAIResponseType CallFunc_SelectResponseBySenses_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "Fun_Damage_AIResponse");

	Params::UBP_AIAction_CanCombatBase_C_Fun_Damage_AIResponse_Params Parms{};

	Parms.DamageResult = DamageResult;
	Parms.TempTargetActor = TempTargetActor;
	Parms.AttackerList = AttackerList;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_SelectResponseBySenses_OutTargetCharacter = CallFunc_SelectResponseBySenses_OutTargetCharacter;
	Parms.CallFunc_SelectResponseBySenses_ReturnValue = CallFunc_SelectResponseBySenses_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SearchDeadEdibleBody
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChangeNextAction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TempTarget                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionBase*            CallFunc_SetAIActionClassParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAISensorComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       CallFunc_SightCheckAllEdibleDeadNPC_InSightCharacters            (ReferenceParm)
// class APalCharacter*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::SearchDeadEdibleBody(bool* ChangeNextAction, class AActor* TempTarget, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, TArray<class APalCharacter*>& CallFunc_SightCheckAllEdibleDeadNPC_InSightCharacters, class APalCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "SearchDeadEdibleBody");

	Params::UBP_AIAction_CanCombatBase_C_SearchDeadEdibleBody_Params Parms{};

	Parms.TempTarget = TempTarget;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_SetAIActionClassParameter_ReturnValue = CallFunc_SetAIActionClassParameter_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_SightCheckAllEdibleDeadNPC_InSightCharacters = CallFunc_SightCheckAllEdibleDeadNPC_InSightCharacters;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ChangeNextAction != nullptr)
		*ChangeNextAction = Parms.ChangeNextAction;

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SightCheckAndResponse
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAIResponseType      Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OverrideIsDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ChangeNextAction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       TempTargetList                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AActor*                      TempTarget                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SightCheck_Target                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIResponseType      CallFunc_SightCheck_ResponseType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SightResponse_ChangeNextAction                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::SightCheckAndResponse(enum class EPalAIResponseType Current, bool OverrideIsDamage, bool* ChangeNextAction, const TArray<class APalCharacter*>& TempTargetList, class AActor* TempTarget, class AActor* CallFunc_SightCheck_Target, enum class EPalAIResponseType CallFunc_SightCheck_ResponseType, bool CallFunc_SightResponse_ChangeNextAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "SightCheckAndResponse");

	Params::UBP_AIAction_CanCombatBase_C_SightCheckAndResponse_Params Parms{};

	Parms.Current = Current;
	Parms.OverrideIsDamage = OverrideIsDamage;
	Parms.TempTargetList = TempTargetList;
	Parms.TempTarget = TempTarget;
	Parms.CallFunc_SightCheck_Target = CallFunc_SightCheck_Target;
	Parms.CallFunc_SightCheck_ResponseType = CallFunc_SightCheck_ResponseType;
	Parms.CallFunc_SightResponse_ChangeNextAction = CallFunc_SightResponse_ChangeNextAction;

	UObject::ProcessEvent(Func, &Parms);

	if (ChangeNextAction != nullptr)
		*ChangeNextAction = Parms.ChangeNextAction;

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SightResponse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIResponseType      ResponseType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ChangeNextAction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::SightResponse(class AActor* Target, enum class EPalAIResponseType ResponseType, bool* ChangeNextAction, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "SightResponse");

	Params::UBP_AIAction_CanCombatBase_C_SightResponse_Params Parms{};

	Parms.Target = Target;
	Parms.ResponseType = ResponseType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ChangeNextAction != nullptr)
		*ChangeNextAction = Parms.ChangeNextAction;

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SightCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAIResponseType      CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OverrideIsDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIResponseType      ResponseType                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       TempTargetList                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class APalCharacter*>       CallFunc_SightCheckAllPlayer_InSightPlayers                      (ReferenceParm)
// TArray<class APalCharacter*>       CallFunc_SightCheckAllAliveNPC_InSightCharacters                 (ReferenceParm)
// class APalCharacter*               CallFunc_SelectResponseBySenses_OutTargetCharacter               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIResponseType      CallFunc_SelectResponseBySenses_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCheatManager*            CallFunc_GetPalCheatManager_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDisableEnemyEyeSight_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::SightCheck(enum class EPalAIResponseType CurrentState, bool OverrideIsDamage, class AActor** Target, enum class EPalAIResponseType* ResponseType, const TArray<class APalCharacter*>& TempTargetList, TArray<class APalCharacter*>& CallFunc_SightCheckAllPlayer_InSightPlayers, TArray<class APalCharacter*>& CallFunc_SightCheckAllAliveNPC_InSightCharacters, class APalCharacter* CallFunc_SelectResponseBySenses_OutTargetCharacter, enum class EPalAIResponseType CallFunc_SelectResponseBySenses_ReturnValue, class UPalCheatManager* CallFunc_GetPalCheatManager_ReturnValue, bool CallFunc_IsDisableEnemyEyeSight_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "SightCheck");

	Params::UBP_AIAction_CanCombatBase_C_SightCheck_Params Parms{};

	Parms.CurrentState = CurrentState;
	Parms.OverrideIsDamage = OverrideIsDamage;
	Parms.TempTargetList = TempTargetList;
	Parms.CallFunc_SightCheckAllPlayer_InSightPlayers = CallFunc_SightCheckAllPlayer_InSightPlayers;
	Parms.CallFunc_SightCheckAllAliveNPC_InSightCharacters = CallFunc_SightCheckAllAliveNPC_InSightCharacters;
	Parms.CallFunc_SelectResponseBySenses_OutTargetCharacter = CallFunc_SelectResponseBySenses_OutTargetCharacter;
	Parms.CallFunc_SelectResponseBySenses_ReturnValue = CallFunc_SelectResponseBySenses_ReturnValue;
	Parms.CallFunc_GetPalCheatManager_ReturnValue = CallFunc_GetPalCheatManager_ReturnValue;
	Parms.CallFunc_IsDisableEnemyEyeSight_ReturnValue = CallFunc_IsDisableEnemyEyeSight_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

	if (ResponseType != nullptr)
		*ResponseType = Parms.ResponseType;

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.GetLeader
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*               Leader                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_GetPalAIController_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSquadLeader_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::GetLeader(class APalCharacter** Leader, class APalAIController* CallFunc_GetPalAIController_ReturnValue, class APalCharacter* CallFunc_GetSquadLeader_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "GetLeader");

	Params::UBP_AIAction_CanCombatBase_C_GetLeader_Params Parms{};

	Parms.CallFunc_GetPalAIController_ReturnValue = CallFunc_GetPalAIController_ReturnValue;
	Parms.CallFunc_GetSquadLeader_ReturnValue = CallFunc_GetSquadLeader_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Leader != nullptr)
		*Leader = Parms.Leader;

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.GetSelfPalBlackBoard
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*PalBlackBoard                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_GetPalAIController_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetMyPalBlackboard_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::GetSelfPalBlackBoard(class UBP_PalAIBlackboard_Common_C** PalBlackBoard, class APalAIController* CallFunc_GetPalAIController_ReturnValue, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "GetSelfPalBlackBoard");

	Params::UBP_AIAction_CanCombatBase_C_GetSelfPalBlackBoard_Params Parms{};

	Parms.CallFunc_GetPalAIController_ReturnValue = CallFunc_GetPalAIController_ReturnValue;
	Parms.CallFunc_GetMyPalBlackboard_ReturnValue = CallFunc_GetMyPalBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PalBlackBoard != nullptr)
		*PalBlackBoard = Parms.PalBlackBoard;

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SoundEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EmitLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::SoundEvent(const struct FVector& EmitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "SoundEvent");

	Params::UBP_AIAction_CanCombatBase_C_SoundEvent_Params Parms{};

	Parms.EmitLocation = EmitLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.DamageEventToCombatMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::DamageEventToCombatMode(const struct FPalDamageResult& DamageResult, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "DamageEventToCombatMode");

	Params::UBP_AIAction_CanCombatBase_C_DamageEventToCombatMode_Params Parms{};

	Parms.DamageResult = DamageResult;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue = CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetBattleManager_ReturnValue_1 = CallFunc_GetBattleManager_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.StartEscapeMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionBase*            CallFunc_SetAIActionClassParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::StartEscapeMode(class AActor* TargetActor, class AController* CallFunc_GetController_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "StartEscapeMode");

	Params::UBP_AIAction_CanCombatBase_C_StartEscapeMode_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_SetAIActionClassParameter_ReturnValue = CallFunc_SetAIActionClassParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.StartWarningMode
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AttentionLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionBase*            CallFunc_SetAIActionClassParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::StartWarningMode(const struct FVector& AttentionLocation, class AController* CallFunc_GetController_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "StartWarningMode");

	Params::UBP_AIAction_CanCombatBase_C_StartWarningMode_Params Parms{};

	Parms.AttentionLocation = AttentionLocation;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_SetAIActionClassParameter_ReturnValue = CallFunc_SetAIActionClassParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.StartCombatMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionBase*            CallFunc_SetAIActionClassParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::StartCombatMode(class AActor* TargetActor, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, class APalAIController* K2Node_DynamicCast_AsPal_AIController_1, bool K2Node_DynamicCast_bSuccess_2, class AController* CallFunc_GetController_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "StartCombatMode");

	Params::UBP_AIAction_CanCombatBase_C_StartCombatMode_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_SetAIActionClassParameter_ReturnValue = CallFunc_SetAIActionClassParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue = CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_AIController_1 = K2Node_DynamicCast_AsPal_AIController_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "ActionResume");

	Params::UBP_AIAction_CanCombatBase_C_ActionResume_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "ActionStart");

	Params::UBP_AIAction_CanCombatBase_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "ActionPause");

	Params::UBP_AIAction_CanCombatBase_C_ActionPause_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "ActionFinished");

	Params::UBP_AIAction_CanCombatBase_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "ActionAbort");

	Params::UBP_AIAction_CanCombatBase_C_ActionAbort_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ExecuteUbergraph_BP_AIAction_CanCombatBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAISensorComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAISensorComponent*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSquadBehaviour_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSquad*                   CallFunc_GetSquad_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSquadBehaviour_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSquad*                   CallFunc_GetSquad_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_6                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAISensorComponent*       CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CanCombatBase_C::ExecuteUbergraph_BP_AIAction_CanCombatBase(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class APawn* K2Node_Event_ControlledPawn_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* K2Node_Event_ControlledPawn_4, class AController* CallFunc_GetController_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue_3, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsSquadBehaviour_ReturnValue, class UPalSquad* CallFunc_GetSquad_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AController* CallFunc_GetController_ReturnValue_4, class APalAIController* K2Node_DynamicCast_AsPal_AIController_1, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_5, bool CallFunc_GetIsSquadBehaviour_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalSquad* CallFunc_GetSquad_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_6, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_CanCombatBase_C", "ExecuteUbergraph_BP_AIAction_CanCombatBase");

	Params::UBP_AIAction_CanCombatBase_C_ExecuteUbergraph_BP_AIAction_CanCombatBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_ControlledPawn_3 = K2Node_Event_ControlledPawn_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_ControlledPawn_4 = K2Node_Event_ControlledPawn_4;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsSquadBehaviour_ReturnValue = CallFunc_GetIsSquadBehaviour_ReturnValue;
	Parms.CallFunc_GetSquad_ReturnValue = CallFunc_GetSquad_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetController_ReturnValue_4 = CallFunc_GetController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsPal_AIController_1 = K2Node_DynamicCast_AsPal_AIController_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetController_ReturnValue_5 = CallFunc_GetController_ReturnValue_5;
	Parms.CallFunc_GetIsSquadBehaviour_ReturnValue_1 = CallFunc_GetIsSquadBehaviour_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetSquad_ReturnValue_1 = CallFunc_GetSquad_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_6 = CallFunc_GetController_ReturnValue_6;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


