#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionReaction_ElectricShock.BP_AIActionReaction_ElectricShock_C
// (None)

class UClass* UBP_AIActionReaction_ElectricShock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionReaction_ElectricShock_C");

	return Clss;
}


// BP_AIActionReaction_ElectricShock_C BP_AIActionReaction_ElectricShock.Default__BP_AIActionReaction_ElectricShock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionReaction_ElectricShock_C* UBP_AIActionReaction_ElectricShock_C::GetDefaultObj()
{
	static class UBP_AIActionReaction_ElectricShock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionReaction_ElectricShock_C*>(UBP_AIActionReaction_ElectricShock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIActionReaction_ElectricShock.BP_AIActionReaction_ElectricShock_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionReaction_ElectricShock_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionReaction_ElectricShock_C", "ActionStart");

	Params::UBP_AIActionReaction_ElectricShock_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionReaction_ElectricShock.BP_AIActionReaction_ElectricShock_C.ExecuteUbergraph_BP_AIActionReaction_ElectricShock
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionReaction_ElectricShock_C::ExecuteUbergraph_BP_AIActionReaction_ElectricShock(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, class UPalActionBase* CallFunc_PlayAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionReaction_ElectricShock_C", "ExecuteUbergraph_BP_AIActionReaction_ElectricShock");

	Params::UBP_AIActionReaction_ElectricShock_C_ExecuteUbergraph_BP_AIActionReaction_ElectricShock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.CallFunc_GetActionComponent_ReturnValue_1 = CallFunc_GetActionComponent_ReturnValue_1;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


