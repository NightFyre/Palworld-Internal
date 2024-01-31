#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_Death.BP_AIAction_Death_C
// (None)

class UClass* UBP_AIAction_Death_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_Death_C");

	return Clss;
}


// BP_AIAction_Death_C BP_AIAction_Death.Default__BP_AIAction_Death_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_Death_C* UBP_AIAction_Death_C::GetDefaultObj()
{
	static class UBP_AIAction_Death_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_Death_C*>(UBP_AIAction_Death_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_Death.BP_AIAction_Death_C.IsInterruptibleBySleep
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIAction_Death_C::IsInterruptibleBySleep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Death_C", "IsInterruptibleBySleep");

	Params::UBP_AIAction_Death_C_IsInterruptibleBySleep_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AIAction_Death.BP_AIAction_Death_C.IsInterruptibleByRecoverHungry
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIAction_Death_C::IsInterruptibleByRecoverHungry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Death_C", "IsInterruptibleByRecoverHungry");

	Params::UBP_AIAction_Death_C_IsInterruptibleByRecoverHungry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AIAction_Death.BP_AIAction_Death_C.GetDeathActionClass
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      DeathAction                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Death_C::GetDeathActionClass(class UClass** DeathAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Death_C", "GetDeathActionClass");

	Params::UBP_AIAction_Death_C_GetDeathActionClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeathAction != nullptr)
		*DeathAction = Parms.DeathAction;

}


// Function BP_AIAction_Death.BP_AIAction_Death_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Death_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Death_C", "ActionStart");

	Params::UBP_AIAction_Death_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Death.BP_AIAction_Death_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Death_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Death_C", "ActionFinished");

	Params::UBP_AIAction_Death_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Death.BP_AIAction_Death_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter*IndividualParameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Death_C::_________0(class UPalIndividualCharacterParameter* IndividualParameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Death_C", "«¹¿à¤ÙóÈ_0");

	Params::UBP_AIAction_Death_C__________0_Params Parms{};

	Parms.IndividualParameter = IndividualParameter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Death.BP_AIAction_Death_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Death_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Death_C", "ActionResume");

	Params::UBP_AIAction_Death_C_ActionResume_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_Death.BP_AIAction_Death_C.ExecuteUbergraph_BP_AIAction_Death
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetDeathActionClass_DeathAction                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBoneIndex_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*K2Node_CustomEvent_IndividualParameter                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlActor_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter_1                       (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetDeathActionClass_DeathAction_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionParameter_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Death_C::ExecuteUbergraph_BP_AIAction_Death(int32 EntryPoint, class UClass* CallFunc_GetDeathActionClass_DeathAction, class APawn* K2Node_Event_ControlledPawn_2, class AController* CallFunc_GetController_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AController* CallFunc_GetController_ReturnValue_1, const struct FVector& CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition, const struct FVector& CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal, class FName CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName, float CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance, bool CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, int32 CallFunc_GetBoneIndex_ReturnValue, bool CallFunc_IsPlayerControlActor_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPalIndividualCharacterParameter* K2Node_CustomEvent_IndividualParameter, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class APawn* K2Node_Event_ControlledPawn, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class AController* CallFunc_GetController_ReturnValue_3, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, bool CallFunc_IsPlayerControlActor_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_4, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, class UClass* CallFunc_GetDeathActionClass_DeathAction_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_Death_C", "ExecuteUbergraph_BP_AIAction_Death");

	Params::UBP_AIAction_Death_C_ExecuteUbergraph_BP_AIAction_Death_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDeathActionClass_DeathAction = CallFunc_GetDeathActionClass_DeathAction;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition = CallFunc_K2_GetClosestPointOnPhysicsAsset_ClosestWorldPosition;
	Parms.CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal = CallFunc_K2_GetClosestPointOnPhysicsAsset_Normal;
	Parms.CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName = CallFunc_K2_GetClosestPointOnPhysicsAsset_BoneName;
	Parms.CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance = CallFunc_K2_GetClosestPointOnPhysicsAsset_Distance;
	Parms.CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue = CallFunc_K2_GetClosestPointOnPhysicsAsset_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetBoneIndex_ReturnValue = CallFunc_GetBoneIndex_ReturnValue;
	Parms.CallFunc_IsPlayerControlActor_ReturnValue = CallFunc_IsPlayerControlActor_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_CustomEvent_IndividualParameter = K2Node_CustomEvent_IndividualParameter;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.CallFunc_PlayActionParameter_ReturnValue = CallFunc_PlayActionParameter_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_IsPlayerControlActor_ReturnValue_1 = CallFunc_IsPlayerControlActor_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_4 = CallFunc_GetController_ReturnValue_4;
	Parms.K2Node_MakeStruct_ActionDynamicParameter_1 = K2Node_MakeStruct_ActionDynamicParameter_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.CallFunc_GetDeathActionClass_DeathAction_1 = CallFunc_GetDeathActionClass_DeathAction_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_PlayActionParameter_ReturnValue_1 = CallFunc_PlayActionParameter_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


