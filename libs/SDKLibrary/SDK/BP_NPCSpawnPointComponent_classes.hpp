#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x620 - 0x5F0)
// BlueprintGeneratedClass BP_NPCSpawnPointComponent.BP_NPCSpawnPointComponent_C
class UBP_NPCSpawnPointComponent_C : public UStaticMeshComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FPalDataTableRowName_PalHumanData     NPCName;                                           // 0x5F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                OverrideDefaultAction;                             // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        OverrideLevel;                                     // 0x608(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBP_NPCPathWalkPointComponent_1_C*> WalkPointRefarence;                                // 0x610(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_NPCSpawnPointComponent_C* GetDefaultObj();

	void GetOneSpawnInfo(struct FF_NPCOnePointSpawnInfo* Info, const TArray<struct FF_NPC_PathWalkPoint>& TempArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FF_NPC_PathWalkArray& K2Node_MakeStruct_F_NPC_PathWalkArray, class UBP_NPCPathWalkPointComponent_1_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FF_NPC_PathWalkPoint& K2Node_MakeStruct_F_NPC_PathWalkPoint, class UClass* K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FF_NPCOnePointSpawnInfo& K2Node_MakeStruct_F_NPCOnePointSpawnInfo, double K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast);
	void Setup_Walk_Point_Ref(const TArray<class UBP_NPCPathWalkPointComponent_1_C*>& TempList, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UClass* K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class APalNPCSpawnerBase* K2Node_DynamicCast_AsPal_NPCSpawner_Base, bool K2Node_DynamicCast_bSuccess, TArray<class UObject*>& CallFunc_PathWalkNameSort_OutSortedWalkPoint, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBP_NPCPathWalkPointComponent_1_C* K2Node_DynamicCast_AsBP_NPCPath_Walk_Point_Component_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, bool CallFunc_Greater_IntInt_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item_1, class UBP_NPCPathWalkPointComponent_1_C* K2Node_DynamicCast_AsBP_NPCPath_Walk_Point_Component_1_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NPCSpawnPointComponent(int32 EntryPoint);
};

}


