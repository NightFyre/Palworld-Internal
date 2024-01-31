#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x451 - 0x3C0)
// BlueprintGeneratedClass BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C
class ABP_PalRandomIncidentSpawner_C : public APalRandomIncidentSpawnerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      EndCollision;                                      // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      ActionCollision;                                   // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      ExclusionCollision;                                // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SpawnCollision;                                    // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentNotifyListener_C*       IncidentNotifyListener;                            // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FF_NPC_PathWalkArray> WalkPathList;                                      // 0x400(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         DisplayDebugArea;                                  // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalRandomIncidentSpawner_C* GetDefaultObj();

	void CreateDebugShape(double Delta, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetAreaRadius_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetAreaRadius_ReturnValue_1, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_GetAreaRadius_ReturnValue_2, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_3, bool CallFunc_IsValid_ReturnValue);
	void DestroyCollisionComponents();
	void SetAreaRadiuses();
	void AddWalkPath(class FName& PathName, TArray<class AActor*>& PointList, const struct FF_NPC_PathWalkArray& CallFunc_Create_Walk_Path_PathArray);
	void Create_Walk_Path(TArray<class AActor*>& PointArray, struct FF_NPC_PathWalkArray* PathArray, const TArray<struct FF_NPC_PathWalkPoint>& TempWalkArray, class ABP_NPC_WalkPathPoint_1_C* TmpWalkPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, class ABP_NPC_WalkPathPoint_1_C* K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FF_NPC_PathWalkArray& K2Node_MakeStruct_F_NPC_PathWalkArray, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FF_NPC_PathWalkPoint& K2Node_MakeStruct_F_NPC_PathWalkPoint, int32 CallFunc_Array_Add_ReturnValue, double K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast);
	void Collect_Walk_Path_Point(class USceneComponent* SceneRoot, TArray<class AActor*>* Actors, class AActor* TmpActor, const TArray<class AActor*>& CheckedActors, const TArray<class AActor*>& ActorList, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_NPC_WalkPathPoint_1_C* K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void EditorSetup_WalkPointRef(const TArray<class AActor*>& TempActorList, TArray<class AActor*>& CallFunc_Collect_Walk_Path_Point_Actors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void ReleaseIncident(bool CallFunc_IsValid_ReturnValue);
	void SetupIncident(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* Parameter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_PalIncidentNotifyListener_C* CallFunc_SpawnObject_ReturnValue);
	void OnIncidentSpawned(class UPalIncidentBase* Incident, class UPalIncidentDynamicParameterRandom* DynamicParameter);
	void OnIncidentNotify(class UPalIncidentNotifyListener* Listener, enum class EPalIncidentState IncidentState, struct FPalIncidentNotifyParameter& Parameter);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PalRandomIncidentSpawner(int32 EntryPoint, class UPalIncidentBase* K2Node_Event_Incident, class UPalIncidentDynamicParameterRandom* K2Node_Event_DynamicParameter, class UPalIncidentNotifyListener* K2Node_CustomEvent_Listener, enum class EPalIncidentState K2Node_CustomEvent_IncidentState, const struct FPalIncidentNotifyParameter& K2Node_CustomEvent_Parameter, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, double CallFunc_CreateDebugShape_Delta_ImplicitCast);
};

}


