#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB0 - 0xA0)
// BlueprintGeneratedClass BP_LowHomingModifier.BP_LowHomingModifier_C
class UBP_LowHomingModifier_C : public UPalBulletModifierComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProjectileMovementComponent*          ProjectileComponent;                               // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_LowHomingModifier_C* GetDefaultObj();

	void SetHomingTarget(class AActor* Actor, bool* IsSuccess, class USceneComponent* TargetComponent, int32 Temp_int_Loop_Counter_Variable, class APalMonsterCharacter* K2Node_DynamicCast_AsPal_Monster_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDead_ReturnValue, TArray<class UShapeComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsPalMonster_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class UShapeComponent* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Initialize(class APalBullet* Bullet);
	void ExecuteUbergraph_BP_LowHomingModifier(int32 EntryPoint, class APalBullet* K2Node_Event_bullet, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_VSize_ReturnValue, float CallFunc_GetParameterWithPassiveSkillEffect_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USphereComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_SetHomingTarget_isSuccess, const struct FHitResult& CallFunc_CapsuleTraceSingleForObjects_OutHit, bool CallFunc_CapsuleTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_SetHomingTarget_isSuccess_1, float CallFunc_GetParameterWithPassiveSkillEffect_originalValue_ImplicitCast);
};

}


