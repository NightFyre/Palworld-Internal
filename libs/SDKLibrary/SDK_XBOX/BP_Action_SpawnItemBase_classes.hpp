#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x1B9 - 0x170)
// BlueprintGeneratedClass BP_Action_SpawnItemBase.BP_Action_SpawnItemBase_C
class UBP_Action_SpawnItemBase_C : public UPalActionSpawnItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimInstance*                         AnimInst;                                          // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         ActionCharacter;                                   // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ChargeMontage;                                     // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFnishByAbortMontage;                             // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalFacialComponent*                   Facial;                                            // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalFacialEyeType                 ChargeFacialEye;                                   // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ChargeTimer;                                       // 0x1A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FunMontage;                                        // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EPalFacialEyeType                 FunFacialEye;                                      // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_SpawnItemBase_C* GetDefaultObj();

	void EndProc(bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void StopFunMontage(bool CallFunc_Montage_IsPlaying_ReturnValue);
	void StopChargeMontage(bool CallFunc_Montage_IsPlaying_ReturnValue);
	void OnNotifyEnd_2FFE26C44850576E346494ABF0A5DD9A(class FName NotifyName);
	void OnNotifyBegin_2FFE26C44850576E346494ABF0A5DD9A(class FName NotifyName);
	void OnInterrupted_2FFE26C44850576E346494ABF0A5DD9A(class FName NotifyName);
	void OnBlendOut_2FFE26C44850576E346494ABF0A5DD9A(class FName NotifyName);
	void OnCompleted_2FFE26C44850576E346494ABF0A5DD9A(class FName NotifyName);
	void OnNotifyEnd_06AF58594525DF9FB23A808FEC71D691(class FName NotifyName);
	void OnNotifyBegin_06AF58594525DF9FB23A808FEC71D691(class FName NotifyName);
	void OnInterrupted_06AF58594525DF9FB23A808FEC71D691(class FName NotifyName);
	void OnBlendOut_06AF58594525DF9FB23A808FEC71D691(class FName NotifyName);
	void OnCompleted_06AF58594525DF9FB23A808FEC71D691(class FName NotifyName);
	void StartFun();
	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_Action_SpawnItemBase(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_1);
};

}


