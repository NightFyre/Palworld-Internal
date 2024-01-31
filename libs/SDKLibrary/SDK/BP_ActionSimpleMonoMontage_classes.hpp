#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x168 - 0x138)
// BlueprintGeneratedClass BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C
class UBP_ActionSimpleMonoMontage_C : public UPalActionBase
{
public:
	uint8                                        Pad_3AEF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPalActionType                    ActionType;                                        // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorString;                                       // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                       AnimPlayRate;                                      // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionSimpleMonoMontage_C* GetDefaultObj();

	void FindMontage(class UAnimMontage** Montage, bool* Exist, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_FindMontange_bExist, class UAnimMontage* CallFunc_FindMontange_ReturnValue);
	void OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName);
	void OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName);
	void OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName);
	void OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName);
	void OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void OnNotifyBegin(class FName NotifyName);
	void OnNotifyEnd(class FName NotifyName);
	void ExecuteUbergraph_BP_ActionSimpleMonoMontage(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_6, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UAnimMontage* CallFunc_FindMontage_Montage, bool CallFunc_FindMontage_Exist, class UAnimMontage* CallFunc_FindMontage_Montage_1, bool CallFunc_FindMontage_Exist_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast);
};

}


