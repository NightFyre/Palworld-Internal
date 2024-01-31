#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass BP_HitEffectSlot_Player.BP_HitEffectSlot_Player_C
class UBP_HitEffectSlot_Player_C : public UPalHitEffectSlot
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UNiagaraSystem*>                LoadCache;                                         // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_HitEffectSlot_Player_C* GetDefaultObj();

	void SpawnElementalHitEffectBullet(enum class EPalElementType Element, const struct FVector& Location, double EffectScale, double EffectScale, TSoftObjectPtr<class UNiagaraSystem> EffectPath, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast);
	void SpawnElementalHitEffectNear(enum class EPalElementType Element, const struct FVector& Location, double EffectScale, TSoftObjectPtr<class UNiagaraSystem> EffectPath, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast);
	void SpawnSneakAttackEffect(const struct FVector& Location, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void SpawnElementalHitEffectFar(enum class EPalElementType Element, const struct FVector& Location, double EffectScale, bool IsPoison, double EffectScale, TSoftObjectPtr<class UNiagaraSystem> EffectPath, bool K2Node_SwitchEnum_CmpSuccess, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast);
	void OnLoaded_9E6C8F9D4F39DAEE12ED13A974550770(class UObject* Loaded);
	void PlayHitEffect(struct FPalDamageInfo& Info);
	void LoadAndPlayEffect(TSoftObjectPtr<class UNiagaraSystem> EffectPath, const struct FTransform& Transform);
	void ExecuteUbergraph_BP_HitEffectSlot_Player(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, const struct FPalDamageInfo& K2Node_Event_info, TSoftObjectPtr<class UNiagaraSystem> K2Node_CustomEvent_EffectPath, const struct FTransform& K2Node_CustomEvent_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
};

}


