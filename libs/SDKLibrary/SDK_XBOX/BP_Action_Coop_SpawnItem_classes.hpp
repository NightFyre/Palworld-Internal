#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x189 - 0x138)
// BlueprintGeneratedClass BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C
class UBP_Action_Coop_SpawnItem_C : public UPalActionBase
{
public:
	uint8                                        Pad_4105[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimInstance*                         AnimInst;                                          // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         ActionCharacter;                                   // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ChargeMontage;                                     // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFnishByAbortMontage;                             // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4106[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalFacialComponent*                   Facial;                                            // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalFacialEyeType                 ChargeFacialEye;                                   // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4107[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ChargeTimer;                                       // 0x178(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FunMontage;                                        // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EPalFacialEyeType                 FunFacialEye;                                      // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Coop_SpawnItem_C* GetDefaultObj();

	void EndProc(bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void StopFunMontage(bool CallFunc_Montage_IsPlaying_ReturnValue);
	void StopChargeMontage(bool CallFunc_Montage_IsPlaying_ReturnValue);
	void OnNotifyEnd_3059B08B4A825BCA681E639E08A41646(class FName NotifyName);
	void OnNotifyBegin_3059B08B4A825BCA681E639E08A41646(class FName NotifyName);
	void OnInterrupted_3059B08B4A825BCA681E639E08A41646(class FName NotifyName);
	void OnBlendOut_3059B08B4A825BCA681E639E08A41646(class FName NotifyName);
	void OnCompleted_3059B08B4A825BCA681E639E08A41646(class FName NotifyName);
	void OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56(class FName NotifyName);
	void OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56(class FName NotifyName);
	void OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56(class FName NotifyName);
	void OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56(class FName NotifyName);
	void OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56(class FName NotifyName);
	void StartFun();
	void OnEndFun();
	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_Action_Coop_SpawnItem(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


