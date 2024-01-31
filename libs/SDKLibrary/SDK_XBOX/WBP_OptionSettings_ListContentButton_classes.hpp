#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x298 - 0x278)
// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C
class UWBP_OptionSettings_ListContentButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_Warning;                               // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Key;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                WBP_PalKeyGuideIcon;                               // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_OptionSettings_ListContentButton_C* GetDefaultObj();

	void SetIcon(const struct FSlateBrush& KeyIcon);
	void EnableWarning(bool IsEnable);
	void ExecuteUbergraph_WBP_OptionSettings_ListContentButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FSlateBrush& K2Node_CustomEvent_KeyIcon, bool K2Node_CustomEvent_IsEnable, enum class ESlateVisibility K2Node_Select_Default);
};

}


