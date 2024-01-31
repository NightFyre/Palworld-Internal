#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPCAIController.BP_NPCAIController_C
// (Actor)

class UClass* ABP_NPCAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPCAIController_C");

	return Clss;
}


// BP_NPCAIController_C BP_NPCAIController.Default__BP_NPCAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPCAIController_C* ABP_NPCAIController_C::GetDefaultObj()
{
	static class ABP_NPCAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPCAIController_C*>(ABP_NPCAIController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPCAIController.BP_NPCAIController_C.GetMyBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*PalBrackboard                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetMyPalBlackboard_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "GetMyBB");

	Params::ABP_NPCAIController_C_GetMyBB_Params Parms{};

	Parms.CallFunc_GetMyPalBlackboard_ReturnValue = CallFunc_GetMyPalBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PalBrackboard != nullptr)
		*PalBrackboard = Parms.PalBrackboard;

}


// Function BP_NPCAIController.BP_NPCAIController_C.GetLeaderBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*LeaderPalBrackboard                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetLeaderPalBlackboard_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard, class UPalAIBlackboardBase* CallFunc_GetLeaderPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "GetLeaderBB");

	Params::ABP_NPCAIController_C_GetLeaderBB_Params Parms{};

	Parms.CallFunc_GetLeaderPalBlackboard_ReturnValue = CallFunc_GetLeaderPalBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderPalBrackboard != nullptr)
		*LeaderPalBrackboard = Parms.LeaderPalBrackboard;

}


// Function BP_NPCAIController.BP_NPCAIController_C.ForceBattleStartToTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ForceBattleStartToTarget(class AActor* TargetActor, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, bool CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "ForceBattleStartToTarget");

	Params::ABP_NPCAIController_C_ForceBattleStartToTarget_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;
	Parms.CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue = CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.IsSleeping
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSleep                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::IsSleeping(bool* IsSleep, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "IsSleeping");

	Params::ABP_NPCAIController_C_IsSleeping_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSleep != nullptr)
		*IsSleep = Parms.IsSleep;

}


