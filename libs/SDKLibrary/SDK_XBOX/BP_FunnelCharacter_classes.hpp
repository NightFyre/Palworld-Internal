#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x858 - 0x840)
// BlueprintGeneratedClass BP_FunnelCharacter.BP_FunnelCharacter_C
class ABP_FunnelCharacter_C : public APalFunnelCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x840(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalNavigationInvokerComponent*        PalNavigationInvoker;                              // 0x848(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                   PalFacial;                                         // 0x850(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FunnelCharacter_C* GetDefaultObj();

	void SetLocationNearTrainer(const struct FVector& VEd, const struct FVector& VSt, class APalCharacter* Trainer, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FHitResult& CallFunc_CapsuleTraceSingle_OutHit, bool CallFunc_CapsuleTraceSingle_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class APalCharacter* CallFunc_GetTrainer_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnActive();
	void OnInactive();
	void ExecuteUbergraph_BP_FunnelCharacter(int32 EntryPoint, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, float K2Node_Event_DeltaSeconds, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalVisualEffectBase* CallFunc_AddVisualEffectForActor_ReturnValue, class UPalVisualEffectBase* CallFunc_AddVisualEffectForActor_ReturnValue_1, class UPalVisualEffectBase* CallFunc_AddVisualEffect_ReturnValue);
};

}


