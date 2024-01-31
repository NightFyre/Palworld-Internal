#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalItemSlotDragDropIcon.WBP_PalItemSlotDragDropIcon_C
class UWBP_PalItemSlotDragDropIcon_C : public UPalUserWidget
{
public:
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_PalInGameMenuItemSlotButton;                   // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalItemSlotDragDropIcon_C* GetDefaultObj();

	void Setup(class FName StaticItemId, int32 DisplayNum, class FText CallFunc_Conv_IntToText_ReturnValue);
};

}


