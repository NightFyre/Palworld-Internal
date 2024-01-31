#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x148 - 0x138)
// BlueprintGeneratedClass BP_Action_NPC_MeleeAttackWithGun.BP_Action_NPC_MeleeAttackWithGun_C
class UBP_Action_NPC_MeleeAttackWithGun_C : public UPalActionBase
{
public:
	uint8                                        Pad_3BC0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Action_NPC_MeleeAttackWithGun_C* GetDefaultObj();

	void OnNotifyEnd_18F6DF3D47B5756AF6D31082F414DE7D(class FName NotifyName);
	void OnNotifyBegin_18F6DF3D47B5756AF6D31082F414DE7D(class FName NotifyName);
	void OnInterrupted_18F6DF3D47B5756AF6D31082F414DE7D(class FName NotifyName);
	void OnBlendOut_18F6DF3D47B5756AF6D31082F414DE7D(class FName NotifyName);
	void OnCompleted_18F6DF3D47B5756AF6D31082F414DE7D(class FName NotifyName);
	void OnBeginAction();
	void ExecuteUbergraph_BP_Action_NPC_MeleeAttackWithGun(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


