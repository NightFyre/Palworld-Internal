#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalQuestBlock_TutorialPickupItem.BP_PalQuestBlock_TutorialPickupItem_C
// (None)

class UClass* UBP_PalQuestBlock_TutorialPickupItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalQuestBlock_TutorialPickupItem_C");

	return Clss;
}


// BP_PalQuestBlock_TutorialPickupItem_C BP_PalQuestBlock_TutorialPickupItem.Default__BP_PalQuestBlock_TutorialPickupItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalQuestBlock_TutorialPickupItem_C* UBP_PalQuestBlock_TutorialPickupItem_C::GetDefaultObj()
{
	static class UBP_PalQuestBlock_TutorialPickupItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalQuestBlock_TutorialPickupItem_C*>(UBP_PalQuestBlock_TutorialPickupItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalQuestBlock_TutorialPickupItem.BP_PalQuestBlock_TutorialPickupItem_C.GetProgressText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutText                                                          (Parm, OutParm)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_PalQuestBlock_TutorialPickupItem_C::GetProgressText(class FText* OutText, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalQuestBlock_TutorialPickupItem_C", "GetProgressText");

	Params::UBP_PalQuestBlock_TutorialPickupItem_C_GetProgressText_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function BP_PalQuestBlock_TutorialPickupItem.BP_PalQuestBlock_TutorialPickupItem_C.GetDescriptionText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutText                                                          (Parm, OutParm)
// struct FDataTableRowHandle         NewLocalVar                                                      (Edit, BlueprintVisible, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_outName                                     (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_PalQuestBlock_TutorialPickupItem_C::GetDescriptionText(class FText* OutText, const struct FDataTableRowHandle& NewLocalVar, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetItemName_outName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetLocalizedTextFromHandle_Text, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalQuestBlock_TutorialPickupItem_C", "GetDescriptionText");

	Params::UBP_PalQuestBlock_TutorialPickupItem_C_GetDescriptionText_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}

}


