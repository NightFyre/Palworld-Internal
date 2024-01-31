#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C
// (Actor)

class UClass* ABP_MonsterAIController_Invader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MonsterAIController_Invader_C");

	return Clss;
}


// BP_MonsterAIController_Invader_C BP_MonsterAIController_Invader.Default__BP_MonsterAIController_Invader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MonsterAIController_Invader_C* ABP_MonsterAIController_Invader_C::GetDefaultObj()
{
	static class ABP_MonsterAIController_Invader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MonsterAIController_Invader_C*>(ABP_MonsterAIController_Invader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.GetMyBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*PalBrackboard                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetMyPalBlackboard_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::GetMyBB(class UBP_PalAIBlackboard_Common_C** PalBrackboard, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "GetMyBB");

	Params::ABP_MonsterAIController_Invader_C_GetMyBB_Params Parms{};

	Parms.CallFunc_GetMyPalBlackboard_ReturnValue = CallFunc_GetMyPalBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PalBrackboard != nullptr)
		*PalBrackboard = Parms.PalBrackboard;

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.GetLeaderBB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*LeaderPalBrackboard                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetLeaderPalBlackboard_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderPalBrackboard, class UPalAIBlackboardBase* CallFunc_GetLeaderPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "GetLeaderBB");

	Params::ABP_MonsterAIController_Invader_C_GetLeaderBB_Params Parms{};

	Parms.CallFunc_GetLeaderPalBlackboard_ReturnValue = CallFunc_GetLeaderPalBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderPalBrackboard != nullptr)
		*LeaderPalBrackboard = Parms.LeaderPalBrackboard;

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.ReturnSpawnedPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     GoalLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::ReturnSpawnedPoint(const struct FVector& GoalLocation, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "ReturnSpawnedPoint");

	Params::ABP_MonsterAIController_Invader_C_ReturnSpawnedPoint_Params Parms{};

	Parms.GoalLocation = GoalLocation;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.StartMartch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     GoalPosition                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter_1                  (NoDestructor)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::StartMartch(const struct FVector& GoalPosition, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter_1, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "StartMartch");

	Params::ABP_MonsterAIController_Invader_C_StartMartch_Params Parms{};

	Parms.GoalPosition = GoalPosition;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter_1 = K2Node_MakeStruct_PalAIActionDynamicParameter_1;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_SetActionClassParameter_ReturnValue_1 = CallFunc_SetActionClassParameter_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     BaseCampPos                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::Setup(const struct FVector& BaseCampPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "Setup");

	Params::ABP_MonsterAIController_Invader_C_Setup_Params Parms{};

	Parms.BaseCampPos = BaseCampPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "ReceivePossess");

	Params::ABP_MonsterAIController_Invader_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.«¹¿à¤ÙóÈ_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               InCharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::_________1(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "«¹¿à¤ÙóÈ_1");

	Params::ABP_MonsterAIController_Invader_C__________1_Params Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.«¹¿à¤ÙóÈ_OnDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_MonsterAIController_Invader_C::_________OnDead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "«¹¿à¤ÙóÈ_OnDead");

	Params::ABP_MonsterAIController_Invader_C__________OnDead_Params Parms{};

	Parms.DeadInfo = DeadInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.OnInvaderArrived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_Invader_C::OnInvaderArrived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "OnInvaderArrived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.BindOnInvaderArrivedDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::BindOnInvaderArrivedDelegate(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "BindOnInvaderArrivedDelegate");

	Params::ABP_MonsterAIController_Invader_C_BindOnInvaderArrivedDelegate_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.ExecuteUbergraph_BP_MonsterAIController_Invader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_Event_Event                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_InCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterOnCompleteInitializeParameterWrapper*CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDeadInfo                K2Node_CustomEvent_DeadInfo                                      (NoDestructor)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MonsterAIController_Invader_C::ExecuteUbergraph_BP_MonsterAIController_Invader(int32 EntryPoint, FDelegateProperty_ K2Node_Event_Event, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* K2Node_Event_PossessedPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* K2Node_CustomEvent_InCharacter, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "ExecuteUbergraph_BP_MonsterAIController_Invader");

	Params::ABP_MonsterAIController_Invader_C_ExecuteUbergraph_BP_MonsterAIController_Invader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Event = K2Node_Event_Event;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_InCharacter = K2Node_CustomEvent_InCharacter;
	Parms.CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue = CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_CustomEvent_DeadInfo = K2Node_CustomEvent_DeadInfo;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MonsterAIController_Invader.BP_MonsterAIController_Invader_C.OnInvaderArrivedDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MonsterAIController_Invader_C::OnInvaderArrivedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MonsterAIController_Invader_C", "OnInvaderArrivedDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


