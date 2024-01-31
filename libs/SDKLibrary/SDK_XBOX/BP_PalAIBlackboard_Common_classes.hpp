#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE2 (0x10A - 0x28)
// BlueprintGeneratedClass BP_PalAIBlackboard_Common.BP_PalAIBlackboard_Common_C
class UBP_PalAIBlackboard_Common_C : public UPalAIBlackboardBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               MoveGoal_BB;                                       // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRestMode_BB;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReturnTerritoryMode_BB;                          // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43BD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpawnedPosition_BB;                                // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnerLocation_BB;                                // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ReturnTerritoryRadius_BB;                          // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WalkingRadius_BB;                                  // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBattleMode_BB;                                   // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BattleStartLocation_BB;                            // 0x98(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                        TalkerID_BB;                                       // 0xB0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsEscapeMode_BB;                                   // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SleepStartTime_BB;                                 // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SleepEndTime_BB;                                   // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 DrinkWaterSpotID_BB;                               // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDrinkWaterMode_BB;                               // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Disable_ReturnTerritory_WildPal;                   // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PalAIBlackboard_Common_C* GetDefaultObj();

	void Initialize_PalBB(class AActor* SelfActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void ExecuteUbergraph_BP_PalAIBlackboard_Common(int32 EntryPoint);
};

}


