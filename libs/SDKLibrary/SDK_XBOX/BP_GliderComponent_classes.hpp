#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x150 - 0x118)
// BlueprintGeneratedClass BP_GliderComponent.BP_GliderComponent_C
class UBP_GliderComponent_C : public UPalGliderComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x118(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalCharacterMovementComponent*        CharacterMovement;                                 // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     GlidingEffect;                                     // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalGliderObject*                      CurrentGliderObject;                               // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  GliderDisableFlag;                                 // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CurrentGliderActorClass;                           // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x148(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_GliderComponent_C* GetDefaultObj();

	void CheckReturnSpawnedOtomo(class AActor* CallFunc_GetOwner_ReturnValue, TArray<class FName>& CallFunc_GetAllGliderPalNames_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_HasGliderPal_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UBP_OtomoPalHolderComponent_C* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_Inactivate_Otomo_isSuccess, class FName CallFunc_GetCharacterIDFromCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void SpawnGlidingEffect();
	void Setup(class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue);
	void OnInitializeGlider();
	void OnGlidingCancleAction();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnStartGliding();
	void OnEndGliding();
	void OnChangeGliderVisibility(bool bIsVisibility);
	void ________();
	void ExecuteUbergraph_BP_GliderComponent(int32 EntryPoint, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bIsVisibility, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID_1, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions_1, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID_2, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID_3, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions_2, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1);
};

}


