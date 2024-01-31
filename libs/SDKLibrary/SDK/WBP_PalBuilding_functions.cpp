#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalBuilding.WBP_PalBuilding_C
// (None)

class UClass* UWBP_PalBuilding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalBuilding_C");

	return Clss;
}


// WBP_PalBuilding_C WBP_PalBuilding.Default__WBP_PalBuilding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalBuilding_C* UWBP_PalBuilding_C::GetDefaultObj()
{
	static class UWBP_PalBuilding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalBuilding_C*>(UWBP_PalBuilding_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalBuilding.WBP_PalBuilding_C.RotateLeft
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuilding_C::RotateLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "RotateLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.RotateRight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuilding_C::RotateRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "RotateRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.Get Build Operation Result
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalMapObjectOperationResultResult                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapObjectOperationResultMaterialResult                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsExistsMaterial                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetBuildObjectDataTable_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalBuildObjectData         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapObjectOperationResultCallFunc_IsEnableBuild_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExistsMaterialForBuildObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapObjectOperationResultCallFunc_SelectPriorityResult_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuilding_C::Get_Build_Operation_Result(enum class EPalMapObjectOperationResult* Result, enum class EPalMapObjectOperationResult MaterialResult, bool IsExistsMaterial, class UDataTable* CallFunc_GetBuildObjectDataTable_ReturnValue, const struct FPalBuildObjectData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class EPalMapObjectOperationResult CallFunc_IsEnableBuild_ReturnValue, bool CallFunc_IsExistsMaterialForBuildObject_ReturnValue, enum class EPalMapObjectOperationResult CallFunc_SelectPriorityResult_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "Get Build Operation Result");

	Params::UWBP_PalBuilding_C_Get_Build_Operation_Result_Params Parms{};

	Parms.MaterialResult = MaterialResult;
	Parms.IsExistsMaterial = IsExistsMaterial;
	Parms.CallFunc_GetBuildObjectDataTable_ReturnValue = CallFunc_GetBuildObjectDataTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsEnableBuild_ReturnValue = CallFunc_IsEnableBuild_ReturnValue;
	Parms.CallFunc_IsExistsMaterialForBuildObject_ReturnValue = CallFunc_IsExistsMaterialForBuildObject_ReturnValue;
	Parms.CallFunc_SelectPriorityResult_ReturnValue = CallFunc_SelectPriorityResult_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.EmptyFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuilding_C::EmptyFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "EmptyFunction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.GetWarningText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalMapObjectOperationResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        CallFunc_GetMapObjectOperationResultText_outName                 (None)

void UWBP_PalBuilding_C::GetWarningText(enum class EPalMapObjectOperationResult Result, class FText* Text, class FText CallFunc_GetMapObjectOperationResultText_outName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "GetWarningText");

	Params::UWBP_PalBuilding_C_GetWarningText_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_GetMapObjectOperationResultText_outName = CallFunc_GetMapObjectOperationResultText_outName;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.BuildObjectContinuous
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuilding_C::BuildObjectContinuous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "BuildObjectContinuous");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.BuildObject
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuilding_C::BuildObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "BuildObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.Finish Building
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuilding_C::Finish_Building()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "Finish Building");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.ReturnToMainMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ObjectType                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildingUIParameter_C*   K2Node_DynamicCast_AsBP_Building_UIParameter                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMasterDataTableAccess_BuildObjectData*CallFunc_GetBuildObjectDataTableAccess_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_FindRow_bResult                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalBuildObjectData         CallFunc_BP_FindRow_ReturnValue                                  (None)
// int32                              CallFunc_ToInt_ReturnValue                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuilding_C::ReturnToMainMenu(int32 ObjectType, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_BuildingUIParameter_C* K2Node_DynamicCast_AsBP_Building_UIParameter, bool K2Node_DynamicCast_bSuccess, class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectData& CallFunc_BP_FindRow_ReturnValue, int32 CallFunc_ToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "ReturnToMainMenu");

	Params::UWBP_PalBuilding_C_ReturnToMainMenu_Params Parms{};

	Parms.ObjectType = ObjectType;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Building_UIParameter = K2Node_DynamicCast_AsBP_Building_UIParameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBuildObjectDataTableAccess_ReturnValue = CallFunc_GetBuildObjectDataTableAccess_ReturnValue;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_BP_FindRow_bResult = CallFunc_BP_FindRow_bResult;
	Parms.CallFunc_BP_FindRow_ReturnValue = CallFunc_BP_FindRow_ReturnValue;
	Parms.CallFunc_ToInt_ReturnValue = CallFunc_ToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.SetupInputAction
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_2                     (NoDestructor)
// class UBP_BuildingUIParameter_C*   K2Node_DynamicCast_AsBP_Building_UIParameter                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_3                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_4                     (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_5                     (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_6                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_7                     (NoDestructor)

