#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x178 - 0x138)
// BlueprintGeneratedClass BP_ActionRandomRest.BP_ActionRandomRest_C
class UBP_ActionRandomRest_C : public UPalActionBase
{
public:
	uint8                                        Pad_3FC3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          CurrentMontage;                                    // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalRandomRestInfo                    CurrentRestInfo;                                   // 0x150(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        CurrentLoopMaxNum;                                 // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentLoopingCount;                               // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TempRand;                                          // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionRandomRest_C* GetDefaultObj();

	void OnNotifyEnd_903852264ADDCC5C76468EB1B01885D1(class FName NotifyName);
	void OnNotifyBegin_903852264ADDCC5C76468EB1B01885D1(class FName NotifyName);
	void OnInterrupted_903852264ADDCC5C76468EB1B01885D1(class FName NotifyName);
	void OnBlendOut_903852264ADDCC5C76468EB1B01885D1(class FName NotifyName);
	void OnCompleted_903852264ADDCC5C76468EB1B01885D1(class FName NotifyName);
	void OnNotifyEnd_4551F62E41169AB9D4D27C8A2A1A7EE2(class FName NotifyName);
	void OnNotifyBegin_4551F62E41169AB9D4D27C8A2A1A7EE2(class FName NotifyName);
	void OnInterrupted_4551F62E41169AB9D4D27C8A2A1A7EE2(class FName NotifyName);
	void OnBlendOut_4551F62E41169AB9D4D27C8A2A1A7EE2(class FName NotifyName);
	void OnCompleted_4551F62E41169AB9D4D27C8A2A1A7EE2(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void Play_Idle();
	void Play_MontageLoop();
	void ExecuteUbergraph_BP_ActionRandomRest(int32 EntryPoint, const struct FRandomStream& CallFunc_GetRandomStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 Temp_int_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FPalRandomRestInfo& CallFunc_GetRandomRestInfo_ReturnValue, const struct FRandomStream& CallFunc_GetRandomStream_ReturnValue_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, enum class EPalActionType Temp_byte_Variable, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FRandomStream& CallFunc_GetRandomStream_ReturnValue_2, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_8, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_9, const struct FPalRandomRestInfo& CallFunc_GetRandomRestInfo_ReturnValue_1, double K2Node_VariableSet_tempRand_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast);
};

}


