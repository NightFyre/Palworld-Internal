#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x340 - 0x290)
// BlueprintGeneratedClass BP_PalPlayerCaptureSet.BP_PalPlayerCaptureSet_C
class ABP_PalPlayerCaptureSet_C : public APalUIInframeRenderer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URectLightComponent*                   RectLight;                                         // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Rim_Up;                                 // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Rim_BackL;                              // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Rim_BackR;                              // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Main;                                   // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor;                                        // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCompletedSetup;                                  // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          DelayHandle;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DefaultRotation;                                   // 0x2F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              TargetRotation;                                    // 0x308(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               DefaultCameraPosition;                             // 0x320(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RotateInterpolationRate;                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalPlayerCaptureSet_C* GetDefaultObj();

	void ResetCameraLocation(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void UpdateShowOnlyActors(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	void Add_Camera_Relative_Location(const struct FVector& AddLocation, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult);
	void ResetRotation(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void AddRotation(const struct FRotator& AddRotator, const struct FRotator& CallFunc_ComposeRotators_ReturnValue);
	void GetDisplayCharacterActor(class ABP_Player_ForUI_C** UIDisplayPlayer, class ABP_Player_ForUI_C* K2Node_DynamicCast_AsBP_Player_for_UI, bool K2Node_DynamicCast_bSuccess);
	void RequestMyPlayer(class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer);
	void RequestByCharacterMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer);
	void CancelDelayHandle();
	void DelayCompleteSetup();
	void SetupDelayHandle(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void AdjustCamera(double TargetActorBoundSize, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_DegSin_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void Reset();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_PalPlayerCaptureSet(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ABP_Player_ForUI_C* CallFunc_GetDisplayCharacterActor_UIDisplayPlayer, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float K2Node_Event_DeltaSeconds, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FRotator& CallFunc_RLerp_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_RLerp_Alpha_ImplicitCast);
	void OnCompletedSetup__DelegateSignature();
};

}


