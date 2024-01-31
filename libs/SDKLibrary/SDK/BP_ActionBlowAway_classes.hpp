#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x152 - 0x138)
// BlueprintGeneratedClass BP_ActionBlowAway.BP_ActionBlowAway_C
class UBP_ActionBlowAway_C : public UPalActionBase
{
public:
	uint8                                        Pad_3BDB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       CanStepTime;                                       // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanStep;                                           // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanTickCheck;                                      // 0x151(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionBlowAway_C* GetDefaultObj();

	bool CanStepCancel();
	void OnNotifyEnd_ABE5CCC540DFAD6A928F8AAB02EDEF07(class FName NotifyName);
	void OnNotifyBegin_ABE5CCC540DFAD6A928F8AAB02EDEF07(class FName NotifyName);
	void OnInterrupted_ABE5CCC540DFAD6A928F8AAB02EDEF07(class FName NotifyName);
	void OnBlendOut_ABE5CCC540DFAD6A928F8AAB02EDEF07(class FName NotifyName);
	void OnCompleted_ABE5CCC540DFAD6A928F8AAB02EDEF07(class FName NotifyName);
	void OnLandedDelegate______0(class UPalCharacterMovementComponent* Component, struct FHitResult& Hit);
	void OnBeginAction();
	void StepEvent();
	void TickCheckEvent();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_ActionBlowAway(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable, enum class EPalActionType Temp_byte_Variable, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalCharacterMovementComponent* K2Node_CustomEvent_component, const struct FHitResult& K2Node_CustomEvent_Hit, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsFalling_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