// Function BP_NPCAIController.BP_NPCAIController_C.ForceEscapeStartFortOutSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      StartActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSleeping_IsSleep                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ForceEscapeStartFortOutSide(class AActor* StartActor, class AActor* TargetActor, bool CallFunc_IsSleeping_IsSleep, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "ForceEscapeStartFortOutSide");

	Params::ABP_NPCAIController_C_ForceEscapeStartFortOutSide_Params Parms{};

	Parms.StartActor = StartActor;
	Parms.TargetActor = TargetActor;
	Parms.CallFunc_IsSleeping_IsSleep = CallFunc_IsSleeping_IsSleep;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.TalkEnd_Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SelfActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnAction*                 CallFunc_GetCurrentAction_BP_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_Talking_C*  K2Node_DynamicCast_AsBP_AIAction_NPC_Talking                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::TalkEnd_Func(class AActor* SelfActor, class AActor* TargetActor, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPawnAction* CallFunc_GetCurrentAction_BP_ReturnValue, class UBP_AIAction_NPC_Talking_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Talking, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "TalkEnd_Func");

	Params::ABP_NPCAIController_C_TalkEnd_Func_Params Parms{};

	Parms.SelfActor = SelfActor;
	Parms.TargetActor = TargetActor;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentAction_BP_ReturnValue = CallFunc_GetCurrentAction_BP_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AIAction_NPC_Talking = K2Node_DynamicCast_AsBP_AIAction_NPC_Talking;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.TalkStart_Func
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SelfActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawnAction*                 CallFunc_GetCurrentAction_BP_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_Talking_C*  K2Node_DynamicCast_AsBP_AIAction_NPC_Talking                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsTalking_IsTalking                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::TalkStart_Func(class AActor* SelfActor, class AActor* TargetActor, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UPawnAction* CallFunc_GetCurrentAction_BP_ReturnValue, class UBP_AIAction_NPC_Talking_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Talking, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsTalking_IsTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "TalkStart_Func");

	Params::ABP_NPCAIController_C_TalkStart_Func_Params Parms{};

	Parms.SelfActor = SelfActor;
	Parms.TargetActor = TargetActor;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;
	Parms.CallFunc_GetCurrentAction_BP_ReturnValue = CallFunc_GetCurrentAction_BP_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AIAction_NPC_Talking = K2Node_DynamicCast_AsBP_AIAction_NPC_Talking;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsTalking_IsTalking = CallFunc_GetIsTalking_IsTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.ForceBattleStartForOutside
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      StartActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSleeping_IsSleep                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_CopyTargetFromOtherAI_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ForceBattleStartForOutside(class AActor* StartActor, bool CallFunc_IsSleeping_IsSleep, class AActor* CallFunc_CopyTargetFromOtherAI_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "ForceBattleStartForOutside");

	Params::ABP_NPCAIController_C_ForceBattleStartForOutside_Params Parms{};

	Parms.StartActor = StartActor;
	Parms.CallFunc_IsSleeping_IsSleep = CallFunc_IsSleeping_IsSleep;
	Parms.CallFunc_CopyTargetFromOtherAI_ReturnValue = CallFunc_CopyTargetFromOtherAI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.StartEscapeMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ByOutSide                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::StartEscapeMode(class AActor* TargetActor, bool ByOutSide, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "StartEscapeMode");

	Params::ABP_NPCAIController_C_StartEscapeMode_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.ByOutSide = ByOutSide;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.SetAutoDefaultAIAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::SetAutoDefaultAIAction(bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "SetAutoDefaultAIAction");

	Params::ABP_NPCAIController_C_SetAutoDefaultAIAction_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.SetSpawnedInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SpawnerLoc                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnRadius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_NPC_PathWalkArray        PathWalk                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        Otomo                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetMyBB_PalBrackboard                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::SetSpawnedInfo(const struct FVector& SpawnerLoc, double ReturnRadius, const struct FF_NPC_PathWalkArray& PathWalk, class FName Otomo, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "SetSpawnedInfo");

	Params::ABP_NPCAIController_C_SetSpawnedInfo_Params Parms{};

	Parms.SpawnerLoc = SpawnerLoc;
	Parms.ReturnRadius = ReturnRadius;
	Parms.PathWalk = PathWalk;
	Parms.Otomo = Otomo;
	Parms.CallFunc_GetMyBB_PalBrackboard = CallFunc_GetMyBB_PalBrackboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.ReturnToTerritory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ReturnToTerritory(class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "ReturnToTerritory");

	Params::ABP_NPCAIController_C_ReturnToTerritory_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.StartCombatMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TempEscapeTarget                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UPalAIActionBase>CallFunc_GetCombatClass_ReturnValue                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::StartCombatMode(class AActor* TempEscapeTarget, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, TSubclassOf<class UPalAIActionBase> CallFunc_GetCombatClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "StartCombatMode");

	Params::ABP_NPCAIController_C_StartCombatMode_Params Parms{};

	Parms.TempEscapeTarget = TempEscapeTarget;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_GetCombatClass_ReturnValue = CallFunc_GetCombatClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.GetWeaponHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalNPCAIWeaponHandle*       WeaponHandle                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::GetWeaponHandle(class UPalNPCAIWeaponHandle** WeaponHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "GetWeaponHandle");

	Params::ABP_NPCAIController_C_GetWeaponHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponHandle != nullptr)
		*WeaponHandle = Parms.WeaponHandle;

}


