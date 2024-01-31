#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_DodgeStep.BP_AIAction_DodgeStep_C
// (None)

class UClass* UBP_AIAction_DodgeStep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_DodgeStep_C");

	return Clss;
}


// BP_AIAction_DodgeStep_C BP_AIAction_DodgeStep.Default__BP_AIAction_DodgeStep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_DodgeStep_C* UBP_AIAction_DodgeStep_C::GetDefaultObj()
{
	static class UBP_AIAction_DodgeStep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_DodgeStep_C*>(UBP_AIAction_DodgeStep_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_DodgeStep.BP_AIAction_DodgeStep_C.CanStep
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalActionComponent*         ActionComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CanStep                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_GetCurrentAction_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalActionStepBase_C*     K2Node_DynamicCast_AsBP_Pal_Action_Step_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_DodgeStep_C::CanStep(class UPalActionComponent* ActionComponent, bool* CanStep, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, class UBP_PalActionStepBase_C* K2Node_DynamicCast_AsBP_Pal_Action_Step_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_DodgeStep_C", "CanStep");

	Params::UBP_AIAction_DodgeStep_C_CanStep_Params Parms{};

	Parms.ActionComponent = ActionComponent;
	Parms.CallFunc_GetCurrentAction_ReturnValue = CallFunc_GetCurrentAction_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_Action_Step_Base = K2Node_DynamicCast_AsBP_Pal_Action_Step_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CanStep != nullptr)
		*CanStep = Parms.CanStep;

}


// Function BP_AIAction_DodgeStep.BP_AIAction_DodgeStep_C.GetStepTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalActionBase*              ActionComp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             StepTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DefaultStepTime                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalActionStepBase_C*     K2Node_DynamicCast_AsBP_Pal_Action_Step_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_DodgeStep_C::GetStepTime(class UPalActionBase* ActionComp, double* StepTime, double DefaultStepTime, class UBP_PalActionStepBase_C* K2Node_DynamicCast_AsBP_Pal_Action_Step_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_DodgeStep_C", "GetStepTime");

	Params::UBP_AIAction_DodgeStep_C_GetStepTime_Params Parms{};

	Parms.ActionComp = ActionComp;
	Parms.DefaultStepTime = DefaultStepTime;
	Parms.K2Node_DynamicCast_AsBP_Pal_Action_Step_Base = K2Node_DynamicCast_AsBP_Pal_Action_Step_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (StepTime != nullptr)
		*StepTime = Parms.StepTime;

}


// Function BP_AIAction_DodgeStep.BP_AIAction_DodgeStep_C.RotateToAttacker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_DodgeStep_C::RotateToAttacker(class AActor* Defender, class AActor* Attacker, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_DodgeStep_C", "RotateToAttacker");

	Params::UBP_AIAction_DodgeStep_C_RotateToAttacker_Params Parms{};

	Parms.Defender = Defender;
	Parms.Attacker = Attacker;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_DodgeStep.BP_AIAction_DodgeStep_C.GetStepType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalActionType          NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_DodgeStep_C::GetStepType(enum class EPalActionType* NewParam, bool CallFunc_RandomBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_DodgeStep_C", "GetStepType");

	Params::UBP_AIAction_DodgeStep_C_GetStepType_Params Parms{};

	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_AIAction_DodgeStep.BP_AIAction_DodgeStep_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_DodgeStep_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_DodgeStep_C", "ActionStart");

	Params::UBP_AIAction_DodgeStep_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_DodgeStep.BP_AIAction_DodgeStep_C.ExecuteUbergraph_BP_AIAction_DodgeStep
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanStep_CanStep                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)
// enum class EPalActionType          CallFunc_GetStepType_NewParam                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionByTypeParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetStepTime_StepTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_DodgeStep_C::ExecuteUbergraph_BP_AIAction_DodgeStep(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanStep_CanStep, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, enum class EPalActionType CallFunc_GetStepType_NewParam, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue, double CallFunc_GetStepTime_StepTime, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_DodgeStep_C", "ExecuteUbergraph_BP_AIAction_DodgeStep");

	Params::UBP_AIAction_DodgeStep_C_ExecuteUbergraph_BP_AIAction_DodgeStep_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_CanStep_CanStep = CallFunc_CanStep_CanStep;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;
	Parms.CallFunc_GetStepType_NewParam = CallFunc_GetStepType_NewParam;
	Parms.CallFunc_PlayActionByTypeParameter_ReturnValue = CallFunc_PlayActionByTypeParameter_ReturnValue;
	Parms.CallFunc_GetStepTime_StepTime = CallFunc_GetStepTime_StepTime;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


