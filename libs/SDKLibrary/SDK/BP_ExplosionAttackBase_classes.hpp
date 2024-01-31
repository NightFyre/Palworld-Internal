#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2D0 - 0x290)
// BlueprintGeneratedClass BP_ExplosionAttackBase.BP_ExplosionAttackBase_C
class ABP_ExplosionAttackBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       HitCollisionTime;                                  // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHitFilter*                         HitFilter;                                         // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        AttackPower;                                       // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BlowPower;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SneakAttackRate;                                   // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CameraShakeClass;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ExplosionAttackBase_C* GetDefaultObj();

	void Is_Attack_Able(class AActor* Attacker, class AActor* HitActor, class UPrimitiveComponent* HitComponent, bool* IsHit, bool CallFunc_IsApplicableDamage_ReturnValue);
	void Get_Attackable_Friend(bool* IsFriendAttack);
	void GetEffectValue(int32* Value);
	void GetEffectType(enum class EPalAdditionalEffectType* Effect);
	void GetElement(enum class EPalElementType* Element);
	void FindAttacker(class AActor** Attacker, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class APalWeaponBase* K2Node_DynamicCast_AsPal_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetWeaponAttacker_ReturnValue);
	void GetWeaponAttackType(enum class EPalAttackType* AttackType);
	void SetBlowPower(double NewBlowPower);
	void SetRadius(int32 NewParam, float CallFunc_Conv_IntToFloat_ReturnValue);
	void SetPower(int32 NewParam, double SnakeRate);
	void OnHit(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount, class AActor* OwnerCharacter, bool CallFunc_Get_Attackable_Friend_IsFriendAttack, bool CallFunc_Is_Attack_Able_IsHit, bool CallFunc_Get_Attackable_Friend_IsFriendAttack_1, enum class EPalAdditionalEffectType CallFunc_GetEffectType_Effect, int32 CallFunc_GetEffectValue_Value, enum class EPalElementType CallFunc_GetElement_Element, class AActor* CallFunc_FindAttacker_Attacker, enum class EPalAttackType CallFunc_GetWeaponAttackType_AttackType, TArray<int32>& CallFunc_GetOverlapFoliageIndexByComponent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_CalcBlowVelocity_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FPalMakeDamageInfo& K2Node_MakeStruct_PalMakeDamageInfo, const struct FPalDamageInfo& CallFunc_MakeDamageInfo_ReturnValue, float K2Node_MakeStruct_SneakAttackRate_ImplicitCast);
	void ReceiveBeginPlay();
	void DisableCollision();
	void SetupHitFilter();
	void ExecuteUbergraph_BP_ExplosionAttackBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHitFilter* CallFunc_SpawnObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


