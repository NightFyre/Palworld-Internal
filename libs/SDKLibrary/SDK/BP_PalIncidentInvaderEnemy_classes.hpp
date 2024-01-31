#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x87 (0x308 - 0x281)
// BlueprintGeneratedClass BP_PalIncidentInvaderEnemy.BP_PalIncidentInvaderEnemy_C
class UBP_PalIncidentInvaderEnemy_C : public UBP_PalIncidentInvaderBase_C
{
public:
	uint8                                        Pad_251[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       MarchTimer;                                        // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalInvaderDatabaseRow                ChosenInvaderData;                                 // 0x298(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_PalIncidentInvaderEnemy_C* GetDefaultObj();

	void ReturnToSpawnedPoint(int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_GetStartLocation_StartLocation, const struct FVector& CallFunc_GetStartLocation_StartLocation_1, int32 Temp_int_Loop_Counter_Variable, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_NPCAIController_Invader_C* K2Node_DynamicCast_AsBP_NPCAIController_Invader, bool K2Node_DynamicCast_bSuccess, class ABP_MonsterAIController_Invader_C* K2Node_DynamicCast_AsBP_Monster_AIController_Invader, bool K2Node_DynamicCast_bSuccess_1);
	void OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController);
	void OnCharacterSpawned(class APalCharacter* SpawnedCharacter, int32 CallFunc_RandomInteger_ReturnValue, const struct FVector& CallFunc_GoalPointPerAgent_GoalPosition, const struct FVector& CallFunc_GetTargetBaseCampPosition_Location, class AController* CallFunc_GetController_ReturnValue, class ABP_MonsterAIController_Invader_C* K2Node_DynamicCast_AsBP_Monster_AIController_Invader, bool K2Node_DynamicCast_bSuccess, class ABP_NPCAIController_Invader_C* K2Node_DynamicCast_AsBP_NPCAIController_Invader, bool K2Node_DynamicCast_bSuccess_1);
	void Get_Character_Location_Type(enum class EPalCharacterLocationType* CharacterLocationType);
	bool GetInvaderStartPoint(struct FVector* Result, TArray<struct FVector>& CallFunc_GetCandidateStartLocations_Result, int32 CallFunc_GetCandidateStartLocations_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void EndProc();
	void StartProc();
	void Tick(float DeltaTime);
	void ExecuteUbergraph_BP_PalIncidentInvaderEnemy(int32 EntryPoint, float K2Node_Event_DeltaTime, int32 CallFunc_GetInvadeReturnTimeMinutes_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast);
};

}


