#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VisualEffect_CameraVignette.BP_VisualEffect_CameraVignette_C
// (None)

class UClass* UBP_VisualEffect_CameraVignette_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VisualEffect_CameraVignette_C");

	return Clss;
}


// BP_VisualEffect_CameraVignette_C BP_VisualEffect_CameraVignette.Default__BP_VisualEffect_CameraVignette_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VisualEffect_CameraVignette_C* UBP_VisualEffect_CameraVignette_C::GetDefaultObj()
{
	static class UBP_VisualEffect_CameraVignette_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VisualEffect_CameraVignette_C*>(UBP_VisualEffect_CameraVignette_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VisualEffect_CameraVignette.BP_VisualEffect_CameraVignette_C.UpdateEffectValue
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             WeightValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxValue                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DefaultValue                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterCameraComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_CameraVignette_C::UpdateEffectValue(double WeightValue, double MaxValue, double DefaultValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UPalCharacterCameraComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_CameraVignette_C", "UpdateEffectValue");

	Params::UBP_VisualEffect_CameraVignette_C_UpdateEffectValue_Params Parms{};

	Parms.WeightValue = WeightValue;
	Parms.MaxValue = MaxValue;
	Parms.DefaultValue = DefaultValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast = K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


