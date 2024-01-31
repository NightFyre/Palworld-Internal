#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x160 - 0x138)
// BlueprintGeneratedClass BP_ActionGenerateEnergy_Fire.BP_ActionGenerateEnergy_Fire_C
class UBP_ActionGenerateEnergy_Fire_C : public UPalActionBase
{
public:
	uint8                                        Pad_42DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                _____;                                             // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     SpawnedEffect;                                     // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Effect;                                            // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionGenerateEnergy_Fire_C* GetDefaultObj();

	void SpawnEffect(class UPalWorkBase* TargetWork);
	void Find_Cooking_Montage(class UAnimMontage** Montage, bool* Exist, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_FindMontange_bExist, class UAnimMontage* CallFunc_FindMontange_ReturnValue);
	void OnNotifyEnd_75F2495A430312E64BC5728E3519E8BE(class FName NotifyName);
	void OnNotifyBegin_75F2495A430312E64BC5728E3519E8BE(class FName NotifyName);
	void OnInterrupted_75F2495A430312E64BC5728E3519E8BE(class FName NotifyName);
	void OnBlendOut_75F2495A430312E64BC5728E3519E8BE(class FName NotifyName);
	void OnCompleted_75F2495A430312E64BC5728E3519E8BE(class FName NotifyName);
	void OnNotifyEnd_6E0595B24F14FA16B8F98E8F7D2908AA(class FName NotifyName);
	void OnNotifyBegin_6E0595B24F14FA16B8F98E8F7D2908AA(class FName NotifyName);
	void OnInterrupted_6E0595B24F14FA16B8F98E8F7D2908AA(class FName NotifyName);
	void OnBlendOut_6E0595B24F14FA16B8F98E8F7D2908AA(class FName NotifyName);
	void OnCompleted_6E0595B24F14FA16B8F98E8F7D2908AA(class FName NotifyName);
	void OnEndAction();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionGenerateEnergy_Fire(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, enum class EPalGeneralMontageType Temp_byte_Variable, enum class EPalGeneralMontageType Temp_byte_Variable_1, enum class EPalGeneralMontageType Temp_byte_Variable_2, enum class EPalGeneralMontageType Temp_byte_Variable_3, enum class EPalGeneralMontageType Temp_byte_Variable_4, enum class EPalGeneralMontageType Temp_byte_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UAnimMontage* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class UAnimMontage* CallFunc_Find_Cooking_Montage_Montage, bool CallFunc_Find_Cooking_Montage_Exist, class UAnimMontage* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, class UAnimMontage* CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class UAnimMontage* CallFunc_Find_Cooking_Montage_Montage_1, bool CallFunc_Find_Cooking_Montage_Exist_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_8, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_9, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_10, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_1);
};

}


