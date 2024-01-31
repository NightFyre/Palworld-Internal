#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x599 - 0x538)
// BlueprintGeneratedClass BP_NormalStationaryLauncherBase.BP_NormalStationaryLauncherBase_C
class ABP_NormalStationaryLauncherBase_C : public APalStationaryWeaponBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShootingHandle;                                    // 0x548(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalCharacter>          OwnerCharacter;                                    // 0x550(0x30)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        ShootNum;                                          // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableLauncher;                                    // 0x584(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_414D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x588(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       PullTriggerTimer;                                  // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRapidFIre;                                       // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NormalStationaryLauncherBase_C* GetDefaultObj();

	void OnRep_EnableLauncher();
	float GetAttackableDistance();
	void GetMuzzleRotateLocation(struct FVector* RotateLocation);
	void GetRotateMuzzleRef(class UStaticMeshComponent** Muzzle);
	float GetAttackableAngle();
	void GetPullTriggerInterval(double* PullTriggerInterval);
	void GetShootNumMax(int32* ShootNumMax);
	int32 GetWeaponDamage();
	class APalCharacter* GetOwnerCharacter(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess);
	void SetOwnerCharacter(TSoftObjectPtr<class APalCharacter> OwnerCharacter);
	void SetAttackTarget(class AActor* Target);
	void SetEnableLauncher(bool Enable, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
	void RotatePitchToTarget(const struct FVector& TargetLocation, double LerpSpeed, double DeltaTime);
	void GeyEjectionPortTransform(struct FTransform* Transform);
	void Is_UseEjectionPort(bool* IsUse);
	void OnSpawnedBullet(class APalBullet* Bullet);
	void GetShotAnimation();
	void OnShoot(int32 CallFunc_Add_IntInt_ReturnValue);
	void GetBulletClass(class UClass** NewParam);
	void GetBlurAngle(double* Angle);
	void CalcShootBlurRotator(double BlurAngle, struct FRotator* BlurRotator, const struct FRotator& Blur, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void GetMuzzleEffectParticle(class UParticleSystem** Particle_System);
	void GetMuzzleEffect(class UNiagaraSystem** NewParam);
	void GetMuzzleLocation(struct FVector* MuzzleLocation);
	void GetMuzzleRotator(struct FRotator* Rotator);
	void GetInitializeInterval(double* Time);
	void GetShootInterval(double* Time);
	void EjectAmmo(const struct FTransform& CallFunc_GeyEjectionPortTransform_Transform, bool CallFunc_Is_UseEjectionPort_isUse, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Ammo_C* CallFunc_FinishSpawningActor_ReturnValue);
	void ShootBulletInternal(const struct FRotator& Blur, const struct FVector& Local_SocketTransform, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, int32 CallFunc_GetWeaponDamage_ReturnValue, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator, class UClass* CallFunc_GetBulletClass_NewParam, double CallFunc_GetBlurAngle_Angle, const struct FRotator& CallFunc_CalcShootBlurRotator_BlurRotator, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APalBullet* CallFunc_FinishSpawningActor_ReturnValue);
	void PlayMuzzleEffectParticle(class UParticleSystem* CallFunc_GetMuzzleEffectParticle_Particle_System, class UParticleSystem* CallFunc_GetMuzzleEffectParticle_Particle_System_1, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void PlayShootEffect(class UNiagaraSystem* CallFunc_GetMuzzleEffect_NewParam, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation, class UNiagaraSystem* CallFunc_GetMuzzleEffect_NewParam_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void ShootBullet(class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, int32 CallFunc_GetShootNumMax_ShootNumMax, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void OnPullTrigger();
	void OnReleaseTrigger();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NormalStationaryLauncherBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_GetShootInterval_Time, double CallFunc_GetInitializeInterval_Time, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_GetShootNumMax_ShootNumMax, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetPullTriggerInterval_PullTriggerInterval, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, double CallFunc_GetPullTriggerInterval_PullTriggerInterval_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
};

}


