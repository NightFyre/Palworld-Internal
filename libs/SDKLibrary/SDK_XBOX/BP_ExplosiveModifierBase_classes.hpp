#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB8 - 0xA0)
// BlueprintGeneratedClass BP_ExplosiveModifierBase.BP_ExplosiveModifierBase_C
class UBP_ExplosiveModifierBase_C : public UPalBulletModifierComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                ExplosiveBullet;                                   // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        TrailEffect;                                       // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ExplosiveModifierBase_C* GetDefaultObj();

	void Initialize(class APalBullet* Bullet);
	void _________0(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, struct FHitResult& Hi);
	void ExecuteUbergraph_BP_ExplosiveModifierBase(int32 EntryPoint, class UPrimitiveComponent* K2Node_CustomEvent_HitComp, class AActor* K2Node_CustomEvent_OtherCharacter, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, const struct FHitResult& K2Node_CustomEvent_Hi, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalBullet* K2Node_DynamicCast_AsPal_Bullet, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetWeaponDamage_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APalBullet* K2Node_Event_bullet, class ABP_ExplosionAttackBase_C* CallFunc_FinishSpawningActor_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_FTrunc_A_ImplicitCast);
};

}


