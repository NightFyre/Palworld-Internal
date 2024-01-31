#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x418 - 0x408)
// WidgetBlueprintGeneratedClass WBP_WarningUI.WBP_WarningUI_C
class UWBP_WarningUI_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Warning_C*                        WBP_Warning;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_WarningUI_C* GetDefaultObj();

	void PlayWarning(class FText TitleText, class FText InfoText);
	void Display(class UPalBaseCampModel* TargetBaseCamp, const struct FPalInvaderDatabaseRow& ChosenInvaderData, const struct FDataTableRowHandle& InvaderGroupName, const struct FDataTableRowHandle& TitleMsgID, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_GetLocalizedText_ReturnValue_1, class FText CallFunc_GetLocalizedText_ReturnValue_2, class FText CallFunc_Format_ReturnValue);
	void OnInvaderStart(struct FPalIncidentBroadcastParameter& Parameter, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void RegisterEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnInitialized();
	void ExecuteUbergraph_WBP_WarningUI(int32 EntryPoint);
};

}


