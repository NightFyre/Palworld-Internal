#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x380 - 0x370)
// BlueprintGeneratedClass BP_NormalBullet.BP_NormalBullet_C
class ABP_NormalBullet_C : public ABP_AttackBulletBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  One4_5_x_114_mm_Bullet;                            // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NormalBullet_C* GetDefaultObj();

	void GetHitEffect(class UNiagaraSystem** NiagaraEffect);
	void SpawnHitEffectsInStun(const struct FVector& ImpactPoint, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void SpawnHitEffects(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UNiagaraSystem* CallFunc_GetHitEffect_NiagaraEffect, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, struct FHitResult& Hit);
	void ExecuteUbergraph_BP_NormalBullet(int32 EntryPoint, class UPrimitiveComponent* K2Node_Event_HitComp, class AActor* K2Node_Event_OtherCharacter, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue);
};

}


