#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x3C0 - 0x330)
// BlueprintGeneratedClass BP_SkillEffectBase.BP_SkillEffectBase_C
class ABP_SkillEffectBase_C : public APalSkillEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      HomingLimit;                                       // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      MovementSphereRoot;                                // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         SpanwHitGroundEffect;                              // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalWazaID                        Waza;                                              // 0x349(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AA9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNiagaraSystem*>                Load_Cache;                                        // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                Foliage_Index;                                     // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_Poison;                                         // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoDestroyOnHitGround;                              // 0x371(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartEffectFadeOut;                                // 0x372(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AAC[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FadeOutTimer;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTime;                                       // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           FadeOutCurve;                                      // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                HitEffectSlot;                                     // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimerHandle>                  TimerHandles;                                      // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PredictedTarget_C*                 PredictedTarget;                                   // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableDisplayHitNum;                               // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AAF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Other_Hit_Component;                               // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkillEffectBase_C* GetDefaultObj();

	void FindTargetLocationConsiderRide(struct FVector* TargetPos, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class AActor* CallFunc_FindTargetConsiderRide_TargetActor, const struct FVector& CallFunc_GetAttackTargetLocation_ReturnValue);
	void GetHomingEndDot(double* Dot);
	void FindTargetConsiderRide(class AActor** TargetActor, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue_1, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_GetNearestEnemyByLocation_OutMinRange, class APalCharacter* CallFunc_GetNearestEnemyByLocation_ReturnValue, class AActor* CallFunc_GetActionTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Is_Hitable_Target_Collision(class UPrimitiveComponent* MyHitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherHitComp, bool* IsHitAble, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void GetPredictedTargetLocation(struct FVector* Location, const struct FVector& CallFunc_GetActionTargetLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetOwnerAction(class UPalActionBase** Action, class AActor* CallFunc_GetOwner_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue);
	bool HasProjectileMoveComp(class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetHomingTarget(class AActor* Target, bool* Success, class UProjectileMovementComponent* ProjectileMoveComp, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CheckToStopHoming(double CallFunc_GetHomingEndDot_Dot, class AActor* CallFunc_GetActionTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetActionTargetActor_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void ApplyDamageCustomHit(class AActor* Defender, class USceneComponent* AttackerHitComponent, class USceneComponent* DefenderHitComponent, const struct FVector& HitLocation, TArray<int32>& FoliageIndex, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, const struct FPalDamageInfo& CallFunc_MakeDamageInfoByWazaType_ReturnValue);
	void IsValidHitCustomRange(class AActor* HitTarget, class UPrimitiveComponent* MyHitComponent, class UPrimitiveComponent* HitTargetComponent, bool* IsHit, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, bool CallFunc_IsApplicableDamage_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Print_Log_When_Collision_Object_Type_Is_Bullet();
	void Spawn_Elemental_Hit_Effect_Far(const struct FVector& Location, double EffectScale, TSoftObjectPtr<class UNiagaraSystem> EffectPath, double Scale, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class UPalWazaDatabase* CallFunc_GetWazaDatabase_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FPalWazaDatabaseRaw& CallFunc_FindWazaForBP_OutData, bool CallFunc_FindWazaForBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnLoaded_15409DED4FCA4A2F1D5599B619A24205(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnHitDelegate_____(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount);
	void LoadAndPlayEffect(TSoftObjectPtr<class UNiagaraSystem> Niagara_System, const struct FTransform& Transform);
	void FadeOutEffect(double DeltaSecond);
	void OnHitGround();
	void OnHitCustomRange(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__BP_SkillEffectBase_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void ExecuteUbergraph_BP_SkillEffectBase(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPrimitiveComponent* K2Node_CustomEvent_MyHitComponent_1, class AActor* K2Node_CustomEvent_OtherHitActor_1, class UPrimitiveComponent* K2Node_CustomEvent_OtherHitComponent_1, TArray<int32>& K2Node_CustomEvent_FoliageIndex_1, const struct FVector& K2Node_CustomEvent_HitLocation_1, int32 K2Node_CustomEvent_HitCount_1, bool CallFunc_IsApplicableDamage_ReturnValue, bool CallFunc_Is_Hitable_Target_Collision_IsHitAble, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSoftObjectPtr<class UNiagaraSystem> K2Node_CustomEvent_Niagara_System, const struct FTransform& K2Node_CustomEvent_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UObject* K2Node_CustomEvent_Loaded, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double K2Node_CustomEvent_DeltaSecond, double CallFunc_Add_DoubleDouble_ReturnValue, class UObject* Temp_object_Variable, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UPalWazaDatabase* CallFunc_GetWazaDatabase_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalWazaDatabaseRaw& CallFunc_FindWazaForBP_OutData, bool CallFunc_FindWazaForBP_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPrimitiveComponent* K2Node_CustomEvent_MyHitComponent, class AActor* K2Node_CustomEvent_OtherHitActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherHitComponent, TArray<int32>& K2Node_CustomEvent_FoliageIndex, const struct FVector& K2Node_CustomEvent_HitLocation, int32 K2Node_CustomEvent_HitCount, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValidHitCustomRange_IsHit, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPalHitEffectSlot* CallFunc_SpawnObject_ReturnValue, class UBP_HitEffectSlot_C* K2Node_DynamicCast_AsBP_Hit_Effect_Slot, bool K2Node_DynamicCast_bSuccess_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FTimerHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* K2Node_ComponentBoundEvent_Defencer, const struct FPalDamageInfo& K2Node_ComponentBoundEvent_damageInfo, int32 K2Node_ComponentBoundEvent_hitCount, class UPrimitiveComponent* K2Node_ComponentBoundEvent_AttackerComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Conv_IntToString_ReturnValue);
};

}


