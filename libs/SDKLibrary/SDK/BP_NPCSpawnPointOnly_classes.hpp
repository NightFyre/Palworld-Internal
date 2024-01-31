#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x2C4 - 0x290)
// BlueprintGeneratedClass BP_NPCSpawnPointOnly.BP_NPCSpawnPointOnly_C
class ABP_NPCSpawnPointOnly_C : public AActor
{
public:
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_PalHumanData     NPCName;                                           // 0x2A0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_NPCUniqueData    UniqueName;                                        // 0x2A8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UClass*                                OverrideControllerClass;                           // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                OverrideDefaultActionClass;                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        OverrideLevel;                                     // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NPCSpawnPointOnly_C* GetDefaultObj();

	void GetOneSpawnInfo(struct FF_NPCOnePointSpawnInfo* Info, const struct FF_NPCOnePointSpawnInfo& CallFunc_Get_Spawn_One_Info_OneInfo);
	void Get_Spawn_One_Info(struct FF_NPCOnePointSpawnInfo* OneInfo, const TArray<struct FF_NPC_PathWalkPoint>& TempArray, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& K2Node_MakeArray_Array, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FF_NPC_PathWalkPoint>& K2Node_MakeArray_Array_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FF_NPC_PathWalkArray& K2Node_MakeStruct_F_NPC_PathWalkArray, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class UClass* K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk, bool K2Node_ClassDynamicCast_bSuccess, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class ABP_NPC_WalkPathPoint_1_C* K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FF_NPC_PathWalkPoint& K2Node_MakeStruct_F_NPC_PathWalkPoint, int32 CallFunc_Array_Add_ReturnValue, const struct FF_NPCOnePointSpawnInfo& K2Node_MakeStruct_F_NPCOnePointSpawnInfo, double K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast);
};

}


