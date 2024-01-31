#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BuildObjectIndicator_PowerSufficiency.WBP_BuildObjectIndicator_PowerSufficiency_C
// (None)

class UClass* UWBP_BuildObjectIndicator_PowerSufficiency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BuildObjectIndicator_PowerSufficiency_C");

	return Clss;
}


// WBP_BuildObjectIndicator_PowerSufficiency_C WBP_BuildObjectIndicator_PowerSufficiency.Default__WBP_BuildObjectIndicator_PowerSufficiency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BuildObjectIndicator_PowerSufficiency_C* UWBP_BuildObjectIndicator_PowerSufficiency_C::GetDefaultObj()
{
	static class UWBP_BuildObjectIndicator_PowerSufficiency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BuildObjectIndicator_PowerSufficiency_C*>(UWBP_BuildObjectIndicator_PowerSufficiency_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BuildObjectIndicator_PowerSufficiency.WBP_BuildObjectIndicator_PowerSufficiency_C.OnUpdateEnergyModuleState
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectEnergyModule*   Module                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanConsumeEnergy_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Select_Default_1                                          (NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_BuildObjectIndicator_PowerSufficiency_C::OnUpdateEnergyModuleState(class UPalMapObjectEnergyModule* Module, bool Temp_bool_Variable, bool CallFunc_CanConsumeEnergy_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_Select_Default_1, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectIndicator_PowerSufficiency_C", "OnUpdateEnergyModuleState");

	Params::UWBP_BuildObjectIndicator_PowerSufficiency_C_OnUpdateEnergyModuleState_Params Parms{};

	Parms.Module = Module;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CanConsumeEnergy_ReturnValue = CallFunc_CanConsumeEnergy_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildObjectIndicator_PowerSufficiency.WBP_BuildObjectIndicator_PowerSufficiency_C.SetupUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectEnergyModule*   EnergyModule                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameter_MapObjectEnergyModule*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object_Energy_Module(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectIndicator_PowerSufficiency_C::SetupUI(class UPalMapObjectEnergyModule* EnergyModule, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_MapObjectEnergyModule* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object_Energy_Module, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectIndicator_PowerSufficiency_C", "SetupUI");

	Params::UWBP_BuildObjectIndicator_PowerSufficiency_C_SetupUI_Params Parms{};

	Parms.EnergyModule = EnergyModule;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object_Energy_Module = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object_Energy_Module;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BuildObjectIndicator_PowerSufficiency.WBP_BuildObjectIndicator_PowerSufficiency_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BuildObjectIndicator_PowerSufficiency_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectIndicator_PowerSufficiency_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BuildObjectIndicator_PowerSufficiency.WBP_BuildObjectIndicator_PowerSufficiency_C.ExecuteUbergraph_WBP_BuildObjectIndicator_PowerSufficiency
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildObjectIndicator_PowerSufficiency_C::ExecuteUbergraph_WBP_BuildObjectIndicator_PowerSufficiency(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BuildObjectIndicator_PowerSufficiency_C", "ExecuteUbergraph_WBP_BuildObjectIndicator_PowerSufficiency");

	Params::UWBP_BuildObjectIndicator_PowerSufficiency_C_ExecuteUbergraph_WBP_BuildObjectIndicator_PowerSufficiency_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


