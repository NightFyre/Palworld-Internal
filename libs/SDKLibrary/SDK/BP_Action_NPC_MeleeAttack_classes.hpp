#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x150 - 0x138)
// BlueprintGeneratedClass BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C
class UBP_Action_NPC_MeleeAttack_C : public UPalActionBase
{
public:
	uint8                                        Pad_408B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          AttackAnime;                                       // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_NPC_MeleeAttack_C* GetDefaultObj();

	void OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237(class FName NotifyName);
	void OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237(class FName NotifyName);
	void OnInterrupted_B1694066412380A7CADF2F9E8FC00237(class FName NotifyName);
	void OnBlendOut_B1694066412380A7CADF2F9E8FC00237(class FName NotifyName);
	void OnCompleted_B1694066412380A7CADF2F9E8FC00237(class FName NotifyName);
	void OnBeginAction();
	void ExecuteUbergraph_BP_Action_NPC_MeleeAttack(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetGeneralPurposeIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


