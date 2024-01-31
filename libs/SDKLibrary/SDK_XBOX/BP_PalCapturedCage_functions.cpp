#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalCapturedCage.BP_PalCapturedCage_C
// (Actor)

class UClass* ABP_PalCapturedCage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalCapturedCage_C");

	return Clss;
}


// BP_PalCapturedCage_C BP_PalCapturedCage.Default__BP_PalCapturedCage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalCapturedCage_C* ABP_PalCapturedCage_C::GetDefaultObj()
{
	static class ABP_PalCapturedCage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalCapturedCage_C*>(ABP_PalCapturedCage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.SetupSpawnPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CampSpawnerName                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalNPCManager*              CallFunc_GetNPCManager_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalEnemyCampStatus         CallFunc_GetEnemyCampStatus_ReturnValue                          (NoDestructor)
// class UPalNPCManager*              CallFunc_GetNPCManager_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalEnemyCampStatus         K2Node_SetFieldsInStruct_StructOut                               (NoDestructor)
// class UPalNPCManager*              CallFunc_GetNPCManager_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalEnemyCampStatus         CallFunc_GetEnemyCampStatus_ReturnValue_1                        (NoDestructor)
// class AActor*                      CallFunc_GetParentActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCCampPresetBase_C*     K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCampSpawnerName_Key                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRewardKey_Key                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::SetupSpawnPal(class FName CampSpawnerName, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, const struct FPalEnemyCampStatus& CallFunc_GetEnemyCampStatus_ReturnValue, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const struct FPalEnemyCampStatus& K2Node_SetFieldsInStruct_StructOut, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue_2, const struct FPalEnemyCampStatus& CallFunc_GetEnemyCampStatus_ReturnValue_1, class AActor* CallFunc_GetParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_NPCCampPresetBase_C* K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCampSpawnerName_Key, class FName CallFunc_GetRewardKey_Key, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "SetupSpawnPal");

	Params::ABP_PalCapturedCage_C_SetupSpawnPal_Params Parms{};

	Parms.CampSpawnerName = CampSpawnerName;
	Parms.CallFunc_GetNPCManager_ReturnValue = CallFunc_GetNPCManager_ReturnValue;
	Parms.CallFunc_GetEnemyCampStatus_ReturnValue = CallFunc_GetEnemyCampStatus_ReturnValue;
	Parms.CallFunc_GetNPCManager_ReturnValue_1 = CallFunc_GetNPCManager_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetNPCManager_ReturnValue_2 = CallFunc_GetNPCManager_ReturnValue_2;
	Parms.CallFunc_GetEnemyCampStatus_ReturnValue_1 = CallFunc_GetEnemyCampStatus_ReturnValue_1;
	Parms.CallFunc_GetParentActor_ReturnValue = CallFunc_GetParentActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base = K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCampSpawnerName_Key = CallFunc_GetCampSpawnerName_Key;
	Parms.CallFunc_GetRewardKey_Key = CallFunc_GetRewardKey_Key;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.GetCampSpawnerName
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetParentActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_NPCCampPresetBase_C*     K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCampSpawnerName_Key                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_PalCapturedCage_C::GetCampSpawnerName(class AActor* CallFunc_GetParentActor_ReturnValue, class ABP_NPCCampPresetBase_C* K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCampSpawnerName_Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "GetCampSpawnerName");

	Params::ABP_PalCapturedCage_C_GetCampSpawnerName_Params Parms{};

	Parms.CallFunc_GetParentActor_ReturnValue = CallFunc_GetParentActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base = K2Node_DynamicCast_AsBP_NPCCamp_Preset_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCampSpawnerName_Key = CallFunc_GetCampSpawnerName_Key;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.Disable Lock Mesh Outline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalInteractiveObjectComponentInterface>Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::Disable_Lock_Mesh_Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "Disable Lock Mesh Outline");

	Params::ABP_PalCapturedCage_C_Disable_Lock_Mesh_Outline_Params Parms{};

	Parms.Other = Other;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.Enable Lock Mesh Outline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalInteractiveObjectComponentInterface>Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::Enable_Lock_Mesh_Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "Enable Lock Mesh Outline");

	Params::ABP_PalCapturedCage_C_Enable_Lock_Mesh_Outline_Params Parms{};

	Parms.Other = Other;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.OnFinishRescue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeNewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        CallFunc_GetPalPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PalPlayerController_C*   K2Node_DynamicCast_AsBP_Pal_Player_Controller                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::OnFinishRescue(class AActor* Player, enum class EPalInteractiveObjectIndicatorType NewParam, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalPlayerController* CallFunc_GetPalPlayerController_ReturnValue, class ABP_PalPlayerController_C* K2Node_DynamicCast_AsBP_Pal_Player_Controller, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "OnFinishRescue");

	Params::ABP_PalCapturedCage_C_OnFinishRescue_Params Parms{};

	Parms.Player = Player;
	Parms.NewParam = NewParam;
	Parms.K2Node_DynamicCast_AsPal_Player_Character = K2Node_DynamicCast_AsPal_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPalPlayerController_ReturnValue = CallFunc_GetPalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_Player_Controller = K2Node_DynamicCast_AsBP_Pal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.StopPlayerAnime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeNewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::StopPlayerAnime(class AActor* Player, enum class EPalInteractiveObjectIndicatorType NewParam, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "StopPlayerAnime");

	Params::ABP_PalCapturedCage_C_StopPlayerAnime_Params Parms{};

	Parms.Player = Player;
	Parms.NewParam = NewParam;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.StartPlayerAnime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeNewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionDynamicParameter     K2Node_MakeStruct_ActionDynamicParameter                         (None)
