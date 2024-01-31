#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PlayerRadialMenu_MenuContent.WBP_PlayerRadialMenu_MenuContent_C
class UWBP_PlayerRadialMenu_MenuContent_C : public UPalUserWidget
{
public:
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_C_46;                              // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerRadialMenu_MenuContent_C* GetDefaultObj();

	void SetTextColor(const struct FSlateColor& NewColor);
	void SetText(class FText InText);
};

}


