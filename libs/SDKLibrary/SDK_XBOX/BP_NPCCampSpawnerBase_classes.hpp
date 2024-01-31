#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x311 - 0x298)
// BlueprintGeneratedClass BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C
class ABP_NPCCampSpawnerBase_C : public APalNPCCampSpawnerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  DebugMesh;                                         // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       Probability;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCCampPresetBase_C*               CampObject;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                  RewardName;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RespawnTime_RealMinutes;                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHand;                                         // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         RespawnPossible;                                   // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_4A9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RespawnDistance_FromPlayer;                        // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DisableDistance_FromBaseCamp;                      // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FF_NPCCampPreset>              PresetList;                                        // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UPalIndividualCharacterHandle*> CampEnemys;                                        // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         LoadCamp;                                          // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NPCCampSpawnerBase_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_0(class UPalIndividualCharacterHandle* NewParam);
	void OnReceivedReward(const struct FPalEnemyCampStatus& EnemyCampStatus, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue_1, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FPalEnemyCampStatus& CallFunc_GetEnemyCampStatus_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
	void IsNearPlayerCamp(bool* IsNear, class UPalBaseCampModel* Camp, const struct FVector& SelfPos, float CallFunc_GetRange_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsNearTwoPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalBaseCampManager* CallFunc_GetBaseCampManager_ReturnValue, class UPalBaseCampModel* CallFunc_GetNearestBaseCamp_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_IsNearTwoPoint_distance_ImplicitCast);
	void StartDespawnTimer(double DespawnTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void SetupCampStatus(const struct FPalEnemyCampStatus& CampStatus, float CallFunc_CalcRemainRespawnTime_ReturnValue, float CallFunc_CalcRemainDespawnTime_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, const struct FPalEnemyCampStatus& CallFunc_GetEnemyCampStatus_ReturnValue, double CallFunc_StartRespawnTimer_RespawnTime_ImplicitCast, double CallFunc_StartDespawnTimer_DespawnTime_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void DespawnCamp();
	void StartRespawnTimer(double RespawnTime, double CallFunc_Add_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void OnEnemyDead(const struct FPalDeadInfo& DeadInfo, const struct FPalEnemyCampStatus& EnemyCampStatus, const struct FDateTime& CallFunc_UtcNow_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetIndividualCharacterHandleByActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, const struct FPalEnemyCampStatus& CallFunc_GetEnemyCampStatus_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue_1, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
	void OnEnemySpawned(class UPalIndividualCharacterHandle*& SpawnHandle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void CheckWorldLoadComplete(bool* Loaded, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWorldPartitionStreamingQuerySource& K2Node_MakeStruct_WorldPartitionStreamingQuerySource, class UWorldPartitionSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, TArray<struct FWorldPartitionStreamingQuerySource>& K2Node_MakeArray_Array, class UWorldPartitionSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsStreamingCompleted_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void IsProbabilitySuccess(bool* Success, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void PlayerCheck(bool* RespawnOK, TArray<class APalCharacter*>& CallFunc_GetAllPlayerCharacters_OutPlayers, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetRespawnAble(bool CallFunc_HasAuthority_ReturnValue);
	void TryCampSpawn(double CallFunc_Multiply_DoubleDouble_ReturnValue, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, const struct FPalEnemyCampStatus& K2Node_MakeStruct_PalEnemyCampStatus, const struct FPalEnemyCampStatus& CallFunc_GetEnemyCampStatus_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_RandomLottery_ResultClass, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_NPCCampPresetBase_C* CallFunc_FinishSpawningActor_ReturnValue);
	void RandomLottery(class UClass** ResultClass, double RandomValue, double AddWeight, double TotalWeight, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsProbabilitySuccess_Success, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FF_NPCCampPreset& CallFunc_Array_Get_Item, const struct FF_NPCCampPreset& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_NPCCampSpawnerBase(int32 EntryPoint, bool CallFunc_IsNearPlayerCamp_IsNear, bool CallFunc_HasAuthority_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_PlayerCheck_RespawnOK, bool CallFunc_CheckWorldLoadComplete_Loaded);
};

}