// class UPalActionBase*              CallFunc_PlayActionByTypeParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::StartPlayerAnime(class AActor* Player, enum class EPalInteractiveObjectIndicatorType NewParam, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UPalActionBase* CallFunc_PlayActionByTypeParameter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "StartPlayerAnime");

	Params::ABP_PalCapturedCage_C_StartPlayerAnime_Params Parms{};

	Parms.Player = Player;
	Parms.NewParam = NewParam;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_MakeStruct_ActionDynamicParameter = K2Node_MakeStruct_ActionDynamicParameter;
	Parms.CallFunc_PlayActionByTypeParameter_ReturnValue = CallFunc_PlayActionByTypeParameter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.DoorOpenAnimeLoop
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             FinishAngle                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::DoorOpenAnimeLoop(double FinishAngle, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "DoorOpenAnimeLoop");

	Params::ABP_PalCapturedCage_C_DoorOpenAnimeLoop_Params Parms{};

	Parms.FinishAngle = FinishAngle;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.PlayDoorOpenAnime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::PlayDoorOpenAnime(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "PlayDoorOpenAnime");

	Params::ABP_PalCapturedCage_C_PlayDoorOpenAnime_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.GetIndicatorType
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EPalInteractiveObjectIndicatorTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EPalInteractiveObjectIndicatorType ABP_PalCapturedCage_C::GetIndicatorType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "GetIndicatorType");

	Params::ABP_PalCapturedCage_C_GetIndicatorType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PalCapturedCage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.CaptureStartFromServerPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::CaptureStartFromServerPlayer(class APalPlayerCharacter* Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "CaptureStartFromServerPlayer");

	Params::ABP_PalCapturedCage_C_CaptureStartFromServerPlayer_Params Parms{};

	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.ExecuteUbergraph_BP_PalCapturedCage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalInteractiveObjectIndicatorInterface>CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSpawnedPal_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalVisualEffectDynamicParameterK2Node_MakeStruct_PalVisualEffectDynamicParameter                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalVisualEffectComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalVisualEffectBase*        CallFunc_AddVisualEffect_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalVisualEffectDynamicParameterK2Node_MakeStruct_PalVisualEffectDynamicParameter_1              (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalVisualEffectBase*        CallFunc_AddVisualEffect_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_CustomEvent_Attacker                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCapturedCage_C::ExecuteUbergraph_BP_PalCapturedCage(int32 EntryPoint, TScriptInterface<class IPalInteractiveObjectIndicatorInterface> CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput, class APalCharacter* CallFunc_GetSpawnedPal_ReturnValue, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, bool CallFunc_IsValid_ReturnValue, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalVisualEffectBase* CallFunc_AddVisualEffect_ReturnValue, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter_1, bool Temp_bool_Has_Been_Initd_Variable, class UPalVisualEffectBase* CallFunc_AddVisualEffect_ReturnValue_1, class APalPlayerCharacter* K2Node_CustomEvent_Attacker, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "ExecuteUbergraph_BP_PalCapturedCage");

	Params::ABP_PalCapturedCage_C_ExecuteUbergraph_BP_PalCapturedCage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput = CallFunc_SetIndicatorInterface_InIndicatorInterface_CastInput;
	Parms.CallFunc_GetSpawnedPal_ReturnValue = CallFunc_GetSpawnedPal_ReturnValue;
	Parms.K2Node_MakeStruct_PalVisualEffectDynamicParameter = K2Node_MakeStruct_PalVisualEffectDynamicParameter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_AddVisualEffect_ReturnValue = CallFunc_AddVisualEffect_ReturnValue;
	Parms.K2Node_MakeStruct_PalVisualEffectDynamicParameter_1 = K2Node_MakeStruct_PalVisualEffectDynamicParameter_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_AddVisualEffect_ReturnValue_1 = CallFunc_AddVisualEffect_ReturnValue_1;
	Parms.K2Node_CustomEvent_Attacker = K2Node_CustomEvent_Attacker;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalCapturedCage.BP_PalCapturedCage_C.OnCaptured__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PalCapturedCage_C::OnCaptured__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalCapturedCage_C", "OnCaptured__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


