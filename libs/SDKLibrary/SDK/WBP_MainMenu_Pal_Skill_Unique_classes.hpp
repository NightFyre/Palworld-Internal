#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2B0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_Skill_Unique.WBP_MainMenu_Pal_Skill_Unique_C
class UWBP_MainMenu_Pal_Skill_Unique_C : public UUserWidget
{
public:
	class UWidgetAnimation*                      Anm_NormalToFocus;                                 // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_63;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SkillBase;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_WazaLv;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_WazaLvNum;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_WazaName;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                WBP_PalCommonButton;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_Pal_Skill_Unique_C* GetDefaultObj();

	void SetupBySaveParameter(const struct FPalIndividualCharacterSaveParameter& Parameter, bool ShowLv, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class FName CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FName CallFunc_GetPartnerSkillMsgID_OutMsgID, class FText CallFunc_GetLocalizedText_ReturnValue);
	void SetupFromHandle(class UPalIndividualCharacterHandle* IndividualHandle, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetRank_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, class FName CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FName CallFunc_GetPartnerSkillMsgID_OutMsgID, class FText CallFunc_GetLocalizedText_ReturnValue);
};

}


