#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_NPCSpawnOtomo.BP_AIAction_NPCSpawnOtomo_C
// (None)

class UClass* UBP_AIAction_NPCSpawnOtomo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_NPCSpawnOtomo_C");

	return Clss;
}


// BP_AIAction_NPCSpawnOtomo_C BP_AIAction_NPCSpawnOtomo.Default__BP_AIAction_NPCSpawnOtomo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_NPCSpawnOtomo_C* UBP_AIAction_NPCSpawnOtomo_C::GetDefaultObj()
{
	static class UBP_AIAction_NPCSpawnOtomo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_NPCSpawnOtomo_C*>(UBP_AIAction_NPCSpawnOtomo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_NPCSpawnOtomo.BP_AIAction_NPCSpawnOtomo_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCSpawnOtomo_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPCSpawnOtomo_C", "ActionStart");

	Params::UBP_AIAction_NPCSpawnOtomo_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPCSpawnOtomo.BP_AIAction_NPCSpawnOtomo_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCSpawnOtomo_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPCSpawnOtomo_C", "ActionTick");

	Params::UBP_AIAction_NPCSpawnOtomo_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_NPCSpawnOtomo.BP_AIAction_NPCSpawnOtomo_C.ExecuteUbergraph_BP_AIAction_NPCSpawnOtomo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionByType_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InFanShap_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCSpawnOtomo_C::ExecuteUbergraph_BP_AIAction_NPCSpawnOtomo(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APawn* K2Node_Event_ControlledPawn_1, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_InFanShap_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_NPCSpawnOtomo_C", "ExecuteUbergraph_BP_AIAction_NPCSpawnOtomo");

	Params::UBP_AIAction_NPCSpawnOtomo_C_ExecuteUbergraph_BP_AIAction_NPCSpawnOtomo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_PlayActionByType_ReturnValue = CallFunc_PlayActionByType_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_InFanShap_ReturnValue = CallFunc_InFanShap_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


