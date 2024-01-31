#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x440 - 0x278)
// WidgetBlueprintGeneratedClass WBP_EnemyGauge.WBP_EnemyGauge_C
class UWBP_EnemyGauge_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_WorkIcon_2;                                    // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_WorkIcon_1;                                    // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_WorkIcon;                                      // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_BattleIN;                                      // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Hunger;                                        // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Party;                                         // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Pinch;                                         // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Damage;                                        // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Normal;                                        // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_BattleFlare;                                   // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_PalCommonDetail;                            // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_Pinch;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanelBattleIcon;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanelWork;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          IconGroupWork_1;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconPalWork;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconPalWork_2;                                     // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconSleeping;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rank;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Strong_Rare;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PalEnemyBase_Hunger;                               // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Back;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_HP;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_CommonDetail;                          // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Gender;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_GuildName;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_LevelNum;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_LevelTitle;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Name;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_WorkName;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EnemyGauge_SAN_C*                 WBP_EnemyGauge_SAN;                                // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*             WBP_MainMenu_Pal_State;                            // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                 WBP_PalElementIcon_Double_00;                      // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                 WBP_PalElementIcon_Double_01;                      // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                 WBP_PalElementIcon_Single;                         // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalGenderIcon_C*                  WBP_PalGenderIcon;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, class UTexture2D*>               RankIconMap;                                       // 0x3A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FColor                                EnemyColor;                                        // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                FriendColor;                                       // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*            DelayGaugeCalculator;                              // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             SavedDefaultFontMat;                               // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       LowHealthPercent;                                  // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLowHealthNoticeDisplay;                          // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CachedHPPercent;                                   // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFriendBg;                                        // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedBattleMode;                                  // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedIsWork;                                      // 0x422(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBaseCampWorkerEventType       CachedCampEvent;                                   // 0x423(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      CurrentIconAnm;                                    // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   SleepMsgId;                                        // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_EnemyGauge_C* GetDefaultObj();

	void SetHungryCondition(TArray<enum class EPalUIConditionType>& Conditions, bool Temp_bool_Variable, enum class EPalUIConditionType Temp_byte_Variable, enum class EPalUIConditionType Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class EPalUIConditionType Temp_byte_Variable_4, enum class EPalUIConditionType Temp_byte_Variable_5, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, enum class EPalUIConditionType K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	void SetGender(enum class EPalGenderType GenderType);
	void SetGuildName(const class FString& NewGuildName, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_SelectText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetVisibilitySanityGauge(enum class ESlateVisibility Visibility);
	void SetSanityValue(double NowSanityValue, double MaxSanityValue);
	void Set_Work_Event_Info(class UPalIndividualCharacterHandle* Handle, bool NotBattle, enum class ESlateVisibility Temp_byte_Variable, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsSleeping_ReturnValue, enum class EPalBaseCampWorkerEventType CallFunc_GetBaseCampWorkerEventType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetBaseCampEventName_outName, class FText CallFunc_GetWorkingDetailNameFromHandle_outName, bool CallFunc_GetWorkingDetailNameFromHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_SelectText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_SelectText_ReturnValue_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void SetVisibilityBattleIcon(enum class ESlateVisibility Visibiliy);
	void SetVisibilityStrongRareMark(enum class ESlateVisibility Visibility);
	void ChangeStrongPalMark();
	void ChangeRarePalMark();
	void SetWorkSuitability(TArray<enum class EPalWorkSuitability>& Suitability);
	void RetainCommonDetail();
	void UpdateForTick(double DeltaTime, float CallFunc_Update_deltaTime_ImplicitCast);
	void TryDisplayLowHealthNotice(double NowPercent, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1);
	void SetLowHealthNoticeDisplayFlag(bool IsDisplay);
	void Trigger_Damage_Animation();
	void Set_Battle_Mode(bool IsBattleMode);
	void SetHPPercent_Force(double Percent, float CallFunc_SetPercentForce_percent_ImplicitCast);
	void ChangeEnemyMode(const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue);
	void ChangeFriendMode(const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue);
	void SetHPPercent(double Percent, float CallFunc_SetPercent_percent_ImplicitCast);
	void Set_Level(int32 Level, bool GetLevelPenalty, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default);
	void SetElement(enum class EPalElementType Type1, enum class EPalElementType Type2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void SetRank(int32 Rank, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetTargetName(class FText Name);
	void Finished_3A40E20A4EEEDB096D18D9BCA7FB77D2();
	void Finished_5FBBBD124EDCCC07BA9CB28F5BB90BA8();
	void AnmEvent_StartBattleLoop();
	void AnmEvent_StopBattleLoop();
	void AnmEvent_Damage();
	void AnmEvent_LowHealth(bool IsDisplay);
	void AnmEvent_BgChange_Enemy();
	void AnmEvent_BgChange_Party();
	void AnmEvent_WorkLoop();
	void AnmEvent_StopWorkLoop();
	void AnmEvent_Starvation();
	void AnmEvent_StopStarvation();
	void OnInitialized();
	void ExecuteUbergraph_WBP_EnemyGauge(int32 EntryPoint, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_isDisplay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPalUIDelayGaugeCalculator* CallFunc_SpawnObject_ReturnValue, class UMaterial* K2Node_DynamicCast_AsMaterial, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


