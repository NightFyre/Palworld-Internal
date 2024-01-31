#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C
// (None)

class UClass* UWBP_PalHud_PossessItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalHud_PossessItem_C");

	return Clss;
}


// WBP_PalHud_PossessItem_C WBP_PalHud_PossessItem.Default__WBP_PalHud_PossessItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalHud_PossessItem_C* UWBP_PalHud_PossessItem_C::GetDefaultObj()
{
	static class UWBP_PalHud_PossessItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalHud_PossessItem_C*>(UWBP_PalHud_PossessItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.SetupUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalUIItemPossessStatusIndicatorParameter*K2Node_DynamicCast_AsPal_UIItem_Possess_Status_Indicator_Parameter(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_PalHud_PossessItem_C::SetupUI(class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUIItemPossessStatusIndicatorParameter* K2Node_DynamicCast_AsPal_UIItem_Possess_Status_Indicator_Parameter, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "SetupUI");

	Params::UWBP_PalHud_PossessItem_C_SetupUI_Params Parms{};

	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_UIItem_Possess_Status_Indicator_Parameter = K2Node_DynamicCast_AsPal_UIItem_Possess_Status_Indicator_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.RemoveSelf_In
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHud_PossessItem_C::RemoveSelf_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "RemoveSelf_In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.OnRequestRemove
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PalHud_PossessItem_C::OnRequestRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "OnRequestRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalHud_PossessItem_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalHud_PossessItem_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalHud_PossessItem.WBP_PalHud_PossessItem_C.ExecuteUbergraph_WBP_PalHud_PossessItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalHud_PossessItem_C::ExecuteUbergraph_WBP_PalHud_PossessItem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalHud_PossessItem_C", "ExecuteUbergraph_WBP_PalHud_PossessItem");

	Params::UWBP_PalHud_PossessItem_C_ExecuteUbergraph_WBP_PalHud_PossessItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