// Function BP_NPCAIController.BP_NPCAIController_C.SetupWeaponHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*              Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::SetupWeaponHandle(class APalWeaponBase* Weapon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "SetupWeaponHandle");

	Params::ABP_NPCAIController_C_SetupWeaponHandle_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.StartDefaultAIAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_NPC_Relax_PathWalk_C*K2Node_DynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::StartDefaultAIAction(class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UBP_AIAction_NPC_Relax_PathWalk_C* K2Node_DynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "StartDefaultAIAction");

	Params::ABP_NPCAIController_C_StartDefaultAIAction_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk = K2Node_DynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.OverrideDefaultAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DefaultAction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::OverrideDefaultAction(class UClass* DefaultAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "OverrideDefaultAction");

	Params::ABP_NPCAIController_C_OverrideDefaultAction_Params Parms{};

	Parms.DefaultAction = DefaultAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.CreateOtomo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_C::CreateOtomo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "CreateOtomo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController.BP_NPCAIController_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_NPCAIController_C::_________0(const struct FPalInstanceID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "«¹¿à¤ÙóÈ_0");

	Params::ABP_NPCAIController_C__________0_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.«¹¿à¤ÙóÈ_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 HolderController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               OtomoPal                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::_________4(class AController* HolderController, class APalCharacter* OtomoPal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "«¹¿à¤ÙóÈ_4");

	Params::ABP_NPCAIController_C__________4_Params Parms{};

	Parms.HolderController = HolderController;
	Parms.OtomoPal = OtomoPal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController.BP_NPCAIController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "ReceiveTick");

	Params::ABP_NPCAIController_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "ReceivePossess");

	Params::ABP_NPCAIController_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.SetupAI_BP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_C::SetupAI_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "SetupAI_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController.BP_NPCAIController_C.OnShootDeclementBullet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_C::OnShootDeclementBullet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "OnShootDeclementBullet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController.BP_NPCAIController_C.GoBack_Teritory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_C::GoBack_Teritory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "GoBack_Teritory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController.BP_NPCAIController_C.«¹¿à¤ÙóÈ_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_C::_________1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "«¹¿à¤ÙóÈ_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController.BP_NPCAIController_C.«¹¿à¤ÙóÈ_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_NPCAIController_C::_________2(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "«¹¿à¤ÙóÈ_2");

	Params::ABP_NPCAIController_C__________2_Params Parms{};

	Parms.DeadInfo = DeadInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "ReceiveEndPlay");

	Params::ABP_NPCAIController_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.OnNpcTalkIncidentNotify
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIncidentNotifyListener*  Listener                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalIncidentState       IncidentState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalIncidentNotifyParameter Parameter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_NPCAIController_C::OnNpcTalkIncidentNotify(class UPalIncidentNotifyListener* Listener, enum class EPalIncidentState IncidentState, struct FPalIncidentNotifyParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "OnNpcTalkIncidentNotify");

	Params::ABP_NPCAIController_C_OnNpcTalkIncidentNotify_Params Parms{};

	Parms.Listener = Listener;
	Parms.IncidentState = IncidentState;
	Parms.Parameter = Parameter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.NotifyTalkStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         TalkPlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::NotifyTalkStart(class APalPlayerCharacter* TalkPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "NotifyTalkStart");

	Params::ABP_NPCAIController_C_NotifyTalkStart_Params Parms{};

	Parms.TalkPlayer = TalkPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.NotifyTalkEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         TalkPlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::NotifyTalkEnd(class APalPlayerCharacter* TalkPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "NotifyTalkEnd");

	Params::ABP_NPCAIController_C_NotifyTalkEnd_Params Parms{};

	Parms.TalkPlayer = TalkPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController.BP_NPCAIController_C.ExecuteUbergraph_BP_NPCAIController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_Event_TalkPlayer                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalIncidentNotifyListener_NPCTalk_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_MakeStruct_Guid                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              K2Node_CustomEvent_ID                                            (HasGetValueTypeHash)
