#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14C (0x3C4 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Control_Settings.WBP_Control_Settings_C
class UWBP_Control_Settings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VerticalBox_GP;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_KM;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_AIM;                            // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_Dash;                           // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_GP_AIM;                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_GP_Dash;                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_HideChat;                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_LStick_Threshold;               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_RStick_Sensitivity;             // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_RStick_Threshold;               // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_RStick_X;                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_RStick_Y;                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_Sensitivity;                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_Vibration;                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_X;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_Y;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalOptionAudioSettings               AudioSettingCache;                                 // 0x300(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_44B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           LevelMsgIds;                                       // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SomethingChanged;                                  // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalOptionKeyboardSettings            KeyboardSettingCache;                              // 0x334(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalOptionLocalStaticSettings         LocalStaticSettingCache;                           // 0x344(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalOptionPadSettings                 PadSettingCache;                                   // 0x384(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_44B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVerticalBox*>                  VerticalBoxs;                                      // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_PalCommonButtonBase_C*>    FirstRows;                                         // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        Current;                                           // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Control_Settings_C* GetDefaultObj();

	void GetDesiredFocusTarget(class UWidget** Target, class UWBP_PalCommonButtonBase_C* CallFunc_Array_Get_Item);
	void Construct();
	void ApplySettings();
	void SetDefault();
	void SwitchTab(bool Next);
	void SwitchPanel(int32 Index);
	void OnDashChanged(bool IsOn);
	void OnMouseSensiChanged(double Value);
	void OnMouseAIMChanged(double Value);
	void OnMouseYChanged(bool IsOn);
	void OnMouseXChanged(bool IsOn);
	void OnGPDashChanged(bool IsOn);
	void OnGPAimChanged(double Value);
	void OnRStickThreChanged(double Value);
	void OnLStickThreChanged(double Value);
	void OnRStickSensiChanged(double Value);
	void OnRStickYChanged(bool IsOn);
	void OnRStickXChanged(bool IsOn);
	void OnVibChanged(bool IsOn);
	void OnHideChatChanged(bool IsOn);
	void ExecuteUbergraph_WBP_Control_Settings(int32 EntryPoint, bool CallFunc_IsUGCFilter_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_1, const struct FPalOptionPadSettings& CallFunc_GetPadSettings_ReturnValue, const struct FPalOptionLocalStaticSettings& CallFunc_GetOptionLocalStaticSettings_ReturnValue, const struct FPalOptionKeyboardSettings& CallFunc_GetKeyboardSettings_ReturnValue, bool K2Node_CustomEvent_Next, class UVerticalBox* CallFunc_Array_Get_Item, class UVerticalBox* CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UVerticalBox* CallFunc_Array_Get_Item_2, class UVerticalBox* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_Index, class UVerticalBox* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_IsON_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double K2Node_CustomEvent_Value_5, double K2Node_CustomEvent_Value_4, bool K2Node_CustomEvent_IsON_6, bool K2Node_CustomEvent_IsON_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FPalOptionKeyboardSettings& K2Node_MakeStruct_PalOptionKeyboardSettings, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_Target, TArray<class UWBP_PalCommonButtonBase_C*>& K2Node_MakeArray_Array, class UWidget* CallFunc_GetDesiredFocusTarget_Target_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FPalOptionPadSettings& K2Node_MakeStruct_PalOptionPadSettings, bool K2Node_CustomEvent_IsON_4, double K2Node_CustomEvent_Value_3, double K2Node_CustomEvent_Value_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double K2Node_CustomEvent_Value_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double K2Node_CustomEvent_Value, bool K2Node_CustomEvent_IsON_3, bool K2Node_CustomEvent_IsON_2, bool K2Node_CustomEvent_IsON_1, class UVerticalBox* CallFunc_Array_Get_Item_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, enum class EPalSupportedPlatformType CallFunc_GetPlatformType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UVerticalBox* K2Node_Select_Default_1, TArray<class UVerticalBox*>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool K2Node_CustomEvent_IsON, bool CallFunc_Not_PreBool_ReturnValue_2, double CallFunc_SetSlider_CurrentValue_ImplicitCast, double CallFunc_SetSlider_CurrentValue_ImplicitCast_1, double CallFunc_SetSlider_CurrentValue_ImplicitCast_2, double CallFunc_SetSlider_CurrentValue_ImplicitCast_3, double CallFunc_SetSlider_CurrentValue_ImplicitCast_4, double CallFunc_SetSlider_CurrentValue_ImplicitCast_5, float K2Node_SetFieldsInStruct_MouseSensitivity_ImplicitCast, double CallFunc_SetSlider_Min_ImplicitCast, double CallFunc_SetSlider_Max_ImplicitCast, float K2Node_SetFieldsInStruct_MouseAimSensitivity_ImplicitCast, double CallFunc_SetSlider_Min_ImplicitCast_1, double CallFunc_SetSlider_Max_ImplicitCast_1, double CallFunc_SetSlider_CurrentValue_ImplicitCast_6, double CallFunc_SetSlider_CurrentValue_ImplicitCast_7, double CallFunc_SetSlider_Min_ImplicitCast_2, double CallFunc_SetSlider_Max_ImplicitCast_2, double CallFunc_SetSlider_Min_ImplicitCast_3, double CallFunc_SetSlider_Max_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_SetSlider_CurrentValue_ImplicitCast_8, double CallFunc_SetSlider_CurrentValue_ImplicitCast_9, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_SetSlider_Min_ImplicitCast_4, double CallFunc_SetSlider_Max_ImplicitCast_4, double CallFunc_SetSlider_Min_ImplicitCast_5, double CallFunc_SetSlider_Max_ImplicitCast_5, double CallFunc_SetSlider_Min_ImplicitCast_6, double CallFunc_SetSlider_Max_ImplicitCast_6, double CallFunc_SetSlider_Min_ImplicitCast_7, double CallFunc_SetSlider_Max_ImplicitCast_7, double CallFunc_SetSlider_Min_ImplicitCast_8, double CallFunc_SetSlider_Max_ImplicitCast_8, double CallFunc_SetSlider_Min_ImplicitCast_9, double CallFunc_SetSlider_Max_ImplicitCast_9, double CallFunc_SetSlider_Min_ImplicitCast_10, double CallFunc_SetSlider_Max_ImplicitCast_10, double CallFunc_SetSlider_Min_ImplicitCast_11, double CallFunc_SetSlider_Max_ImplicitCast_11, float K2Node_SetFieldsInStruct_RightStickAimSensitivity_ImplicitCast, float K2Node_SetFieldsInStruct_RightStickThreshold_ImplicitCast, float K2Node_SetFieldsInStruct_LeftStickThreshold_ImplicitCast, float K2Node_SetFieldsInStruct_RightStickSensitivity_ImplicitCast);
};

}


