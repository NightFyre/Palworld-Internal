#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GliderComponent.BP_GliderComponent_C
// (None)

class UClass* UBP_GliderComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GliderComponent_C");

	return Clss;
}


// BP_GliderComponent_C BP_GliderComponent.Default__BP_GliderComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GliderComponent_C* UBP_GliderComponent_C::GetDefaultObj()
{
	static class UBP_GliderComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GliderComponent_C*>(UBP_GliderComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GliderComponent.BP_GliderComponent_C.CheckReturnSpawnedOtomo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAllGliderPalNames_ReturnValue                        (ReferenceParm)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasGliderPal_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_OtomoPalHolderComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetSpawnedOtomo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Inactivate_Otomo_isSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterIDFromCharacter_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GliderComponent_C::CheckReturnSpawnedOtomo(class AActor* CallFunc_GetOwner_ReturnValue, TArray<class FName>& CallFunc_GetAllGliderPalNames_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_HasGliderPal_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UBP_OtomoPalHolderComponent_C* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_TryGetSpawnedOtomo_ReturnValue, bool CallFunc_Inactivate_Otomo_isSuccess, class FName CallFunc_GetCharacterIDFromCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "CheckReturnSpawnedOtomo");

	Params::UBP_GliderComponent_C_CheckReturnSpawnedOtomo_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAllGliderPalNames_ReturnValue = CallFunc_GetAllGliderPalNames_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_HasGliderPal_ReturnValue = CallFunc_HasGliderPal_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_TryGetSpawnedOtomo_ReturnValue = CallFunc_TryGetSpawnedOtomo_ReturnValue;
	Parms.CallFunc_Inactivate_Otomo_isSuccess = CallFunc_Inactivate_Otomo_isSuccess;
	Parms.CallFunc_GetCharacterIDFromCharacter_ReturnValue = CallFunc_GetCharacterIDFromCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GliderComponent.BP_GliderComponent_C.SpawnGlidingEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GliderComponent_C::SpawnGlidingEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "SpawnGlidingEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GliderComponent.BP_GliderComponent_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetPalCharacterMovementComponent_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_GliderComponent_C::Setup(class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "Setup");

	Params::UBP_GliderComponent_C_Setup_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPalCharacterMovementComponent_ReturnValue = CallFunc_GetPalCharacterMovementComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GliderComponent.BP_GliderComponent_C.OnInitializeGlider
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_GliderComponent_C::OnInitializeGlider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "OnInitializeGlider");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GliderComponent.BP_GliderComponent_C.OnGlidingCancleAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GliderComponent_C::OnGlidingCancleAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "OnGlidingCancleAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GliderComponent.BP_GliderComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GliderComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "ReceiveTick");

	Params::UBP_GliderComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GliderComponent.BP_GliderComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_GliderComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GliderComponent.BP_GliderComponent_C.OnStartGliding
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_GliderComponent_C::OnStartGliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "OnStartGliding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GliderComponent.BP_GliderComponent_C.OnEndGliding
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_GliderComponent_C::OnEndGliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "OnEndGliding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GliderComponent.BP_GliderComponent_C.OnChangeGliderVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GliderComponent_C::OnChangeGliderVisibility(bool bIsVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "OnChangeGliderVisibility");

	Params::UBP_GliderComponent_C_OnChangeGliderVisibility_Params Parms{};

	Parms.bIsVisibility = bIsVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GliderComponent.BP_GliderComponent_C.«¹¿à¤ÙóÈ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GliderComponent_C::________()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "«¹¿à¤ÙóÈ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GliderComponent.BP_GliderComponent_C.ExecuteUbergraph_BP_GliderComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsVisibility                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID                    (NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions                                (NoDestructor)
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID_1                  (NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions_1                              (NoDestructor)
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID_2                  (NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID_3                  (NoDestructor, HasGetValueTypeHash)
// struct FPalSoundOptions            K2Node_MakeStruct_PalSoundOptions_2                              (NoDestructor)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GliderComponent_C::ExecuteUbergraph_BP_GliderComponent(int32 EntryPoint, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bIsVisibility, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID_1, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions_1, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID_2, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID_3, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions_2, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GliderComponent_C", "ExecuteUbergraph_BP_GliderComponent");

	Params::UBP_GliderComponent_C_ExecuteUbergraph_BP_GliderComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_bIsVisibility = K2Node_Event_bIsVisibility;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID = K2Node_MakeStruct_PalDataTableRowName_SoundID;
	Parms.K2Node_MakeStruct_PalSoundOptions = K2Node_MakeStruct_PalSoundOptions;
	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID_1 = K2Node_MakeStruct_PalDataTableRowName_SoundID_1;
	Parms.K2Node_MakeStruct_PalSoundOptions_1 = K2Node_MakeStruct_PalSoundOptions_1;
	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID_2 = K2Node_MakeStruct_PalDataTableRowName_SoundID_2;
	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID_3 = K2Node_MakeStruct_PalDataTableRowName_SoundID_3;
	Parms.K2Node_MakeStruct_PalSoundOptions_2 = K2Node_MakeStruct_PalSoundOptions_2;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


