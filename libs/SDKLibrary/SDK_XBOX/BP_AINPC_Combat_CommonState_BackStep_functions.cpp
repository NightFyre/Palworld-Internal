#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_Combat_CommonState_BackStep.BP_AINPC_Combat_CommonState_BackStep_C
// (None)

class UClass* UBP_AINPC_Combat_CommonState_BackStep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_Combat_CommonState_BackStep_C");

	return Clss;
}


// BP_AINPC_Combat_CommonState_BackStep_C BP_AINPC_Combat_CommonState_BackStep.Default__BP_AINPC_Combat_CommonState_BackStep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_Combat_CommonState_BackStep_C* UBP_AINPC_Combat_CommonState_BackStep_C::GetDefaultObj()
{
	static class UBP_AINPC_Combat_CommonState_BackStep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_Combat_CommonState_BackStep_C*>(UBP_AINPC_Combat_CommonState_BackStep_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_Combat_CommonState_BackStep.BP_AINPC_Combat_CommonState_BackStep_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AINPC_Combat_CommonState_BackStep_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackStep_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AINPC_Combat_CommonState_BackStep.BP_AINPC_Combat_CommonState_BackStep_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_Combat_CommonState_BackStep_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackStep_C", "StateTick");

	Params::UBP_AINPC_Combat_CommonState_BackStep_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AINPC_Combat_CommonState_BackStep.BP_AINPC_Combat_CommonState_BackStep_C.ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_TargetActor_3                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_Combat_CommonState_BackStep_C::ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep(int32 EntryPoint, class APalCharacter* CallFunc_GetSelfActor_SelfActor, class APalCharacter* CallFunc_GetSelfActor_SelfActor_1, class AActor* CallFunc_GetTargetActor_TargetActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APalCharacter* CallFunc_GetSelfActor_SelfActor_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, class AActor* CallFunc_GetTargetActor_TargetActor_1, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class APalCharacter* CallFunc_GetSelfActor_SelfActor_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetSelfActor_SelfActor_4, class AActor* CallFunc_GetTargetActor_TargetActor_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_GetTargetActor_TargetActor_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackStep_C", "ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep");

	Params::UBP_AINPC_Combat_CommonState_BackStep_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackStep_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_GetSelfActor_SelfActor_1 = CallFunc_GetSelfActor_SelfActor_1;
	Parms.CallFunc_GetTargetActor_TargetActor = CallFunc_GetTargetActor_TargetActor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetSelfActor_SelfActor_2 = CallFunc_GetSelfActor_SelfActor_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetTargetActor_TargetActor_1 = CallFunc_GetTargetActor_TargetActor_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_GetSelfActor_SelfActor_3 = CallFunc_GetSelfActor_SelfActor_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetSelfActor_SelfActor_4 = CallFunc_GetSelfActor_SelfActor_4;
	Parms.CallFunc_GetTargetActor_TargetActor_2 = CallFunc_GetTargetActor_TargetActor_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetTargetActor_TargetActor_3 = CallFunc_GetTargetActor_TargetActor_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


