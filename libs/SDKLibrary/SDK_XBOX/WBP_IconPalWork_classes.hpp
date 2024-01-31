#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x320 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IconPalWork.WBP_IconPalWork_C
class UWBP_IconPalWork_C : public UUserWidget
{
public:
	class UImage*                                Icon;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class EPalWorkSuitability, class UTexture2D*> IconMap;                                           // 0x280(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalMapObjectMaterialSubType, TSoftObjectPtr<class UTexture2D>> IconMap_MaterialSubType;                           // 0x2D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_IconPalWork_C* GetDefaultObj();

	void SetSuitability(enum class EPalWorkSuitability Suitability, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


