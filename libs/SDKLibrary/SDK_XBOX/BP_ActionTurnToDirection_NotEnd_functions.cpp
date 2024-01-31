#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C
// (None)

class UClass* UBP_ActionTurnToDirection_NotEnd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionTurnToDirection_NotEnd_C");

	return Clss;
}


// BP_ActionTurnToDirection_NotEnd_C BP_ActionTurnToDirection_NotEnd.Default__BP_ActionTurnToDirection_NotEnd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionTurnToDirection_NotEnd_C* UBP_ActionTurnToDirection_NotEnd_C::GetDefaultObj()
{
	static class UBP_ActionTurnToDirection_NotEnd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionTurnToDirection_NotEnd_C*>(UBP_ActionTurnToDirection_NotEnd_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionTurnToDirection_NotEnd_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionTurnToDirection_NotEnd_C", "TickAction");

	Params::UBP_ActionTurnToDirection_NotEnd_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionTurnToDirection_NotEnd_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionTurnToDirection_NotEnd_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionTurnToDirection_NotEnd_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionTurnToDirection_NotEnd_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C.ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActionVelocity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGeneralPurposeIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGeneralPurposeIndex_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GeneralTurn_WithMovementRotationSpeed_DeltaTime_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionTurnToDirection_NotEnd_C::ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, float K2Node_Event_DeltaTime, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, int32 CallFunc_GetGeneralPurposeIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetGeneralPurposeIndex_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_GeneralTurn_WithMovementRotationSpeed_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionTurnToDirection_NotEnd_C", "ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd");

	Params::UBP_ActionTurnToDirection_NotEnd_C_ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetActionVelocity_ReturnValue = CallFunc_GetActionVelocity_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetGeneralPurposeIndex_ReturnValue = CallFunc_GetGeneralPurposeIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGeneralPurposeIndex_ReturnValue_1 = CallFunc_GetGeneralPurposeIndex_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_GeneralTurn_WithMovementRotationSpeed_DeltaTime_ImplicitCast = CallFunc_GeneralTurn_WithMovementRotationSpeed_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


