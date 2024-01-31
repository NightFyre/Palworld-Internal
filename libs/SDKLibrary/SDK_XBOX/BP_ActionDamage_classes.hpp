#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x170 - 0x168)
// BlueprintGeneratedClass BP_ActionDamage.BP_ActionDamage_C
class UBP_ActionDamage_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionDamage_C* GetDefaultObj();

	void GetEffectPosition(struct FVector* Location, class FName SocketName, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_Vector_IsZero_ReturnValue);
	void ShowEffect(const struct FVector& CallFunc_GetEffectPosition_Location, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void OnEndAction();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionDamage(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, enum class EPalActionType Temp_byte_Variable, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_ExistFacialNotifyInMontage_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue_4, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_5, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}


