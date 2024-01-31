#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x55 (0x4F8 - 0x4A3)
// WidgetBlueprintGeneratedClass WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C
class UWBP_PalCommonCharacterSlotButton_C : public UWBP_PalCharacterSlotButtonBase_C
{
public:
	uint8                                        Pad_509A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_UnselectToSelect;                              // 0x4B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Push;                                          // 0x4B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_36;                                    // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Check_0;                                           // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Check_1;                                           // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FocusedFrame;                                      // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PushEff;                                           // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*         WBP_PalCommonCharacterSlot;                        // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton;                            // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalCommonCharacterSlotButton_C* GetDefaultObj();

	void SetOverrideSize(const struct FVector2D& NewSize, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C** CharacterSlotWidget);
	void RegisterButton(class UCommonButtonBase** Button);
	void PlayUnfocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void Destruct();
	void SetEnable(bool IsEnable);
	void AnmEvent_BasePal(bool Enable);
	void AnmEvent_ConsumePal(bool Enable);
	void PlayFocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget);
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalCommonCharacterSlotButton(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_PalCharacterSlotButtonBase_C* K2Node_CustomEvent_Widget_1, bool K2Node_CustomEvent_IsEnable, double CallFunc_SelectFloat_ReturnValue, bool K2Node_CustomEvent_Enable_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool K2Node_CustomEvent_Enable, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, class UWBP_PalCharacterSlotButtonBase_C* K2Node_CustomEvent_Widget, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2);
};

}


