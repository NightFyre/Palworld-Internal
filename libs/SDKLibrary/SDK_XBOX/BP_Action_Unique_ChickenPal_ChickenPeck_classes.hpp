#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x230 - 0x209)
// BlueprintGeneratedClass BP_Action_Unique_ChickenPal_ChickenPeck.BP_Action_Unique_ChickenPal_ChickenPeck_C
class UBP_Action_Unique_ChickenPal_ChickenPeck_C : public UBP_ActionUniqueAttackBase_C
{
public:
	uint8                                        Pad_57BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       RotateSpeed_0;                                     // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PreAttackTime;                                     // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AfterAttackTime;                                   // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Unique_ChickenPal_ChickenPeck_C* GetDefaultObj();

	void RotateToTarget(double DeltaTime, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Montage_GetPosition_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1);
	void OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542(class FName NotifyName);
	void OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542(class FName NotifyName);
	void OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542(class FName NotifyName);
	void OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542(class FName NotifyName);
	void OnCompleted_1E7C304942F556D76DE16F9CBBB0C542(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck(int32 EntryPoint, float K2Node_Event_DeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_RotateToTarget_DeltaTime_ImplicitCast);
};

}


