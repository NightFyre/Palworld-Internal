#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalFadeWidgetBase.WBP_PalFadeWidgetBase_C
class UWBP_PalFadeWidgetBase_C : public UPalFadeWidgetBase
{
public:
	class UPalHUDDispatchParameter_FadeWidget*   FadeParameter;                                     // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalFadeWidgetBase_C* GetDefaultObj();

	void NotifyEndFadeOut();
	void NotifyStartFadeOut();
	void NotifyEndFadeIn();
	void NotifyStartFadeIn();
	void Setup_ForOverride();
	void Setup(class UPalHUDDispatchParameter_FadeWidget* FadeParameter);
	void FadeOut();
	void FadeIn();
};

}


