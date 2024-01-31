#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C
// (None)

class UClass* UBP_AIAction_NPC_RelaxBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_NPC_RelaxBase_C");

	return Clss;
}


// BP_AIAction_NPC_RelaxBase_C BP_AIAction_NPC_RelaxBase.Default__BP_AIAction_NPC_RelaxBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_NPC_RelaxBase_C* UBP_AIAction_NPC_RelaxBase_C::GetDefaultObj()
{
	static class UBP_AIAction_NPC_RelaxBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_NPC_RelaxBase_C*>(UBP_AIAction_NPC_RelaxBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.PlayDefaultAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionByType_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::PlayDefaultAction(const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "PlayDefaultAction");

	Params::UBP_AIAction_NPC_RelaxBase_C_PlayDefaultAction_Params Parms{};

	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.CallFunc_PlayActionByType_ReturnValue = CallFunc_PlayActionByType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.CancelDefaultAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::CancelDefaultAction(class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "CancelDefaultAction");

	Params::UBP_AIAction_NPC_RelaxBase_C_CancelDefaultAction_Params Parms{};

	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActionComponent_ReturnValue_1 = CallFunc_GetActionComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.SelfIsLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLeader                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetLeader_Leader                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::SelfIsLeader(bool* IsLeader, class APalCharacter* CallFunc_GetLeader_Leader, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "SelfIsLeader");

	Params::UBP_AIAction_NPC_RelaxBase_C_SelfIsLeader_Params Parms{};

	Parms.CallFunc_GetLeader_Leader = CallFunc_GetLeader_Leader;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLeader != nullptr)
		*IsLeader = Parms.IsLeader;

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.SoundEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EmitLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::SoundEvent(const struct FVector& EmitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "SoundEvent");

	Params::UBP_AIAction_NPC_RelaxBase_C_SoundEvent_Params Parms{};

	Parms.EmitLocation = EmitLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionResume");

	Params::UBP_AIAction_NPC_RelaxBase_C_ActionResume_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionFinished");

	Params::UBP_AIAction_NPC_RelaxBase_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionPause");

	Params::UBP_AIAction_NPC_RelaxBase_C_ActionPause_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_NPC_RelaxBase_C::_________0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "«¹¿à¤ÙóÈ_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionStart");

	Params::UBP_AIAction_NPC_RelaxBase_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionAbort");

	Params::UBP_AIAction_NPC_RelaxBase_C_ActionAbort_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.SetSightSkipFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_NPC_RelaxBase_C::SetSightSkipFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "SetSightSkipFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionTickAnyThread
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionTickAnyThread");

	Params::UBP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionPostTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionPostTick");

	Params::UBP_AIAction_NPC_RelaxBase_C_ActionPostTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ExecuteUbergraph_BP_AIAction_NPC_RelaxBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_6                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_5                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAISensorComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNPCAIWeaponHandle*       CallFunc_GetWeaponHandle_WeaponHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoPoint_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AngleBetweenVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SightCheck_Target                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalAIResponseType      CallFunc_SightCheck_ResponseType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SightResponse_ChangeNextAction                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GeneralTurn_DeltaTime_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_tempDeltaTime_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ExecuteUbergraph_BP_AIAction_NPC_RelaxBase(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_ControlledPawn_5, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_4, class AController* CallFunc_GetController_ReturnValue, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class APawn* K2Node_Event_ControlledPawn_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsNearTwoPoint_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_AngleBetweenVector_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue, class APawn* K2Node_Event_ControlledPawn_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, double CallFunc_RandomFloat_ReturnValue, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class AActor* CallFunc_SightCheck_Target, enum class EPalAIResponseType CallFunc_SightCheck_ResponseType, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_SightResponse_ChangeNextAction, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_GeneralTurn_DeltaTime_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast, double K2Node_VariableSet_tempDeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ExecuteUbergraph_BP_AIAction_NPC_RelaxBase");

	Params::UBP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn_6 = K2Node_Event_ControlledPawn_6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ControlledPawn_5 = K2Node_Event_ControlledPawn_5;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.K2Node_Event_ControlledPawn_4 = K2Node_Event_ControlledPawn_4;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController = K2Node_DynamicCast_AsBP_NPCAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponHandle_WeaponHandle = CallFunc_GetWeaponHandle_WeaponHandle;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.K2Node_Event_ControlledPawn_3 = K2Node_Event_ControlledPawn_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsNearTwoPoint_ReturnValue = CallFunc_IsNearTwoPoint_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AngleBetweenVector_ReturnValue = CallFunc_AngleBetweenVector_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_DeltaSeconds_1 = K2Node_Event_DeltaSeconds_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_SightCheck_Target = CallFunc_SightCheck_Target;
	Parms.CallFunc_SightCheck_ResponseType = CallFunc_SightCheck_ResponseType;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_SightResponse_ChangeNextAction = CallFunc_SightResponse_ChangeNextAction;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_GeneralTurn_DeltaTime_ImplicitCast = CallFunc_GeneralTurn_DeltaTime_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast;
	Parms.K2Node_VariableSet_tempDeltaTime_ImplicitCast = K2Node_VariableSet_tempDeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


