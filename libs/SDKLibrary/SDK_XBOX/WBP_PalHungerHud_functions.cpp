#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalHungerHud.WBP_PalHungerHud_C
// (None)

class UClass* UWBP_PalHungerHud_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalHungerHud_C");

	return Clss;
}


// WBP_PalHungerHud_C WBP_PalHungerHud.Default__WBP_PalHungerHud_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalHungerHud_C* UWBP_PalHungerHud_C::GetDefaultObj()
{
	static class UWBP_PalHungerHud_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalHungerHud_C*>(UWBP_PalHungerHud_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.GetLocalPlayerGroupID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                       GroupID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_GetIndividualParameter_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetGroupId_ReturnValue                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHungerHud_C::GetLocalPlayerGroupID(struct FGuid* GroupID, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, const struct FGuid& CallFunc_GetGroupId_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "GetLocalPlayerGroupID");

	Params::UWBP_PalHungerHud_C_GetLocalPlayerGroupID_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIndividualParameter_ReturnValue = CallFunc_GetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetGroupId_ReturnValue = CallFunc_GetGroupId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (GroupID != nullptr)
		*GroupID = std::move(Parms.GroupID);

}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.RemoveSelf_In
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHungerHud_C::RemoveSelf_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "RemoveSelf_In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.OnRequestRemove
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PalHungerHud_C::OnRequestRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "OnRequestRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalHungerHud_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHungerHud_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.CheckGroup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHungerHud_C::CheckGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "CheckGroup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalHungerHud_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHungerHud.WBP_PalHungerHud_C.ExecuteUbergraph_WBP_PalHungerHud
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_HungerIcon*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Hunger_Icon       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetLocalPlayerGroupID_GroupID                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHungerHud_C::ExecuteUbergraph_WBP_PalHungerHud(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalHUDDispatchParameter_HungerIcon* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Hunger_Icon, bool K2Node_DynamicCast_bSuccess, const struct FGuid& CallFunc_GetLocalPlayerGroupID_GroupID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHungerHud_C", "ExecuteUbergraph_WBP_PalHungerHud");

	Params::UWBP_PalHungerHud_C_ExecuteUbergraph_WBP_PalHungerHud_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Hunger_Icon = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Hunger_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerGroupID_GroupID = CallFunc_GetLocalPlayerGroupID_GroupID;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


