#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x458 - 0x418)
// BlueprintGeneratedClass BP_SquadNPCSpawner.BP_SquadNPCSpawner_C
class ABP_SquadNPCSpawner_C : public ABP_MonoNPCSpawner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UPalIndividualCharacterHandle*> SpawnedHandleList;                                 // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TArray<struct FF_NPCOnePointSpawnInfo>       SpawnInfoList;                                     // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsLoadingFlag;                                     // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D2B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpawnedCount;                                      // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSquadSpawnedCharacter;                           // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_SquadNPCSpawner_C* GetDefaultObj();

	void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>* Handles);
	float GetSpawnPointRadius_0();
	void GetWorldLoadWaitRadius(double* Radius);
	void DeleteOnePoint(class AActor* Point);
	void SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void DespawnDelegate(const struct FPalInstanceID& ID, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Despawn(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetCharaNames();
	void SetupSpawnInfoList(const TArray<class USceneComponent*>& TempComponent, const TArray<TScriptInterface<class IBPI_SpawnPointInfo_C>>& TempBPIList, TScriptInterface<class IBPI_SpawnPointInfo_C> TempBPI, class ABP_NPCSpawnPointOnly_C* TempPoint, int32 TempLevel, class UClass* TempDefaultAction, class UClass* TempAICon, const TArray<struct FF_NPCOnePointSpawnInfo>& TempInfoList, const TArray<class AActor*>& TempOnePointActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FF_NPCOnePointSpawnInfo& CallFunc_GetOneSpawnInfo_Info, int32 CallFunc_Array_Add_ReturnValue, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class FName CallFunc_GetCharacterIDFromCharacterIDAndUniqueNPCID_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FF_NPCOnePointSpawnInfo& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, const struct FF_NPCOnePointSpawnInfo& K2Node_MakeStruct_F_NPCOnePointSpawnInfo, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue_2, class USceneComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_4, TScriptInterface<class IBPI_SpawnPointInfo_C> K2Node_DynamicCast_AsBPI_Spawn_Point_Info, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_5, TScriptInterface<class IBPI_SpawnPointInfo_C> K2Node_DynamicCast_AsBPI_Spawn_Point_Info_1, bool K2Node_DynamicCast_bSuccess_1);
	void SpawnDelegate(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle* CallFunc_FindIndividualHandle_Handle, int32 CallFunc_FindIndividualHandle_Index);
	void FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue);
	void Spawn(int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FGuid& K2Node_MakeStruct_Guid, const struct FNetworkActorSpawnParameters& K2Node_MakeStruct_NetworkActorSpawnParameters, const struct FPalIndividualCharacterSaveParameter& CallFunc_GetInitializedCharacterSaveParemter_outParameter, bool CallFunc_GetInitializedCharacterSaveParemter_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_SpawnNewCharacter_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Check_Spawn(double DeltaTime, bool CallFunc_IsNearBaseCamp_ReturnValue, enum class EPalCheckSpawnResultType CallFunc_CheckSpawnDistance_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ReceiveBeginPlay();
	void BlueprintTick(float DeltaTime);
	void SetAllNPCLocation();
	void ExecuteUbergraph_BP_SquadNPCSpawner(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaTime, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Check_Spawn_DeltaTime_ImplicitCast);
	void OnSquadSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam);
};

}


