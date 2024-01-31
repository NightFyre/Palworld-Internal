#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x488 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C
class UWBP_PartnerSkillInfo_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_HideShow;                                      // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Ingame_PalSkillGauge_C*           WBP_Ingame_PalSkillGauge;                          // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*    CurrentPartnerSkillParameter;                      // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShowCoolDown;                                    // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1951[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CheckPartnerSkillUnlockedTimer;                    // 0x430(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHiding;                                          // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOverride;                                        // 0x439(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1953[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   RideMsgID;                                         // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   GetoffMsgID;                                       // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         NowRiding;                                         // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NowCooping;                                        // 0x461(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentExcuting;                                   // 0x462(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1955[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AnmEndTimer;                                       // 0x468(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CacheRatio;                                        // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1958[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CancelMSGID;                                       // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_PartnerSkillInfo_C* GetDefaultObj();

	void ToggleCoopText(bool ShowOriginal, class FText CallFunc_Get_Partner_Skill_Name_Text_SkillNameText, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_SelectText_ReturnValue);
	void OnStopCoop(class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_IsToggleKey_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnStartCoop(class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_IsToggleKey_ReturnValue);
	void EndExecuteAnmTimer(class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, float CallFunc_GetEffectTimeRatio_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast);
	void ShowSkillExecuteAnm(bool IsExcuting, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void Change_Ride_Key_Guide(bool Ride, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_SelectText_ReturnValue);
	void Setup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void Should_Show_UI(bool* ShouldShow, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_IsValid_ReturnValue, const struct FFixedPoint& CallFunc_GetEffectTimeMax_ReturnValue, const struct FFixedPoint& CallFunc_GetEffectTime_ReturnValue, bool CallFunc_Less_FixedPointFixedPoint_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Check_Partner_Skill_Unlocked_Timer(bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_CanRideCharacter_CanRide, bool CallFunc_IsExistActiveSkill_ReturnValue, class FText CallFunc_Get_Partner_Skill_Name_Text_SkillNameText, bool CallFunc_BooleanNOR_ReturnValue, class FText CallFunc_SelectText_ReturnValue, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1, bool CallFunc_IsRestrictedByItems_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CanRideCharacter(bool* CanRide, class UBP_OtomoPalHolderComponent_C* CallFunc_GetOtomoPalHolder_OtomoPalHolder, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, bool CallFunc_IsValid_ReturnValue_1, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void ShowCoolDownTime();
	void Show_Effect_Time(class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_IsRestrictedByItems_ReturnValue);
	void Hide();
	void SetupDisplay(class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_CanRideCharacter_CanRide, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsCoolDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_2, const struct FFixedPoint& CallFunc_GetCoolDownTimeMax_ReturnValue, const struct FFixedPoint& CallFunc_GetEffectTimeMax_ReturnValue, const struct FFixedPoint& CallFunc_GetEffectTime_ReturnValue, const struct FFixedPoint& CallFunc_GetCoolDownTime_ReturnValue);
	void Update_Cool_Down_Time(const struct FFixedPoint& Now, const struct FFixedPoint& Max, float CallFunc_Convert_FixedPointToFloat_ReturnValue, float CallFunc_Convert_FixedPointToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void Update_Effect_Time(const struct FFixedPoint& Now, const struct FFixedPoint& Max, float CallFunc_Convert_FixedPointToFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Convert_FixedPointToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void Get_Partner_Skill_Name_Text(class FText* SkillNameText, class UBP_OtomoPalHolderComponent_C* CallFunc_GetOtomoPalHolder_OtomoPalHolder, bool CallFunc_IsValid_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UBP_OtomoPalHolderComponent_C* CallFunc_GetOtomoPalHolder_OtomoPalHolder_1, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_GetCharacterID_ReturnValue, class FName CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName, class FName CallFunc_GetPartnerSkillMsgID_OutMsgID, class FText CallFunc_GetLocalizedText_ReturnValue);
	void GetPartnerSkillParameter(class UPalPartnerSkillParameterComponent** PartnerSkillParameter, class UBP_OtomoPalHolderComponent_C* CallFunc_GetOtomoPalHolder_OtomoPalHolder, class APalCharacter* CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo, class UBP_OtomoPalHolderComponent_C* CallFunc_GetOtomoPalHolder_OtomoPalHolder_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void GetOtomoPalHolder(class UBP_OtomoPalHolderComponent_C** OtomoPalHolder, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess);
	void OnActivateOtomo();
	void OnInactiveOtomo();
	void TriggerInput();
	void ReleaseInput();
	void Destruct();
	void AnmEvent_HideShow(bool Hide, bool Override);
	void ExecuteUbergraph_WBP_PartnerSkillInfo(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UPalPartnerSkillParameterComponent* CallFunc_GetPartnerSkillParameter_PartnerSkillParameter, bool CallFunc_IsExistActiveSkill_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsExistActiveSkill_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_Hide, bool K2Node_CustomEvent_Override, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}


