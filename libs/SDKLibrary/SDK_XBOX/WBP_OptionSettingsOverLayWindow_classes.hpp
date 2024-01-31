#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x4F8 - 0x430)
// WidgetBlueprintGeneratedClass WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C
class UWBP_OptionSettingsOverLayWindow_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_Command;                           // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_Title;                             // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   TitleMsgID;                                        // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CommandMsgId;                                      // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ErrorMsgId;                                        // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          ResetTextTimer;                                    // 0x480(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDDispatchParameter_KeyConfig_C*  KeyConfigParam;                                    // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          FilterActionKeys;                                  // 0x490(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FPalKeyAction, class FName>      ReverseAxisMap;                                    // 0x4A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  BackActionName;                                    // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_OptionSettingsOverLayWindow_C* GetDefaultObj();

	void OnKeySetting(const struct FKey& NewKey, enum class EPalKeyConfigCategory Temp_byte_Variable, enum class EPalKeyConfigCategory Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class EPalKeyConfigCategory Temp_byte_Variable_2, enum class EPalKeyConfigCategory Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPalKeyConfigCategory K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const struct FPalKeyAction& K2Node_MakeStruct_PalKeyAction, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EPalKeyConfigCategory K2Node_Select_Default_1, class FName K2Node_Select_Default_2, class UPalPlayerInput* CallFunc_GetLocalPalPlayerInput_ReturnValue, bool CallFunc_IsEnableKey_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void OnSetup();
	void ResetCommandText();
	void SetPadKeyA();
	void ExecuteUbergraph_WBP_OptionSettingsOverLayWindow(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_HUDDispatchParameter_KeyConfig_C* K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Key_Config, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FPalKeyAction& K2Node_MakeStruct_PalKeyAction, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_Select_Default, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


