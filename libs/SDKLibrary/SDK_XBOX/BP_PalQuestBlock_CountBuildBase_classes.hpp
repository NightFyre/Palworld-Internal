#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass BP_PalQuestBlock_CountBuildBase.BP_PalQuestBlock_CountBuildBase_C
class UBP_PalQuestBlock_CountBuildBase_C : public UPalQuestBlock_CountBuild
{
public:

	static class UClass* StaticClass();
	static class UBP_PalQuestBlock_CountBuildBase_C* GetDefaultObj();

	void GetProgressText(class FText* OutText, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetDescriptionText(class FText* OutText, const struct FDataTableRowHandle& MsgId, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetMapObjectName_outName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


