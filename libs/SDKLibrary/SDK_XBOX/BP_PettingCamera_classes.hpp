#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2A8 - 0x290)
// BlueprintGeneratedClass BP_PettingCamera.BP_PettingCamera_C
class ABP_PettingCamera_C : public AActor
{
public:
	class UPalCharacterCameraComponent*          PalCharacterCamera;                                // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PettingCamera_C* GetDefaultObj();

	void EndPettingCamera(class APlayerController* PlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue);
	void StartPettingCamera(class APlayerController* PlayerController);
	void UpdatePettingCameraOffset(class APlayerController* PlayerController, class AActor* TargetPal, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalPettingPresset* CallFunc_GetPettingPreset_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_GetCameraArmLength_ReturnValue, float CallFunc_GetCameraHeight_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetCameraCenterDistance_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, double CallFunc_MakeVector_Z_ImplicitCast);
};

}


