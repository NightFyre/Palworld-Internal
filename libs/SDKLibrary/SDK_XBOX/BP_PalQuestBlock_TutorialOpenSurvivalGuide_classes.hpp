#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x60 - 0x58)
// BlueprintGeneratedClass BP_PalQuestBlock_TutorialOpenSurvivalGuide.BP_PalQuestBlock_TutorialOpenSurvivalGuide_C
class UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C : public UPalQuestBlock_OpenSurvivalGuide
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType bNewInputType);
	void GetDescriptionText(class FText* OutText, const struct FDataTableRowHandle& NewLocalVar_0, const struct FDataTableRowHandle& NewLocalVar, class FText CallFunc_GetLocalizedTextFromHandle_Text, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text_1);
	void OnSetup_ForBP();
	void OnComplete_ForBP();
	void ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide(int32 EntryPoint, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


