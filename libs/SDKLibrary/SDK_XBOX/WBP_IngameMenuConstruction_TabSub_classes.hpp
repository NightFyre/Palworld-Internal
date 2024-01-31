#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameMenuConstruction_TabSub.WBP_IngameMenuConstruction_TabSub_C
class UWBP_IngameMenuConstruction_TabSub_C : public UUserWidget
{
public:
	class UImage*                                Base_Active;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_IngameMenuConstruction_TabSub_C* GetDefaultObj();

	void SetActive(bool IsActive, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
};

}


