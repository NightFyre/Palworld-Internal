#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionBaseCamp_Sleep.BP_AIActionBaseCamp_Sleep_C
// (None)

class UClass* UBP_AIActionBaseCamp_Sleep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionBaseCamp_Sleep_C");

	return Clss;
}


// BP_AIActionBaseCamp_Sleep_C BP_AIActionBaseCamp_Sleep.Default__BP_AIActionBaseCamp_Sleep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionBaseCamp_Sleep_C* UBP_AIActionBaseCamp_Sleep_C::GetDefaultObj()
{
	static class UBP_AIActionBaseCamp_Sleep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionBaseCamp_Sleep_C*>(UBP_AIActionBaseCamp_Sleep_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIActionBaseCamp_Sleep.BP_AIActionBaseCamp_Sleep_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionBaseCamp_Sleep_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionBaseCamp_Sleep_C", "ActionStart");

	Params::UBP_AIActionBaseCamp_Sleep_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionBaseCamp_Sleep.BP_AIActionBaseCamp_Sleep_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionBaseCamp_Sleep_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionBaseCamp_Sleep_C", "ActionFinished");

	Params::UBP_AIActionBaseCamp_Sleep_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionBaseCamp_Sleep.BP_AIActionBaseCamp_Sleep_C.ExecuteUbergraph_BP_AIActionBaseCamp_Sleep
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionByType_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionBaseCamp_Sleep_C::ExecuteUbergraph_BP_AIActionBaseCamp_Sleep(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionBaseCamp_Sleep_C", "ExecuteUbergraph_BP_AIActionBaseCamp_Sleep");

	Params::UBP_AIActionBaseCamp_Sleep_C_ExecuteUbergraph_BP_AIActionBaseCamp_Sleep_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_PlayActionByType_ReturnValue = CallFunc_PlayActionByType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


