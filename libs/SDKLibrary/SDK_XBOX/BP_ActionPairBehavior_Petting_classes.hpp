#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x251 - 0x251)
// BlueprintGeneratedClass BP_ActionPairBehavior_Petting.BP_ActionPairBehavior_Petting_C
class UBP_ActionPairBehavior_Petting_C : public UBP_ActionPairBehaviorBase_C
{
public:

	static class UClass* StaticClass();
	static class UBP_ActionPairBehavior_Petting_C* GetDefaultObj();

	class UNiagaraComponent* SpawnNiagara(const struct FVector& Location, class UObject* Object, class AActor* CallFunc_GetActionTarget_ReturnValue, class UNiagaraComponent* CallFunc_SpawnNiagara_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	void OnCompleted(class AActor* Human, class AActor* Monster);
	void GetHumanAnime(class UAnimMontage** Montage, enum class EPalGeneralMontageType Temp_byte_Variable, enum class EPalGeneralMontageType Temp_byte_Variable_1, enum class EPalGeneralMontageType Temp_byte_Variable_2, enum class EPalGeneralMontageType Temp_byte_Variable_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UAnimMontage* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3);
};

}


