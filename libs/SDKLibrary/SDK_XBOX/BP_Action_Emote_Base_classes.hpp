#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x158 - 0x138)
// BlueprintGeneratedClass BP_Action_Emote_Base.BP_Action_Emote_Base_C
class UBP_Action_Emote_Base_C : public UPalActionBase
{
public:
	uint8                                        Pad_55D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          EmoteAnimation;                                    // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableInputEnd;                                  // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EmoteIndex;                                        // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Emote_Base_C* GetDefaultObj();

	void SetMoveEnable(bool Enable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnNotifyEnd_11A0523F4A84359AD4CD3E999BE200ED(class FName NotifyName);
	void OnNotifyBegin_11A0523F4A84359AD4CD3E999BE200ED(class FName NotifyName);
	void OnInterrupted_11A0523F4A84359AD4CD3E999BE200ED(class FName NotifyName);
	void OnBlendOut_11A0523F4A84359AD4CD3E999BE200ED(class FName NotifyName);
	void OnCompleted_11A0523F4A84359AD4CD3E999BE200ED(class FName NotifyName);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_Action_Emote_Base(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UAnimMontage* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}


