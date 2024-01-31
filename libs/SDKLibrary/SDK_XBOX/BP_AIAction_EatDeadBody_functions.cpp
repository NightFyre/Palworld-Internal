#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C
// (None)

class UClass* UBP_AIAction_EatDeadBody_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_EatDeadBody_C");

	return Clss;
}


// BP_AIAction_EatDeadBody_C BP_AIAction_EatDeadBody.Default__BP_AIAction_EatDeadBody_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_EatDeadBody_C* UBP_AIAction_EatDeadBody_C::GetDefaultObj()
{
	static class UBP_AIAction_EatDeadBody_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_EatDeadBody_C*>(UBP_AIAction_EatDeadBody_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.RecoverHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               CallFunc_Convert_FloatToFixedPoint64_ReturnValue                 (NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetMaxHP_withBuff_ReturnValue                           (NoDestructor)
// struct FFixedPoint64               CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue           (NoDestructor)

void UBP_AIAction_EatDeadBody_C::RecoverHP(const struct FFixedPoint64& CallFunc_Convert_FloatToFixedPoint64_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, const struct FFixedPoint64& CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "RecoverHP");

	Params::UBP_AIAction_EatDeadBody_C_RecoverHP_Params Parms{};

	Parms.CallFunc_Convert_FloatToFixedPoint64_ReturnValue = CallFunc_Convert_FloatToFixedPoint64_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetMaxHP_withBuff_ReturnValue = CallFunc_GetMaxHP_withBuff_ReturnValue;
	Parms.CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue = CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.SelfPawn
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      SelfPawn                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::SelfPawn(class AActor** SelfPawn, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "SelfPawn");

	Params::UBP_AIAction_EatDeadBody_C_SelfPawn_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SelfPawn != nullptr)
		*SelfPawn = Parms.SelfPawn;

}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "ActionFinished");

	Params::UBP_AIAction_EatDeadBody_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "ActionPause");

	Params::UBP_AIAction_EatDeadBody_C_ActionPause_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "ActionStart");

	Params::UBP_AIAction_EatDeadBody_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "ActionTick");

	Params::UBP_AIAction_EatDeadBody_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_EatDeadBody.BP_AIAction_EatDeadBody_C.ExecuteUbergraph_BP_AIAction_EatDeadBody
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SelfPawn_SelfPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SelfPawn_SelfPawn_1                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SelfPawn_SelfPawn_2                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InFanShap_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SelfPawn_SelfPawn_3                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionByType_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionIsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SelfPawn_SelfPawn_4                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SelfPawn_SelfPawn_5                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionIsEmpty_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoActorWithRadius_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GeneralTurnToActor_WithMovementRotationSpeed_DeltaTime_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_tempDeltaTime_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_EatDeadBody_C::ExecuteUbergraph_BP_AIAction_EatDeadBody(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_SelfPawn_SelfPawn, class AActor* CallFunc_SelfPawn_SelfPawn_1, class AActor* CallFunc_SelfPawn_SelfPawn_2, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_InFanShap_ReturnValue, class AActor* CallFunc_SelfPawn_SelfPawn_3, class APawn* K2Node_Event_ControlledPawn_3, enum class EPawnActionResult K2Node_Event_WithResult, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, bool CallFunc_ActionIsEmpty_ReturnValue, class APawn* K2Node_Event_ControlledPawn_2, class AActor* CallFunc_SelfPawn_SelfPawn_4, class AActor* CallFunc_SelfPawn_SelfPawn_5, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_ActionIsEmpty_ReturnValue_1, bool CallFunc_IsNearTwoActorWithRadius_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, class APalAIController* K2Node_DynamicCast_AsPal_AIController_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_GeneralTurnToActor_WithMovementRotationSpeed_DeltaTime_ImplicitCast, double K2Node_VariableSet_tempDeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_EatDeadBody_C", "ExecuteUbergraph_BP_AIAction_EatDeadBody");

	Params::UBP_AIAction_EatDeadBody_C_ExecuteUbergraph_BP_AIAction_EatDeadBody_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SelfPawn_SelfPawn = CallFunc_SelfPawn_SelfPawn;
	Parms.CallFunc_SelfPawn_SelfPawn_1 = CallFunc_SelfPawn_SelfPawn_1;
	Parms.CallFunc_SelfPawn_SelfPawn_2 = CallFunc_SelfPawn_SelfPawn_2;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_InFanShap_ReturnValue = CallFunc_InFanShap_ReturnValue;
	Parms.CallFunc_SelfPawn_SelfPawn_3 = CallFunc_SelfPawn_SelfPawn_3;
	Parms.K2Node_Event_ControlledPawn_3 = K2Node_Event_ControlledPawn_3;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_PlayActionByType_ReturnValue = CallFunc_PlayActionByType_ReturnValue;
	Parms.CallFunc_ActionIsEmpty_ReturnValue = CallFunc_ActionIsEmpty_ReturnValue;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.CallFunc_SelfPawn_SelfPawn_4 = CallFunc_SelfPawn_SelfPawn_4;
	Parms.CallFunc_SelfPawn_SelfPawn_5 = CallFunc_SelfPawn_SelfPawn_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_ActionIsEmpty_ReturnValue_1 = CallFunc_ActionIsEmpty_ReturnValue_1;
	Parms.CallFunc_IsNearTwoActorWithRadius_ReturnValue = CallFunc_IsNearTwoActorWithRadius_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPal_AIController_1 = K2Node_DynamicCast_AsPal_AIController_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GeneralTurnToActor_WithMovementRotationSpeed_DeltaTime_ImplicitCast = CallFunc_GeneralTurnToActor_WithMovementRotationSpeed_DeltaTime_ImplicitCast;
	Parms.K2Node_VariableSet_tempDeltaTime_ImplicitCast = K2Node_VariableSet_tempDeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


