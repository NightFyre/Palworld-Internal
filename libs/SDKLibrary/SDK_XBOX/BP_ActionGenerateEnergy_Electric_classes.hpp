#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x158 - 0x138)
// BlueprintGeneratedClass BP_ActionGenerateEnergy_Electric.BP_ActionGenerateEnergy_Electric_C
class UBP_ActionGenerateEnergy_Electric_C : public UPalActionBase
{
public:
	uint8                                        Pad_441C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                _____;                                             // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     SpawnedEffect;                                     // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionGenerateEnergy_Electric_C* GetDefaultObj();

	void OnNotifyEnd_A4DA4EDD4B8DD41C2D78A1B27DF1132F(class FName NotifyName);
	void OnNotifyBegin_A4DA4EDD4B8DD41C2D78A1B27DF1132F(class FName NotifyName);
	void OnInterrupted_A4DA4EDD4B8DD41C2D78A1B27DF1132F(class FName NotifyName);
	void OnBlendOut_A4DA4EDD4B8DD41C2D78A1B27DF1132F(class FName NotifyName);
	void OnCompleted_A4DA4EDD4B8DD41C2D78A1B27DF1132F(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionGenerateEnergy_Electric(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, enum class EPalGeneralMontageType Temp_byte_Variable, enum class EPalGeneralMontageType Temp_byte_Variable_1, enum class EPalGeneralMontageType Temp_byte_Variable_2, enum class EPalGeneralMontageType Temp_byte_Variable_3, enum class EPalGeneralMontageType Temp_byte_Variable_4, enum class EPalGeneralMontageType Temp_byte_Variable_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UAnimMontage* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_8, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_9, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_2, class UAnimMontage* CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5);
};

}


