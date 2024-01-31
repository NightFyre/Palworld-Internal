#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C
// (None)

class UClass* UBP_Status_ShieldRecovery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Status_ShieldRecovery_C");

	return Clss;
}


// BP_Status_ShieldRecovery_C BP_Status_ShieldRecovery.Default__BP_Status_ShieldRecovery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Status_ShieldRecovery_C* UBP_Status_ShieldRecovery_C::GetDefaultObj()
{
	static class UBP_Status_ShieldRecovery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Status_ShieldRecovery_C*>(UBP_Status_ShieldRecovery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.CreateDynamicMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMainMeshByActor_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::CreateDynamicMaterial(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "CreateDynamicMaterial");

	Params::UBP_Status_ShieldRecovery_C_CreateDynamicMaterial_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetMainMeshByActor_ReturnValue = CallFunc_GetMainMeshByActor_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.ChangeSheildDamageMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMainMeshByActor_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::ChangeSheildDamageMaterial(class AActor* CallFunc_GetOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "ChangeSheildDamageMaterial");

	Params::UBP_Status_ShieldRecovery_C_ChangeSheildDamageMaterial_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetMainMeshByActor_ReturnValue = CallFunc_GetMainMeshByActor_ReturnValue;
	Parms.CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.GetParam
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterParameter*IP                                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::GetParam(class UPalIndividualCharacterParameter** IP, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "GetParam");

	Params::UBP_Status_ShieldRecovery_C_GetParam_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IP != nullptr)
		*IP = Parms.IP;

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.OnBeginStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_ShieldRecovery_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "OnBeginStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "TickStatus");

	Params::UBP_Status_ShieldRecovery_C_TickStatus_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.OnEndStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_ShieldRecovery_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "OnEndStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.«¹¿à¤ÙóÈ_OnDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_Status_ShieldRecovery_C::_________OnDamage(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "«¹¿à¤ÙóÈ_OnDamage");

	Params::UBP_Status_ShieldRecovery_C__________OnDamage_Params Parms{};

	Parms.DamageResult = DamageResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.«¹¿à¤ÙóÈ_OnSlipDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::_________OnSlipDamage(int32 Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "«¹¿à¤ÙóÈ_OnSlipDamage");

	Params::UBP_Status_ShieldRecovery_C__________OnSlipDamage_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Status_ShieldRecovery_C::_________0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "«¹¿à¤ÙóÈ_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.«¹¿à¤ÙóÈ_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               InCharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::_________1(class APalCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "«¹¿à¤ÙóÈ_1");

	Params::UBP_Status_ShieldRecovery_C__________1_Params Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.«¹¿à¤ÙóÈ_DamageShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsShieldBroken                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::_________DamageShield(int32 Damage, bool IsShieldBroken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "«¹¿à¤ÙóÈ_DamageShield");

	Params::UBP_Status_ShieldRecovery_C__________DamageShield_Params Parms{};

	Parms.Damage = Damage;
	Parms.IsShieldBroken = IsShieldBroken;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_ShieldRecovery.BP_Status_ShieldRecovery_C.ExecuteUbergraph_BP_Status_ShieldRecovery
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageResult            K2Node_CustomEvent_DamageResult                                  (NoDestructor)
// int32                              K2Node_CustomEvent_Damage_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_InCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterOnCompleteInitializeParameterWrapper*CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetParam_IP                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetParam_IP_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetShieldMaxHP_ReturnValue                              (NoDestructor)
// struct FFixedPoint64               CallFunc_GetShieldHP_ReturnValue                                 (NoDestructor)
// class UPalIndividualCharacterParameter*CallFunc_GetParam_IP_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetParam_IP_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsShieldBroken                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetParam_IP_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetParam_IP_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_Convert_FloatToFixedPoint64_ReturnValue                 (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetParam_IP_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFixedPoint64               CallFunc_GetShieldMaxHP_ReturnValue_1                            (NoDestructor)
// struct FFixedPoint64               CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue           (NoDestructor)
// struct FFixedPoint64               CallFunc_Add_FixedPoint64FixedPoint64_ReturnValue                (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_6                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_7                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_tempDeltaTime_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Convert_FloatToFixedPoint64_value_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_ShieldRecovery_C::ExecuteUbergraph_BP_Status_ShieldRecovery(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_FClamp_ReturnValue, float K2Node_Event_DeltaTime, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FPalDamageResult& K2Node_CustomEvent_DamageResult, int32 K2Node_CustomEvent_Damage_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_3, class APalCharacter* K2Node_CustomEvent_InCharacter, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_1, const struct FFixedPoint64& CallFunc_GetShieldMaxHP_ReturnValue, const struct FFixedPoint64& CallFunc_GetShieldHP_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_2, bool CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_3, int32 K2Node_CustomEvent_Damage, bool K2Node_CustomEvent_IsShieldBroken, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_4, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue_4, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_5, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FFixedPoint64& CallFunc_Convert_FloatToFixedPoint64_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetParam_IP_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FFixedPoint64& CallFunc_GetShieldMaxHP_ReturnValue_1, const struct FFixedPoint64& CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue, const struct FFixedPoint64& CallFunc_Add_FixedPoint64FixedPoint64_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_6, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_7, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_4, double K2Node_VariableSet_tempDeltaTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_Convert_FloatToFixedPoint64_value_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_ShieldRecovery_C", "ExecuteUbergraph_BP_Status_ShieldRecovery");

	Params::UBP_Status_ShieldRecovery_C_ExecuteUbergraph_BP_Status_ShieldRecovery_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_CustomEvent_DamageResult = K2Node_CustomEvent_DamageResult;
	Parms.K2Node_CustomEvent_Damage_1 = K2Node_CustomEvent_Damage_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue_1 = CallFunc_GetGameSetting_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.K2Node_CustomEvent_InCharacter = K2Node_CustomEvent_InCharacter;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue = CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue;
	Parms.CallFunc_GetParam_IP = CallFunc_GetParam_IP;
	Parms.CallFunc_GetParam_IP_1 = CallFunc_GetParam_IP_1;
	Parms.CallFunc_GetShieldMaxHP_ReturnValue = CallFunc_GetShieldMaxHP_ReturnValue;
	Parms.CallFunc_GetShieldHP_ReturnValue = CallFunc_GetShieldHP_ReturnValue;
	Parms.CallFunc_GetParam_IP_2 = CallFunc_GetParam_IP_2;
	Parms.CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue = CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetParam_IP_3 = CallFunc_GetParam_IP_3;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_IsShieldBroken = K2Node_CustomEvent_IsShieldBroken;
	Parms.CallFunc_GetParam_IP_4 = CallFunc_GetParam_IP_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetParam_IP_5 = CallFunc_GetParam_IP_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_5 = CallFunc_GetOwner_ReturnValue_5;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_1 = CallFunc_SpawnSystemAttached_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Convert_FloatToFixedPoint64_ReturnValue = CallFunc_Convert_FloatToFixedPoint64_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetParam_IP_6 = CallFunc_GetParam_IP_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetShieldMaxHP_ReturnValue_1 = CallFunc_GetShieldMaxHP_ReturnValue_1;
	Parms.CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue = CallFunc_Multiply_FixedPoint64FixedPoint64_ReturnValue;
	Parms.CallFunc_Add_FixedPoint64FixedPoint64_ReturnValue = CallFunc_Add_FixedPoint64FixedPoint64_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_6 = CallFunc_GetOwner_ReturnValue_6;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue_7 = CallFunc_GetOwner_ReturnValue_7;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.K2Node_VariableSet_tempDeltaTime_ImplicitCast = K2Node_VariableSet_tempDeltaTime_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Convert_FloatToFixedPoint64_value_ImplicitCast = CallFunc_Convert_FloatToFixedPoint64_value_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


