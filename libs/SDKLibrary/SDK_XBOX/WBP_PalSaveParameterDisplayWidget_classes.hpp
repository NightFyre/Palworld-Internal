#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x218 (0x620 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalSaveParameterDisplayWidget.WBP_PalSaveParameterDisplayWidget_C
class UWBP_PalSaveParameterDisplayWidget_C : public UPalUserWidget
{
public:
	struct FPalIndividualCharacterSaveParameter  CachedSaveParameter;                               // 0x408(0x218)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_PalSaveParameterDisplayWidget_C* GetDefaultObj();

	void SetSoulRank(int32 SoulRank);
	void SetElement(enum class EPalElementType Type1, enum class EPalElementType Type2);
	void SetFoodAmount(int32 FoddAmount);
	void SetGender(enum class EPalGenderType GenderType);
	void SetWorkSuitability(TMap<enum class EPalWorkSuitability, int32> SuitabilityMap);
	void SetupAfterDisplayed();
	void GetSaveParameter(struct FPalIndividualCharacterSaveParameter* Parameter);
	void SetBaseParameter(int32 MeleeAttack, int32 ShotAttack, int32 Defense, int32 Support, int32 Speed);
	void SetHunger(double NowHunger, double MaxHunger);
	void SetPassiveSkill(TArray<class FName>& PassiveSkillnameArray);
	void CalcHP(int32 TmpNextExp, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, int32 CallFunc_GetHPBySaveParameter_ReturnValue, int32 CallFunc_Convert_FixedPoint64ToInt_ReturnValue);
	void SetHP(int32 NowHP, int32 MaxHP);
	void SetWaza(TArray<enum class EPalWazaID>& WazaArray);
	void CalcExp(int32 Level, int32 Exp, bool IsPlayer, int32 TmpNextExp, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPalExpDatabase* CallFunc_GetExpDatabase_ReturnValue, int32 CallFunc_GetNextExp_ReturnValue, int32 CallFunc_GetNextExp_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetTotalExp_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void SetLevelAndExp(int32 Level, int32 NowExp, int32 NextEXP, double NowExpRate);
	void SetNickName(const class FString& NickName);
	void SetRank(int32 Rank);
	void Hide();
	void DisplaySaveParameter(const struct FPalIndividualCharacterSaveParameter& DisplayParameter, bool Temp_bool_Variable, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FText CallFunc_GetLocalizedCharacterName_OutText, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_2, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_1, enum class EPalElementType CallFunc_GetElementType_Element1, enum class EPalElementType CallFunc_GetElementType_Element2, int32 CallFunc_GetFoodAmount_ReturnValue, TMap<enum class EPalWorkSuitability, int32> CallFunc_GetWorkSuitabilityRank_WorkSuitabilities, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_2, int32 CallFunc_GetDefenseBySaveParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_3, int32 CallFunc_GetSupportBySaveParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_4, int32 CallFunc_GetMeleeAttackBySaveParameter_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue_5, int32 CallFunc_GetShotAttackBySaveParameter_ReturnValue, double CallFunc_SetHunger_nowHunger_ImplicitCast);
};

}


