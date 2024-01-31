#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x460 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalGenusCategoryIcon.WBP_PalGenusCategoryIcon_C
class UWBP_PalGenusCategoryIcon_C : public UPalUserWidget
{
public:
	class UImage*                                Image_15;                                          // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class EPalGenusCategoryType, TSoftObjectPtr<class UTexture2D>> IconMap;                                           // 0x410(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_PalGenusCategoryIcon_C* GetDefaultObj();

	void Setup(enum class EPalGenusCategoryType Category, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


