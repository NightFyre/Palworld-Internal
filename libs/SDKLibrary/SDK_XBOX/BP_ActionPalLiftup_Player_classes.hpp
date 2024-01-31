#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x148 - 0x140)
// BlueprintGeneratedClass BP_ActionPalLiftup_Player.BP_ActionPalLiftup_Player_C
class UBP_ActionPalLiftup_Player_C : public UPalAction_Liftup
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionPalLiftup_Player_C* GetDefaultObj();

	class UAnimMontage* FindLiftupMontage(enum class EPalActionType Temp_byte_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void MovementSetFlag(bool Disable, class FName FlagName, class UPalCharacterMovementComponent* Movement, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue);
	void WeaponSetFlag(bool Disable, class UPalShooterComponent* ShooterComp, class FName FlagName, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void ProcessNotify(class FName NotifyName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2);
	void StopAnimation(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue);
	void SetActionTargetAIToLiftup(class AActor* CallFunc_GetActionTarget_ReturnValue, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IPalMonsterControllerBaseCampInterface> K2Node_DynamicCast_AsPal_Monster_Controller_Base_Camp_Interface, bool K2Node_DynamicCast_bSuccess);
	void OnNotifyEnd_8B03B5994FC01C08681CF1BC191894CA(class FName NotifyName);
	void OnNotifyBegin_8B03B5994FC01C08681CF1BC191894CA(class FName NotifyName);
	void OnInterrupted_8B03B5994FC01C08681CF1BC191894CA(class FName NotifyName);
	void OnBlendOut_8B03B5994FC01C08681CF1BC191894CA(class FName NotifyName);
	void OnCompleted_8B03B5994FC01C08681CF1BC191894CA(class FName NotifyName);
	void OnEndAction();
	void OnBreakAction();
	void PlayStartLiftupMontage();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionPalLiftup_Player(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimMontage* CallFunc_FindLiftupMontage_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


