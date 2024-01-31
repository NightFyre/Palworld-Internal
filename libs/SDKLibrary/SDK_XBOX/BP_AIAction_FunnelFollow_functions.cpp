#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_FunnelFollow.BP_AIAction_FunnelFollow_C
// (None)

class UClass* UBP_AIAction_FunnelFollow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_FunnelFollow_C");

	return Clss;
}


// BP_AIAction_FunnelFollow_C BP_AIAction_FunnelFollow.Default__BP_AIAction_FunnelFollow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_FunnelFollow_C* UBP_AIAction_FunnelFollow_C::GetDefaultObj()
{
	static class UBP_AIAction_FunnelFollow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_FunnelFollow_C*>(UBP_AIAction_FunnelFollow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIAction_FunnelFollow.BP_AIAction_FunnelFollow_C.Update Location Distance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalFunnelCharacter*         K2Node_DynamicCast_AsPal_Funnel_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalFunnelCharacterManager*  CallFunc_GetFunnelCharacterManager_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndexOfFunnelsWithinSameTrainer_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_TargetLocationDistanceRight_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_TargetLocationDistanceForward_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_FunnelFollow_C::Update_Location_Distance(int32 Index, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, double CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, double CallFunc_Array_Get_Item_1, class APalFunnelCharacter* K2Node_DynamicCast_AsPal_Funnel_Character, bool K2Node_DynamicCast_bSuccess, class UPalFunnelCharacterManager* CallFunc_GetFunnelCharacterManager_ReturnValue, int32 CallFunc_GetIndexOfFunnelsWithinSameTrainer_ReturnValue, float K2Node_VariableSet_TargetLocationDistanceRight_ImplicitCast, float K2Node_VariableSet_TargetLocationDistanceForward_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_FunnelFollow_C", "Update Location Distance");

	Params::UBP_AIAction_FunnelFollow_C_Update_Location_Distance_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsPal_Funnel_Character = K2Node_DynamicCast_AsPal_Funnel_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFunnelCharacterManager_ReturnValue = CallFunc_GetFunnelCharacterManager_ReturnValue;
	Parms.CallFunc_GetIndexOfFunnelsWithinSameTrainer_ReturnValue = CallFunc_GetIndexOfFunnelsWithinSameTrainer_ReturnValue;
	Parms.K2Node_VariableSet_TargetLocationDistanceRight_ImplicitCast = K2Node_VariableSet_TargetLocationDistanceRight_ImplicitCast;
	Parms.K2Node_VariableSet_TargetLocationDistanceForward_ImplicitCast = K2Node_VariableSet_TargetLocationDistanceForward_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_FunnelFollow.BP_AIAction_FunnelFollow_C.GetFollowSpeedFromController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             FollowSpeed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_FunnelCharacterAIController_C*K2Node_DynamicCast_AsBP_Funnel_Character_AIController            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_FunnelFollow_C::GetFollowSpeedFromController(double* FollowSpeed, class AController* CallFunc_GetController_ReturnValue, class ABP_FunnelCharacterAIController_C* K2Node_DynamicCast_AsBP_Funnel_Character_AIController, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_FunnelFollow_C", "GetFollowSpeedFromController");

	Params::UBP_AIAction_FunnelFollow_C_GetFollowSpeedFromController_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Funnel_Character_AIController = K2Node_DynamicCast_AsBP_Funnel_Character_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FollowSpeed != nullptr)
		*FollowSpeed = Parms.FollowSpeed;

}


// Function BP_AIAction_FunnelFollow.BP_AIAction_FunnelFollow_C.GetFollowInterpolatedPosFromController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     FollowInterpolatedPos                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_FunnelCharacterAIController_C*K2Node_DynamicCast_AsBP_Funnel_Character_AIController            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_FunnelFollow_C::GetFollowInterpolatedPosFromController(struct FVector* FollowInterpolatedPos, class AController* CallFunc_GetController_ReturnValue, class ABP_FunnelCharacterAIController_C* K2Node_DynamicCast_AsBP_Funnel_Character_AIController, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_FunnelFollow_C", "GetFollowInterpolatedPosFromController");

	Params::UBP_AIAction_FunnelFollow_C_GetFollowInterpolatedPosFromController_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Funnel_Character_AIController = K2Node_DynamicCast_AsBP_Funnel_Character_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FollowInterpolatedPos != nullptr)
		*FollowInterpolatedPos = std::move(Parms.FollowInterpolatedPos);

}


// Function BP_AIAction_FunnelFollow.BP_AIAction_FunnelFollow_C.TryGetTrainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APalCharacter*               Trainer                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalFunnelCharacter*         K2Node_DynamicCast_AsPal_Funnel_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetTrainer_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_FunnelFollow_C::TryGetTrainer(class APalCharacter** Trainer, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalFunnelCharacter* K2Node_DynamicCast_AsPal_Funnel_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetTrainer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_FunnelFollow_C", "TryGetTrainer");

	Params::UBP_AIAction_FunnelFollow_C_TryGetTrainer_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Funnel_Character = K2Node_DynamicCast_AsPal_Funnel_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTrainer_ReturnValue = CallFunc_GetTrainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Trainer != nullptr)
		*Trainer = Parms.Trainer;

}


// Function BP_AIAction_FunnelFollow.BP_AIAction_FunnelFollow_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_FunnelFollow_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_FunnelFollow_C", "ActionTick");

	Params::UBP_AIAction_FunnelFollow_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIAction_FunnelFollow.BP_AIAction_FunnelFollow_C.ExecuteUbergraph_BP_AIAction_FunnelFollow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_FunnelFollow_C::ExecuteUbergraph_BP_AIAction_FunnelFollow(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIAction_FunnelFollow_C", "ExecuteUbergraph_BP_AIAction_FunnelFollow");

	Params::UBP_AIAction_FunnelFollow_C_ExecuteUbergraph_BP_AIAction_FunnelFollow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


