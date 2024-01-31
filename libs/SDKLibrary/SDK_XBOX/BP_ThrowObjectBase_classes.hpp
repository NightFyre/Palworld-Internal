#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x398 - 0x368)
// BlueprintGeneratedClass BP_ThrowObjectBase.BP_ThrowObjectBase_C
class ABP_ThrowObjectBase_C : public APalBullet
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalSoundPlayerComponent_C*         SoundPlayer;                                       // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        BoundCount;                                        // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EnableGravityInterval;                             // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultGravityScale;                               // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        ThrowEffect;                                       // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ThrowObjectBase_C* GetDefaultObj();

	void Play_Throw_Sound(const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID);
	class USceneComponent* GetAkOwnerComponent(class UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PlaySoundWithMaterial(const struct FPalDataTableRowName_SoundID& ID, enum class EPhysicalSurface PhysicalMaterial);
	void PlaySound(const struct FPalDataTableRowName_SoundID& ID, const struct FPalSoundOptions& Options, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions);
	void IsCountDestroy(bool* IsDestroy);
	void IncrementBoundCountAndCheckDestroy(bool CallFunc_IsCountDestroy_IsDestroy, int32 CallFunc_GetMaxBoundCount_Count, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetMaxBoundCount(int32* Count);
	bool IsDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, struct FHitResult& Hit);
	void OnEnableGravity();
	void OnBlock(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ThrowObjectBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, class UPrimitiveComponent* K2Node_Event_HitComp, class AActor* K2Node_Event_OtherActor_1, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AActor* K2Node_Event_OtherActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float K2Node_VariableSet_ProjectileGravityScale_ImplicitCast, double K2Node_VariableSet_DefaultGravityScale_ImplicitCast);
};

}


