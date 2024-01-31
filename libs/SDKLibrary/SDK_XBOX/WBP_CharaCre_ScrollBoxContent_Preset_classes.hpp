#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x448 - 0x428)
// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C
class UWBP_CharaCre_ScrollBoxContent_Preset_C : public UWBP_CharaCre_ScrollBoxContentBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                              WrapBox_Preset;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelectedPreset;                                  // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_ScrollBoxContent_Preset_C* GetDefaultObj();

	void GetTopFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_CharaCre_PresetButton_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Preset_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetRestoreFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget);
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void OnClickedPresetButton_Internal(class UWBP_CharaCre_PresetButton_C* Widget, class FName CallFunc_GetBindedPresetName_PresetName);
	void Construct();
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_CharaCre_PresetButton_C* CallFunc_Create_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnSelectedPreset__DelegateSignature(class FName PresetName);
};

}


