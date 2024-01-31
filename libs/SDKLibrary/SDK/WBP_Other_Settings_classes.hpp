#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x338 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Other_Settings.WBP_Other_Settings_C
class UWBP_Other_Settings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_OptionSettings_ListContent_C*     WBP_OptionSettings_Language;                       // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalOptionAudioSettings               AudioSettingCache;                                 // 0x288(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_46F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           LangMsgIds;                                        // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SomethingChanged;                                  // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalOptionAudioSettings               OriginalSettingCache;                              // 0x2BC(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FString                                NewLang;                                           // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class FString, struct FDataTableRowHandle> LangMap;                                           // 0x2E8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Other_Settings_C* GetDefaultObj();

	void Construct();
	void OnLanguageChanged(int32 Value);
	void ApplySettings(bool ApplyOriginal);
	void SetDefault();
	void ExecuteUbergraph_WBP_Other_Settings(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 K2Node_CustomEvent_Value, bool K2Node_CustomEvent_ApplyOriginal, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FString>& CallFunc_GetLocalizedCultures_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, TArray<class FString>& CallFunc_GetLocalizedCultures_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


