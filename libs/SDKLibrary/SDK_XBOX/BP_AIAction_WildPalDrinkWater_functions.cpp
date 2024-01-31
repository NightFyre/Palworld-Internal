#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C
// (None)

class UClass* UBP_AIAction_WildPalDrinkWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_WildPalDrinkWater_C");

	return Clss;
}


// BP_AIAction_WildPalDrinkWater_C BP_AIAction_WildPalDrinkWater.Default__BP_AIAction_WildPalDrinkWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_WildPalDrinkWater_C* UBP_AIAction_WildPalDrinkWater_C::GetDefaultObj()
{
	static class UBP_AIAction_WildPalDrinkWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_WildPalDrinkWater_C*>(UBP_AIAction_WildPalDrinkWater_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WildPalDrinkWater_C::OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WildPalDrinkWater_C", "OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56");

	Params::UBP_AIAction_WildPalDrinkWater_C_OnFail_3323B09A4DA8EB0F652C87B9DFF6FF56_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WildPalDrinkWater_C::OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WildPalDrinkWater_C", "OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56");

	Params::UBP_AIAction_WildPalDrinkWater_C_OnSuccess_3323B09A4DA8EB0F652C87B9DFF6FF56_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WildPalDrinkWater_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WildPalDrinkWater_C", "ActionStart");

	Params::UBP_AIAction_WildPalDrinkWater_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WildPalDrinkWater_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WildPalDrinkWater_C", "ActionAbort");

	Params::UBP_AIAction_WildPalDrinkWater_C_ActionAbort_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WildPalDrinkWater_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WildPalDrinkWater_C", "ActionPause");

	Params::UBP_AIAction_WildPalDrinkWater_C_ActionPause_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WildPalDrinkWater_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WildPalDrinkWater_C", "ActionFinished");

	Params::UBP_AIAction_WildPalDrinkWater_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WildPalDrinkWater_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WildPalDrinkWater_C", "ActionResume");

	Params::UBP_AIAction_WildPalDrinkWater_C_ActionResume_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_WildPalDrinkWater.BP_AIAction_WildPalDrinkWater_C.ExecuteUbergraph_BP_AIAction_WildPalDrinkWater
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameter_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionByType_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalNPCManager*              CallFunc_GetNPCManager_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalWildPalDrinkWaterSpotProvider*CallFunc_GetDrinkWaterSpotProvider_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLeader_Leader                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetSelfPalBlackBoard_PalBlackBoard                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_WildPalDrinkWater_C::ExecuteUbergraph_BP_AIAction_WildPalDrinkWater(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable, class APawn* K2Node_Event_ControlledPawn_4, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameter_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, class UPalWildPalDrinkWaterSpotProvider* CallFunc_GetDrinkWaterSpotProvider_ReturnValue, bool CallFunc_IsLeader_Leader, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_WildPalDrinkWater_C", "ExecuteUbergraph_BP_AIAction_WildPalDrinkWater");

	Params::UBP_AIAction_WildPalDrinkWater_C_ExecuteUbergraph_BP_AIAction_WildPalDrinkWater_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_MovementResult_1 = K2Node_CustomEvent_MovementResult_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_MovementResult = K2Node_CustomEvent_MovementResult;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_ControlledPawn_4 = K2Node_Event_ControlledPawn_4;
	Parms.K2Node_Event_ControlledPawn_3 = K2Node_Event_ControlledPawn_3;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetCharacterParameter_ReturnValue = CallFunc_GetCharacterParameter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue = CallFunc_CreateMoveToProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.CallFunc_PlayActionByType_ReturnValue = CallFunc_PlayActionByType_ReturnValue;
	Parms.CallFunc_GetActionComponent_ReturnValue_1 = CallFunc_GetActionComponent_ReturnValue_1;
	Parms.CallFunc_GetNPCManager_ReturnValue = CallFunc_GetNPCManager_ReturnValue;
	Parms.CallFunc_GetDrinkWaterSpotProvider_ReturnValue = CallFunc_GetDrinkWaterSpotProvider_ReturnValue;
	Parms.CallFunc_IsLeader_Leader = CallFunc_IsLeader_Leader;
	Parms.CallFunc_GetSelfPalBlackBoard_PalBlackBoard = CallFunc_GetSelfPalBlackBoard_PalBlackBoard;
	Parms.CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1 = CallFunc_GetSelfPalBlackBoard_PalBlackBoard_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


