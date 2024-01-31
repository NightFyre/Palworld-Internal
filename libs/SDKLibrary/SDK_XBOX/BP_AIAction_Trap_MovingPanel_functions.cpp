#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C
// (None)

class UClass* UBP_AIAction_Trap_MovingPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Trap_MovingPanel_C");

	return Clss;
}


// BP_AIAction_Trap_MovingPanel_C BP_AIAction_Trap_MovingPanel.Default__BP_AIAction_Trap_MovingPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Trap_MovingPanel_C* UBP_AIAction_Trap_MovingPanel_C::GetDefaultObj()
{
	static class UBP_AIAction_Trap_MovingPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Trap_MovingPanel_C*>(UBP_AIAction_Trap_MovingPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.OnChangeTrapExist
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Exist                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_MovingPanel_C::OnChangeTrapExist(bool Exist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Trap_MovingPanel_C", "OnChangeTrapExist");

	Params::UBP_AIAction_Trap_MovingPanel_C_OnChangeTrapExist_Params Parms{};

	Parms.Exist = Exist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.GetCPC
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalCharacterParameterComponent*CPC                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_MovingPanel_C::GetCPC(class UPalCharacterParameterComponent** CPC, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Trap_MovingPanel_C", "GetCPC");

	Params::UBP_AIAction_Trap_MovingPanel_C_GetCPC_Params Parms{};

	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CPC != nullptr)
		*CPC = Parms.CPC;

}


// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_MovingPanel_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Trap_MovingPanel_C", "ActionStart");

	Params::UBP_AIAction_Trap_MovingPanel_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_MovingPanel_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Trap_MovingPanel_C", "ActionAbort");

	Params::UBP_AIAction_Trap_MovingPanel_C_ActionAbort_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_MovingPanel_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Trap_MovingPanel_C", "ActionFinished");

	Params::UBP_AIAction_Trap_MovingPanel_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_MovingPanel_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Trap_MovingPanel_C", "ActionPause");

	Params::UBP_AIAction_Trap_MovingPanel_C_ActionPause_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.ExecuteUbergraph_BP_AIAction_Trap_MovingPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCPC_CPC                                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCPC_CPC_1                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Trap_MovingPanel_C::ExecuteUbergraph_BP_AIAction_Trap_MovingPanel(int32 EntryPoint, class UPalCharacterParameterComponent* CallFunc_GetCPC_CPC, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCPC_CPC_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Trap_MovingPanel_C", "ExecuteUbergraph_BP_AIAction_Trap_MovingPanel");

	Params::UBP_AIAction_Trap_MovingPanel_C_ExecuteUbergraph_BP_AIAction_Trap_MovingPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCPC_CPC = CallFunc_GetCPC_CPC;
	Parms.K2Node_Event_ControlledPawn_3 = K2Node_Event_ControlledPawn_3;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.CallFunc_GetActionComponent_ReturnValue_1 = CallFunc_GetActionComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;
	Parms.CallFunc_GetCPC_CPC_1 = CallFunc_GetCPC_CPC_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


