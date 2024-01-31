#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_BaseCampWorker_Wait.BP_AIAction_BaseCampWorker_Wait_C
// (None)

class UClass* UBP_AIAction_BaseCampWorker_Wait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_BaseCampWorker_Wait_C");

	return Clss;
}


// BP_AIAction_BaseCampWorker_Wait_C BP_AIAction_BaseCampWorker_Wait.Default__BP_AIAction_BaseCampWorker_Wait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_BaseCampWorker_Wait_C* UBP_AIAction_BaseCampWorker_Wait_C::GetDefaultObj()
{
	static class UBP_AIAction_BaseCampWorker_Wait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_BaseCampWorker_Wait_C*>(UBP_AIAction_BaseCampWorker_Wait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_BaseCampWorker_Wait.BP_AIAction_BaseCampWorker_Wait_C.OnTickForWait
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBaseCampRandomLocation_bResult                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBaseCampRandomLocation_ToLocation                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingRequestResultCallFunc_MoveToLocation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampWorker_Wait_C::OnTickForWait(float DeltaTime, bool CallFunc_GetBaseCampRandomLocation_bResult, const struct FVector& CallFunc_GetBaseCampRandomLocation_ToLocation, enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampWorker_Wait_C", "OnTickForWait");

	Params::UBP_AIAction_BaseCampWorker_Wait_C_OnTickForWait_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetBaseCampRandomLocation_bResult = CallFunc_GetBaseCampRandomLocation_bResult;
	Parms.CallFunc_GetBaseCampRandomLocation_ToLocation = CallFunc_GetBaseCampRandomLocation_ToLocation;
	Parms.CallFunc_MoveToLocation_ReturnValue = CallFunc_MoveToLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampWorker_Wait.BP_AIAction_BaseCampWorker_Wait_C.GetBaseCampRandomLocation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bResult                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ToLocation                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalcWalkAroundDestination_OutDestination                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CalcWalkAroundDestination_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcWalkAroundDestination_Radius_ImplicitCast           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampWorker_Wait_C::GetBaseCampRandomLocation(bool* bResult, struct FVector* ToLocation, const struct FVector& CallFunc_CalcWalkAroundDestination_OutDestination, bool CallFunc_CalcWalkAroundDestination_ReturnValue, float CallFunc_CalcWalkAroundDestination_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampWorker_Wait_C", "GetBaseCampRandomLocation");

	Params::UBP_AIAction_BaseCampWorker_Wait_C_GetBaseCampRandomLocation_Params Parms{};

	Parms.CallFunc_CalcWalkAroundDestination_OutDestination = CallFunc_CalcWalkAroundDestination_OutDestination;
	Parms.CallFunc_CalcWalkAroundDestination_ReturnValue = CallFunc_CalcWalkAroundDestination_ReturnValue;
	Parms.CallFunc_CalcWalkAroundDestination_Radius_ImplicitCast = CallFunc_CalcWalkAroundDestination_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;

	if (ToLocation != nullptr)
		*ToLocation = std::move(Parms.ToLocation);

}


// Function BP_AIAction_BaseCampWorker_Wait.BP_AIAction_BaseCampWorker_Wait_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampWorker_Wait_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampWorker_Wait_C", "ActionStart");

	Params::UBP_AIAction_BaseCampWorker_Wait_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampWorker_Wait.BP_AIAction_BaseCampWorker_Wait_C.ExecuteUbergraph_BP_AIAction_BaseCampWorker_Wait
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBaseCampRandomLocation_bResult                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBaseCampRandomLocation_ToLocation                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampWorker_Wait_C::ExecuteUbergraph_BP_AIAction_BaseCampWorker_Wait(int32 EntryPoint, bool CallFunc_GetBaseCampRandomLocation_bResult, const struct FVector& CallFunc_GetBaseCampRandomLocation_ToLocation, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampWorker_Wait_C", "ExecuteUbergraph_BP_AIAction_BaseCampWorker_Wait");

	Params::UBP_AIAction_BaseCampWorker_Wait_C_ExecuteUbergraph_BP_AIAction_BaseCampWorker_Wait_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBaseCampRandomLocation_bResult = CallFunc_GetBaseCampRandomLocation_bResult;
	Parms.CallFunc_GetBaseCampRandomLocation_ToLocation = CallFunc_GetBaseCampRandomLocation_ToLocation;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


