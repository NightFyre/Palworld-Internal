#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Damage.BP_AIAction_Damage_C
// (None)

class UClass* UBP_AIAction_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Damage_C");

	return Clss;
}


// BP_AIAction_Damage_C BP_AIAction_Damage.Default__BP_AIAction_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Damage_C* UBP_AIAction_Damage_C::GetDefaultObj()
{
	static class UBP_AIAction_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Damage_C*>(UBP_AIAction_Damage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Damage.BP_AIAction_Damage_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Damage_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Damage_C", "ActionStart");

	Params::UBP_AIAction_Damage_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Damage.BP_AIAction_Damage_C.ExecuteUbergraph_BP_AIAction_Damage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionByTypeParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Damage_C::ExecuteUbergraph_BP_AIAction_Damage(int32 EntryPoint, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class APawn* K2Node_Event_ControlledPawn, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Damage_C", "ExecuteUbergraph_BP_AIAction_Damage");

	Params::UBP_AIAction_Damage_C_ExecuteUbergraph_BP_AIAction_Damage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_PlayActionByTypeParameter_ReturnValue = CallFunc_PlayActionByTypeParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


