#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPCAIController_Invader.BP_NPCAIController_Invader_C
// (Actor)

class UClass* ABP_NPCAIController_Invader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPCAIController_Invader_C");

	return Clss;
}


// BP_NPCAIController_Invader_C BP_NPCAIController_Invader.Default__BP_NPCAIController_Invader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPCAIController_Invader_C* ABP_NPCAIController_Invader_C::GetDefaultObj()
{
	static class ABP_NPCAIController_Invader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPCAIController_Invader_C*>(ABP_NPCAIController_Invader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ReturnSpawnedPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnPos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionComponent*       K2Node_DynamicCast_AsPal_AIAction_Component                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Invader_C::ReturnSpawnedPoint(const struct FVector& ReturnPos, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* K2Node_DynamicCast_AsPal_AIAction_Component, bool K2Node_DynamicCast_bSuccess, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "ReturnSpawnedPoint");

	Params::ABP_NPCAIController_Invader_C_ReturnSpawnedPoint_Params Parms{};

	Parms.ReturnPos = ReturnPos;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Component = K2Node_DynamicCast_AsPal_AIAction_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.StartMarch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     GoalPos                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Invader_C::StartMarch(const struct FVector& GoalPos, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "StartMarch");

	Params::ABP_NPCAIController_Invader_C_StartMarch_Params Parms{};

	Parms.GoalPos = GoalPos;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;
	Parms.CallFunc_SetActionClassParameter_ReturnValue_1 = CallFunc_SetActionClassParameter_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ForceBattleStartForOutside
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      StartActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Invader_C::ForceBattleStartForOutside(class AActor* StartActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "ForceBattleStartForOutside");

	Params::ABP_NPCAIController_Invader_C_ForceBattleStartForOutside_Params Parms{};

	Parms.StartActor = StartActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.StartDefaultAIAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_Invader_C::StartDefaultAIAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "StartDefaultAIAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.SetAutoDefaultAIAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_Invader_C::SetAutoDefaultAIAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "SetAutoDefaultAIAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_Invader_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.OnInvaderArrived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_Invader_C::OnInvaderArrived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "OnInvaderArrived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.BindOnInvaderArrivedDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Invader_C::BindOnInvaderArrivedDelegate(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "BindOnInvaderArrivedDelegate");

	Params::ABP_NPCAIController_Invader_C_BindOnInvaderArrivedDelegate_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ExecuteUbergraph_BP_NPCAIController_Invader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_Event_Event                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NPCAIController_Invader_C::ExecuteUbergraph_BP_NPCAIController_Invader(int32 EntryPoint, FDelegateProperty_ K2Node_Event_Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "ExecuteUbergraph_BP_NPCAIController_Invader");

	Params::ABP_NPCAIController_Invader_C_ExecuteUbergraph_BP_NPCAIController_Invader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Event = K2Node_Event_Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.OnInvaderArrivedDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPCAIController_Invader_C::OnInvaderArrivedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPCAIController_Invader_C", "OnInvaderArrivedDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


