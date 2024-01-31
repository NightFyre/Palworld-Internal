#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CommonWorkRequirement.WBP_CommonWorkRequirement_C
// (None)

class UClass* UWBP_CommonWorkRequirement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CommonWorkRequirement_C");

	return Clss;
}


// WBP_CommonWorkRequirement_C WBP_CommonWorkRequirement.Default__WBP_CommonWorkRequirement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CommonWorkRequirement_C* UWBP_CommonWorkRequirement_C::GetDefaultObj()
{
	static class UWBP_CommonWorkRequirement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CommonWorkRequirement_C*>(UWBP_CommonWorkRequirement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CommonWorkRequirement.WBP_CommonWorkRequirement_C.On Updated Worker Pal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalWorkBase*                Work                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasAssign                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>CallFunc_GetAssignedCharacters_IndividualSlots                   (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetHandle_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetCharacterParameterComponent_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssignedToAnyWork_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonWorkRequirement_C::On_Updated_Worker_Pal(class UPalWorkBase* Work, bool HasAssign, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetAssignedCharacters_IndividualSlots, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsAssignedToAnyWork_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonWorkRequirement_C", "On Updated Worker Pal");

	Params::UWBP_CommonWorkRequirement_C_On_Updated_Worker_Pal_Params Parms{};

	Parms.Work = Work;
	Parms.HasAssign = HasAssign;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetAssignedCharacters_IndividualSlots = CallFunc_GetAssignedCharacters_IndividualSlots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetHandle_ReturnValue = CallFunc_GetHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCharacterParameterComponent_ReturnValue = CallFunc_GetCharacterParameterComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsAssignedToAnyWork_ReturnValue = CallFunc_IsAssignedToAnyWork_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonWorkRequirement.WBP_CommonWorkRequirement_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonWorkRequirement_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonWorkRequirement_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonWorkRequirement.WBP_CommonWorkRequirement_C.ExecuteUbergraph_WBP_CommonWorkRequirement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWorkSuitability     CallFunc_GetWorkSuitability_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUIMapObjectStatusIndicatorParameterBase*K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWorkSuitability     CallFunc_GetWorkSuitability_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*CallFunc_GetConcreteModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectEnergyModule*   CallFunc_GetEnergyModule_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectWorkeeModule*   CallFunc_GetWorkeeModule_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalWorkBase*                CallFunc_GetWork_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWorkProgress*            CallFunc_GetWorkProgress_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonWorkRequirement_C::ExecuteUbergraph_WBP_CommonWorkRequirement(int32 EntryPoint, enum class EPalWorkSuitability CallFunc_GetWorkSuitability_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUIMapObjectStatusIndicatorParameterBase* K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base, bool K2Node_DynamicCast_bSuccess, enum class EPalWorkSuitability CallFunc_GetWorkSuitability_ReturnValue_1, class UPalMapObjectConcreteModelBase* CallFunc_GetConcreteModel_ReturnValue, class UPalMapObjectEnergyModule* CallFunc_GetEnergyModule_ReturnValue, class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue, class UPalWorkBase* CallFunc_GetWork_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonWorkRequirement_C", "ExecuteUbergraph_WBP_CommonWorkRequirement");

	Params::UWBP_CommonWorkRequirement_C_ExecuteUbergraph_WBP_CommonWorkRequirement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorkSuitability_ReturnValue = CallFunc_GetWorkSuitability_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base = K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWorkSuitability_ReturnValue_1 = CallFunc_GetWorkSuitability_ReturnValue_1;
	Parms.CallFunc_GetConcreteModel_ReturnValue = CallFunc_GetConcreteModel_ReturnValue;
	Parms.CallFunc_GetEnergyModule_ReturnValue = CallFunc_GetEnergyModule_ReturnValue;
	Parms.CallFunc_GetWorkeeModule_ReturnValue = CallFunc_GetWorkeeModule_ReturnValue;
	Parms.CallFunc_GetWork_ReturnValue = CallFunc_GetWork_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorkProgress_ReturnValue = CallFunc_GetWorkProgress_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


