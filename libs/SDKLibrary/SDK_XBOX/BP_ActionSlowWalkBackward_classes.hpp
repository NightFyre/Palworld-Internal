#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x150 - 0x138)
// BlueprintGeneratedClass BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C
class UBP_ActionSlowWalkBackward_C : public UPalActionBase
{
public:
	uint8                                        Pad_3B3F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       PlayRate;                                          // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionSlowWalkBackward_C* GetDefaultObj();

	void FindGoalPosition();
	void OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName);
	void OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName);
	void OnInterrupted_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName);
	void OnBlendOut_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName);
	void OnCompleted_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_ActionSlowWalkBackward(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, enum class EPalActionType Temp_byte_Variable, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, float CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast);
};

}


