#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalQuestBlock_TutorialBuildWorkBench.BP_PalQuestBlock_TutorialBuildWorkBench_C
// (None)

class UClass* UBP_PalQuestBlock_TutorialBuildWorkBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalQuestBlock_TutorialBuildWorkBench_C");

	return Clss;
}


// BP_PalQuestBlock_TutorialBuildWorkBench_C BP_PalQuestBlock_TutorialBuildWorkBench.Default__BP_PalQuestBlock_TutorialBuildWorkBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalQuestBlock_TutorialBuildWorkBench_C* UBP_PalQuestBlock_TutorialBuildWorkBench_C::GetDefaultObj()
{
	static class UBP_PalQuestBlock_TutorialBuildWorkBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalQuestBlock_TutorialBuildWorkBench_C*>(UBP_PalQuestBlock_TutorialBuildWorkBench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalQuestBlock_TutorialBuildWorkBench.BP_PalQuestBlock_TutorialBuildWorkBench_C.GetDescriptionText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutText                                                          (Parm, OutParm)
// struct FDataTableRowHandle         NewLocalVar_0                                                    (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         NewLocalVar                                                      (Edit, BlueprintVisible, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMapObjectName_outName                                (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FDataTableRowHandle         K2Node_Select_Default                                            (NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_PalQuestBlock_TutorialBuildWorkBench_C::GetDescriptionText(class FText* OutText, const struct FDataTableRowHandle& NewLocalVar_0, const struct FDataTableRowHandle& NewLocalVar, bool Temp_bool_Variable, class FText CallFunc_GetMapObjectName_outName, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FDataTableRowHandle& K2Node_Select_Default, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalQuestBlock_TutorialBuildWorkBench_C", "GetDescriptionText");

	Params::UBP_PalQuestBlock_TutorialBuildWorkBench_C_GetDescriptionText_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.NewLocalVar = NewLocalVar;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetMapObjectName_outName = CallFunc_GetMapObjectName_outName;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}

}


