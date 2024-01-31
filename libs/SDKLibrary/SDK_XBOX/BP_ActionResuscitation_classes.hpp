#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x190 - 0x168)
// BlueprintGeneratedClass BP_ActionResuscitation.BP_ActionResuscitation_C
class UBP_ActionResuscitation_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Timer;                                             // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlagName;                                          // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CurrentTimer;                                      // 0x180(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameOver_Rescue_C*                RescueWidget;                                      // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionResuscitation_C* GetDefaultObj();

	void FlagControll(bool IsDisable, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void TickAction(float DeltaTime);
	void OnBeginAction();
	void OnEndAction();
	void OnRescueUpdate();
	void ExecuteUbergraph_BP_ActionResuscitation(int32 EntryPoint, class AActor* CallFunc_GetActionTarget_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTime, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, class AActor* CallFunc_GetActionTarget_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UWBP_GameOver_Rescue_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetActionTarget_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsLocalControlActorOrPalmi_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue_1, class APalNetworkTransmitter* CallFunc_GetNetworkTransmitter_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UPalNetworkCharacterStatusOperationComponent* CallFunc_GetCharacterStatusOperation_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_Timer_ImplicitCast);
};

}


