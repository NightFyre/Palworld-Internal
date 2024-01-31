#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C
// (None)

class UClass* UBP_AIAction_BaseCampRecoverHungry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_BaseCampRecoverHungry_C");

	return Clss;
}


// BP_AIAction_BaseCampRecoverHungry_C BP_AIAction_BaseCampRecoverHungry.Default__BP_AIAction_BaseCampRecoverHungry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_BaseCampRecoverHungry_C* UBP_AIAction_BaseCampRecoverHungry_C::GetDefaultObj()
{
	static class UBP_AIAction_BaseCampRecoverHungry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_BaseCampRecoverHungry_C*>(UBP_AIAction_BaseCampRecoverHungry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.Change Recover Hungry Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ChildActionClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawnActionsComponent*       CallFunc_GetOwnerComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBaseCampRecoverHungryChildBase*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampRecoverHungry_C::Change_Recover_Hungry_Action(class UClass* ChildActionClass, class UPawnActionsComponent* CallFunc_GetOwnerComponent_ReturnValue, class UPalAIActionBaseCampRecoverHungryChildBase* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampRecoverHungry_C", "Change Recover Hungry Action");

	Params::UBP_AIAction_BaseCampRecoverHungry_C_Change_Recover_Hungry_Action_Params Parms{};

	Parms.ChildActionClass = ChildActionClass;
	Parms.CallFunc_GetOwnerComponent_ReturnValue = CallFunc_GetOwnerComponent_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampRecoverHungry_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampRecoverHungry_C", "ActionStart");

	Params::UBP_AIAction_BaseCampRecoverHungry_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.ChangeActionApproach
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_BaseCampRecoverHungry_C::ChangeActionApproach()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampRecoverHungry_C", "ChangeActionApproach");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.ChangeActionEat
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIAction_BaseCampRecoverHungry_C::ChangeActionEat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampRecoverHungry_C", "ChangeActionEat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.NotifyOrderCommand
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalMapBaseCampWorkerOrderTypeOrderType                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampRecoverHungry_C::NotifyOrderCommand(enum class EPalMapBaseCampWorkerOrderType OrderType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampRecoverHungry_C", "NotifyOrderCommand");

	Params::UBP_AIAction_BaseCampRecoverHungry_C_NotifyOrderCommand_Params Parms{};

	Parms.OrderType = OrderType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampRecoverHungry_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampRecoverHungry_C", "ActionFinished");

	Params::UBP_AIAction_BaseCampRecoverHungry_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_BaseCampRecoverHungry.BP_AIAction_BaseCampRecoverHungry_C.ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapBaseCampWorkerOrderTypeK2Node_Event_OrderType                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBattleOrderType_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampRecoverHungry_C::ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_1, enum class EPalMapBaseCampWorkerOrderType K2Node_Event_OrderType, bool CallFunc_IsBattleOrderType_ReturnValue, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_BaseCampRecoverHungry_C", "ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry");

	Params::UBP_AIAction_BaseCampRecoverHungry_C_ExecuteUbergraph_BP_AIAction_BaseCampRecoverHungry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_OrderType = K2Node_Event_OrderType;
	Parms.CallFunc_IsBattleOrderType_ReturnValue = CallFunc_IsBattleOrderType_ReturnValue;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


