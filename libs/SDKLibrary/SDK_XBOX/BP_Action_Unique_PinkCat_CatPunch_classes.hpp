#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x238 - 0x209)
// BlueprintGeneratedClass BP_Action_Unique_PinkCat_CatPunch.BP_Action_Unique_PinkCat_CatPunch_C
class UBP_Action_Unique_PinkCat_CatPunch_C : public UBP_ActionUniqueAttackBase_C
{
public:
	uint8                                        Pad_57CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       AttackTime;                                        // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAction_PinkCat_CatPunch          State;                                             // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MoveSpeed;                                         // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HomingOffTrigger;                                  // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Unique_PinkCat_CatPunch_C* GetDefaultObj();

	void EndAction(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1);
	void MoveToTarget(double DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_Get_Target_Rotation_TargetRotation, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Get_Target_Rotation(struct FRotator* TargetRotation, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double Temp_real_Variable, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class AActor* CallFunc_GetActionTarget_ReturnValue, const struct FVector& CallFunc_GetTargetLocation_ReturnValue_1, bool CallFunc_IsApplicableDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_REase_ReturnValue, float CallFunc_REase_Alpha_ImplicitCast);
	void OnNotifyEnd_BF5F18464CE41760481C058932345CA4(class FName NotifyName);
	void OnNotifyBegin_BF5F18464CE41760481C058932345CA4(class FName NotifyName);
	void OnInterrupted_BF5F18464CE41760481C058932345CA4(class FName NotifyName);
	void OnBlendOut_BF5F18464CE41760481C058932345CA4(class FName NotifyName);
	void OnCompleted_BF5F18464CE41760481C058932345CA4(class FName NotifyName);
	void OnNotifyEnd_7B37005E4C184523A70797A405F21101(class FName NotifyName);
	void OnNotifyBegin_7B37005E4C184523A70797A405F21101(class FName NotifyName);
	void OnInterrupted_7B37005E4C184523A70797A405F21101(class FName NotifyName);
	void OnBlendOut_7B37005E4C184523A70797A405F21101(class FName NotifyName);
	void OnCompleted_7B37005E4C184523A70797A405F21101(class FName NotifyName);
	void OnNotifyEnd_6FCC02CF40A11D28BC681A887E620E6F(class FName NotifyName);
	void OnNotifyBegin_6FCC02CF40A11D28BC681A887E620E6F(class FName NotifyName);
	void OnInterrupted_6FCC02CF40A11D28BC681A887E620E6F(class FName NotifyName);
	void OnBlendOut_6FCC02CF40A11D28BC681A887E620E6F(class FName NotifyName);
	void OnCompleted_6FCC02CF40A11D28BC681A887E620E6F(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void OnBreakAction();
	void EndAttack();
	void _________0();
	void ExecuteUbergraph_BP_Action_Unique_PinkCat_CatPunch(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_13, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, float K2Node_Event_DeltaTime, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_14, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, double CallFunc_MoveToTarget_DeltaTime_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


