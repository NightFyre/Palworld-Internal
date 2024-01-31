#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x148 - 0x138)
// BlueprintGeneratedClass BP_ActionWakeupFromRagdoll.BP_ActionWakeupFromRagdoll_C
class UBP_ActionWakeupFromRagdoll_C : public UPalActionBase
{
public:
	uint8                                        Pad_426B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionWakeupFromRagdoll_C* GetDefaultObj();

	void GroundCheckAdjust(const struct FVector& NextActorPos, const TArray<class AActor*>& Ignore, const struct FVector& RayStartPos, double Const_RayStartUpOffset, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1);
	void OnNotifyEnd_A0FD85AB4B6F54D9353E768175ABF7B9(class FName NotifyName);
	void OnNotifyBegin_A0FD85AB4B6F54D9353E768175ABF7B9(class FName NotifyName);
	void OnInterrupted_A0FD85AB4B6F54D9353E768175ABF7B9(class FName NotifyName);
	void OnBlendOut_A0FD85AB4B6F54D9353E768175ABF7B9(class FName NotifyName);
	void OnCompleted_A0FD85AB4B6F54D9353E768175ABF7B9(class FName NotifyName);
	void OnNotifyEnd_7DDA652645DB1077111C1B809FF79A5C(class FName NotifyName);
	void OnNotifyBegin_7DDA652645DB1077111C1B809FF79A5C(class FName NotifyName);
	void OnInterrupted_7DDA652645DB1077111C1B809FF79A5C(class FName NotifyName);
	void OnBlendOut_7DDA652645DB1077111C1B809FF79A5C(class FName NotifyName);
	void OnCompleted_7DDA652645DB1077111C1B809FF79A5C(class FName NotifyName);
	void OnNotifyEnd_ED4CF3F7468B1088DE5A0494D23DDF61(class FName NotifyName);
	void OnNotifyBegin_ED4CF3F7468B1088DE5A0494D23DDF61(class FName NotifyName);
	void OnInterrupted_ED4CF3F7468B1088DE5A0494D23DDF61(class FName NotifyName);
	void OnBlendOut_ED4CF3F7468B1088DE5A0494D23DDF61(class FName NotifyName);
	void OnCompleted_ED4CF3F7468B1088DE5A0494D23DDF61(class FName NotifyName);
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionWakeupFromRagdoll(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, enum class EPalActionType Temp_byte_Variable, enum class EPalActionType Temp_byte_Variable_1, enum class EPalActionType Temp_byte_Variable_2, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EPalActionType Temp_byte_Variable_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UAnimMontage* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, enum class EPalActionType Temp_byte_Variable_4, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class UAnimMontage* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_GetGeneralPurposeIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


