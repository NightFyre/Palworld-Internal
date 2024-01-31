#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x148 - 0x138)
// BlueprintGeneratedClass BP_Action_NPC_SpawnOtomo.BP_Action_NPC_SpawnOtomo_C
class UBP_Action_NPC_SpawnOtomo_C : public UPalActionBase
{
public:
	uint8                                        Pad_3DA5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Action_NPC_SpawnOtomo_C* GetDefaultObj();

	void RequestSpawnPal(bool* Success, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UBP_OtomoPalHolderComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_ActivateCurrentOtomo_ReturnValue);
	void OnNotifyEnd_179C21574A41916954EAF49176A11F1A(class FName NotifyName);
	void OnNotifyBegin_179C21574A41916954EAF49176A11F1A(class FName NotifyName);
	void OnInterrupted_179C21574A41916954EAF49176A11F1A(class FName NotifyName);
	void OnBlendOut_179C21574A41916954EAF49176A11F1A(class FName NotifyName);
	void OnCompleted_179C21574A41916954EAF49176A11F1A(class FName NotifyName);
	void OnBeginAction();
	void ExecuteUbergraph_BP_Action_NPC_SpawnOtomo(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, enum class EPalActionType Temp_byte_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RequestSpawnPal_Success, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


