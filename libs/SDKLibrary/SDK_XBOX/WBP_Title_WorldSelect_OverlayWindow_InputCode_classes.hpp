#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x4E1 - 0x440)
// WidgetBlueprintGeneratedClass WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C
class UWBP_Title_WorldSelect_OverlayWindow_InputCode_C : public UPalUIJoinGameInputCodeBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Caution;                                       // 0x448(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Edit_OnToOff;                                  // 0x450(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_C_166;                             // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobber_26;                               // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_Code;                              // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LIne;                                              // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Wait;                                      // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Caution;                                      // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Title;                                        // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn_Close;                                // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_C*                WBP_PalCommonWindow;                               // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SettingsButton_C*           WBP_Title_SettingsButton;                          // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          TimeoutTmerHandle;                                 // 0x4A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputPassWordMsgID;                                // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InputCodeMsgID;                                    // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   HintTextMsgID;                                     // 0x4D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EPalUIJoinGameInputCodeType       InputMode;                                         // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Title_WorldSelect_OverlayWindow_InputCode_C* GetDefaultObj();

	class UWidget* CustomNavi_ToTextBox(enum class EUINavigation Navigation);
	class UWidget* CustomNavi_ToCloseButton(enum class EUINavigation Navigation);
	void On_Cancel_Action(bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void OnNotifyVerifyInviteCodeImpl(bool IsValidCode, bool IsRequirePassword, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnNotifyVerifyPasswordImpl(bool IsValidPassword, class FText CallFunc_GetText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void OnConfirmInternal(class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnTimer_TimeoutWaitResponse();
	void CloseWaitWIndow();
	void OpenWaitWindow(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void ChangeMode(enum class EPalUIJoinGameInputCodeType InputMode, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1);
	void OnSetup();
	void Construct();
	void OnNotifyVerifyInviteCode(bool IsValidCode, bool IsRequirePassword);
	void OnNotifyVerifyPassword(bool IsMatchPassword);
	void Destruct();
	void OnInitialized();
	void BndEvt__WBP_Title_WorldSelect_OverlayWindow_InputCode_WBP_Title_SettingsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_Title_WorldSelect_OverlayWindow_InputCode_EditableTextBox_Code_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_Title_WorldSelect_OverlayWindow_InputCode_EditableTextBox_Code_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__WBP_Buildup_Player_WBP_Menu_btn_Close_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Title_WorldSelect_OverlayWindow_InputCode(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParame_JoinGameInputCode* K2Node_DynamicCast_AsPal_HUDDispatch_Parame_Join_Game_Input_Code, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsValidCode, bool K2Node_Event_IsRequirePassword, bool K2Node_Event_IsMatchPassword, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText K2Node_ComponentBoundEvent_Text_1, class FText CallFunc_TextToUpper_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess_1, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
};

}


