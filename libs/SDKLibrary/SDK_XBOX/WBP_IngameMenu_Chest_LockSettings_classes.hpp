#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x470 - 0x430)
// WidgetBlueprintGeneratedClass WBP_IngameMenu_Chest_LockSettings.WBP_IngameMenu_Chest_LockSettings_C
class UWBP_IngameMenu_Chest_LockSettings_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                             CheckBox_80;                                       // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton;                                  // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton_1;                                // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton;                            // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalMapObjectPasswordLockModule*       PasswordLockModule;                                // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  TabActionName;                                     // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_IngameMenu_Chest_LockSettings_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void OnSetup();
	void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_CommonButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_Menu_btn_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_IngameMenu_Chest_LockSettings(int32 EntryPoint, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, enum class ECheckBoxState Temp_byte_Variable_1, bool Temp_bool_Variable, enum class EPalMapObjectPasswordLockState Temp_byte_Variable_2, enum class EPalMapObjectPasswordLockState Temp_byte_Variable_3, enum class ECheckBoxState Temp_byte_Variable_4, enum class ECheckBoxState Temp_byte_Variable_5, enum class ECheckBoxState Temp_byte_Variable_6, enum class ECheckBoxState Temp_byte_Variable_7, enum class ECheckBoxState K2Node_Select_Default, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, class UPalMapObjectPasswordLockModule* CallFunc_GetPasswordLockModule_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, enum class EPalMapObjectPasswordLockState CallFunc_GetLockState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ECheckBoxState K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsChecked_ReturnValue, enum class EPalMapObjectPasswordLockState K2Node_Select_Default_2);
};

}


