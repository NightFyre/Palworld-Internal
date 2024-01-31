#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3D0 - 0x398)
// BlueprintGeneratedClass BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C
class ABP_ThrowPal_ThrowObject_C : public ABP_ThrowObjectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Weapon_PalSphere_001;                           // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBounce;                                          // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ThrowRotator;                                      // 0x3B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ThrowPal_ThrowObject_C* GetDefaultObj();

	void FindNearEnemy(class APalCharacter* OwnerCharacter, class APalCharacter** OutputPin, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetNearestEnemyByLocation_OutMinRange, class APalCharacter* CallFunc_GetNearestEnemyByLocation_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void PostProcessSpawnOtomo(class AActor* HitActor, class UBP_OtomoPalHolderComponent_C* OtomoHolder, class APalCharacter* OwnerCharacter, class APalCharacter* CallFunc_FindNearEnemy_OutputPin, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UBP_OtomoPalHolderComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue);
	void SpawnOtomo(class APalCharacter** SpawnOtomo, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_OtomoPalHolderComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsLive_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_ActivateCurrentOtomoNearThePlayer_ReturnValue);
	void CollectTarget(class AActor** NewParam, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class APalCharacter*>& CallFunc_GetCharacterApartFromPlayer_OutCharacters, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateRotator(double DeltaTime, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_Multiply_RotatorFloat_B_ImplicitCast);
	void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ThrowPal_ThrowObject(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, bool CallFunc_IsLocalControlActor_ReturnValue, class UPalOtomoSpawnCollisionChecker* CallFunc_SpawnObject_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UPrimitiveComponent* K2Node_Event_HitComp, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_Hit, class UBP_OtomoPalHolderComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetCurrentSelectPalActor_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetLocation_WhenSpawnPalSphgereThrow_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_UpdateRotator_DeltaTime_ImplicitCast);
};

}


