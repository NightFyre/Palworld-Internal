#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x4C0 - 0x430)
// WidgetBlueprintGeneratedClass WBP_CharaCre_PlayerNameEdit.WBP_CharaCre_PlayerNameEdit_C
class UWBP_CharaCre_PlayerNameEdit_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                      EditableTextBox_Name;                              // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_57;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Head;                                         // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton;                                  // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_C*                WBP_PalCommonWindow;                               // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   NoPlayerNameMsgID;                                 // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NoPalNameMsgID;                                    // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        MaxNameLength;                                     // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ShortcutConfirmInputAction;                        // 0x48C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  ShortcutConfirmInputActionHandle;                  // 0x494(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         ForPlayer;                                         // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   TitleMsgID_Player;                                 // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   TitleMsgID_Pal;                                    // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_PlayerNameEdit_C* GetDefaultObj();

	void ClampInputName(class FText InText, class FText* ClampedNickName, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Left_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnShortcutConfirm();
	class UWidget* BP_GetDesiredFocusTarget(class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetEnableConfirmButton(bool IsEnable, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, float K2Node_Select_Default_1);
	void OnSetup();
	void BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_Menu_btn_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
	void OnCancelAction();
	void ExecuteUbergraph_WBP_CharaCre_PlayerNameEdit(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_CharaCreNameEditWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_ClampInputName_clampedNickName, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, class UBP_CharaCreNameEditWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue_1, bool Temp_bool_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FDataTableRowHandle& K2Node_Select_Default, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, int32 CallFunc_SelectInt_ReturnValue, const struct FDataTableRowHandle& K2Node_Select_Default_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue_2, class UBP_CharaCreNameEditWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter_2, bool K2Node_DynamicCast_bSuccess_2, enum class ESlateVisibility K2Node_Select_Default_2);
};

}


