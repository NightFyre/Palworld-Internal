#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x198 - 0x138)
// BlueprintGeneratedClass BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C
class UBP_Action_WaitLoadingWorldPartition_C : public UPalActionBase
{
public:
	uint8                                        Pad_3C87[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  FlagName;                                          // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DelayTime;                                         // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DelayTimer;                                        // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   PlayerCharacter;                                   // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TimeoutTimer;                                      // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLoaded;                                          // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WaitWPLocation;                                    // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x190(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_WaitLoadingWorldPartition_C* GetDefaultObj();

	void CanTimeout(bool* CanTimeout, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void RequestWaitWorldPartition(const class FString& CallFunc_Conv_VectorToString_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APalPlayerState* CallFunc_GetPlayerStateByPlayer_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_WaitWorldPartitionDelegate_OutTimerHandle);
	void CheckLoadLocationDistance(bool* IsReWait, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void GetFadeInParameter(class UPalHUDDispatchParameter_FadeWidget** NewParam, class UPalHUDDispatchParameter_FadeWidget* CallFunc_SpawnObject_ReturnValue);
	void ResetCamera(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalShooterSpringArmComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetMoveDisable(bool Disable, class UPalCharacterMovementComponent* TempMoveComp, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void OnCompleteLoad();
	void OnBreakAction();
	void ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition(int32 EntryPoint, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UWorldPartitionSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_CanAdjustActorToFloor_OutLocation, bool CallFunc_CanAdjustActorToFloor_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, class UPalHUDDispatchParameter_FadeWidget* CallFunc_GetFadeInParameter_NewParam, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, bool CallFunc_IsLocallyControlled_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsAdjustedLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_CheckLoadLocationDistance_IsReWait, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsInClientConnection_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanTimeout_CanTimeOut, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_IsOpenListenServer_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, bool CallFunc_IsLocallyControlled_ReturnValue_1, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast);
};

}


