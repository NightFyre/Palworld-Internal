#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Crime_FoundList.WBP_Crime_FoundList_C
class UWBP_Crime_FoundList_C : public UUserWidget
{
public:
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_CrimeName;                         // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Crime_FoundList_C* GetDefaultObj();

	void SetCrimeName(class FName CrimeId, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class FText CallFunc_GetLocalizedTextFromHandle_Text);
};

}


