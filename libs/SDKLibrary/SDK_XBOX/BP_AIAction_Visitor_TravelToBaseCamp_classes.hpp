#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x1C1 - 0x158)
// BlueprintGeneratedClass BP_AIAction_Visitor_TravelToBaseCamp.BP_AIAction_Visitor_TravelToBaseCamp_C
class UBP_AIAction_Visitor_TravelToBaseCamp_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               BaseCampLocation;                                  // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DashMode;                                          // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4340[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnArrivedTargetPoint;                              // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                               PrevLocation;                                      // 0x190(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StuckElapsedTime;                                  // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnStuck;                                           // 0x1B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsStuck;                                           // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_Visitor_TravelToBaseCamp_C* GetDefaultObj();

	void Tick_Move_to_Base_Camp(class AActor* ControlledPawn, float DeltaTime, const struct FVector& TempCampToSelf, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_InFanShap_TargetLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	void SoundEvent(const struct FVector& EmitLocation);
	void Fun_Damage_AIResponse(const struct FPalDamageResult& DamageResult, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue);
	void SightCheckAndResponse(enum class EPalAIResponseType Current, bool OverrideIsDamage, bool* ChangeNextAction);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionAbort(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionResume(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_Visitor_TravelToBaseCamp(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_4, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue, class APawn* K2Node_Event_ControlledPawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* K2Node_Event_ControlledPawn_5, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void OnStuck__DelegateSignature();
	void OnArrivedTargetPoint__DelegateSignature();
};

}


