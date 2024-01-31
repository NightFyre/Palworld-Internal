#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2F0 - 0x2C0)
// BlueprintGeneratedClass BP_WorldSecurity_AreaInvasion_Volume.BP_WorldSecurity_AreaInvasion_Volume_C
class ABP_WorldSecurity_AreaInvasion_Volume_C : public APalTriggerAreaBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BoxCollision;                                      // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        HitActorArray;                                     // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_WorldSecurity_AreaInvasion_Volume_C* GetDefaultObj();

	void NotifyHitActors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGuid& CallFunc_GetInstanceId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsWantedCharacter_ReturnValue, bool CallFunc_IsCriminalCharacter_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void IsPlayerOverlap(bool* IsOverlap, TArray<class AActor*>* OverlapPlayers, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume(int32 EntryPoint, const struct FGuid& CallFunc_GetInstanceId_ReturnValue, float K2Node_Event_DeltaSeconds, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsPlayerOverlap_IsOverlap, TArray<class AActor*>& CallFunc_IsPlayerOverlap_OverlapPlayers, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AActor* K2Node_Event_OtherActor, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_Event_OtherActor_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FGuid& CallFunc_GetInstanceId_ReturnValue_1);
};

}


