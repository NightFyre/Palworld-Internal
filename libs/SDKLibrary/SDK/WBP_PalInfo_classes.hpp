#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x131 (0x3A9 - 0x278)
// WidgetBlueprintGeneratedClass WBP_PalInfo.WBP_PalInfo_C
class UWBP_PalInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_TextToBonus;                                   // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_BonusToText;                                   // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Close;                                         // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_Passive;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                RichText_Info;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*     WBP_MainMenu_Pal_Skill_Passive;                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*     WBP_MainMenu_Pal_Skill_Passive_1;                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*     WBP_MainMenu_Pal_Skill_Passive_2;                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*     WBP_MainMenu_Pal_Skill_Passive_3;                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_Task_C*                    WBP_Paldex_Task;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalGet_s_C*                       WBP_PalGet_s;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsDisplaying;                                      // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5166[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          StackedCharacterId;                                // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidgetArray;                           // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FFPalUIPalInfoDisplayData>     StackedGetInfo;                                    // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalUIPalInfoType, double>   DisplayTimeMap;                                    // 0x318(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          CloseTimerHandle;                                  // 0x368(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CaptureTitleMagId;                                 // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FirstCaptureTitleMagId;                            // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FirstActivatedTitleMagId;                          // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          DetailChangeTimer;                                 // 0x3A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAfterOpenedBonusActivate;                        // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalInfo_C* GetDefaultObj();

	void OnDescToBonus();
	void DisplayFirstActivatedInfo(class APalCharacter* Character, class FText CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText);
	void Create_Default_Get_Info(const struct FPalUIPalCaptureInfo& CaptureInfo, struct FFPalUIPalInfoDisplayData* GetInfoData, bool* IsSuccessed, bool Temp_bool_Variable, const struct FPalUIPalCaptureInfo& K2Node_Copy_ReturnValue, enum class EPalUIPalInfoType Temp_byte_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EPalUIPalInfoType Temp_byte_Variable_1, enum class EPalUIPalInfoType K2Node_Select_Default, const struct FFPalUIPalInfoDisplayData& K2Node_MakeStruct_FPalUIPalInfoDisplayData);
	void ClearPassiveList();
	void DisplayPassiveSkill(TArray<class FName>& PassiveList);
	void DisplayShorDesc(class FName CharacterID, class FText CallFunc_GetPalLongDescription_outName);
	void TryDIsplayStackedCharacter(bool* Displayed, const struct FFPalUIPalInfoDisplayData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Setup(const struct FFPalUIPalInfoDisplayData& GetInfo, enum class EPalUIPalInfoType InfoType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, int32 CallFunc_GetRank_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_GetPartnerSkillName_OutText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_IsVisible_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue_1);
	void Finished_DDDBAAA14AFFC8A46E31C0A4BCAC3C07();
	void Finished_8AC905F6491806EF04F1E58EE1398650();
	void AnmEvent_OpenAndSetTimer(enum class EPalUIPalInfoType InfoType);
	void TryDisplayNextInfoEvent();
	void AnmEvent_ForceDesc();
	void AnmEvent_ForceBonus();
	void AnmEvent_BonusToDesc();
	void AnmEvent_DescToBonus();
	void OnInitialized();
	void SetupCapturePalInfo(const struct FPalUIPalCaptureInfo& CaptureInfo);
	void SetupFirstActivatedPalInfo(class UPalIndividualCharacterHandle* Handle);
	void ExecuteUbergraph_WBP_PalInfo(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPalUIPalInfoType Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class EPalUIPalInfoType Temp_byte_Variable_1, enum class EPalUIPalInfoType Temp_byte_Variable_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UWBP_MainMenu_Pal_Skill_Passive_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EPalUIPalInfoType K2Node_CustomEvent_infoType, bool CallFunc_TryDIsplayStackedCharacter_displayed, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const struct FPalUIPalCaptureInfo& K2Node_CustomEvent_CaptureInfo, const struct FFPalUIPalInfoDisplayData& CallFunc_Create_Default_Get_Info_getInfoData, bool CallFunc_Create_Default_Get_Info_isSuccessed, TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>& K2Node_MakeArray_Array, class UPalIndividualCharacterHandle* K2Node_CustomEvent_Handle, int32 CallFunc_Array_Add_ReturnValue, const struct FFPalUIPalInfoDisplayData& K2Node_MakeStruct_FPalUIPalInfoDisplayData, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_Map_Add_Value_ImplicitCast, double CallFunc_Map_Add_Value_ImplicitCast_1, double CallFunc_Map_Add_Value_ImplicitCast_2);
};

}


