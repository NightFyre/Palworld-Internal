#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C
// (None)

class UClass* UBP_PalIncidentRandomActionHunterVsPal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalIncidentRandomActionHunterVsPal_C");

	return Clss;
}


// BP_PalIncidentRandomActionHunterVsPal_C BP_PalIncidentRandomActionHunterVsPal.Default__BP_PalIncidentRandomActionHunterVsPal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalIncidentRandomActionHunterVsPal_C* UBP_PalIncidentRandomActionHunterVsPal_C::GetDefaultObj()
{
	static class UBP_PalIncidentRandomActionHunterVsPal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalIncidentRandomActionHunterVsPal_C*>(UBP_PalIncidentRandomActionHunterVsPal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.ExistsAliveCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class APalCharacter*>       Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::ExistsAliveCharacter(TArray<class APalCharacter*>& Array, bool* NewParam, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class APalCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "ExistsAliveCharacter");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_ExistsAliveCharacter_Params Parms{};

	Parms.Array = Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.GetSpawnedLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalAIController*            Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalRandomIncidentNPCSpawner*CallFunc_GetSpawner_Spawmer                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PalRandomIncidentNPCSpawner_C*K2Node_DynamicCast_AsBP_Pal_Random_Incident_NPCSpawner           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSpawnedLocation_Found                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSpawnedLocation_SpawnedLocation                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::GetSpawnedLocation(class APalAIController* Controller, bool* Found, struct FVector* Location, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APalRandomIncidentNPCSpawner* CallFunc_GetSpawner_Spawmer, class ABP_PalRandomIncidentNPCSpawner_C* K2Node_DynamicCast_AsBP_Pal_Random_Incident_NPCSpawner, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetSpawnedLocation_Found, const struct FVector& CallFunc_GetSpawnedLocation_SpawnedLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "GetSpawnedLocation");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_GetSpawnedLocation_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetSpawner_Spawmer = CallFunc_GetSpawner_Spawmer;
	Parms.K2Node_DynamicCast_AsBP_Pal_Random_Incident_NPCSpawner = K2Node_DynamicCast_AsBP_Pal_Random_Incident_NPCSpawner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSpawnedLocation_Found = CallFunc_GetSpawnedLocation_Found;
	Parms.CallFunc_GetSpawnedLocation_SpawnedLocation = CallFunc_GetSpawnedLocation_SpawnedLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.GetSpawnRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Radius                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalRandomIncidentNPCSpawner*CallFunc_GetSpawner_Spawmer                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalRandomIncidentSpawnerBase*K2Node_DynamicCast_AsPal_Random_Incident_Spawner_Base            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAreaRadius_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Radius_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::GetSpawnRadius(double* Radius, class APalRandomIncidentNPCSpawner* CallFunc_GetSpawner_Spawmer, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalRandomIncidentSpawnerBase* K2Node_DynamicCast_AsPal_Random_Incident_Spawner_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAreaRadius_ReturnValue, double K2Node_FunctionResult_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "GetSpawnRadius");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_GetSpawnRadius_Params Parms{};

	Parms.CallFunc_GetSpawner_Spawmer = CallFunc_GetSpawner_Spawmer;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Random_Incident_Spawner_Base = K2Node_DynamicCast_AsPal_Random_Incident_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAreaRadius_ReturnValue = CallFunc_GetAreaRadius_ReturnValue;
	Parms.K2Node_FunctionResult_Radius_ImplicitCast = K2Node_FunctionResult_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.GetSpawnerLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalRandomIncidentNPCSpawner*CallFunc_GetSpawner_Spawmer                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::GetSpawnerLocation(struct FVector* Location, class APalRandomIncidentNPCSpawner* CallFunc_GetSpawner_Spawmer, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "GetSpawnerLocation");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_GetSpawnerLocation_Params Parms{};

	Parms.CallFunc_GetSpawner_Spawmer = CallFunc_GetSpawner_Spawmer;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.ResetAIController_Monster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MonsterAIControllerBase_C*Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSpawnedLocation_Found                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSpawnedLocation_Location                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSpawnerLocation_Location                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_GetPalAIBlackboard_C>K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetSpawnRadius_Radius                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetMyBB_PalBrackboard                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::ResetAIController_Monster(class ABP_MonsterAIControllerBase_C* Controller, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_GetSpawnedLocation_Found, const struct FVector& CallFunc_GetSpawnedLocation_Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetSpawnerLocation_Location, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetSpawnRadius_Radius, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "ResetAIController_Monster");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_ResetAIController_Monster_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetSpawnedLocation_Found = CallFunc_GetSpawnedLocation_Found;
	Parms.CallFunc_GetSpawnedLocation_Location = CallFunc_GetSpawnedLocation_Location;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetSpawnerLocation_Location = CallFunc_GetSpawnerLocation_Location;
	Parms.K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard = K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSpawnRadius_Radius = CallFunc_GetSpawnRadius_Radius;
	Parms.CallFunc_GetMyBB_PalBrackboard = CallFunc_GetMyBB_PalBrackboard;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.ResetAIController_NPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPCAIController_C*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSpawnedLocation_Found                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSpawnedLocation_Location                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSpawnerLocation_Location                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetSpawnRadius_Radius                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_GetPalAIBlackboard_C>CallFunc_GetMyBB_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalAIBlackboard_Common_C*CallFunc_GetMyBB_PalBrackboard                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::ResetAIController_NPC(class ABP_NPCAIController_C* Controller, bool CallFunc_GetSpawnedLocation_Found, const struct FVector& CallFunc_GetSpawnedLocation_Location, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetSpawnerLocation_Location, double CallFunc_GetSpawnRadius_Radius, TScriptInterface<class IBPI_GetPalAIBlackboard_C> CallFunc_GetMyBB_self_CastInput, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "ResetAIController_NPC");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_ResetAIController_NPC_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetSpawnedLocation_Found = CallFunc_GetSpawnedLocation_Found;
	Parms.CallFunc_GetSpawnedLocation_Location = CallFunc_GetSpawnedLocation_Location;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetSpawnerLocation_Location = CallFunc_GetSpawnerLocation_Location;
	Parms.CallFunc_GetSpawnRadius_Radius = CallFunc_GetSpawnRadius_Radius;
	Parms.CallFunc_GetMyBB_self_CastInput = CallFunc_GetMyBB_self_CastInput;
	Parms.CallFunc_GetMyBB_PalBrackboard = CallFunc_GetMyBB_PalBrackboard;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.ResetAIController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GroupID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Wild_C*K2Node_DynamicCast_AsBP_Monster_AIController_Wild                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       CallFunc_CollectCharactersByGroup_MatchCharacters                (ReferenceParm)
// TArray<class APalCharacter*>       CallFunc_CollectCharactersByGroup_UnmatchCharacters              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::ResetAIController(int32 GroupID, class AActor* Actor, class AController* Controller, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_MonsterAIController_Wild_C* K2Node_DynamicCast_AsBP_Monster_AIController_Wild, bool K2Node_DynamicCast_bSuccess, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess_1, TArray<class APalCharacter*>& CallFunc_CollectCharactersByGroup_MatchCharacters, TArray<class APalCharacter*>& CallFunc_CollectCharactersByGroup_UnmatchCharacters, int32 CallFunc_Array_Length_ReturnValue, class APalCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "ResetAIController");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_ResetAIController_Params Parms{};

	Parms.GroupID = GroupID;
	Parms.Actor = Actor;
	Parms.Controller = Controller;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Wild = K2Node_DynamicCast_AsBP_Monster_AIController_Wild;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController = K2Node_DynamicCast_AsBP_NPCAIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CollectCharactersByGroup_MatchCharacters = CallFunc_CollectCharactersByGroup_MatchCharacters;
	Parms.CallFunc_CollectCharactersByGroup_UnmatchCharacters = CallFunc_CollectCharactersByGroup_UnmatchCharacters;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.GetWinnerGroup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              GroupID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAnyNpcAlive                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_CollectGroupIds_GroupIds                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       CallFunc_CollectCharactersByGroup_MatchCharacters                (ReferenceParm)
// TArray<class APalCharacter*>       CallFunc_CollectCharactersByGroup_UnmatchCharacters              (ReferenceParm)
// bool                               CallFunc_ExistsAliveCharacter_NewParam                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExistsAliveCharacter_NewParam_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::GetWinnerGroup(int32* GroupID, bool IsAnyNpcAlive, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<int32>& CallFunc_CollectGroupIds_GroupIds, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<class APalCharacter*>& CallFunc_CollectCharactersByGroup_MatchCharacters, TArray<class APalCharacter*>& CallFunc_CollectCharactersByGroup_UnmatchCharacters, bool CallFunc_ExistsAliveCharacter_NewParam, bool CallFunc_ExistsAliveCharacter_NewParam_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "GetWinnerGroup");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_GetWinnerGroup_Params Parms{};

	Parms.IsAnyNpcAlive = IsAnyNpcAlive;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CollectGroupIds_GroupIds = CallFunc_CollectGroupIds_GroupIds;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CollectCharactersByGroup_MatchCharacters = CallFunc_CollectCharactersByGroup_MatchCharacters;
	Parms.CallFunc_CollectCharactersByGroup_UnmatchCharacters = CallFunc_CollectCharactersByGroup_UnmatchCharacters;
	Parms.CallFunc_ExistsAliveCharacter_NewParam = CallFunc_ExistsAliveCharacter_NewParam;
	Parms.CallFunc_ExistsAliveCharacter_NewParam_1 = CallFunc_ExistsAliveCharacter_NewParam_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GroupID != nullptr)
		*GroupID = Parms.GroupID;

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.Set Hate To Targets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       Targets                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APalAIController*            Controller                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetMaxHP_ReturnValue                                    (NoDestructor)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Wild_C*K2Node_DynamicCast_AsBP_Monster_AIController_Wild                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalAIController*            K2Node_DynamicCast_AsPal_AIController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_C*       K2Node_DynamicCast_AsBP_NPCAIController                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHate*                    CallFunc_GetHateSystem_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ChangeHate_PlusHateValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::Set_Hate_To_Targets(class APalCharacter* Character, TArray<class APalCharacter*>& Targets, class APalAIController* Controller, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class APalCharacter* CallFunc_Array_Get_Item, class APalCharacter* CallFunc_Array_Get_Item_1, class APalCharacter* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class ABP_MonsterAIController_Wild_C* K2Node_DynamicCast_AsBP_Monster_AIController_Wild, bool K2Node_DynamicCast_bSuccess, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess_1, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess_2, class UPalHate* CallFunc_GetHateSystem_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_ChangeHate_PlusHateValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "Set Hate To Targets");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_Set_Hate_To_Targets_Params Parms{};

	Parms.Character = Character;
	Parms.Targets = Targets;
	Parms.Controller = Controller;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetMaxHP_ReturnValue = CallFunc_GetMaxHP_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Wild = K2Node_DynamicCast_AsBP_Monster_AIController_Wild;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPal_AIController = K2Node_DynamicCast_AsPal_AIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController = K2Node_DynamicCast_AsBP_NPCAIController;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetHateSystem_ReturnValue = CallFunc_GetHateSystem_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_ChangeHate_PlusHateValue_ImplicitCast = CallFunc_ChangeHate_PlusHateValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.CollectCharactersByGroup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Group                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       MatchCharacters                                                  (Parm, OutParm)
// TArray<class APalCharacter*>       UnmatchCharacters                                                (Parm, OutParm)
// class APalRandomIncidentNPCSpawner*Spawner                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FName                        RowName                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  NPCData                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  MonstarData                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       UnmatchList                                                      (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class APalCharacter*>       MatchList                                                        (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalRandomIncidentNPCSpawner*CallFunc_GetSpawner_Spawmer                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSettingTableRow_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSettings  CallFunc_GetSettingTableRow_Data                                 (None)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// struct FPalRandomIncidentSpawnNPCDataCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindCharacterByName_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_FindCharacterByName_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataCallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::CollectCharactersByGroup(int32 Group, TArray<class APalCharacter*>* MatchCharacters, TArray<class APalCharacter*>* UnmatchCharacters, class APalRandomIncidentNPCSpawner* Spawner, class FName RowName, class UDataTable* NPCData, class UDataTable* MonstarData, const TArray<class APalCharacter*>& UnmatchList, const TArray<class APalCharacter*>& MatchList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class APalRandomIncidentNPCSpawner* CallFunc_GetSpawner_Spawmer, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GetSettingTableRow_Result, const struct FPalRandomIncidentSettings& CallFunc_GetSettingTableRow_Data, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, const struct FPalRandomIncidentSpawnNPCData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APalCharacter* CallFunc_FindCharacterByName_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_FindCharacterByName_ReturnValue_1, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "CollectCharactersByGroup");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_CollectCharactersByGroup_Params Parms{};

	Parms.Group = Group;
	Parms.Spawner = Spawner;
	Parms.RowName = RowName;
	Parms.NPCData = NPCData;
	Parms.MonstarData = MonstarData;
	Parms.UnmatchList = UnmatchList;
	Parms.MatchList = MatchList;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetSpawner_Spawmer = CallFunc_GetSpawner_Spawmer;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetSettingTableRow_Result = CallFunc_GetSettingTableRow_Result;
	Parms.CallFunc_GetSettingTableRow_Data = CallFunc_GetSettingTableRow_Data;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FindCharacterByName_ReturnValue = CallFunc_FindCharacterByName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FindCharacterByName_ReturnValue_1 = CallFunc_FindCharacterByName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MatchCharacters != nullptr)
		*MatchCharacters = std::move(Parms.MatchCharacters);

	if (UnmatchCharacters != nullptr)
		*UnmatchCharacters = std::move(Parms.UnmatchCharacters);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.CollectGroupIds
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      GroupIds                                                         (Parm, OutParm)
// class FName                        RowName                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  NPCData                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  MonstarData                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      ReVal                                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSettingTableRow_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSettings  CallFunc_GetSettingTableRow_Data                                 (None)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnNPCDataCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalRandomIncidentSpawnMonsterDataCallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::CollectGroupIds(TArray<int32>* GroupIds, class FName RowName, class UDataTable* NPCData, class UDataTable* MonstarData, const TArray<int32>& ReVal, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_GetSettingTableRow_Result, const struct FPalRandomIncidentSettings& CallFunc_GetSettingTableRow_Data, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalRandomIncidentSpawnNPCData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "CollectGroupIds");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_CollectGroupIds_Params Parms{};

	Parms.RowName = RowName;
	Parms.NPCData = NPCData;
	Parms.MonstarData = MonstarData;
	Parms.ReVal = ReVal;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetSettingTableRow_Result = CallFunc_GetSettingTableRow_Result;
	Parms.CallFunc_GetSettingTableRow_Data = CallFunc_GetSettingTableRow_Data;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (GroupIds != nullptr)
		*GroupIds = std::move(Parms.GroupIds);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.SetHate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_CollectGroupIds_GroupIds                                (ReferenceParm)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APalCharacter*>       CallFunc_CollectCharactersByGroup_MatchCharacters                (ReferenceParm)
