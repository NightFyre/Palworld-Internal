#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6F (0x5D0 - 0x561)
// WidgetBlueprintGeneratedClass WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C
class UWBP_PalCommonItemSlotButton_C : public UWBP_PalItemSlotButtonBase_C
{
public:
	uint8                                        Pad_4983[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_UnselectToSelect;                              // 0x570(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Unlock;                                        // 0x578(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Lock;                                          // 0x580(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Push;                                          // 0x588(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Unfocus;                                       // 0x590(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Focus;                                         // 0x598(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                FocusedFrame;                                      // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FocusedFrame_1;                                    // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PushEff;                                           // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PushEff_1;                                         // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemSlot_C*              WBP_PalCommonItemSlot;                             // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton;                            // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalCommonItemSlotButton_C* GetDefaultObj();

	void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C** ItemSlotWidget);
	void RegisterButton(class UCommonButtonBase** Button);
	void AnmEvent_Lock();
	void AnmEvent_Unlock();
	void AnmEvent_Focus();
	void AnmEvent_Unfocus();
	void AnmEvent_Push();
	void OnInitialized();
	void PlayFocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
	void PlayUnfocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
	void PlayPushAnim(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void PlayDropAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
	void LiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
	void DraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
	void ExecuteUbergraph_WBP_PalCommonItemSlotButton(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_5, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_4, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_3, enum class EPalItemSlotPressType K2Node_CustomEvent_pressType, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_2, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, int32 K2Node_CustomEvent_LiftNum, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UWBP_PalItemSlotButtonBase_C* K2Node_CustomEvent_Widget);
};

}


