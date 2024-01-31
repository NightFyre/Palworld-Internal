#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x698 - 0x578)
// WidgetBlueprintGeneratedClass WBP_PalWorkerInfo.WBP_PalWorkerInfo_C
class UWBP_PalWorkerInfo_C : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Close;                                         // 0x580(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x588(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_PalWorkIcon;                         // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_HPGauge;                               // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_HungerGauge;                           // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_maxSanity;                                    // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_NowSanity;                                    // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PalLV;                                        // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PalLVNum;                                     // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PalName;                                      // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_SANTitle;                                     // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_WorkerComment;                                // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_WorkTypeName;                                 // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*     WBP_MainMenu_Pal_Skill_Passive;                    // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*     WBP_MainMenu_Pal_Skill_Passive_1;                  // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*     WBP_MainMenu_Pal_Skill_Passive_2;                  // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*     WBP_MainMenu_Pal_Skill_Passive_3;                  // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*             WBP_MainMenu_Pal_State_0;                          // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*             WBP_MainMenu_Pal_State_1;                          // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_State_C*             WBP_MainMenu_Pal_State_2;                          // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterial*                             DefaultSanityTextMaterial;                         // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UWBP_MainMenu_Pal_State_C*>     ConditionWidgetArray;                              // 0x628(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidget;                                // 0x638(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<enum class EPalWorkSuitability, class UWBP_MainMenu_Pal_WorkIcon_C*> WorkSuitabilityWidgetMap;                          // 0x648(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_PalWorkerInfo_C* GetDefaultObj();

	void OnUpdateCondition_Binded(class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, TArray<enum class EPalUIConditionType>& CallFunc_GetUIDisplayPalCondition_outArray);
	void SetPassiveSkill(TArray<class FName>& PassiveSkills);
	void Set_Work_Suitability(TMap<enum class EPalWorkSuitability, int32> WorkSuitabilities, TArray<enum class EPalWorkSuitability>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPalWorkSuitability>& CallFunc_Map_Keys_Keys_1, int32 CallFunc_Array_Length_ReturnValue, enum class EPalWorkSuitability CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UWBP_MainMenu_Pal_WorkIcon_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void Check_Valid_Work_Suitability(enum class EPalWorkSuitability InWorkSuitability, bool* IsValid, enum class EPalWorkSuitability* OutWorkSuitability, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void UpdateHunger(double NowHunger, double NowMaxHunger, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void UpdateLevel(int32 NewLevel, class FText CallFunc_Conv_IntToText_ReturnValue);
	void UpdateNickName(const class FString& NewNickName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateSanity(double NowSanity, double NowMaxSanity, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue);
	void SetWorkerComment(class UPalIndividualCharacterHandle* TargetHandle, class FText CallFunc_GetWorkerComment_outName);
	void SetWorkType(class UPalIndividualCharacterHandle* TargetHandle, class FText CallFunc_GetWorkNameFromHandle_outName, bool CallFunc_GetWorkNameFromHandle_ReturnValue);
	void Setup(class UPalIndividualCharacterHandle* TargetHandle, class UPalIndividualCharacterParameter* IndividualParam, class UPalCharacterParameterComponent* CharaParam, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AnmEvent_Open();
	void AnmEvent_Close();
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalWorkerInfo(int32 EntryPoint, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_Check_Valid_Work_Suitability_IsValid, enum class EPalWorkSuitability CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UMaterial* K2Node_DynamicCast_AsMaterial, bool K2Node_DynamicCast_bSuccess, TArray<class UWBP_MainMenu_Pal_State_C*>& K2Node_MakeArray_Array, TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_MakeLiteralInt_ReturnValue, class UWBP_MainMenu_Pal_Skill_Passive_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UWBP_MainMenu_Pal_WorkIcon_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}


