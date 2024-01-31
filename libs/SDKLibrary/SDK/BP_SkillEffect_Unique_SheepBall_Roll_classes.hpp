#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x450 - 0x3C0)
// BlueprintGeneratedClass BP_SkillEffect_Unique_SheepBall_Roll.BP_SkillEffect_Unique_SheepBall_Roll_C
class ABP_SkillEffect_Unique_SheepBall_Roll_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      SphereCollision;                                   // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     DustEffect;                                        // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     RollEffect;                                        // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHitAttack_Roll;                                  // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FName, class UNiagaraComponent*>  SkillEffectMap;                                    // 0x3F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       RollEffectOffsetYaw;                               // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OwnerHeight;                                       // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkillEffect_Unique_SheepBall_Roll_C* GetDefaultObj();

	void SetOwnerCapsuleHeight(double Height);
	void GetRollEffectLocation(struct FVector* Location, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void ActivateEffect(class FName EffectName, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsActive_ReturnValue);
	void InitializeEffects(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UNiagaraComponent*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void ReceiveBeginPlay();
	void FadeOutEffect(double DeltaSecond);
	void ReceiveTick(float DeltaSeconds);
	void HitAttack(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void ExecuteUbergraph_BP_SkillEffect_Unique_SheepBall_Roll(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_2, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_IsClosed_Variable_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_FClamp_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_3, float CallFunc_GetFloatValue_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4, double CallFunc_Divide_DoubleDouble_ReturnValue_4, double CallFunc_FClamp_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_4, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_4, double K2Node_Event_DeltaSecond, class AActor* CallFunc_GetActionTargetActor_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* K2Node_CustomEvent_Defencer, const struct FPalDamageInfo& K2Node_CustomEvent_DamageInfo, int32 K2Node_CustomEvent_HitCount, class UPrimitiveComponent* K2Node_CustomEvent_AttackerComponent, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_5, const struct FVector& CallFunc_GetRollEffectLocation_Location, bool Temp_bool_IsClosed_Variable_5, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_3, float CallFunc_GetFloatValue_InTime_ImplicitCast_4);
	void OnHitAttack_Roll__DelegateSignature();
};

}


