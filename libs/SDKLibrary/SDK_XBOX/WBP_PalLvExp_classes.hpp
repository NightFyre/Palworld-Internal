#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x658 - 0x578)
// WidgetBlueprintGeneratedClass WBP_PalLvExp.WBP_PalLvExp_C
class UWBP_PalLvExp_C : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_GetSkill;                                      // 0x580(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Close;                                         // 0x588(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_LVUP;                                          // 0x590(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x598(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SkillEffBase;                                // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Exp;                                   // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_AddExp;                                       // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_LvUP;                                         // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Skill;                                        // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LvNum_C*                          WBP_LvNum;                                         // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*   WBP_PalCommonCharacterSlotButton;                  // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       LevelUpAnimeDelay;                                 // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewMoveAnimeDelay;                                 // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CloseAnimeDelay;                                   // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          LevelUpAnimeTimerHandle;                           // 0x5F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NewMoveAnimeTimerHandle;                           // 0x600(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CloseAnimeTimerHandle;                             // 0x608(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLevelUp;                                         // 0x610(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNewMove;                                         // 0x611(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDisplaying;                                      // 0x612(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50C7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastLevel;                                         // 0x614(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   LevelUpMsgID;                                      // 0x618(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NewMoveMsgID;                                      // 0x628(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                  CachedCharacterID;                                 // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StackExp;                                          // 0x640(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPalWazaID>                NewWazaIDArray;                                    // 0x648(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_PalLvExp_C* GetDefaultObj();

	void OnTriggerCloseAnime();
	void OnTriggerNewMoveAnime(enum class EPalWazaID CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void OnTriggerLevelUpAnime(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetCharacterID_ReturnValue, int32 CallFunc_GetLevel_ReturnValue);
	void OnUpdateSlot(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
	void BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void On_Update_Level_Binded(int32 NewLevel, class UPalWazaDatabase* CallFunc_GetWazaDatabase_ReturnValue, bool CallFunc_IsValid_ReturnValue, TMap<enum class EPalWazaID, int32> CallFunc_GetMasterrableWaza_BetweenLevel_OutMap, TArray<enum class EPalWazaID>& CallFunc_Map_Keys_Keys, bool CallFunc_IsExistMasterrableWaza_BetweenLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void On_Update_Exp_Binded(int32 AddExp, int32 OldExp, double NowExpRate, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetupCloseAnimeTimer(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void SetupNewMoveAnimeTimer(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void SetupLevelUpAnimeTimer(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void ClearAnimeTimer();
	void Set_Level(int32 Level, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetAddExp(int32 AddExp, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Set_Exp_Percent(double Percent, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void AnmEvent_Close_UI();
	void AnmEvent_Levelup();
	void AnmEvent_NewMove(enum class EPalWazaID NewWazaID);
	void AnmEvent_Open_UI();
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalLvExp(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, enum class EPalWazaID K2Node_CustomEvent_NewWazaID, class FText CallFunc_GetWazaName_outName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_Format_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double K2Node_VariableSet_NewMoveAnimeDelay_ImplicitCast, double K2Node_VariableSet_LevelUpAnimeDelay_ImplicitCast, double K2Node_VariableSet_closeAnimeDelay_ImplicitCast);
};

}


