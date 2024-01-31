#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C
// (None)

class UClass* UWBP_IngameMenuConstruction_ItemSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenuConstruction_ItemSlot_C");

	return Clss;
}


// WBP_IngameMenuConstruction_ItemSlot_C WBP_IngameMenuConstruction_ItemSlot.Default__WBP_IngameMenuConstruction_ItemSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenuConstruction_ItemSlot_C* UWBP_IngameMenuConstruction_ItemSlot_C::GetDefaultObj()
{
	static class UWBP_IngameMenuConstruction_ItemSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenuConstruction_ItemSlot_C*>(UWBP_IngameMenuConstruction_ItemSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C.SetNewIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_ItemSlot_C::SetNewIconVisibility(bool Visable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_ItemSlot_C", "SetNewIconVisibility");

	Params::UWBP_IngameMenuConstruction_ItemSlot_C_SetNewIconVisibility_Params Parms{};

	Parms.Visable = Visable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C.GetCanvasSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWBP_IngameMenuConstruction_ItemSlot_C::GetCanvasSize(class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_ItemSlot_C", "GetCanvasSize");

	Params::UWBP_IngameMenuConstruction_ItemSlot_C_GetCanvasSize_Params Parms{};

	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C.PlayAnimCanNotBuild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_ItemSlot_C::PlayAnimCanNotBuild(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_ItemSlot_C", "PlayAnimCanNotBuild");

	Params::UWBP_IngameMenuConstruction_ItemSlot_C_PlayAnimCanNotBuild_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C.PlayAnimToSmall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenuConstruction_ItemSlot_C::PlayAnimToSmall(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_ItemSlot_C", "PlayAnimToSmall");

	Params::UWBP_IngameMenuConstruction_ItemSlot_C_PlayAnimToSmall_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalBuildObjectData         BuildObjectData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPalMasterDataTableAccess_BuildObjectIconData*CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_FindRow_bResult                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalBuildObjectIconData     CallFunc_BP_FindRow_ReturnValue                                  (None)
// class FText                        CallFunc_GetMapObjectName_outName                                (None)

void UWBP_IngameMenuConstruction_ItemSlot_C::Setup(const struct FPalBuildObjectData& BuildObjectData, class UPalMasterDataTableAccess_BuildObjectIconData* CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectIconData& CallFunc_BP_FindRow_ReturnValue, class FText CallFunc_GetMapObjectName_outName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenuConstruction_ItemSlot_C", "Setup");

	Params::UWBP_IngameMenuConstruction_ItemSlot_C_Setup_Params Parms{};

	Parms.BuildObjectData = BuildObjectData;
	Parms.CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue = CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue;
	Parms.CallFunc_BP_FindRow_bResult = CallFunc_BP_FindRow_bResult;
	Parms.CallFunc_BP_FindRow_ReturnValue = CallFunc_BP_FindRow_ReturnValue;
	Parms.CallFunc_GetMapObjectName_outName = CallFunc_GetMapObjectName_outName;

	UObject::ProcessEvent(Func, &Parms);

}

}


