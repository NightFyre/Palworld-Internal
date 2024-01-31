#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCraftInfo_Pal.WBP_PalCraftInfo_Pal_C
// (None)

class UClass* UWBP_PalCraftInfo_Pal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCraftInfo_Pal_C");

	return Clss;
}


// WBP_PalCraftInfo_Pal_C WBP_PalCraftInfo_Pal.Default__WBP_PalCraftInfo_Pal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCraftInfo_Pal_C* UWBP_PalCraftInfo_Pal_C::GetDefaultObj()
{
	static class UWBP_PalCraftInfo_Pal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCraftInfo_Pal_C*>(UWBP_PalCraftInfo_Pal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCraftInfo_Pal.WBP_PalCraftInfo_Pal_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCraftInfo_Pal_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_Pal_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCraftInfo_Pal.WBP_PalCraftInfo_Pal_C.UpdateHunger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Current                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Last                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_Pal_C::UpdateHunger(float Current, float Last, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_Pal_C", "UpdateHunger");

	Params::UWBP_PalCraftInfo_Pal_C_UpdateHunger_Params Parms{};

	Parms.Current = Current;
	Parms.Last = Last;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo_Pal.WBP_PalCraftInfo_Pal_C.UpdateSanity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NowSanity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OldSanity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_Pal_C::UpdateSanity(float NowSanity, float OldSanity, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_Pal_C", "UpdateSanity");

	Params::UWBP_PalCraftInfo_Pal_C_UpdateSanity_Params Parms{};

	Parms.NowSanity = NowSanity;
	Parms.OldSanity = OldSanity;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast_1 = CallFunc_FTrunc_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo_Pal.WBP_PalCraftInfo_Pal_C.BindEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter*Paremter                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_Pal_C::BindEvent(class UPalIndividualCharacterParameter* Paremter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_Pal_C", "BindEvent");

	Params::UWBP_PalCraftInfo_Pal_C_BindEvent_Params Parms{};

	Parms.Paremter = Paremter;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo_Pal.WBP_PalCraftInfo_Pal_C.UnbindEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_DynamicCast_AsPal_Individual_Character_Handle             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_Pal_C::UnbindEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPalIndividualCharacterHandle* K2Node_DynamicCast_AsPal_Individual_Character_Handle, bool K2Node_DynamicCast_bSuccess, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_Pal_C", "UnbindEvent");

	Params::UWBP_PalCraftInfo_Pal_C_UnbindEvent_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Individual_Character_Handle = K2Node_DynamicCast_AsPal_Individual_Character_Handle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo_Pal.WBP_PalCraftInfo_Pal_C.SetTargetPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot* TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsFixedAssign                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UPalIndividualCharacterHandle>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFullStomach_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSanityValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxFullStomach_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSanityValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_Pal_C::SetTargetPal(class UPalIndividualCharacterSlot* TargetSlot, bool IsFixedAssign, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, TSoftObjectPtr<class UPalIndividualCharacterHandle> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, float CallFunc_GetFullStomach_ReturnValue, float CallFunc_GetSanityValue_ReturnValue, float CallFunc_GetMaxFullStomach_ReturnValue, float CallFunc_GetMaxSanityValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_Pal_C", "SetTargetPal");

	Params::UWBP_PalCraftInfo_Pal_C_SetTargetPal_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.IsFixedAssign = IsFixedAssign;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetFullStomach_ReturnValue = CallFunc_GetFullStomach_ReturnValue;
	Parms.CallFunc_GetSanityValue_ReturnValue = CallFunc_GetSanityValue_ReturnValue;
	Parms.CallFunc_GetMaxFullStomach_ReturnValue = CallFunc_GetMaxFullStomach_ReturnValue;
	Parms.CallFunc_GetMaxSanityValue_ReturnValue = CallFunc_GetMaxSanityValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCraftInfo_Pal.WBP_PalCraftInfo_Pal_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCraftInfo_Pal_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_Pal_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCraftInfo_Pal.WBP_PalCraftInfo_Pal_C.ExecuteUbergraph_WBP_PalCraftInfo_Pal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   K2Node_DynamicCast_AsMaterial                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCraftInfo_Pal_C::ExecuteUbergraph_WBP_PalCraftInfo_Pal(int32 EntryPoint, class UMaterial* K2Node_DynamicCast_AsMaterial, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCraftInfo_Pal_C", "ExecuteUbergraph_WBP_PalCraftInfo_Pal");

	Params::UWBP_PalCraftInfo_Pal_C_ExecuteUbergraph_WBP_PalCraftInfo_Pal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsMaterial = K2Node_DynamicCast_AsMaterial;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


