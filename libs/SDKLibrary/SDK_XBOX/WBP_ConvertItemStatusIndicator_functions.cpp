#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C
// (None)

class UClass* UWBP_ConvertItemStatusIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConvertItemStatusIndicator_C");

	return Clss;
}


// WBP_ConvertItemStatusIndicator_C WBP_ConvertItemStatusIndicator.Default__WBP_ConvertItemStatusIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConvertItemStatusIndicator_C* UWBP_ConvertItemStatusIndicator_C::GetDefaultObj()
{
	static class UWBP_ConvertItemStatusIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConvertItemStatusIndicator_C*>(UWBP_ConvertItemStatusIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.OnUpdatedWorkerPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalWorkBase*                Work                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalWorkSuitability     CallFunc_GetWorkSuitability_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetWorkId_ReturnValue                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalIndividualCharacterSlot*>CallFunc_GetAssignedCharacters_IndividualSlots                   (ReferenceParm)

void UWBP_ConvertItemStatusIndicator_C::OnUpdatedWorkerPal(class UPalWorkBase* Work, enum class EPalWorkSuitability CallFunc_GetWorkSuitability_ReturnValue, const struct FGuid& CallFunc_GetWorkId_ReturnValue, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetAssignedCharacters_IndividualSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "OnUpdatedWorkerPal");

	Params::UWBP_ConvertItemStatusIndicator_C_OnUpdatedWorkerPal_Params Parms{};

	Parms.Work = Work;
	Parms.CallFunc_GetWorkSuitability_ReturnValue = CallFunc_GetWorkSuitability_ReturnValue;
	Parms.CallFunc_GetWorkId_ReturnValue = CallFunc_GetWorkId_ReturnValue;
	Parms.CallFunc_GetAssignedCharacters_IndividualSlots = CallFunc_GetAssignedCharacters_IndividualSlots;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.CloseDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ConvertItemStatusIndicator_C::CloseDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "CloseDetail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.DisplayDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectWorkeeModule*   CallFunc_GetWorkeeModule_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWorkProgress*            CallFunc_GetWorkProgress_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemStatusIndicator_C::DisplayDetail(class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "DisplayDetail");

	Params::UWBP_ConvertItemStatusIndicator_C_DisplayDetail_Params Parms{};

	Parms.CallFunc_GetWorkeeModule_ReturnValue = CallFunc_GetWorkeeModule_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorkProgress_ReturnValue = CallFunc_GetWorkProgress_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.OnReflectWorkProgress
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalWorkProgress*            WorkProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetProgressRate_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetWorkProgressRate_rate_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemStatusIndicator_C::OnReflectWorkProgress(class UPalWorkProgress* WorkProgress, float CallFunc_GetProgressRate_ReturnValue, double CallFunc_SetWorkProgressRate_rate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "OnReflectWorkProgress");

	Params::UWBP_ConvertItemStatusIndicator_C_OnReflectWorkProgress_Params Parms{};

	Parms.WorkProgress = WorkProgress;
	Parms.CallFunc_GetProgressRate_ReturnValue = CallFunc_GetProgressRate_ReturnValue;
	Parms.CallFunc_SetWorkProgressRate_rate_ImplicitCast = CallFunc_SetWorkProgressRate_rate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.OnUpdateProductSlot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              RemainCreateNum                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ProductStackCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRemainCreateNum_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemRecipe              CallFunc_GetCurrentRecipe_ReturnValue                            (None)
// int32                              CallFunc_GetRemainCreateNum_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsProductNumInfinite_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemStatusIndicator_C::OnUpdateProductSlot(class UPalItemSlot* Slot, int32 RemainCreateNum, int32 ProductStackCount, int32 CallFunc_GetRemainCreateNum_ReturnValue, const struct FPalItemRecipe& CallFunc_GetCurrentRecipe_ReturnValue, int32 CallFunc_GetRemainCreateNum_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_IsProductNumInfinite_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "OnUpdateProductSlot");

	Params::UWBP_ConvertItemStatusIndicator_C_OnUpdateProductSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.RemainCreateNum = RemainCreateNum;
	Parms.ProductStackCount = ProductStackCount;
	Parms.CallFunc_GetRemainCreateNum_ReturnValue = CallFunc_GetRemainCreateNum_ReturnValue;
	Parms.CallFunc_GetCurrentRecipe_ReturnValue = CallFunc_GetCurrentRecipe_ReturnValue;
	Parms.CallFunc_GetRemainCreateNum_ReturnValue_1 = CallFunc_GetRemainCreateNum_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_IsProductNumInfinite_ReturnValue = CallFunc_IsProductNumInfinite_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetStackCount_ReturnValue = CallFunc_GetStackCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.UpdateProductNum
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConvertItemModel*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetProductSlot_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemStatusIndicator_C::UpdateProductNum(class UPalMapObjectConvertItemModel* Model, class UPalItemSlot* CallFunc_GetProductSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "UpdateProductNum");

	Params::UWBP_ConvertItemStatusIndicator_C_UpdateProductNum_Params Parms{};

	Parms.Model = Model;
	Parms.CallFunc_GetProductSlot_ReturnValue = CallFunc_GetProductSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.OnUpdateRecipe
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConvertItemModel*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalItemRecipe              CurrentRecipe                                                    (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemRecipe              CallFunc_GetCurrentRecipe_ReturnValue                            (None)

void UWBP_ConvertItemStatusIndicator_C::OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model, const struct FPalItemRecipe& CurrentRecipe, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalItemRecipe& CallFunc_GetCurrentRecipe_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "OnUpdateRecipe");

	Params::UWBP_ConvertItemStatusIndicator_C_OnUpdateRecipe_Params Parms{};

	Parms.Model = Model;
	Parms.CurrentRecipe = CurrentRecipe;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentRecipe_ReturnValue = CallFunc_GetCurrentRecipe_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectWorkeeModule*   CallFunc_GetWorkeeModule_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalWorkProgress*            CallFunc_GetWorkProgress_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectWorkeeModule*   CallFunc_GetWorkeeModule_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectWorkeeModule*   CallFunc_GetWorkeeModule_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalWorkProgress*            CallFunc_GetWorkProgress_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalWorkProgress*            CallFunc_GetWorkProgress_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_GetProductSlot_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectEnergyModule*   CallFunc_GetEnergyModule_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUIMapObjectStatusIndicatorParameterBase*K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*CallFunc_GetConcreteModel_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConvertItemModel*K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemStatusIndicator_C::Initialize(class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue, class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue_1, class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue_1, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UPalItemSlot* CallFunc_GetProductSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectEnergyModule* CallFunc_GetEnergyModule_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUIMapObjectStatusIndicatorParameterBase* K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base, bool K2Node_DynamicCast_bSuccess, class UPalMapObjectConcreteModelBase* CallFunc_GetConcreteModel_ReturnValue, class UPalMapObjectConvertItemModel* K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "Initialize");

	Params::UWBP_ConvertItemStatusIndicator_C_Initialize_Params Parms{};

	Parms.CallFunc_GetWorkeeModule_ReturnValue = CallFunc_GetWorkeeModule_ReturnValue;
	Parms.CallFunc_GetWorkProgress_ReturnValue = CallFunc_GetWorkProgress_ReturnValue;
	Parms.CallFunc_GetWorkeeModule_ReturnValue_1 = CallFunc_GetWorkeeModule_ReturnValue_1;
	Parms.CallFunc_GetWorkeeModule_ReturnValue_2 = CallFunc_GetWorkeeModule_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorkProgress_ReturnValue_1 = CallFunc_GetWorkProgress_ReturnValue_1;
	Parms.CallFunc_GetWorkProgress_ReturnValue_2 = CallFunc_GetWorkProgress_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetProductSlot_ReturnValue = CallFunc_GetProductSlot_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetEnergyModule_ReturnValue = CallFunc_GetEnergyModule_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base = K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetConcreteModel_ReturnValue = CallFunc_GetConcreteModel_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model = K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ConvertItemStatusIndicator_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ConvertItemStatusIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.CheckLocationEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ConvertItemStatusIndicator_C::CheckLocationEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "CheckLocationEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ConvertItemStatusIndicator_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.ExecuteUbergraph_WBP_ConvertItemStatusIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMapObjectLocation_outVector                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConvertItemStatusIndicator_C::ExecuteUbergraph_WBP_ConvertItemStatusIndicator(int32 EntryPoint, const struct FVector& CallFunc_GetMapObjectLocation_outVector, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConvertItemStatusIndicator_C", "ExecuteUbergraph_WBP_ConvertItemStatusIndicator");

	Params::UWBP_ConvertItemStatusIndicator_C_ExecuteUbergraph_WBP_ConvertItemStatusIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMapObjectLocation_outVector = CallFunc_GetMapObjectLocation_outVector;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


