#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x370 - 0x368)
// BlueprintGeneratedClass BP_AttackBulletBase.BP_AttackBulletBase_C
class ABP_AttackBulletBase_C : public APalBullet
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_AttackBulletBase_C* GetDefaultObj();

	bool SetBulletHoleDecal(struct FHitResult& Hit, float LifeSpan, float FadeTime, float FadeScreenSize, bool CallFunc_SetBulletHoleDecal_ReturnValue);
	void GetOverrideNetworkOwner(class AActor** Actor);
	void GetEffectValue(int32* Value);
	void GetEffectType(enum class EPalAdditionalEffectType* Effect);
	void GetExplosionClass(class UClass** ExplosionClass);
	void GetBulletAttackType(enum class EPalAttackType* AttackType);
	void SpawnBulletHole(const struct FHitResult& Hit_Result, bool CallFunc_SetBulletHoleDecal_ReturnValue);
	void GetOwnerActor(class AActor** OwnerActor, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue);
	void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& Hit, const TArray<struct FPalSpecialAttackRateInfo>& AttackRateInfo, TArray<struct FPalSpecialAttackRateInfo>& K2Node_MakeArray_Array, class AActor* CallFunc_GetOverrideNetworkOwner_Actor, enum class EPalAdditionalEffectType CallFunc_GetEffectType_Effect, int32 CallFunc_GetEffectValue_Value, enum class EPalAttackType CallFunc_GetBulletAttackType_AttackType, float CallFunc_GetDecayDamageRate_ReturnValue, float CallFunc_GetDecayDamageRate_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwnerActor_OwnerActor, class AActor* CallFunc_GetOwnerActor_OwnerActor_1, float CallFunc_GetSneakAttackRate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, int32 CallFunc_GetWeaponDamage_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, enum class EPalElementType CallFunc_GetBulletElementType_NewParam, const struct FPalMakeDamageInfo& K2Node_MakeStruct_PalMakeDamageInfo, const struct FPalDamageInfo& CallFunc_MakeDamageInfo_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void GetBulletElementType(enum class EPalElementType* NewParam);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AttackBulletBase(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


