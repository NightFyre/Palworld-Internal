#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C
// (None)

class UClass* UBP_AIAction_Visitor_TravelToBaseCamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Visitor_TravelToBaseCamp_C");

	return Clss;
}


// BP_AIAction_Visitor_TravelToBaseCamp_C BP_AIAction_Visitor_TravelToBaseCamp.Default__BP_AIAction_Visitor_TravelToBaseCamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Visitor_TravelToBaseCamp_C* UBP_AIAction_Visitor_TravelToBaseCamp_C::GetDefaultObj()
{
	static class UBP_AIAction_Visitor_TravelToBaseCamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Visitor_TravelToBaseCamp_C*>(UBP_AIAction_Visitor_TravelToBaseCamp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.Tick Move to Base Camp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TempCampToSelf                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoPoint_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InFanShap_TargetLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoPoint_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::Tick_Move_to_Base_Camp(class AActor* ControlledPawn, float DeltaTime, const struct FVector& TempCampToSelf, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_InFanShap_TargetLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "Tick Move to Base Camp");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_Tick_Move_to_Base_Camp_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaTime = DeltaTime;
	Parms.TempCampToSelf = TempCampToSelf;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsNearTwoPoint_ReturnValue = CallFunc_IsNearTwoPoint_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_InFanShap_TargetLocation_ReturnValue = CallFunc_InFanShap_TargetLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsNearTwoPoint_ReturnValue_1 = CallFunc_IsNearTwoPoint_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.SoundEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     EmitLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::SoundEvent(const struct FVector& EmitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "SoundEvent");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_SoundEvent_Params Parms{};

	Parms.EmitLocation = EmitLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.Fun_Damage_AIResponse
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::Fun_Damage_AIResponse(const struct FPalDamageResult& DamageResult, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "Fun_Damage_AIResponse");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_Fun_Damage_AIResponse_Params Parms{};

	Parms.DamageResult = DamageResult;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.SightCheckAndResponse
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalAIResponseType      Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               OverrideIsDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ChangeNextAction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::SightCheckAndResponse(enum class EPalAIResponseType Current, bool OverrideIsDamage, bool* ChangeNextAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "SightCheckAndResponse");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_SightCheckAndResponse_Params Parms{};

	Parms.Current = Current;
	Parms.OverrideIsDamage = OverrideIsDamage;

	UObject::ProcessEvent(Func, &Parms);

	if (ChangeNextAction != nullptr)
		*ChangeNextAction = Parms.ChangeNextAction;

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "ActionStart");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "ActionTick");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "ActionAbort");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_ActionAbort_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "ActionPause");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_ActionPause_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "ActionFinished");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "ActionResume");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_ActionResume_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.ExecuteUbergraph_BP_AIAction_Visitor_TravelToBaseCamp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_5                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_TravelToBaseCamp_C::ExecuteUbergraph_BP_AIAction_Visitor_TravelToBaseCamp(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_4, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue, class APawn* K2Node_Event_ControlledPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* K2Node_Event_ControlledPawn_5, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "ExecuteUbergraph_BP_AIAction_Visitor_TravelToBaseCamp");

	Params::UBP_AIAction_Visitor_TravelToBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_TravelToBaseCamp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn_4 = K2Node_Event_ControlledPawn_4;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_ControlledPawn_3 = K2Node_Event_ControlledPawn_3;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_ControlledPawn_5 = K2Node_Event_ControlledPawn_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.OnStuck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_Visitor_TravelToBaseCamp_C::OnStuck__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "OnStuck__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C.OnArrivedTargetPoint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_Visitor_TravelToBaseCamp_C::OnArrivedTargetPoint__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Visitor_TravelToBaseCamp_C", "OnArrivedTargetPoint__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


