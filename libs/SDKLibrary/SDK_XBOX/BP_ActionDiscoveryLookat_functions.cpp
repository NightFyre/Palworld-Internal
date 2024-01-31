#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionDiscoveryLookat.BP_ActionDiscoveryLookat_C
// (None)

class UClass* UBP_ActionDiscoveryLookat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionDiscoveryLookat_C");

	return Clss;
}


// BP_ActionDiscoveryLookat_C BP_ActionDiscoveryLookat.Default__BP_ActionDiscoveryLookat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionDiscoveryLookat_C* UBP_ActionDiscoveryLookat_C::GetDefaultObj()
{
	static class UBP_ActionDiscoveryLookat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionDiscoveryLookat_C*>(UBP_ActionDiscoveryLookat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionDiscoveryLookat.BP_ActionDiscoveryLookat_C.TurnToTargetOneFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionDiscoveryLookat_C::TurnToTargetOneFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionDiscoveryLookat_C", "TurnToTargetOneFrame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionDiscoveryLookat.BP_ActionDiscoveryLookat_C.OnFinishedFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           PSystem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDiscoveryLookat_C::OnFinishedFX(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionDiscoveryLookat_C", "OnFinishedFX");

	Params::UBP_ActionDiscoveryLookat_C_OnFinishedFX_Params Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionDiscoveryLookat.BP_ActionDiscoveryLookat_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionDiscoveryLookat_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionDiscoveryLookat_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionDiscoveryLookat.BP_ActionDiscoveryLookat_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDiscoveryLookat_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionDiscoveryLookat_C", "TickAction");

	Params::UBP_ActionDiscoveryLookat_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionDiscoveryLookat.BP_ActionDiscoveryLookat_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionDiscoveryLookat_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionDiscoveryLookat_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionDiscoveryLookat.BP_ActionDiscoveryLookat_C.ExecuteUbergraph_BP_ActionDiscoveryLookat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActionTarget_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetPalCharacterMovementComponent_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetPalCharacterMovementComponent_ReturnValue_1          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_5                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_6                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDiscoveryLookat_C::ExecuteUbergraph_BP_ActionDiscoveryLookat(int32 EntryPoint, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, bool CallFunc_IsDedicatedServer_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, bool CallFunc_IsDedicatedServer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionDiscoveryLookat_C", "ExecuteUbergraph_BP_ActionDiscoveryLookat");

	Params::UBP_ActionDiscoveryLookat_C_ExecuteUbergraph_BP_ActionDiscoveryLookat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_GetActionTarget_ReturnValue = CallFunc_GetActionTarget_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetPalCharacterMovementComponent_ReturnValue = CallFunc_GetPalCharacterMovementComponent_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_4 = CallFunc_GetActionCharacter_ReturnValue_4;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetPalCharacterMovementComponent_ReturnValue_1 = CallFunc_GetPalCharacterMovementComponent_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_5 = CallFunc_GetActionCharacter_ReturnValue_5;
	Parms.CallFunc_GetActionCharacter_ReturnValue_6 = CallFunc_GetActionCharacter_ReturnValue_6;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


