#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C
// (None)

class UClass* UBP_ActionSimpleMonoMontage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionSimpleMonoMontage_C");

	return Clss;
}


// BP_ActionSimpleMonoMontage_C BP_ActionSimpleMonoMontage.Default__BP_ActionSimpleMonoMontage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionSimpleMonoMontage_C* UBP_ActionSimpleMonoMontage_C::GetDefaultObj()
{
	static class UBP_ActionSimpleMonoMontage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionSimpleMonoMontage_C*>(UBP_ActionSimpleMonoMontage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.FindMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Exist                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindMontange_bExist                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_FindMontange_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSimpleMonoMontage_C::FindMontage(class UAnimMontage** Montage, bool* Exist, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_FindMontange_bExist, class UAnimMontage* CallFunc_FindMontange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "FindMontage");

	Params::UBP_ActionSimpleMonoMontage_C_FindMontage_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindMontange_bExist = CallFunc_FindMontange_bExist;
	Parms.CallFunc_FindMontange_ReturnValue = CallFunc_FindMontange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

	if (Exist != nullptr)
		*Exist = Parms.Exist;

}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSimpleMonoMontage_C::OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8");

	Params::UBP_ActionSimpleMonoMontage_C_OnNotifyEnd_1447BCF549F3A6CB485DC2BA183FE6B8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSimpleMonoMontage_C::OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8");

	Params::UBP_ActionSimpleMonoMontage_C_OnNotifyBegin_1447BCF549F3A6CB485DC2BA183FE6B8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSimpleMonoMontage_C::OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8");

	Params::UBP_ActionSimpleMonoMontage_C_OnInterrupted_1447BCF549F3A6CB485DC2BA183FE6B8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSimpleMonoMontage_C::OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8");

	Params::UBP_ActionSimpleMonoMontage_C_OnBlendOut_1447BCF549F3A6CB485DC2BA183FE6B8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSimpleMonoMontage_C::OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8");

	Params::UBP_ActionSimpleMonoMontage_C_OnCompleted_1447BCF549F3A6CB485DC2BA183FE6B8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionSimpleMonoMontage_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionSimpleMonoMontage_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnNotifyBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSimpleMonoMontage_C::OnNotifyBegin(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "OnNotifyBegin");

	Params::UBP_ActionSimpleMonoMontage_C_OnNotifyBegin_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.OnNotifyEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSimpleMonoMontage_C::OnNotifyEnd(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "OnNotifyEnd");

	Params::UBP_ActionSimpleMonoMontage_C_OnNotifyEnd_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSimpleMonoMontage.BP_ActionSimpleMonoMontage_C.ExecuteUbergraph_BP_ActionSimpleMonoMontage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetPalCharacterMovementComponent_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetPalCharacterMovementComponent_ReturnValue_1          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_FindMontage_Montage                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindMontage_Exist                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_FindMontage_Montage_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindMontage_Exist_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSimpleMonoMontage_C::ExecuteUbergraph_BP_ActionSimpleMonoMontage(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_6, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UAnimMontage* CallFunc_FindMontage_Montage, bool CallFunc_FindMontage_Exist, class UAnimMontage* CallFunc_FindMontage_Montage_1, bool CallFunc_FindMontage_Exist_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSimpleMonoMontage_C", "ExecuteUbergraph_BP_ActionSimpleMonoMontage");

	Params::UBP_ActionSimpleMonoMontage_C_ExecuteUbergraph_BP_ActionSimpleMonoMontage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetPalCharacterMovementComponent_ReturnValue = CallFunc_GetPalCharacterMovementComponent_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetPalCharacterMovementComponent_ReturnValue_1 = CallFunc_GetPalCharacterMovementComponent_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_FindMontage_Montage = CallFunc_FindMontage_Montage;
	Parms.CallFunc_FindMontage_Exist = CallFunc_FindMontage_Exist;
	Parms.CallFunc_FindMontage_Montage_1 = CallFunc_FindMontage_Montage_1;
	Parms.CallFunc_FindMontage_Exist_1 = CallFunc_FindMontage_Exist_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_4 = CallFunc_GetActionCharacter_ReturnValue_4;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast = CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


