#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x308 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Sound_Settings.WBP_Sound_Settings_C
class UWBP_Sound_Settings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_Ambient;                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_BGM;                            // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_Master;                         // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_PalVoice;                       // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_SE;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_UI;                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_Voice;                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalOptionAudioSettings               AudioSettingCache;                                 // 0x2B8(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_46A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           LevelMsgIds;                                       // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SomethingChanged;                                  // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalOptionAudioSettings               OriginalSettingCache;                              // 0x2EC(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_Sound_Settings_C* GetDefaultObj();

	void Construct();
	void OnMasterChanged(double Value);
	void OnBGMChanged(double Value);
	void OnSEChanged(double Value);
	void ApplySettings(bool ApplyOriginal);
	void SetDefault();
	void OnPalVoiceChanged(double Value);
	void OnHumanVoiceChanged(double Value);
	void OnAmbientChanged(double Value);
	void OnUIChanged(double Value);
	void ExecuteUbergraph_WBP_Sound_Settings(int32 EntryPoint, double K2Node_CustomEvent_Value_6, double K2Node_CustomEvent_Value_5, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double K2Node_CustomEvent_Value_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, bool K2Node_CustomEvent_ApplyOriginal, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, const struct FPalOptionAudioSettings& CallFunc_GetAudioSettings_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, const struct FPalOptionAudioSettings& K2Node_MakeStruct_PalOptionAudioSettings, double K2Node_CustomEvent_Value_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_1, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double K2Node_CustomEvent_Value_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double K2Node_CustomEvent_Value_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, double K2Node_CustomEvent_Value, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_14, double CallFunc_Multiply_DoubleDouble_ReturnValue_15, double CallFunc_Multiply_DoubleDouble_ReturnValue_16, double CallFunc_Multiply_DoubleDouble_ReturnValue_17, double CallFunc_Multiply_DoubleDouble_ReturnValue_18, double CallFunc_Multiply_DoubleDouble_ReturnValue_19, double CallFunc_Multiply_DoubleDouble_ReturnValue_20, float K2Node_SetFieldsInStruct_Master_ImplicitCast, float K2Node_SetFieldsInStruct_BGM_ImplicitCast, float K2Node_SetFieldsInStruct_SE_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6, float K2Node_SetFieldsInStruct_PalVoice_ImplicitCast, float K2Node_SetFieldsInStruct_HumanVoice_ImplicitCast, float K2Node_SetFieldsInStruct_Ambient_ImplicitCast, float K2Node_SetFieldsInStruct_UI_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_10, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_11, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_12, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_13);
};

}


