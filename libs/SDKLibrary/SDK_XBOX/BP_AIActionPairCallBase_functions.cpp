#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionPairCallBase.BP_AIActionPairCallBase_C
// (None)

class UClass* UBP_AIActionPairCallBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionPairCallBase_C");

	return Clss;
}


// BP_AIActionPairCallBase_C BP_AIActionPairCallBase.Default__BP_AIActionPairCallBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionPairCallBase_C* UBP_AIActionPairCallBase_C::GetDefaultObj()
{
	static class UBP_AIActionPairCallBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionPairCallBase_C*>(UBP_AIActionPairCallBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.CreatePairBehaviorActionDynamicParameter
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FActionDynamicParameter     DynamicParameter                                                 (Parm, OutParm)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)

void UBP_AIActionPairCallBase_C::CreatePairBehaviorActionDynamicParameter(struct FActionDynamicParameter* DynamicParameter, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "CreatePairBehaviorActionDynamicParameter");

	Params::UBP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;

	UObject::ProcessEvent(Func, &Parms);

	if (DynamicParameter != nullptr)
		*DynamicParameter = std::move(Parms.DynamicParameter);

}


// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionPairCallBase_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "ActionStart");

	Params::UBP_AIActionPairCallBase_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionPairCallBase_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "ActionTick");

	Params::UBP_AIActionPairCallBase_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.OnFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIActionPairCallBase_C::OnFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "OnFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ExecuteUbergraph_BP_AIActionPairCallBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter(None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPettingPresset*          CallFunc_GetPettingPreset_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_GetCurrentAction_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionPairBehaviorBase_C*K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionPairStandbyBase_C* K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalFlyMeshHeightCtrlComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalFlyMeshHeightCtrlComponent*CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionParameter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionPairBehaviorBase_C*K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsNearTwoActor_distance_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionPairCallBase_C::ExecuteUbergraph_BP_AIActionPairCallBase(int32 EntryPoint, const struct FActionDynamicParameter& CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class AController* CallFunc_GetController_ReturnValue_3, class UPalPettingPresset* CallFunc_GetPettingPreset_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, float CallFunc_GetDistance_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_IsNearTwoActor_ReturnValue, class UBP_ActionPairBehaviorBase_C* K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base, bool K2Node_DynamicCast_bSuccess, class UBP_ActionPairStandbyBase_C* K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue_5, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class UPalFlyMeshHeightCtrlComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UPalFlyMeshHeightCtrlComponent* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, class UBP_ActionPairBehaviorBase_C* K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_IsNearTwoActor_distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "ExecuteUbergraph_BP_AIActionPairCallBase");

	Params::UBP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter = CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.CallFunc_GetPettingPreset_ReturnValue = CallFunc_GetPettingPreset_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_GetDistance_ReturnValue = CallFunc_GetDistance_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetCurrentAction_ReturnValue = CallFunc_GetCurrentAction_ReturnValue;
	Parms.CallFunc_IsNearTwoActor_ReturnValue = CallFunc_IsNearTwoActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base = K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base = K2Node_DynamicCast_AsBP_Action_Pair_Standby_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetController_ReturnValue_4 = CallFunc_GetController_ReturnValue_4;
	Parms.CallFunc_GetController_ReturnValue_5 = CallFunc_GetController_ReturnValue_5;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_PlayActionParameter_ReturnValue = CallFunc_PlayActionParameter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1 = K2Node_DynamicCast_AsBP_Action_Pair_Behavior_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_IsNearTwoActor_distance_ImplicitCast = CallFunc_IsNearTwoActor_distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


