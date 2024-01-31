#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Sleep.BP_AIAction_Sleep_C
// (None)

class UClass* UBP_AIAction_Sleep_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Sleep_C");

	return Clss;
}


// BP_AIAction_Sleep_C BP_AIAction_Sleep.Default__BP_AIAction_Sleep_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Sleep_C* UBP_AIAction_Sleep_C::GetDefaultObj()
{
	static class UBP_AIAction_Sleep_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Sleep_C*>(UBP_AIAction_Sleep_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.OnDamageDelegate_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_AIAction_Sleep_C::OnDamageDelegate______0(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Sleep_C", "OnDamageDelegate_¤ÙóÈ_0");

	Params::UBP_AIAction_Sleep_C_OnDamageDelegate______0_Params Parms{};

	Parms.DamageResult = DamageResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Sleep_C", "ActionStart");

	Params::UBP_AIAction_Sleep_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.OnAllActionFinishDelegate_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionComponent*         ActionComponent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_C::OnAllActionFinishDelegate______0(class UPalActionComponent* ActionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Sleep_C", "OnAllActionFinishDelegate_¤ÙóÈ_0");

	Params::UBP_AIAction_Sleep_C_OnAllActionFinishDelegate______0_Params Parms{};

	Parms.ActionComponent = ActionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Sleep_C", "ActionFinished");

	Params::UBP_AIAction_Sleep_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Sleep.BP_AIAction_Sleep_C.ExecuteUbergraph_BP_AIAction_Sleep
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionByType_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_Convert_FloatToFixedPoint64_ReturnValue                 (NoDestructor)
// struct FPalDamageResult            K2Node_CustomEvent_DamageResult                                  (NoDestructor)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetMP_ReturnValue                                       (NoDestructor)
// struct FFixedPoint64               CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue           (NoDestructor)
// class UPalActionComponent*         K2Node_CustomEvent_actionComponent                               (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Sleep_C::ExecuteUbergraph_BP_AIAction_Sleep(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFixedPoint64& CallFunc_Convert_FloatToFixedPoint64_ReturnValue, const struct FPalDamageResult& K2Node_CustomEvent_DamageResult, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APawn* K2Node_Event_ControlledPawn_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, const struct FFixedPoint64& CallFunc_GetMP_ReturnValue, const struct FFixedPoint64& CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue, class UPalActionComponent* K2Node_CustomEvent_actionComponent, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_3, class APalCharacter* CallFunc_GetCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Sleep_C", "ExecuteUbergraph_BP_AIAction_Sleep");

	Params::UBP_AIAction_Sleep_C_ExecuteUbergraph_BP_AIAction_Sleep_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayActionByType_ReturnValue = CallFunc_PlayActionByType_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Convert_FloatToFixedPoint64_ReturnValue = CallFunc_Convert_FloatToFixedPoint64_ReturnValue;
	Parms.K2Node_CustomEvent_DamageResult = K2Node_CustomEvent_DamageResult;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetMP_ReturnValue = CallFunc_GetMP_ReturnValue;
	Parms.CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue = CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue;
	Parms.K2Node_CustomEvent_actionComponent = K2Node_CustomEvent_actionComponent;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


