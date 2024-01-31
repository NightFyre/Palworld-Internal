#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C
// (None)

class UClass* UWBP_DyingFriendLoupe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DyingFriendLoupe_C");

	return Clss;
}


// WBP_DyingFriendLoupe_C WBP_DyingFriendLoupe.Default__WBP_DyingFriendLoupe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DyingFriendLoupe_C* UWBP_DyingFriendLoupe_C::GetDefaultObj()
{
	static class UWBP_DyingFriendLoupe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DyingFriendLoupe_C*>(UWBP_DyingFriendLoupe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Status_Dying_C*          DyingStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualParameter_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)

void UWBP_DyingFriendLoupe_C::Setup(class UBP_Status_Dying_C* DyingStatus, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, const class FString& CallFunc_GetNickName_outName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DyingFriendLoupe_C", "Setup");

	Params::UWBP_DyingFriendLoupe_C_Setup_Params Parms{};

	Parms.DyingStatus = DyingStatus;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetIndividualParameter_ReturnValue = CallFunc_GetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C.SetFinalWidgetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CalcedOpacity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DyingFriendLoupe_C::SetFinalWidgetOpacity(double CalcedOpacity, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DyingFriendLoupe_C", "SetFinalWidgetOpacity");

	Params::UWBP_DyingFriendLoupe_C_SetFinalWidgetOpacity_Params Parms{};

	Parms.CalcedOpacity = CalcedOpacity;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C.IsEnableLoupe
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_DyingFriendLoupe_C::IsEnableLoupe(class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DyingFriendLoupe_C", "IsEnableLoupe");

	Params::UWBP_DyingFriendLoupe_C_IsEnableLoupe_Params Parms{};

	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue_1 = CallFunc_TryGetIndividualActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C.GetTargetWidgetSize
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   OutVector                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DyingFriendLoupe_C::GetTargetWidgetSize(struct FVector2D* OutVector, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DyingFriendLoupe_C", "GetTargetWidgetSize");

	Params::UWBP_DyingFriendLoupe_C_GetTargetWidgetSize_Params Parms{};

	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutVector != nullptr)
		*OutVector = std::move(Parms.OutVector);

}


// Function WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C.GetLoupeWidgetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   WidgetSize                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DyingFriendLoupe_C::GetLoupeWidgetSize(struct FVector2D* WidgetSize, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DyingFriendLoupe_C", "GetLoupeWidgetSize");

	Params::UWBP_DyingFriendLoupe_C_GetLoupeWidgetSize_Params Parms{};

	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WidgetSize != nullptr)
		*WidgetSize = std::move(Parms.WidgetSize);

}


// Function WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C.GetTranslationTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DyingFriendLoupe_C::GetTranslationTarget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DyingFriendLoupe_C", "GetTranslationTarget");

	Params::UWBP_DyingFriendLoupe_C_GetTranslationTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C.UpdateArrowImageAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewAngle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DyingFriendLoupe_C::UpdateArrowImageAngle(double NewAngle, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DyingFriendLoupe_C", "UpdateArrowImageAngle");

	Params::UWBP_DyingFriendLoupe_C_UpdateArrowImageAngle_Params Parms{};

	Parms.NewAngle = NewAngle;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C.CalcScreenPosition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetTargetWorldLocation_outVector                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DyingFriendLoupe_C::CalcScreenPosition(const struct FVector& CallFunc_GetTargetWorldLocation_outVector, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DyingFriendLoupe_C", "CalcScreenPosition");

	Params::UWBP_DyingFriendLoupe_C_CalcScreenPosition_Params Parms{};

	Parms.CallFunc_GetTargetWorldLocation_outVector = CallFunc_GetTargetWorldLocation_outVector;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C.GetTargetWorldLocation
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     OutVector                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DyingFriendLoupe_C::GetTargetWorldLocation(struct FVector* OutVector, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DyingFriendLoupe_C", "GetTargetWorldLocation");

	Params::UWBP_DyingFriendLoupe_C_GetTargetWorldLocation_Params Parms{};

	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutVector != nullptr)
		*OutVector = std::move(Parms.OutVector);

}

}


