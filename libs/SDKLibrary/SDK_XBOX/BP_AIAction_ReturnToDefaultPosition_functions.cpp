#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_ReturnToDefaultPosition.BP_AIAction_ReturnToDefaultPosition_C
// (None)

class UClass* UBP_AIAction_ReturnToDefaultPosition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_ReturnToDefaultPosition_C");

	return Clss;
}


// BP_AIAction_ReturnToDefaultPosition_C BP_AIAction_ReturnToDefaultPosition.Default__BP_AIAction_ReturnToDefaultPosition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_ReturnToDefaultPosition_C* UBP_AIAction_ReturnToDefaultPosition_C::GetDefaultObj()
{
	static class UBP_AIAction_ReturnToDefaultPosition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_ReturnToDefaultPosition_C*>(UBP_AIAction_ReturnToDefaultPosition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_ReturnToDefaultPosition.BP_AIAction_ReturnToDefaultPosition_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DefaultPos                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MoveEndDistance                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnToDefaultPosition_C::Setup(const struct FVector& DefaultPos, double MoveEndDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnToDefaultPosition_C", "Setup");

	Params::UBP_AIAction_ReturnToDefaultPosition_C_Setup_Params Parms{};

	Parms.DefaultPos = DefaultPos;
	Parms.MoveEndDistance = MoveEndDistance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_ReturnToDefaultPosition.BP_AIAction_ReturnToDefaultPosition_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnToDefaultPosition_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnToDefaultPosition_C", "ActionTick");

	Params::UBP_AIAction_ReturnToDefaultPosition_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_ReturnToDefaultPosition.BP_AIAction_ReturnToDefaultPosition_C.ExecuteUbergraph_BP_AIAction_ReturnToDefaultPosition
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoPoint_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsNearTwoPoint_distance_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_ReturnToDefaultPosition_C::ExecuteUbergraph_BP_AIAction_ReturnToDefaultPosition(int32 EntryPoint, double CallFunc_Subtract_DoubleDouble_ReturnValue, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsNearTwoPoint_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, float CallFunc_IsNearTwoPoint_distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_ReturnToDefaultPosition_C", "ExecuteUbergraph_BP_AIAction_ReturnToDefaultPosition");

	Params::UBP_AIAction_ReturnToDefaultPosition_C_ExecuteUbergraph_BP_AIAction_ReturnToDefaultPosition_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_IsNearTwoPoint_ReturnValue = CallFunc_IsNearTwoPoint_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_IsNearTwoPoint_distance_ImplicitCast = CallFunc_IsNearTwoPoint_distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


