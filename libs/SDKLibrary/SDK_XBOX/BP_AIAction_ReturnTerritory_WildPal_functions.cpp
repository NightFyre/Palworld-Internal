#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C
// (None)

class UClass* UBP_AIAction_ReturnTerritory_WildPal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_ReturnTerritory_WildPal_C");

	return Clss;
}


// BP_AIAction_ReturnTerritory_WildPal_C BP_AIAction_ReturnTerritory_WildPal.Default__BP_AIAction_ReturnTerritory_WildPal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_ReturnTerritory_WildPal_C* UBP_AIAction_ReturnTerritory_WildPal_C::GetDefaultObj()
{
	static class UBP_AIAction_ReturnTerritory_WildPal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_ReturnTerritory_WildPal_C*>(UBP_AIAction_ReturnTerritory_WildPal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.GetBlackboard
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*AsBP_Pal_AIBlackboard_Common                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetMyPalBlackboard_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::GetBlackboard(class UBP_PalAIBlackboard_Common_C** AsBP_Pal_AIBlackboard_Common, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "GetBlackboard");

	Params::UBP_AIAction_ReturnTerritory_WildPal_C_GetBlackboard_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMyPalBlackboard_ReturnValue = CallFunc_GetMyPalBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Pal_AIBlackboard_Common != nullptr)
		*AsBP_Pal_AIBlackboard_Common = Parms.AsBP_Pal_AIBlackboard_Common;

}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.GetControllerRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalAIController*            PalAIController                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::GetControllerRef(class APalAIController** PalAIController, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "GetControllerRef");

	Params::UBP_AIAction_ReturnTerritory_WildPal_C_GetControllerRef_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PalAIController != nullptr)
		*PalAIController = Parms.PalAIController;

}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ActionStart");

	Params::UBP_AIAction_ReturnTerritory_WildPal_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ActionFinished");

	Params::UBP_AIAction_ReturnTerritory_WildPal_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ActionPause");

	Params::UBP_AIAction_ReturnTerritory_WildPal_C_ActionPause_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ActionResume");

	Params::UBP_AIAction_ReturnTerritory_WildPal_C_ActionResume_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ActionTick");

	Params::UBP_AIAction_ReturnTerritory_WildPal_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_ReturnTerritory_WildPal.BP_AIAction_ReturnTerritory_WildPal_C.ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoPoint_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIBlackboardBase*        CallFunc_GetMyPalBlackboard_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_GetControllerRef_PalAIController                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_GetControllerRef_PalAIController_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnNavMesh_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PalAIMoveToTargetLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_GetControllerRef_PalAIController_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnTerritory_WildPal_C::ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* K2Node_Event_ControlledPawn_4, bool CallFunc_IsNearTwoPoint_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_Event_ControlledPawn_3, enum class EPawnActionResult K2Node_Event_WithResult, class UPalAIBlackboardBase* CallFunc_GetMyPalBlackboard_ReturnValue, class UBP_PalAIBlackboard_Common_C* K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, class AController* CallFunc_GetController_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_3, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class APalAIController* CallFunc_GetControllerRef_PalAIController, class APalAIController* CallFunc_GetControllerRef_PalAIController_1, bool CallFunc_IsOnNavMesh_ReturnValue, bool CallFunc_PalAIMoveToTargetLocation_ReturnValue, class APalAIController* CallFunc_GetControllerRef_PalAIController_2, class APalCharacter* CallFunc_GetCharacter_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_4, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common, class UBP_PalAIBlackboard_Common_C* CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnTerritory_WildPal_C", "ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal");

	Params::UBP_AIAction_ReturnTerritory_WildPal_C_ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_ControlledPawn_4 = K2Node_Event_ControlledPawn_4;
	Parms.CallFunc_IsNearTwoPoint_ReturnValue = CallFunc_IsNearTwoPoint_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_ControlledPawn_3 = K2Node_Event_ControlledPawn_3;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.CallFunc_GetMyPalBlackboard_ReturnValue = CallFunc_GetMyPalBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common = K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetControllerRef_PalAIController = CallFunc_GetControllerRef_PalAIController;
	Parms.CallFunc_GetControllerRef_PalAIController_1 = CallFunc_GetControllerRef_PalAIController_1;
	Parms.CallFunc_IsOnNavMesh_ReturnValue = CallFunc_IsOnNavMesh_ReturnValue;
	Parms.CallFunc_PalAIMoveToTargetLocation_ReturnValue = CallFunc_PalAIMoveToTargetLocation_ReturnValue;
	Parms.CallFunc_GetControllerRef_PalAIController_2 = CallFunc_GetControllerRef_PalAIController_2;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common = CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common;
	Parms.CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common_1 = CallFunc_GetBlackBoard_AsBP_Pal_AIBlackboard_Common_1;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


