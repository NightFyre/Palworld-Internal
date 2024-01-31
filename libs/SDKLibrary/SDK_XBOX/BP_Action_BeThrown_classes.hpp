#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x158 - 0x150)
// BlueprintGeneratedClass BP_Action_BeThrown.BP_Action_BeThrown_C
class UBP_Action_BeThrown_C : public UPalAction_BeThrown
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Action_BeThrown_C* GetDefaultObj();

	void PlayThrownFX(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
	void PlayThrownMontage();
	void ExecuteUbergraph_BP_Action_BeThrown(int32 EntryPoint, enum class EPalActionType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, float CallFunc_PlayAnimMontage_ReturnValue, bool CallFunc_IsDead_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


