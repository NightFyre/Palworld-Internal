#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalDismantling.WBP_PalDismantling_C
// (None)

class UClass* UWBP_PalDismantling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalDismantling_C");

	return Clss;
}


// WBP_PalDismantling_C WBP_PalDismantling.Default__WBP_PalDismantling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalDismantling_C* UWBP_PalDismantling_C::GetDefaultObj()
{
	static class UWBP_PalDismantling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalDismantling_C*>(UWBP_PalDismantling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalDismantling.WBP_PalDismantling_C.EmptyFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDismantling_C::EmptyFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "EmptyFunction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.DismantleObjectSuccessed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDismantling_C::DismantleObjectSuccessed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "DismantleObjectSuccessed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.DismantleObjectFailed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDismantling_C::DismantleObjectFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "DismantleObjectFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.InitUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDismantling_C::InitUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "InitUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.ResetUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDismantling_C::ResetUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "ResetUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.UpdateUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMasterDataTableAccess_BuildObjectData*CallFunc_GetBuildObjectDataTableAccess_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalBuildObject*             CallFunc_GetDismantleTargetObject_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_FindRow_bResult                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalBuildObjectData         CallFunc_BP_FindRow_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDismantling_C::UpdateUI(class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue, class APalBuildObject* CallFunc_GetDismantleTargetObject_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectData& CallFunc_BP_FindRow_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "UpdateUI");

	Params::UWBP_PalDismantling_C_UpdateUI_Params Parms{};

	Parms.CallFunc_GetBuildObjectDataTableAccess_ReturnValue = CallFunc_GetBuildObjectDataTableAccess_ReturnValue;
	Parms.CallFunc_GetDismantleTargetObject_ReturnValue = CallFunc_GetDismantleTargetObject_ReturnValue;
	Parms.CallFunc_BP_FindRow_bResult = CallFunc_BP_FindRow_bResult;
	Parms.CallFunc_BP_FindRow_ReturnValue = CallFunc_BP_FindRow_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.GetWarningText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        WarningText                                                      (Parm, OutParm)
// struct FDataTableRowHandle         MsgId                                                            (Edit, BlueprintVisible, NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_PalDismantling_C::GetWarningText(class FText* WarningText, const struct FDataTableRowHandle& MsgId, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "GetWarningText");

	Params::UWBP_PalDismantling_C_GetWarningText_Params Parms{};

	Parms.MsgId = MsgId;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

	if (WarningText != nullptr)
		*WarningText = Parms.WarningText;

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.DisposeModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDismantling_C::DisposeModel(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "DisposeModel");

	Params::UWBP_PalDismantling_C_DisposeModel_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.FinishDismantling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDismantling_C::FinishDismantling(class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "FinishDismantling");

	Params::UWBP_PalDismantling_C_FinishDismantling_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.DismantleObjectContinuous
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDismantling_C::DismantleObjectContinuous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "DismantleObjectContinuous");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.DismantlingObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDismantling_C::DismantlingObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "DismantlingObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.ReturnToMainMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildingUIParameter_C*   K2Node_DynamicCast_AsBP_Building_UIParameter                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ToInt_ReturnValue                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDismantling_C::ReturnToMainMenu(class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_BuildingUIParameter_C* K2Node_DynamicCast_AsBP_Building_UIParameter, bool K2Node_DynamicCast_bSuccess, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, int32 CallFunc_ToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "ReturnToMainMenu");

	Params::UWBP_PalDismantling_C_ReturnToMainMenu_Params Parms{};

	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Building_UIParameter = K2Node_DynamicCast_AsBP_Building_UIParameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHUDService_ReturnValue_1 = CallFunc_GetHUDService_ReturnValue_1;
	Parms.CallFunc_ToInt_ReturnValue = CallFunc_ToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.SetupInputAction
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_BuildingUIParameter_C*   K2Node_DynamicCast_AsBP_Building_UIParameter                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_1                     (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_2                     (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_3                     (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_4                     (NoDestructor)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue_5                     (NoDestructor)

void UWBP_PalDismantling_C::SetupInputAction(class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_BuildingUIParameter_C* K2Node_DynamicCast_AsBP_Building_UIParameter, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Not_PreBool_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "SetupInputAction");

	Params::UWBP_PalDismantling_C_SetupInputAction_Params Parms{};

	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Building_UIParameter = K2Node_DynamicCast_AsBP_Building_UIParameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_1 = CallFunc_RegisterActionBinding_ReturnValue_1;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_2 = CallFunc_RegisterActionBinding_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_3 = CallFunc_RegisterActionBinding_ReturnValue_3;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_4 = CallFunc_RegisterActionBinding_ReturnValue_4;
	Parms.CallFunc_RegisterActionBinding_ReturnValue_5 = CallFunc_RegisterActionBinding_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.Setup Model
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_BuildingUIParameter_C*   Parameter                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_PalUIDismantlingModel_C* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDismantling_C::Setup_Model(class UBP_BuildingUIParameter_C* Parameter, class UBP_PalUIDismantlingModel_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "Setup Model");

	Params::UWBP_PalDismantling_C_Setup_Model_Params Parms{};

	Parms.Parameter = Parameter;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalDismantling_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "Tick");

	Params::UWBP_PalDismantling_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalDismantling_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalDismantling_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalDismantling.WBP_PalDismantling_C.ExecuteUbergraph_WBP_PalDismantling
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBuilderComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnableDismantle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWarningText_WarningText                              (None)

void UWBP_PalDismantling_C::ExecuteUbergraph_WBP_PalDismantling(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalBuilderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsEnableDismantle_ReturnValue, class FText CallFunc_GetWarningText_WarningText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalDismantling_C", "ExecuteUbergraph_WBP_PalDismantling");

	Params::UWBP_PalDismantling_C_ExecuteUbergraph_WBP_PalDismantling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsEnableDismantle_ReturnValue = CallFunc_IsEnableDismantle_ReturnValue;
	Parms.CallFunc_GetWarningText_WarningText = CallFunc_GetWarningText_WarningText;

	UObject::ProcessEvent(Func, &Parms);

}

}


