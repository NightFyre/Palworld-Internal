#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AlertByKilledFriendState_SerachAround.BP_AlertByKilledFriendState_SerachAround_C
// (None)

class UClass* UBP_AlertByKilledFriendState_SerachAround_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AlertByKilledFriendState_SerachAround_C");

	return Clss;
}


// BP_AlertByKilledFriendState_SerachAround_C BP_AlertByKilledFriendState_SerachAround.Default__BP_AlertByKilledFriendState_SerachAround_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AlertByKilledFriendState_SerachAround_C* UBP_AlertByKilledFriendState_SerachAround_C::GetDefaultObj()
{
	static class UBP_AlertByKilledFriendState_SerachAround_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AlertByKilledFriendState_SerachAround_C*>(UBP_AlertByKilledFriendState_SerachAround_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AlertByKilledFriendState_SerachAround.BP_AlertByKilledFriendState_SerachAround_C.GetControllerRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalAIController*            AICon                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AlertByKilledFriendState_SerachAround_C::GetControllerRef(class APalAIController** AICon, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_SerachAround_C", "GetControllerRef");

	Params::UBP_AlertByKilledFriendState_SerachAround_C_GetControllerRef_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AICon != nullptr)
		*AICon = Parms.AICon;

}


// Function BP_AlertByKilledFriendState_SerachAround.BP_AlertByKilledFriendState_SerachAround_C.NextMovePoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hit                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     RandomPos                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Range                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_AlertByKilledFriend_C*K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LineTraceGround_IsHit                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LineTraceGround_HitPos                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AlertByKilledFriendState_SerachAround_C::NextMovePoint(bool* Hit, const struct FVector& RandomPos, double Range, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_AIAction_AlertByKilledFriend_C* K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LineTraceGround_IsHit, const struct FVector& CallFunc_LineTraceGround_HitPos, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_SerachAround_C", "NextMovePoint");

	Params::UBP_AlertByKilledFriendState_SerachAround_C_NextMovePoint_Params Parms{};

	Parms.RandomPos = RandomPos;
	Parms.Range = Range;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend = K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_LineTraceGround_IsHit = CallFunc_LineTraceGround_IsHit;
	Parms.CallFunc_LineTraceGround_HitPos = CallFunc_LineTraceGround_HitPos;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Hit != nullptr)
		*Hit = Parms.Hit;

}


// Function BP_AlertByKilledFriendState_SerachAround.BP_AlertByKilledFriendState_SerachAround_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AlertByKilledFriendState_SerachAround_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_SerachAround_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertByKilledFriendState_SerachAround.BP_AlertByKilledFriendState_SerachAround_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AlertByKilledFriendState_SerachAround_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_SerachAround_C", "StateTick");

	Params::UBP_AlertByKilledFriendState_SerachAround_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AlertByKilledFriendState_SerachAround.BP_AlertByKilledFriendState_SerachAround_C.StateExit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AlertByKilledFriendState_SerachAround_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_SerachAround_C", "StateExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertByKilledFriendState_SerachAround.BP_AlertByKilledFriendState_SerachAround_C.ExecuteUbergraph_BP_AlertByKilledFriendState_SerachAround
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_AlertByKilledFriend_C*K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NextMovePoint_Hit                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoPoint_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            CallFunc_GetControllerRef_AICon                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AlertByKilledFriendState_SerachAround_C::ExecuteUbergraph_BP_AlertByKilledFriendState_SerachAround(int32 EntryPoint, float K2Node_Event_DeltaTime, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_AIAction_AlertByKilledFriend_C* K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NextMovePoint_Hit, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsNearTwoPoint_ReturnValue, class APalAIController* CallFunc_GetControllerRef_AICon, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_SerachAround_C", "ExecuteUbergraph_BP_AlertByKilledFriendState_SerachAround");

	Params::UBP_AlertByKilledFriendState_SerachAround_C_ExecuteUbergraph_BP_AlertByKilledFriendState_SerachAround_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend = K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_NextMovePoint_Hit = CallFunc_NextMovePoint_Hit;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsNearTwoPoint_ReturnValue = CallFunc_IsNearTwoPoint_ReturnValue;
	Parms.CallFunc_GetControllerRef_AICon = CallFunc_GetControllerRef_AICon;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


