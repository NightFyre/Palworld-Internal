#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x3D0 - 0x380)
// BlueprintGeneratedClass BP_PalTextBlock.BP_PalTextBlock_C
class UBP_PalTextBlock_C : public UPalTextBlockBase
{
public:
	TMap<class UDataTable*, enum class EPalLocalizeTextCategory> CategryMap_ForViewportGameDebug;                   // 0x380(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_PalTextBlock_C* GetDefaultObj();

	bool BP_ReflectText(class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EPalLocalizeTextCategory CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue);
};

}


