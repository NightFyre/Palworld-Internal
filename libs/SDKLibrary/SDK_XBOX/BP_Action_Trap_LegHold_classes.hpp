#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x148 - 0x138)
// BlueprintGeneratedClass BP_Action_Trap_LegHold.BP_Action_Trap_LegHold_C
class UBP_Action_Trap_LegHold_C : public UPalActionBase
{
public:
	uint8                                        Pad_3BD3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Action_Trap_LegHold_C* GetDefaultObj();

	void ChangeParam(enum class EPalFacialEyeType Facial, double WalkSpeed, bool Disable, class UPalCharacterMovementComponent* Movement, class FName FlagName, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast, float CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast);
	void OnNotifyEnd_B36E8DE94F361F83E59F068157E7FE93(class FName NotifyName);
	void OnNotifyBegin_B36E8DE94F361F83E59F068157E7FE93(class FName NotifyName);
	void OnInterrupted_B36E8DE94F361F83E59F068157E7FE93(class FName NotifyName);
	void OnBlendOut_B36E8DE94F361F83E59F068157E7FE93(class FName NotifyName);
	void OnCompleted_B36E8DE94F361F83E59F068157E7FE93(class FName NotifyName);
	void OnEndAction();
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_Action_Trap_LegHold(int32 EntryPoint, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, enum class EPalActionType Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, float K2Node_Event_DeltaTime, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


