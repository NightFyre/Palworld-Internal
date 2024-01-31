#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C
// (None)

class UClass* UBP_PalIncidentInvaderEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalIncidentInvaderEnemy_C");

	return Clss;
}


// BP_PalIncidentInvaderEnemy_C BP_PalIncidentInvaderEnemy.Default__BP_PalIncidentInvaderEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalIncidentInvaderEnemy_C* UBP_PalIncidentInvaderEnemy_C::GetDefaultObj()
{
	static class UBP_PalIncidentInvaderEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalIncidentInvaderEnemy_C*>(UBP_PalIncidentInvaderEnemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C.ReturnToSpawnedPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetStartLocation_StartLocation                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetStartLocation_StartLocation_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_Invader_C*K2Node_DynamicCast_AsBP_NPCAIController_Invader                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Invader_C*K2Node_DynamicCast_AsBP_Monster_AIController_Invader             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderEnemy_C::ReturnToSpawnedPoint(int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_GetStartLocation_StartLocation, const struct FVector& CallFunc_GetStartLocation_StartLocation_1, int32 Temp_int_Loop_Counter_Variable, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_NPCAIController_Invader_C* K2Node_DynamicCast_AsBP_NPCAIController_Invader, bool K2Node_DynamicCast_bSuccess, class ABP_MonsterAIController_Invader_C* K2Node_DynamicCast_AsBP_Monster_AIController_Invader, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderEnemy_C", "ReturnToSpawnedPoint");

	Params::UBP_PalIncidentInvaderEnemy_C_ReturnToSpawnedPoint_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetStartLocation_StartLocation = CallFunc_GetStartLocation_StartLocation;
	Parms.CallFunc_GetStartLocation_StartLocation_1 = CallFunc_GetStartLocation_StartLocation_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController_Invader = K2Node_DynamicCast_AsBP_NPCAIController_Invader;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Invader = K2Node_DynamicCast_AsBP_Monster_AIController_Invader;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C.OnAllCharacterSpawned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APalAIController*>    MemberController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PalIncidentInvaderEnemy_C::OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderEnemy_C", "OnAllCharacterSpawned");

	Params::UBP_PalIncidentInvaderEnemy_C_OnAllCharacterSpawned_Params Parms{};

	Parms.MemberController = MemberController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C.OnCharacterSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               SpawnedCharacter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GoalPointPerAgent_GoalPosition                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetBaseCampPosition_Location                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MonsterAIController_Invader_C*K2Node_DynamicCast_AsBP_Monster_AIController_Invader             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCAIController_Invader_C*K2Node_DynamicCast_AsBP_NPCAIController_Invader                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderEnemy_C::OnCharacterSpawned(class APalCharacter* SpawnedCharacter, int32 CallFunc_RandomInteger_ReturnValue, const struct FVector& CallFunc_GoalPointPerAgent_GoalPosition, const struct FVector& CallFunc_GetTargetBaseCampPosition_Location, class AController* CallFunc_GetController_ReturnValue, class ABP_MonsterAIController_Invader_C* K2Node_DynamicCast_AsBP_Monster_AIController_Invader, bool K2Node_DynamicCast_bSuccess, class ABP_NPCAIController_Invader_C* K2Node_DynamicCast_AsBP_NPCAIController_Invader, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderEnemy_C", "OnCharacterSpawned");

	Params::UBP_PalIncidentInvaderEnemy_C_OnCharacterSpawned_Params Parms{};

	Parms.SpawnedCharacter = SpawnedCharacter;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_GoalPointPerAgent_GoalPosition = CallFunc_GoalPointPerAgent_GoalPosition;
	Parms.CallFunc_GetTargetBaseCampPosition_Location = CallFunc_GetTargetBaseCampPosition_Location;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Monster_AIController_Invader = K2Node_DynamicCast_AsBP_Monster_AIController_Invader;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_NPCAIController_Invader = K2Node_DynamicCast_AsBP_NPCAIController_Invader;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C.Get Character Location Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalCharacterLocationTypeCharacterLocationType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderEnemy_C::Get_Character_Location_Type(enum class EPalCharacterLocationType* CharacterLocationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderEnemy_C", "Get Character Location Type");

	Params::UBP_PalIncidentInvaderEnemy_C_Get_Character_Location_Type_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CharacterLocationType != nullptr)
		*CharacterLocationType = Parms.CharacterLocationType;

}


// Function BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C.GetInvaderStartPoint
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetCandidateStartLocations_Result                       (ReferenceParm)
// int32                              CallFunc_GetCandidateStartLocations_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PalIncidentInvaderEnemy_C::GetInvaderStartPoint(struct FVector* Result, TArray<struct FVector>& CallFunc_GetCandidateStartLocations_Result, int32 CallFunc_GetCandidateStartLocations_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderEnemy_C", "GetInvaderStartPoint");

	Params::UBP_PalIncidentInvaderEnemy_C_GetInvaderStartPoint_Params Parms{};

	Parms.CallFunc_GetCandidateStartLocations_Result = CallFunc_GetCandidateStartLocations_Result;
	Parms.CallFunc_GetCandidateStartLocations_ReturnValue = CallFunc_GetCandidateStartLocations_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	return Parms.ReturnValue;

}


// Function BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C.EndProc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalIncidentInvaderEnemy_C::EndProc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderEnemy_C", "EndProc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C.StartProc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PalIncidentInvaderEnemy_C::StartProc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderEnemy_C", "StartProc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C.Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderEnemy_C::Tick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderEnemy_C", "Tick");

	Params::UBP_PalIncidentInvaderEnemy_C_Tick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C.ExecuteUbergraph_BP_PalIncidentInvaderEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInvadeReturnTimeMinutes_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalIncidentInvaderEnemy_C::ExecuteUbergraph_BP_PalIncidentInvaderEnemy(int32 EntryPoint, float K2Node_Event_DeltaTime, int32 CallFunc_GetInvadeReturnTimeMinutes_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalIncidentInvaderEnemy_C", "ExecuteUbergraph_BP_PalIncidentInvaderEnemy");

	Params::UBP_PalIncidentInvaderEnemy_C_ExecuteUbergraph_BP_PalIncidentInvaderEnemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetInvadeReturnTimeMinutes_ReturnValue = CallFunc_GetInvadeReturnTimeMinutes_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


