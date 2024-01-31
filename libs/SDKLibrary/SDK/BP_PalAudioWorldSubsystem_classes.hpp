#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x180 - 0x80)
// BlueprintGeneratedClass BP_PalAudioWorldSubsystem.BP_PalAudioWorldSubsystem_C
class UBP_PalAudioWorldSubsystem_C : public UPalAudioWorldSubsystem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsDead;                                            // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DeubugModel;                                       // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LastOneEnemy;                                      // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuid>                         ExecRaid;                                          // 0xA0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuid>                         ArrivedRaid;                                       // 0xB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsLocalPlayerInsideBaseCamp;                       // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APalSpotAreaBase*>              SpotList;                                          // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APalAmbientSoundAreaBase*>      AmbientSoundList;                                  // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APalAmbientSoundAreaBase*>      AmbientSoundListPrev;                              // 0xE8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<int32>                                AmbinetSoundPlayingIdList;                         // 0xF8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalBattleBGMType, enum class EPalAudioStateGroup> BattleBGMMap;                                      // 0x108(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPalAmbientSoundAreaData              CurrentAmbientData;                                // 0x158(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_PalAudioWorldSubsystem_C* GetDefaultObj();

	void FindMaxPriorityAmbientSoundArea(class APalAmbientSoundAreaBase** AmbinetSoundArea, class APalAmbientSoundAreaBase* TargetAmbientSoundArea, int32 MaxPriority, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APalAmbientSoundAreaBase* CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, class APalAmbientSoundAreaBase* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	bool IsPlayingArea(class APalAmbientSoundAreaBase* AmbientSoundArea, bool CallFunc_Array_Identical_ReturnValue, bool CallFunc_Array_Identical_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void ChangeBattleBGMType(enum class EPalBattleBGMType GameType, enum class EPalAudioStateGroup* AudioType, enum class EPalAudioStateGroup CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnAddRemoveEnemy(enum class EPalBattleBGMType Rank, bool IsAdd, enum class EPalAudioStateGroup CallFunc_ChangeBattleBGMType_AudioType);
	void OnPlayerEnterAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea, int32 CallFunc_Array_AddUnique_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnPlayerExitAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void PlayAmbientSounds(enum class EPalOneDayTimeType OneDayTimeType, const TArray<class UAkAudioEvent*>& TargetAmbientEvents, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, class UAkAudioEvent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_PlaySound_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnChangeOneDayTimeType(enum class EPalOneDayTimeType OneDayTimeType, const TArray<class UAkAudioEvent*>& TargetAmbientEvents, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void OnNightEnd();
	void OnNightStart();
	void UpdateAmbient(class APalAmbientSoundAreaBase* NextAmbientSoundArea, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FPalAmbientSoundAreaData& CallFunc_GetAmbientSoundAreaData_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsPlayingArea_ReturnValue, class APalAmbientSoundAreaBase* CallFunc_FindMaxPriorityAmbientSoundArea_AmbinetSoundArea, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, enum class EPalOneDayTimeType CallFunc_GetCurrentDayTimeType_ReturnValue);
	void OnBattleRankDown(enum class EPalPlayerBattleFinishType Finish, bool K2Node_SwitchEnum_CmpSuccess);
	void OnPlayerExitSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnPlayerEnterSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void UpdateSpot(enum class EPalAudioState SpotName, bool IsInsideAnySpot, int32 CallFunc_Array_LastIndex_ReturnValue, class APalSpotAreaBase* CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, enum class EPalAudioState CallFunc_GetAudioState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnPlayerExitBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnPlayerEnterBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void UpdateRaid(bool CallFunc_Array_IsEmpty_ReturnValue);
	void OnArrivedRaid(struct FPalIncidentBroadcastParameter& Param, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void OnEndRaid(struct FPalIncidentBroadcastParameter& Parameter, const struct FGuid& Guid, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1);
	void OnStartRaid(struct FPalIncidentBroadcastParameter& Parameter, const struct FGuid& Guid, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void CreateDebugModel(class AActor** NewParam, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPalCharacterCameraComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void OnBattleModeChanged(bool IsBattleMode);
	void UpdateDebugDisplay(class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, const struct FVector& CallFunc_GetSoundPlayerLocation_OutLocation, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_CreateDebugModel_NewParam, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void UpdateWorldLocation(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalCharacterCameraComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void UpdateWorldTime(class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, float CallFunc_GetCurrentPalWorldHoursFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateStatePlayerAlive(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetDefaultState();
	void Tick_BP(float DeltaTime);
	void OnEndOfEvent();
	void DeathPlayer();
	void RespawnPlayer(class APalPlayerCharacter* Player);
	void OnSpawnedLocalPlayerCharacter(class APawn* Pawn, class AController* Controller);
	void ExecuteUbergraph_BP_PalAudioWorldSubsystem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaTime, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_2, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_3, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_4, class APalPlayerCharacter* K2Node_CustomEvent_Player, class APawn* K2Node_Event_Pawn, class AController* K2Node_Event_Controller, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPalTimeManager* CallFunc_GetTimeManager_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, int32 CallFunc_PlaySound_ReturnValue);
};

}


