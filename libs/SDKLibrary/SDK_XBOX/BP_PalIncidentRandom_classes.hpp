#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x1F0 - 0x190)
// BlueprintGeneratedClass BP_PalIncidentRandom.BP_PalIncidentRandom_C
class UBP_PalIncidentRandom_C : public UPalRandomIncidentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x190(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalIncidentDynamicParameterRandom*    Parameter;                                         // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            SettingDT;                                         // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalRandomIncidentActionBase*          Action;                                            // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          SpawnedNpcNames;                                   // 0x1B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PalRandomIncidentNPCSpawner_C*     NPCSpawner;                                        // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ExcludedEvenOnce;                                  // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InsideActionAreaEvenOnce;                          // 0x1C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DE8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalRandomIncidentSpawnMonsterData> OutbreakMonsters;                                  // 0x1D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          OutbreakMonsterNames;                              // 0x1E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_PalIncidentRandom_C* GetDefaultObj();

	void SetupOutbreakData(bool CallFunc_Get_Setting_Table_Row_Result, const struct FPalRandomIncidentSettings& CallFunc_Get_Setting_Table_Row_Data, bool CallFunc_IsOutbreakTable_ReturnValue);
	void GetGroupList(TArray<int32>* GroupNo, const TArray<int32>& GroupNoList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Get_Setting_Table_Row_Result, const struct FPalRandomIncidentSettings& CallFunc_Get_Setting_Table_Row_Data, bool CallFunc_IsOutbreakTable_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FPalRandomIncidentSpawnNPCData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_2);
	void OnRandomIncidentActionNotify(enum class EPalRandomIncidentActionNotifyType NotifyType, bool K2Node_SwitchEnum_CmpSuccess);
	void SetDisableFlagForNPCSpawner_BP(bool IsDisable, class APalRandomIncidentSpawnerBase* CallFunc_Get_Incident_Spawner_IncidentSpawner, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_GetAreaRadius_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void OnNPCSpawnerDestroyed(class AActor* DestroyedActor);
	void OnNpcDespawned(class FName& RowName, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void TerminateAction(bool CallFunc_IsValid_ReturnValue);
	void OnEndProc(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalRandomIncidentSpawnerBase* CallFunc_Get_Incident_Spawner_IncidentSpawner, bool CallFunc_IsValid_ReturnValue_2);
	class APalRandomIncidentNPCSpawner* GetNPCSpawner();
	void StartAction(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool IsExcludeOtherPal(bool CallFunc_Get_Setting_Table_Row_Result, const struct FPalRandomIncidentSettings& CallFunc_Get_Setting_Table_Row_Data);
	void ExcludeOtherPal(class APalRandomIncidentSpawnerBase* CallFunc_Get_Incident_Spawner_IncidentSpawner, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsExcludeOtherPal_ReturnValue);
	void OnExitAnyArea_Impl(enum class EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId, bool K2Node_SwitchEnum_CmpSuccess);
	void OnEnterAnyArea_Impl(enum class EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId, bool K2Node_SwitchEnum_CmpSuccess);
	void IsAllNpcSpawned(bool* IsSpawned, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Get_Setting_Table_Row_Result, const struct FPalRandomIncidentSettings& CallFunc_Get_Setting_Table_Row_Data, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void OnNpcSpawned(class FName& RowName, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAllNpcSpawned_isSpawned, int32 CallFunc_Array_Add_ReturnValue);
	void Spawn_NPCs(class UDataTable* SpawnDataList, class FName RowName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPalRandomIncidentSpawnNPCData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1);
	void Spawn_Monsters(class UDataTable* SpawnDataList, const struct FPalRandomIncidentSpawnMonsterData& GenerateSpawnMonsterData, const struct FPalRandomIncidentSpawnMonsterOutbreakData& OutbreakData, class FName RowName, bool CallFunc_IsOutbreakTable_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3);
	void Spawn_Characters(bool CallFunc_Get_Setting_Table_Row_Result, const struct FPalRandomIncidentSettings& CallFunc_Get_Setting_Table_Row_Data);
	void OnGroupCreated();
	void CreateCharacterIdList(TArray<class FName>* CharacterIds, const TArray<class FName>& NameList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Get_Setting_Table_Row_Result, const struct FPalRandomIncidentSettings& CallFunc_Get_Setting_Table_Row_Data, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_1, class FName CallFunc_Array_Get_Item_2, const struct FPalRandomIncidentSpawnMonsterData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FPalRandomIncidentSpawnNPCData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2);
	void Get_Setting_Table_Row(bool* Result, struct FPalRandomIncidentSettings* Data, const struct FPalRandomIncidentSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Get_Incident_Spawner(class APalRandomIncidentSpawnerBase** IncidentSpawner, class UObject* CallFunc_GetOwner_ReturnValue, class APalRandomIncidentSpawnerBase* K2Node_DynamicCast_AsPal_Random_Incident_Spawner_Base, bool K2Node_DynamicCast_bSuccess);
	void CreateAction(bool CallFunc_Get_Setting_Table_Row_Result, const struct FPalRandomIncidentSettings& CallFunc_Get_Setting_Table_Row_Data, class UPalRandomIncidentActionBase* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void CreateNpcSpawner(class APalRandomIncidentSpawnerBase* CallFunc_Get_Incident_Spawner_IncidentSpawner, class UObject* CallFunc_GetOwner_ReturnValue, class ABP_PalRandomIncidentSpawner_C* K2Node_DynamicCast_AsBP_Pal_Random_Incident_Spawner, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PalRandomIncidentNPCSpawner_C* CallFunc_FinishSpawningActor_ReturnValue);
	void SetupIncident(TArray<int32>& CallFunc_GetGroupList_GroupNo, bool CallFunc_Get_Setting_Table_Row_Result, const struct FPalRandomIncidentSettings& CallFunc_Get_Setting_Table_Row_Data, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalIncidentDynamicParameterRandom* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Random, bool K2Node_DynamicCast_bSuccess);
	void OnBegin();
	void BindIDelegate_AreaInOut();
	void UnbindIDelegate_AreaInOut();
	void BindDelegate_NpcSpawner();
	void UnbindDelegate_NpcSpawner();
	void OnEnterAnyAreaEvent(enum class EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId);
	void OnExitAnyAreaEvent(enum class EPalRandomIncidentSpawnerAreaType AreaType, int32 PlayerId);
	void OnEnd();
	void BindDelegate_Action();
	void UnbindDelegate_Action();
	void ExecuteUbergraph_BP_PalIncidentRandom(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EPalRandomIncidentSpawnerAreaType K2Node_CustomEvent_AreaType_1, int32 K2Node_CustomEvent_PlayerId_1, enum class EPalRandomIncidentSpawnerAreaType K2Node_CustomEvent_AreaType, int32 K2Node_CustomEvent_PlayerId, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_1);
};

}


