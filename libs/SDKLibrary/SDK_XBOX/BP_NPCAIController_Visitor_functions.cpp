#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C
// (Actor)

class UClass* ABP_NPCAIController_Visitor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPCAIController_Visitor_C");

	return Clss;
}


// BP_NPCAIController_Visitor_C BP_NPCAIController_Visitor.Default__BP_NPCAIController_Visitor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPCAIController_Visitor_C* ABP_NPCAIController_Visitor_C::GetDefaultObj()
{
	static class ABP_NPCAIController_Visitor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPCAIController_Visitor_C*>(ABP_NPCAIController_Visitor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.FindTargetPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             MinLength                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       CallFunc_GetAllPlayerCharacters_OutPlayers                       (ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Visitor_C::FindTargetPlayer(class AActor** TargetActor, double MinLength, class AActor* Target, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<class APalCharacter*>& CallFunc_GetAllPlayerCharacters_OutPlayers, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "FindTargetPlayer");

	Params::ABP_NPCAIController_Visitor_C_FindTargetPlayer_Params Parms{};

	Parms.MinLength = MinLength;
	Parms.Target = Target;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAllPlayerCharacters_OutPlayers = CallFunc_GetAllPlayerCharacters_OutPlayers;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.StartRaid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_FindTargetPlayer_TargetActor                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Visitor_C::StartRaid(class AActor* CallFunc_FindTargetPlayer_TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "StartRaid");

	Params::ABP_NPCAIController_Visitor_C_StartRaid_Params Parms{};

	Parms.CallFunc_FindTargetPlayer_TargetActor = CallFunc_FindTargetPlayer_TargetActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.StartReturnToSpawnedPointAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetMyBB_PalBrackboard                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Visitor_C::StartReturnToSpawnedPointAction(class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "StartReturnToSpawnedPointAction");

	Params::ABP_NPCAIController_Visitor_C_StartReturnToSpawnedPointAction_Params Parms{};

	Parms.CallFunc_GetMyBB_PalBrackboard = CallFunc_GetMyBB_PalBrackboard;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.StartWaitAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_Visitor_WaitInBaseCamp_C*K2Node_DynamicCast_AsBP_AIAction_Visitor_Wait_in_Base_Camp       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Visitor_C::StartWaitAction(class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UBP_AIAction_Visitor_WaitInBaseCamp_C* K2Node_DynamicCast_AsBP_AIAction_Visitor_Wait_in_Base_Camp, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "StartWaitAction");

	Params::ABP_NPCAIController_Visitor_C_StartWaitAction_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AIAction_Visitor_Wait_in_Base_Camp = K2Node_DynamicCast_AsBP_AIAction_Visitor_Wait_in_Base_Camp;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.StartDefaultAIAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_Visitor_TravelToBaseCamp_C*K2Node_DynamicCast_AsBP_AIAction_Visitor_Travel_to_Base_Camp     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Visitor_C::StartDefaultAIAction(const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UBP_AIAction_Visitor_TravelToBaseCamp_C* K2Node_DynamicCast_AsBP_AIAction_Visitor_Travel_to_Base_Camp, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "StartDefaultAIAction");

	Params::ABP_NPCAIController_Visitor_C_StartDefaultAIAction_Params Parms{};

	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AIAction_Visitor_Travel_to_Base_Camp = K2Node_DynamicCast_AsBP_AIAction_Visitor_Travel_to_Base_Camp;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_Visitor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.BindArriveEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_AIAction_Visitor_TravelToBaseCamp_C*Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Visitor_C::BindArriveEvent(class UBP_AIAction_Visitor_TravelToBaseCamp_C* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "BindArriveEvent");

	Params::ABP_NPCAIController_Visitor_C_BindArriveEvent_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.OnArrivedTargetPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_Visitor_C::OnArrivedTargetPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "OnArrivedTargetPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.BindWaitFinishEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_AIAction_Visitor_WaitInBaseCamp_C*Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Visitor_C::BindWaitFinishEvent(class UBP_AIAction_Visitor_WaitInBaseCamp_C* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "BindWaitFinishEvent");

	Params::ABP_NPCAIController_Visitor_C_BindWaitFinishEvent_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.OnWaitFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_Visitor_C::OnWaitFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "OnWaitFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.OnStuck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_Visitor_C::OnStuck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "OnStuck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController_Visitor.BP_NPCAIController_Visitor_C.ExecuteUbergraph_BP_NPCAIController_Visitor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_Visitor_TravelToBaseCamp_C*K2Node_CustomEvent_Action_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_Visitor_WaitInBaseCamp_C*K2Node_CustomEvent_Action                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Visitor_C::ExecuteUbergraph_BP_NPCAIController_Visitor(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_AIAction_Visitor_TravelToBaseCamp_C* K2Node_CustomEvent_Action_1, class UBP_AIAction_Visitor_WaitInBaseCamp_C* K2Node_CustomEvent_Action, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Visitor_C", "ExecuteUbergraph_BP_NPCAIController_Visitor");

	Params::ABP_NPCAIController_Visitor_C_ExecuteUbergraph_BP_NPCAIController_Visitor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Action_1 = K2Node_CustomEvent_Action_1;
	Parms.K2Node_CustomEvent_Action = K2Node_CustomEvent_Action;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


