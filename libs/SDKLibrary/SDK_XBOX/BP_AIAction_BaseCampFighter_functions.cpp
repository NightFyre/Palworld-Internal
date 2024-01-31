#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C
// (None)

class UClass* UBP_AIAction_BaseCampFighter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_BaseCampFighter_C");

	return Clss;
}


// BP_AIAction_BaseCampFighter_C BP_AIAction_BaseCampFighter.Default__BP_AIAction_BaseCampFighter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_BaseCampFighter_C* UBP_AIAction_BaseCampFighter_C::GetDefaultObj()
{
	static class UBP_AIAction_BaseCampFighter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_BaseCampFighter_C*>(UBP_AIAction_BaseCampFighter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampFighter_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighter_C", "ActionStart");

	Params::UBP_AIAction_BaseCampFighter_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.NotifyOrderCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalMapBaseCampWorkerOrderTypeOrderType                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampFighter_C::NotifyOrderCommand(enum class EPalMapBaseCampWorkerOrderType OrderType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighter_C", "NotifyOrderCommand");

	Params::UBP_AIAction_BaseCampFighter_C_NotifyOrderCommand_Params Parms{};

	Parms.OrderType = OrderType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampFighter_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighter_C", "ActionResume");

	Params::UBP_AIAction_BaseCampFighter_C_ActionResume_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.ChangeActionWait
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_BaseCampFighter_C::ChangeActionWait()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighter_C", "ChangeActionWait");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.ExecuteUbergraph_BP_AIAction_BaseCampFighter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnActionsComponent*       CallFunc_GetOwnerComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_BaseCampFighter_Wait_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapBaseCampWorkerOrderTypeK2Node_Event_OrderType                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBattleOrderType_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampFighter_C::ExecuteUbergraph_BP_AIAction_BaseCampFighter(int32 EntryPoint, class UPawnActionsComponent* CallFunc_GetOwnerComponent_ReturnValue, class APawn* K2Node_Event_ControlledPawn_1, class UBP_AIAction_BaseCampFighter_Wait_C* CallFunc_SpawnObject_ReturnValue, enum class EPalMapBaseCampWorkerOrderType K2Node_Event_OrderType, bool CallFunc_IsBattleOrderType_ReturnValue, class APawn* K2Node_Event_ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampFighter_C", "ExecuteUbergraph_BP_AIAction_BaseCampFighter");

	Params::UBP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerComponent_ReturnValue = CallFunc_GetOwnerComponent_ReturnValue;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_Event_OrderType = K2Node_Event_OrderType;
	Parms.CallFunc_IsBattleOrderType_ReturnValue = CallFunc_IsBattleOrderType_ReturnValue;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