// TArray<class APalCharacter*>       CallFunc_CollectCharactersByGroup_UnmatchCharacters              (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::SetHate(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<int32>& CallFunc_CollectGroupIds_GroupIds, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class APalCharacter*>& CallFunc_CollectCharactersByGroup_MatchCharacters, TArray<class APalCharacter*>& CallFunc_CollectCharactersByGroup_UnmatchCharacters, bool CallFunc_Less_IntInt_ReturnValue, class APalCharacter* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "SetHate");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_SetHate_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_CollectGroupIds_GroupIds = CallFunc_CollectGroupIds_GroupIds;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CollectCharactersByGroup_MatchCharacters = CallFunc_CollectCharactersByGroup_MatchCharacters;
	Parms.CallFunc_CollectCharactersByGroup_UnmatchCharacters = CallFunc_CollectCharactersByGroup_UnmatchCharacters;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.OnAllNpcSpawned
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalIncidentRandomActionHunterVsPal_C::OnAllNpcSpawned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "OnAllNpcSpawned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.OnInitialized
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalIncidentRandomActionHunterVsPal_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.OnStart
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalIncidentRandomActionHunterVsPal_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "OnStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalIncidentRandomActionHunterVsPal_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "OnTerminate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.OnTick
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::OnTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "OnTick");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_OnTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentRandomActionHunterVsPal.BP_PalIncidentRandomActionHunterVsPal_C.ExecuteUbergraph_BP_PalIncidentRandomActionHunterVsPal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWinnerGroup_GroupId                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentRandomActionHunterVsPal_C::ExecuteUbergraph_BP_PalIncidentRandomActionHunterVsPal(int32 EntryPoint, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float K2Node_Event_DeltaTime, int32 CallFunc_GetWinnerGroup_GroupId, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentRandomActionHunterVsPal_C", "ExecuteUbergraph_BP_PalIncidentRandomActionHunterVsPal");

	Params::UBP_PalIncidentRandomActionHunterVsPal_C_ExecuteUbergraph_BP_PalIncidentRandomActionHunterVsPal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetWinnerGroup_GroupId = CallFunc_GetWinnerGroup_GroupId;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


