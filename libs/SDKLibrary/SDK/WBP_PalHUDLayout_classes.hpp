#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3E0 - 0x3C8)
// WidgetBlueprintGeneratedClass WBP_PalHUDLayout.WBP_PalHUDLayout_C
class UWBP_PalHUDLayout_C : public UPalUIHUDLayoutBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          HUDCanvas;                                         // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          WorldHUDCanvas;                                    // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalHUDLayout_C* GetDefaultObj();

	void AddHUD(class UPalUserWidget* Widget, int32 ZOrder);
	void RemoveHUD(class UPalUserWidget* Widget);
	void AddWorldHUD(class UPalUserWidgetWorldHUD* Widget);
	void RemoveWorldHUD(class UPalUserWidgetWorldHUD* Widget);
	void ExecuteUbergraph_WBP_PalHUDLayout(int32 EntryPoint, class UPalUserWidgetWorldHUD* K2Node_Event_Widget_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UPalUserWidgetWorldHUD* K2Node_Event_Widget, const struct FAnchorData& CallFunc_GetLayout_ReturnValue, class UPalUserWidget* K2Node_Event_Widget_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetSize_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UPalUserWidget* K2Node_Event_Widget_3, int32 K2Node_Event_ZOrder, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_1);
};

}


