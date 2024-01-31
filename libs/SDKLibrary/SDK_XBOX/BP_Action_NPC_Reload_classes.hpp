#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x148 - 0x138)
// BlueprintGeneratedClass BP_Action_NPC_Reload.BP_Action_NPC_Reload_C
class UBP_Action_NPC_Reload_C : public UPalActionBase
{
public:
	uint8                                        Pad_3F04[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Action_NPC_Reload_C* GetDefaultObj();

	void OnNotifyEnd_570932B749CF5A9A1DB665947E5643C9(class FName NotifyName);
	void OnNotifyBegin_570932B749CF5A9A1DB665947E5643C9(class FName NotifyName);
	void OnInterrupted_570932B749CF5A9A1DB665947E5643C9(class FName NotifyName);
	void OnBlendOut_570932B749CF5A9A1DB665947E5643C9(class FName NotifyName);
	void OnCompleted_570932B749CF5A9A1DB665947E5643C9(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_Action_NPC_Reload(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FWeaponAnimationInfo& CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_Delay_Duration_ImplicitCast);
};

}


