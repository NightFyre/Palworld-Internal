#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C
// (None)

class UClass* UBP_Status_WithVisualEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Status_WithVisualEffect_C");

	return Clss;
}


// BP_Status_WithVisualEffect_C BP_Status_WithVisualEffect.Default__BP_Status_WithVisualEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Status_WithVisualEffect_C* UBP_Status_WithVisualEffect_C::GetDefaultObj()
{
	static class UBP_Status_WithVisualEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Status_WithVisualEffect_C*>(UBP_Status_WithVisualEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.HideReAddEffectWhenCapture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalVisualEffectComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalVisualEffectDynamicParameterK2Node_MakeStruct_PalVisualEffectDynamicParameter                (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalVisualEffectComponent*   CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalVisualEffectBase*        CallFunc_AddVisualEffect_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsCapturedProcessing_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::HideReAddEffectWhenCapture(class AActor* CallFunc_GetOwner_ReturnValue, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalVisualEffectBase* CallFunc_AddVisualEffect_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_GetIsCapturedProcessing_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "HideReAddEffectWhenCapture");

	Params::UBP_Status_WithVisualEffect_C_HideReAddEffectWhenCapture_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_PalVisualEffectDynamicParameter = K2Node_MakeStruct_PalVisualEffectDynamicParameter;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_AddVisualEffect_ReturnValue = CallFunc_AddVisualEffect_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetIsCapturedProcessing_ReturnValue = CallFunc_GetIsCapturedProcessing_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.ResetDamageDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::ResetDamageDown(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "ResetDamageDown");

	Params::UBP_Status_WithVisualEffect_C_ResetDamageDown_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.ResetDamageUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::ResetDamageUp(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "ResetDamageUp");

	Params::UBP_Status_WithVisualEffect_C_ResetDamageUp_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.SetDamageDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::SetDamageDown(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "SetDamageDown");

	Params::UBP_Status_WithVisualEffect_C_SetDamageDown_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.SetDamageUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::SetDamageUp(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "SetDamageUp");

	Params::UBP_Status_WithVisualEffect_C_SetDamageUp_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.HasSelfPalElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalElementType         MyElement                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Has                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasElementType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::HasSelfPalElement(enum class EPalElementType MyElement, bool* Has, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasElementType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "HasSelfPalElement");

	Params::UBP_Status_WithVisualEffect_C_HasSelfPalElement_Params Parms{};

	Parms.MyElement = MyElement;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_HasElementType_ReturnValue = CallFunc_HasElementType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has != nullptr)
		*Has = Parms.Has;

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.OnBeginStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_WithVisualEffect_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "OnBeginStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.OnEndStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_WithVisualEffect_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "OnEndStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.«¹¿à¤ÙóÈ_OtherStatusAdd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStatusComponent*         StatusComponent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalStatusID            StatusId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStatusBase*              Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::_________OtherStatusAdd(class UPalStatusComponent* StatusComponent, enum class EPalStatusID StatusId, class UPalStatusBase* Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "«¹¿à¤ÙóÈ_OtherStatusAdd");

	Params::UBP_Status_WithVisualEffect_C__________OtherStatusAdd_Params Parms{};

	Parms.StatusComponent = StatusComponent;
	Parms.StatusId = StatusId;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.«¹¿à¤ÙóÈ_Dead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                DeadInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_Status_WithVisualEffect_C::_________Dead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "«¹¿à¤ÙóÈ_Dead");

	Params::UBP_Status_WithVisualEffect_C__________Dead_Params Parms{};

	Parms.DeadInfo = DeadInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "TickStatus");

	Params::UBP_Status_WithVisualEffect_C_TickStatus_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.ExecuteUbergraph_BP_Status_WithVisualEffect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalVisualEffectComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPalVisualEffectDynamicParameterK2Node_MakeStruct_PalVisualEffectDynamicParameter                (None)
// class UPalVisualEffectBase*        CallFunc_AddVisualEffect_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStatusComponent*         CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStatusComponent*         CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalVisualEffectComponent*   CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalStatusComponent*         K2Node_CustomEvent_StatusComponent                               (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPalStatusID            K2Node_CustomEvent_StatusID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStatusBase*              K2Node_CustomEvent_Status                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDeadInfo                K2Node_CustomEvent_DeadInfo                                      (NoDestructor)
// class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::ExecuteUbergraph_BP_Status_WithVisualEffect(int32 EntryPoint, float K2Node_Event_DeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, class UPalVisualEffectBase* CallFunc_AddVisualEffect_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalStatusComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalStatusComponent* CallFunc_GetComponentByClass_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UPalStatusComponent* K2Node_CustomEvent_StatusComponent, enum class EPalStatusID K2Node_CustomEvent_StatusID, class UPalStatusBase* K2Node_CustomEvent_Status, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue_4, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "ExecuteUbergraph_BP_Status_WithVisualEffect");

	Params::UBP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeStruct_PalVisualEffectDynamicParameter = K2Node_MakeStruct_PalVisualEffectDynamicParameter;
	Parms.CallFunc_AddVisualEffect_ReturnValue = CallFunc_AddVisualEffect_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.K2Node_CustomEvent_StatusComponent = K2Node_CustomEvent_StatusComponent;
	Parms.K2Node_CustomEvent_StatusID = K2Node_CustomEvent_StatusID;
	Parms.K2Node_CustomEvent_Status = K2Node_CustomEvent_Status;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.K2Node_CustomEvent_DeadInfo = K2Node_CustomEvent_DeadInfo;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