void UWBP_PalBuilding_C::SetupInputAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, class UBP_BuildingUIParameter_C* K2Node_DynamicCast_AsBP_Building_UIParameter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "SetupInputAction");

	Params::UWBP_PalBuilding_C_SetupInputAction_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_2 = CallFunc_RegisterActionBinding_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Building_UIParameter = K2Node_DynamicCast_AsBP_Building_UIParameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_3 = CallFunc_RegisterActionBinding_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_4 = CallFunc_RegisterActionBinding_ReturnValue_4;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_5 = CallFunc_RegisterActionBinding_ReturnValue_5;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_6 = CallFunc_RegisterActionBinding_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_7 = CallFunc_RegisterActionBinding_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.ResetUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBuildObjectData         BuildObjectData                                                  (Edit, BlueprintVisible)
// class UPalMasterDataTableAccess_BuildObjectData*CallFunc_GetBuildObjectDataTableAccess_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_FindRow_bResult                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalBuildObjectData         CallFunc_BP_FindRow_ReturnValue                                  (None)

void UWBP_PalBuilding_C::ResetUI(const struct FPalBuildObjectData& BuildObjectData, class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectData& CallFunc_BP_FindRow_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "ResetUI");

	Params::UWBP_PalBuilding_C_ResetUI_Params Parms{};

	Parms.BuildObjectData = BuildObjectData;
	Parms.CallFunc_GetBuildObjectDataTableAccess_ReturnValue = CallFunc_GetBuildObjectDataTableAccess_ReturnValue;
	Parms.CallFunc_BP_FindRow_bResult = CallFunc_BP_FindRow_bResult;
	Parms.CallFunc_BP_FindRow_ReturnValue = CallFunc_BP_FindRow_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.SetupUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBuildObjectData         BuildObjectData                                                  (Edit, BlueprintVisible)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuilding_C::SetupUI(const struct FPalBuildObjectData& BuildObjectData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "SetupUI");

	Params::UWBP_PalBuilding_C_SetupUI_Params Parms{};

	Parms.BuildObjectData = BuildObjectData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.DisposeModel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuilding_C::DisposeModel(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "DisposeModel");

	Params::UWBP_PalBuilding_C_DisposeModel_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.Setup Model
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_BuildingUIParameter_C*   Parameter                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildingUIParameter_C*   K2Node_DynamicCast_AsBP_Building_UIParameter                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalUIBuildingModel_C*    CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuilding_C::Setup_Model(class UBP_BuildingUIParameter_C* Parameter, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_BuildingUIParameter_C* K2Node_DynamicCast_AsBP_Building_UIParameter, bool K2Node_DynamicCast_bSuccess, class UBP_PalUIBuildingModel_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "Setup Model");

	Params::UWBP_PalBuilding_C_Setup_Model_Params Parms{};

	Parms.Parameter = Parameter;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Building_UIParameter = K2Node_DynamicCast_AsBP_Building_UIParameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuilding_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalBuilding_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.UpdateDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalBuilding_C::UpdateDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "UpdateDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalBuilding.WBP_PalBuilding_C.ExecuteUbergraph_WBP_PalBuilding
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapObjectOperationResultCallFunc_Get_Build_Operation_Result_Result                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBuilderComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWarningText_text                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInstallAtReticle_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMasterDataTableAccess_BuildObjectData*CallFunc_GetBuildObjectDataTableAccess_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_FindRow_bResult                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalBuildObjectData         CallFunc_BP_FindRow_ReturnValue                                  (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_PalBuilding_C::ExecuteUbergraph_WBP_PalBuilding(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class EPalMapObjectOperationResult CallFunc_Get_Build_Operation_Result_Result, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UPalBuilderComponent* CallFunc_GetComponentByClass_ReturnValue, class FText CallFunc_GetWarningText_text, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsInstallAtReticle_ReturnValue, class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectData& CallFunc_BP_FindRow_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalBuilding_C", "ExecuteUbergraph_WBP_PalBuilding");

	Params::UWBP_PalBuilding_C_ExecuteUbergraph_WBP_PalBuilding_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Get_Build_Operation_Result_Result = CallFunc_Get_Build_Operation_Result_Result;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetWarningText_text = CallFunc_GetWarningText_text;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsInstallAtReticle_ReturnValue = CallFunc_IsInstallAtReticle_ReturnValue;
	Parms.CallFunc_GetBuildObjectDataTableAccess_ReturnValue = CallFunc_GetBuildObjectDataTableAccess_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BP_FindRow_bResult = CallFunc_BP_FindRow_bResult;
	Parms.CallFunc_BP_FindRow_ReturnValue = CallFunc_BP_FindRow_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


