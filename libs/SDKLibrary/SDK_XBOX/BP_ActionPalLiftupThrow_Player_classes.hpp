#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x148 - 0x140)
// BlueprintGeneratedClass BP_ActionPalLiftupThrow_Player.BP_ActionPalLiftupThrow_Player_C
class UBP_ActionPalLiftupThrow_Player_C : public UPalAction_LiftupThrow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionPalLiftupThrow_Player_C* GetDefaultObj();

	void MovementSetFlag(bool Disable, class FName FlagName, class UPalCharacterMovementComponent* Movement, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue);
	void WeaponSetFlag(bool Disable, class UPalShooterComponent* ShooterComp, class FName FlagName, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void OnNotifyEnd_83D404E9464088172E21308730EE3926(class FName NotifyName);
	void OnNotifyBegin_83D404E9464088172E21308730EE3926(class FName NotifyName);
	void OnInterrupted_83D404E9464088172E21308730EE3926(class FName NotifyName);
	void OnBlendOut_83D404E9464088172E21308730EE3926(class FName NotifyName);
	void OnCompleted_83D404E9464088172E21308730EE3926(class FName NotifyName);
	void PlayPlayerThrowMontage();
	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionPalLiftupThrow_Player(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


