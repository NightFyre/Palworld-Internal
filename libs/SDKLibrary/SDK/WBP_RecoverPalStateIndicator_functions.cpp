#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RecoverPalStateIndicator.WBP_RecoverPalStateIndicator_C
// (None)

class UClass* UWBP_RecoverPalStateIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RecoverPalStateIndicator_C");

	return Clss;
}


// WBP_RecoverPalStateIndicator_C WBP_RecoverPalStateIndicator.Default__WBP_RecoverPalStateIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RecoverPalStateIndicator_C* UWBP_RecoverPalStateIndicator_C::GetDefaultObj()
{
	static class UWBP_RecoverPalStateIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RecoverPalStateIndicator_C*>(UWBP_RecoverPalStateIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RecoverPalStateIndicator.WBP_RecoverPalStateIndicator_C.GetSlotWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCommonCharacterSlotButton_C*SlotWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCommonCharacterSlotButton_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RecoverPalStateIndicator_C::GetSlotWidget(int32 Index, class UWBP_PalCommonCharacterSlotButton_C** SlotWidget, int32 Temp_int_Variable, class UWBP_PalCommonCharacterSlotButton_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecoverPalStateIndicator_C", "GetSlotWidget");

	Params::UWBP_RecoverPalStateIndicator_C_GetSlotWidget_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotWidget != nullptr)
		*SlotWidget = Parms.SlotWidget;

}


// Function WBP_RecoverPalStateIndicator.WBP_RecoverPalStateIndicator_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterContainer*CharacterContainer                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectRecoverOtomoModel*ConcreteModel                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PalCommonCharacterSlotButton_C*CallFunc_GetSlotWidget_SlotWidget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectCharacterContainerModule*CallFunc_GetCharacterContainerModule_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterContainer*CallFunc_GetContainer_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>CallFunc_GetSlots_ReturnValue                                    (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectRecoverOtomoModel*CallFunc_TryGetConcreteModel_ConcreteModel                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetConcreteModel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUIRecoverPalStatusIndicatorParameter*K2Node_DynamicCast_AsPal_UIRecover_Pal_Status_Indicator_Parameter(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RecoverPalStateIndicator_C::Initialize(class UPalIndividualCharacterContainer* CharacterContainer, class UPalMapObjectRecoverOtomoModel* ConcreteModel, int32 Temp_int_Array_Index_Variable, class UWBP_PalCommonCharacterSlotButton_C* CallFunc_GetSlotWidget_SlotWidget, class UPalMapObjectCharacterContainerModule* CallFunc_GetCharacterContainerModule_ReturnValue, class UPalIndividualCharacterContainer* CallFunc_GetContainer_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetSlots_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPalMapObjectRecoverOtomoModel* CallFunc_TryGetConcreteModel_ConcreteModel, bool CallFunc_TryGetConcreteModel_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUIRecoverPalStatusIndicatorParameter* K2Node_DynamicCast_AsPal_UIRecover_Pal_Status_Indicator_Parameter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecoverPalStateIndicator_C", "Initialize");

	Params::UWBP_RecoverPalStateIndicator_C_Initialize_Params Parms{};

	Parms.CharacterContainer = CharacterContainer;
	Parms.ConcreteModel = ConcreteModel;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSlotWidget_SlotWidget = CallFunc_GetSlotWidget_SlotWidget;
	Parms.CallFunc_GetCharacterContainerModule_ReturnValue = CallFunc_GetCharacterContainerModule_ReturnValue;
	Parms.CallFunc_GetContainer_ReturnValue = CallFunc_GetContainer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetSlots_ReturnValue = CallFunc_GetSlots_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TryGetConcreteModel_ConcreteModel = CallFunc_TryGetConcreteModel_ConcreteModel;
	Parms.CallFunc_TryGetConcreteModel_ReturnValue = CallFunc_TryGetConcreteModel_ReturnValue;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_UIRecover_Pal_Status_Indicator_Parameter = K2Node_DynamicCast_AsPal_UIRecover_Pal_Status_Indicator_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RecoverPalStateIndicator.WBP_RecoverPalStateIndicator_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RecoverPalStateIndicator_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecoverPalStateIndicator_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RecoverPalStateIndicator.WBP_RecoverPalStateIndicator_C.ExecuteUbergraph_WBP_RecoverPalStateIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RecoverPalStateIndicator_C::ExecuteUbergraph_WBP_RecoverPalStateIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RecoverPalStateIndicator_C", "ExecuteUbergraph_WBP_RecoverPalStateIndicator");

	Params::UWBP_RecoverPalStateIndicator_C_ExecuteUbergraph_WBP_RecoverPalStateIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


