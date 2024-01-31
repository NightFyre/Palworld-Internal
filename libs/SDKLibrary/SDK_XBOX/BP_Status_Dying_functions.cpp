#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Status_Dying.BP_Status_Dying_C
// (None)

class UClass* UBP_Status_Dying_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Status_Dying_C");

	return Clss;
}


// BP_Status_Dying_C BP_Status_Dying.Default__BP_Status_Dying_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Status_Dying_C* UBP_Status_Dying_C::GetDefaultObj()
{
	static class UBP_Status_Dying_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Status_Dying_C*>(UBP_Status_Dying_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Status_Dying.BP_Status_Dying_C.FlagControll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsDisable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::FlagControll(bool bIsDisable, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "FlagControll");

	Params::UBP_Status_Dying_C_FlagControll_Params Parms{};

	Parms.bIsDisable = bIsDisable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_Dying.BP_Status_Dying_C.OnBeginStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_Dying_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnBeginStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Dying.BP_Status_Dying_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "TickStatus");

	Params::UBP_Status_Dying_C_TickStatus_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_Dying.BP_Status_Dying_C.OnEndStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_Dying_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnEndStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Dying.BP_Status_Dying_C.SetupInteractTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::SetupInteractTrigger(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "SetupInteractTrigger");

	Params::UBP_Status_Dying_C_SetupInteractTrigger_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_Dying.BP_Status_Dying_C.OnStartRescue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeIndicatorType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::OnStartRescue(class AActor* Other, enum class EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnStartRescue");

	Params::UBP_Status_Dying_C_OnStartRescue_Params Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_Dying.BP_Status_Dying_C.OnEndRescue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeIndicatorType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::OnEndRescue(class AActor* Other, enum class EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnEndRescue");

	Params::UBP_Status_Dying_C_OnEndRescue_Params Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_Dying.BP_Status_Dying_C.UpdateDyingWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Status_Dying_C::UpdateDyingWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "UpdateDyingWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Dying.BP_Status_Dying_C.ProcessDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Status_Dying_C::ProcessDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "ProcessDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Dying.BP_Status_Dying_C.StartBindInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalInteractDelegates*       InteractDelegates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::StartBindInteract(class UPalInteractDelegates* InteractDelegates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "StartBindInteract");

	Params::UBP_Status_Dying_C_StartBindInteract_Params Parms{};

	Parms.InteractDelegates = InteractDelegates;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_Dying.BP_Status_Dying_C.StartUnBindInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalInteractDelegates*       InteractDelegates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::StartUnBindInteract(class UPalInteractDelegates* InteractDelegates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "StartUnBindInteract");

	Params::UBP_Status_Dying_C_StartUnBindInteract_Params Parms{};

	Parms.InteractDelegates = InteractDelegates;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_Dying.BP_Status_Dying_C.ExecuteUbergraph_BP_Status_Dying
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalInteractDelegates*       K2Node_CustomEvent_InteractDelegates                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAliveFriendPlayers_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDyingHPZero_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsEnable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalInteractiveObjectSphereComponent*>CallFunc_GetComponentsByTag_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// class AActor*                      K2Node_CustomEvent_Other_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeK2Node_CustomEvent_IndicatorType_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalInteractiveObjectSphereComponent*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Other                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeK2Node_CustomEvent_IndicatorType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DownWidgetParameter_C*   CallFunc_CreateDispatchParameterForK2Node_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFriend_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_6                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_5                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_7                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_6                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayActionByType_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DyingFriendLoupe_C*     CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalInteractDelegates*       K2Node_CustomEvent_InteractDelegates_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SubDyingHP_SubHP_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_DyingHP_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_MaxDyingHP_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::ExecuteUbergraph_BP_Status_Dying(int32 EntryPoint, class UPalInteractDelegates* K2Node_CustomEvent_InteractDelegates, float K2Node_Event_DeltaTime, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAliveFriendPlayers_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsDyingHPZero_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_IsEnable, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class UPalInteractiveObjectSphereComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class AActor* K2Node_CustomEvent_Other_1, enum class EPalInteractiveObjectIndicatorType K2Node_CustomEvent_IndicatorType_1, class UPalInteractiveObjectSphereComponent* CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* K2Node_CustomEvent_Other, enum class EPalInteractiveObjectIndicatorType K2Node_CustomEvent_IndicatorType, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UBP_DownWidgetParameter_C* CallFunc_CreateDispatchParameterForK2Node_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsFriend_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_4, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_PlayAction_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_GetOwner_ReturnValue_5, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_6, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_5, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_6, class UPalActionBase* CallFunc_PlayActionByType_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_DyingFriendLoupe_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue, class UPalInteractDelegates* K2Node_CustomEvent_InteractDelegates_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_SubDyingHP_SubHP_ImplicitCast, double K2Node_CallDelegate_DyingHP_ImplicitCast, double K2Node_CallDelegate_MaxDyingHP_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "ExecuteUbergraph_BP_Status_Dying");

	Params::UBP_Status_Dying_C_ExecuteUbergraph_BP_Status_Dying_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InteractDelegates = K2Node_CustomEvent_InteractDelegates;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAliveFriendPlayers_ReturnValue = CallFunc_HasAliveFriendPlayers_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsDyingHPZero_ReturnValue = CallFunc_IsDyingHPZero_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_IsEnable = K2Node_CustomEvent_IsEnable;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.K2Node_CustomEvent_Other_1 = K2Node_CustomEvent_Other_1;
	Parms.K2Node_CustomEvent_IndicatorType_1 = K2Node_CustomEvent_IndicatorType_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_Other = K2Node_CustomEvent_Other;
	Parms.K2Node_CustomEvent_IndicatorType = K2Node_CustomEvent_IndicatorType;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_CreateDispatchParameterForK2Node_ReturnValue = CallFunc_CreateDispatchParameterForK2Node_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsFriend_ReturnValue = CallFunc_IsFriend_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetOwner_ReturnValue_5 = CallFunc_GetOwner_ReturnValue_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_6 = CallFunc_GetOwner_ReturnValue_6;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetComponentByClass_ReturnValue_5 = CallFunc_GetComponentByClass_ReturnValue_5;
	Parms.CallFunc_GetOwner_ReturnValue_7 = CallFunc_GetOwner_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_6 = CallFunc_GetComponentByClass_ReturnValue_6;
	Parms.CallFunc_PlayActionByType_ReturnValue = CallFunc_PlayActionByType_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;
	Parms.K2Node_CustomEvent_InteractDelegates_1 = K2Node_CustomEvent_InteractDelegates_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SubDyingHP_SubHP_ImplicitCast = CallFunc_SubDyingHP_SubHP_ImplicitCast;
	Parms.K2Node_CallDelegate_DyingHP_ImplicitCast = K2Node_CallDelegate_DyingHP_ImplicitCast;
	Parms.K2Node_CallDelegate_MaxDyingHP_ImplicitCast = K2Node_CallDelegate_MaxDyingHP_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_Dying.BP_Status_Dying_C.OnDyingInterrupt__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInterrupting                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::OnDyingInterrupt__DelegateSignature(bool IsInterrupting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnDyingInterrupt__DelegateSignature");

	Params::UBP_Status_Dying_C_OnDyingInterrupt__DelegateSignature_Params Parms{};

	Parms.IsInterrupting = IsInterrupting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_Dying.BP_Status_Dying_C.OnDyingEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Status_Dying_C::OnDyingEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnDyingEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Dying.BP_Status_Dying_C.OnUpdateDying__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DyingHP                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxDyingHP                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Dying_C::OnUpdateDying__DelegateSignature(double DyingHP, double MaxDyingHP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Dying_C", "OnUpdateDying__DelegateSignature");

	Params::UBP_Status_Dying_C_OnUpdateDying__DelegateSignature_Params Parms{};

	Parms.DyingHP = DyingHP;
	Parms.MaxDyingHP = MaxDyingHP;

	UObject::ProcessEvent(Func, &Parms);

}

}


