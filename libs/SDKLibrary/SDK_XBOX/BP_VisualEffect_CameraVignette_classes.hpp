#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass BP_VisualEffect_CameraVignette.BP_VisualEffect_CameraVignette_C
class UBP_VisualEffect_CameraVignette_C : public UBP_VisualEffect_CameraBase_C
{
public:

	static class UClass* StaticClass();
	static class UBP_VisualEffect_CameraVignette_C* GetDefaultObj();

	void UpdateEffectValue(double WeightValue, double MaxValue, double DefaultValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UPalCharacterCameraComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast);
};

}


