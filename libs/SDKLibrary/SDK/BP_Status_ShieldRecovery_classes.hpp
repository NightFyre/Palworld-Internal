#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x88 - 0x48)
// BlueprintGeneratedClass BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C
class UBP_Status_ShieldRecovery_C : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsRecoverAble;                                     // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_3FB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          RecoverStartAbleHandle;                            // 0x58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         InitEnd;                                           // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_3FBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DamageWeight;                                      // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       TempDeltaTime;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       Const_MutekiTime;                                  // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlagName;                                          // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_ShieldRecovery_C* GetDefaultObj();

	void CreateDynamicMaterial(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess);
	void ChangeSheildDamageMaterial(class AActor* CallFunc_GetOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
	void GetParam(class UPalIndividualCharacterParameter** IP, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void OnBeginStatus();
	void TickStatus(float DeltaTime);
	void OnEndStatus();
	void _________OnDamage(const struct FPalDamageResult& DamageResult);
	void _________OnSlipDamage(int32 Damage);
	void _________0();
	void _________1(class APalCharacter* InCharacter);
	void _________DamageShield(int32 Damage, bool IsShieldBroken);
	void ExecuteUbergraph_BP_Status_ShieldRecovery(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_FClamp_ReturnValue, float K2Node_Event_DeltaTime, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FPalDamageResult& K2Node_CustomEvent_DamageResult, int32 K2Node_CustomEvent_Damage_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_3, class APalCharacter* K2Node_CustomEvent_InCharacter, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_1, const struct FFixedPoint64& CallFunc_GetShieldMaxHP_ReturnValue, const struct FFixedPoint64& CallFunc_GetShieldHP_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_2, bool CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_3, int32 K2Node_CustomEvent_Damage, bool K2Node_CustomEvent_IsShieldBroken, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_4, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue_4, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_5, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FFixedPoint64& CallFunc_Convert_FloatToFixedPoint64_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FFixedPoint64& CallFunc_GetShieldMaxHP_ReturnValue_1, const struct FFixedPoint64& CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue, const struct FFixedPoint64& CallFunc_Add_FixedPoint64FixedPoint64_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_6, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_7, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_4, double K2Node_VariableSet_tempDeltaTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_Convert_FloatToFixedPoint64_value_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


