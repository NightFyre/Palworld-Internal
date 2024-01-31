#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionProtecting.BP_AIActionProtecting_C
// (None)

class UClass* UBP_AIActionProtecting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionProtecting_C");

	return Clss;
}


// BP_AIActionProtecting_C BP_AIActionProtecting.Default__BP_AIActionProtecting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionProtecting_C* UBP_AIActionProtecting_C::GetDefaultObj()
{
	static class UBP_AIActionProtecting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionProtecting_C*>(UBP_AIActionProtecting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.CancelCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClimbing_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalActionType          CallFunc_GetCurrentActionType_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGliding_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionProtecting_C::CancelCheck(bool CallFunc_IsValid_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsClimbing_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, enum class EPalActionType CallFunc_GetCurrentActionType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsGliding_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "CancelCheck");

	Params::UBP_AIActionProtecting_C_CancelCheck_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsClimbing_ReturnValue = CallFunc_IsClimbing_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetCurrentActionType_ReturnValue = CallFunc_GetCurrentActionType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_IsGliding_ReturnValue = CallFunc_IsGliding_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.onCoopEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIActionProtecting_C::OnCoopEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "onCoopEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.SetupAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CoopParam_Shield_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionProtecting_C::SetupAction(class APawn* ControlledPawn, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UBP_CoopParam_Shield_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "SetupAction");

	Params::UBP_AIActionProtecting_C_SetupAction_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.SetProtectCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               RidingCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionProtecting_C::SetProtectCharacter(class APalCharacter* RidingCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "SetProtectCharacter");

	Params::UBP_AIActionProtecting_C_SetProtectCharacter_Params Parms{};

	Parms.RidingCharacter = RidingCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.BindCoopReleaseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIActionProtecting_C::BindCoopReleaseEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "BindCoopReleaseEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.OnCoopRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIActionProtecting_C::OnCoopRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "OnCoopRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.UnbindCoopReleaseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIActionProtecting_C::UnbindCoopReleaseEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "UnbindCoopReleaseEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.OnDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_AIActionProtecting_C::OnDead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "OnDead");

	Params::UBP_AIActionProtecting_C_OnDead_Params Parms{};

	Parms.DeadInfo = DeadInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.StartPartnerSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIActionProtecting_C::StartPartnerSkill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "StartPartnerSkill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.StopPartnerSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIActionProtecting_C::StopPartnerSkill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "StopPartnerSkill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.OnDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult            DamageResult                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_AIActionProtecting_C::OnDamage(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "OnDamage");

	Params::UBP_AIActionProtecting_C_OnDamage_Params Parms{};

	Parms.DamageResult = DamageResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionProtecting_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "ActionStart");

	Params::UBP_AIActionProtecting_C_ActionStart_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       WithResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionProtecting_C::ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "ActionFinished");

	Params::UBP_AIActionProtecting_C_ActionFinished_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.OnLanded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalCharacterMovementComponent*Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_AIActionProtecting_C::OnLanded(class UPalCharacterMovementComponent* Component, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "OnLanded");

	Params::UBP_AIActionProtecting_C_OnLanded_Params Parms{};

	Parms.Component = Component;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.DeadProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_AIActionProtecting_C::DeadProc(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "DeadProc");

	Params::UBP_AIActionProtecting_C_DeadProc_Params Parms{};

	Parms.DeadInfo = DeadInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionProtecting_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "ActionAbort");

	Params::UBP_AIActionProtecting_C_ActionAbort_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.CoopRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AIActionProtecting_C::CoopRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "CoopRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionProtecting_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "ActionTick");

	Params::UBP_AIActionProtecting_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionProtecting.BP_AIActionProtecting_C.ExecuteUbergraph_BP_AIActionProtecting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDeadInfo                K2Node_CustomEvent_DeadInfo_1                                    (NoDestructor)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalPartnerSkillParameterComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageResult            K2Node_CustomEvent_DamageResult                                  (NoDestructor)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CoopParam_Shield_C*      CallFunc_GetComponentByClass_ReturnValue_5                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPawnActionResult       K2Node_Event_WithResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*K2Node_CustomEvent_component                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FPalDeadInfo                K2Node_CustomEvent_DeadInfo                                      (NoDestructor)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_6                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CoopParam_Shield_C*      CallFunc_GetComponentByClass_ReturnValue_7                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionProtecting_C::ExecuteUbergraph_BP_AIActionProtecting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AController* CallFunc_GetController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, const struct FPalDamageResult& K2Node_CustomEvent_DamageResult, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4, class APawn* K2Node_Event_ControlledPawn_3, class UBP_CoopParam_Shield_C* CallFunc_GetComponentByClass_ReturnValue_5, class APawn* K2Node_Event_ControlledPawn_2, enum class EPawnActionResult K2Node_Event_WithResult, bool CallFunc_IsValid_ReturnValue_2, class UPalCharacterMovementComponent* K2Node_CustomEvent_component, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_6, class APawn* K2Node_Event_ControlledPawn_1, bool CallFunc_Not_PreBool_ReturnValue, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue_1, class UBP_CoopParam_Shield_C* CallFunc_GetComponentByClass_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionProtecting_C", "ExecuteUbergraph_BP_AIActionProtecting");

	Params::UBP_AIActionProtecting_C_ExecuteUbergraph_BP_AIActionProtecting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller_1 = K2Node_DynamicCast_AsPal_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_DeadInfo_1 = K2Node_CustomEvent_DeadInfo_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.K2Node_CustomEvent_DamageResult = K2Node_CustomEvent_DamageResult;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.K2Node_Event_ControlledPawn_3 = K2Node_Event_ControlledPawn_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_5 = CallFunc_GetComponentByClass_ReturnValue_5;
	Parms.K2Node_Event_ControlledPawn_2 = K2Node_Event_ControlledPawn_2;
	Parms.K2Node_Event_WithResult = K2Node_Event_WithResult;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_component = K2Node_CustomEvent_component;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.K2Node_CustomEvent_DeadInfo = K2Node_CustomEvent_DeadInfo;
	Parms.CallFunc_GetComponentByClass_ReturnValue_6 = CallFunc_GetComponentByClass_ReturnValue_6;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_7 = CallFunc_GetComponentByClass_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