// class UPalCharacterManager*        CallFunc_GetCharacterManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetIndividualHandle_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddOtomoHandleToFreeSlot_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SynchronizedGroup_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_HolderController                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_OtomoPal                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalIndividualCharacterSaveParameterCallFunc_GetInitializedCharacterSaveParemter_outParameter        (None)
// bool                               CallFunc_GetInitializedCharacterSaveParemter_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSquad*                   CallFunc_GetSquad_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalInstanceID              CallFunc_GetIndividualID_ReturnValue                             (HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_NPCAIWeaponHandle_C*     CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEndInitialize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_5                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalWeaponType          CallFunc_GetWeaponType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalDeadInfo                K2Node_CustomEvent_DeadInfo                                      (NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_6                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSquad*                   CallFunc_GetSquad_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSquadBehaviour_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSquadBehaviour_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSquad*                   CallFunc_GetSquad_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetMyBB_PalBrackboard                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_7                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_CreateIndividual_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentNotifyListener*  K2Node_CustomEvent_Listener                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalIncidentState       K2Node_CustomEvent_IncidentState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalIncidentNotifyParameter K2Node_CustomEvent_Parameter                                     (ConstParm, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIncidentDynamicParameter*CallFunc_GetDynamicParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_8                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSquad*                   CallFunc_GetSquad_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSquad*                   CallFunc_GetSquad_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_Event_TalkPlayer_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_C::ExecuteUbergraph_BP_NPCAIController(int32 EntryPoint, class APalPlayerCharacter* K2Node_Event_TalkPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_PalIncidentNotifyListener_NPCTalk_C* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, const struct FGuid& K2Node_MakeStruct_Guid, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, const struct FPalInstanceID& K2Node_CustomEvent_ID, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_GetIndividualHandle_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_AddOtomoHandleToFreeSlot_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_SynchronizedGroup_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_GetLevel_ReturnValue, class AController* K2Node_CustomEvent_HolderController, class APalCharacter* K2Node_CustomEvent_OtomoPal, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetInitializedCharacterSaveParemter_outParameter, bool CallFunc_GetInitializedCharacterSaveParemter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalSquad* CallFunc_GetSquad_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UBP_NPCAIWeaponHandle_C* CallFunc_SpawnObject_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, bool CallFunc_IsEndInitialize_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class FName CallFunc_GetCharacterID_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_5, enum class EPalWeaponType CallFunc_GetWeaponType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class APawn* CallFunc_K2_GetPawn_ReturnValue_6, class UPalSquad* CallFunc_GetSquad_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsSquadBehaviour_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsSquadBehaviour_ReturnValue_1, class UPalSquad* CallFunc_GetSquad_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPalIndividualCharacterHandle* CallFunc_CreateIndividual_ReturnValue, class UPalIncidentNotifyListener* K2Node_CustomEvent_Listener, enum class EPalIncidentState K2Node_CustomEvent_IncidentState, const struct FPalIncidentNotifyParameter& K2Node_CustomEvent_Parameter, bool K2Node_SwitchEnum_CmpSuccess, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_8, class UPalSquad* CallFunc_GetSquad_ReturnValue_3, class UPalSquad* CallFunc_GetSquad_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsDedicatedServer_ReturnValue, class APalPlayerCharacter* K2Node_Event_TalkPlayer_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_C", "ExecuteUbergraph_BP_NPCAIController");

	Params::ABP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TalkPlayer = K2Node_Event_TalkPlayer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_MakeStruct_Guid = K2Node_MakeStruct_Guid;
	Parms.CallFunc_GetCharacterManager_ReturnValue = CallFunc_GetCharacterManager_ReturnValue;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.CallFunc_GetCharacterManager_ReturnValue_1 = CallFunc_GetCharacterManager_ReturnValue_1;
	Parms.CallFunc_GetIndividualHandle_ReturnValue = CallFunc_GetIndividualHandle_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_AddOtomoHandleToFreeSlot_ReturnValue = CallFunc_AddOtomoHandleToFreeSlot_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_SynchronizedGroup_ReturnValue = CallFunc_SynchronizedGroup_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.K2Node_CustomEvent_HolderController = K2Node_CustomEvent_HolderController;
	Parms.K2Node_CustomEvent_OtomoPal = K2Node_CustomEvent_OtomoPal;
	Parms.CallFunc_GetInitializedCharacterSaveParemter_outParameter = CallFunc_GetInitializedCharacterSaveParemter_outParameter;
	Parms.CallFunc_GetInitializedCharacterSaveParemter_ReturnValue = CallFunc_GetInitializedCharacterSaveParemter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSquad_ReturnValue = CallFunc_GetSquad_ReturnValue;
	Parms.CallFunc_GetIndividualID_ReturnValue = CallFunc_GetIndividualID_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_IsEndInitialize_ReturnValue = CallFunc_IsEndInitialize_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.CallFunc_K2_GetPawn_ReturnValue_5 = CallFunc_K2_GetPawn_ReturnValue_5;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_5 = CallFunc_GetComponentByClass_ReturnValue_5;
	Parms.CallFunc_GetWeaponType_ReturnValue = CallFunc_GetWeaponType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_DeadInfo = K2Node_CustomEvent_DeadInfo;
	Parms.CallFunc_K2_GetPawn_ReturnValue_6 = CallFunc_K2_GetPawn_ReturnValue_6;
	Parms.CallFunc_GetSquad_ReturnValue_1 = CallFunc_GetSquad_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIsSquadBehaviour_ReturnValue = CallFunc_GetIsSquadBehaviour_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetIsSquadBehaviour_ReturnValue_1 = CallFunc_GetIsSquadBehaviour_ReturnValue_1;
	Parms.CallFunc_GetSquad_ReturnValue_2 = CallFunc_GetSquad_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetMyBB_PalBrackboard = CallFunc_GetMyBB_PalBrackboard;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_7 = CallFunc_K2_GetPawn_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_CreateIndividual_ReturnValue = CallFunc_CreateIndividual_ReturnValue;
	Parms.K2Node_CustomEvent_Listener = K2Node_CustomEvent_Listener;
	Parms.K2Node_CustomEvent_IncidentState = K2Node_CustomEvent_IncidentState;
	Parms.K2Node_CustomEvent_Parameter = K2Node_CustomEvent_Parameter;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDynamicParameter_ReturnValue = CallFunc_GetDynamicParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_8 = CallFunc_K2_GetPawn_ReturnValue_8;
	Parms.CallFunc_GetSquad_ReturnValue_3 = CallFunc_GetSquad_ReturnValue_3;
	Parms.CallFunc_GetSquad_ReturnValue_4 = CallFunc_GetSquad_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_TalkPlayer_1 = K2Node_Event_TalkPlayer_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


