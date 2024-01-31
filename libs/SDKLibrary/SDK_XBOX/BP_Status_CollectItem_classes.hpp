#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD1 (0x129 - 0x58)
// BlueprintGeneratedClass BP_Status_CollectItem.BP_Status_CollectItem_C
class UBP_Status_CollectItem_C : public UPalStatusCollectItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        CollectItemTimeMinuteMin;                          // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CollectItemTimeMinuteMax;                          // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CollectItemTimeSec;                                // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ElapsedTimeSec;                                    // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFPassiveSkillCollectItemLotteryData> LotteryTable;                                      // 0x78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                RankTable;                                         // 0x88(0x10)(Edit, BlueprintVisible)
	TMap<class FName, int32>                     DebugLotteryCounter;                               // 0x98(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsDebugLottery;                                    // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_425F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DebugLotteryItemName;                              // 0xEC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                AddItemInfo;                                       // 0xF4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsPaused;                                          // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4260[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                BaseCampActionClass;                               // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                      AIAction;                                          // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UDataTable*>                    LotteryTables;                                     // 0x118(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsActionPlaying;                                   // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_CollectItem_C* GetDefaultObj();

	void AddLog_UseSkillInBaseCamp(const struct FPalLogInfo_Skill& NewLocalVar_0, class AActor* CallFunc_GetOwner_ReturnValue, class FName CallFunc_Get_Name_Text_Id_SkillNameTextId, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FPalLogInfo_Skill& K2Node_MakeStruct_PalLogInfo_Skill);
	void AddLog_UseSkill(class FName CallFunc_Get_Name_Text_Id_SkillNameTextId, const struct FPalLogAdditionalData& K2Node_MakeStruct_PalLogAdditionalData, class FText CallFunc_GetLocalizedText_ReturnValue, class UPalLogManager* CallFunc_GetLogManager_ReturnValue, const struct FGuid& CallFunc_AddLog_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetRank(int32* Rank, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetRank_ReturnValue);
	void Observe_AIAction(const struct FPalStaticItemIdAndNum& K2Node_MakeStruct_PalStaticItemIdAndNum, bool CallFunc_IsActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void GetLotteryDataTable(class UDataTable** DataTable, int32 CallFunc_GetRank_Rank, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Min_ReturnValue, class UDataTable* CallFunc_Array_Get_Item);
	void CreateLotteryTable(TArray<struct FFPassiveSkillCollectItemLotteryData>* Result, const TArray<struct FFPassiveSkillCollectItemLotteryData>& TmpResult, class UDataTable* DataTable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UDataTable* CallFunc_GetLotteryDataTable_DataTable, const struct FFPassiveSkillCollectItemLotteryData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Get_Base_Camp_Action_Class(class UClass** Class, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsBaseCampPal_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetPause(bool Pause);
	void IsActorDead(bool* IsDead, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Get_Name_Text_Id(class FName* SkillNameTextId, class UPalPassiveSkillManager* CallFunc_GetPassiveSkillManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetNameTextId_ReturnValue);
	void OnAddItem(enum class EPalItemOperationResult Result, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Get_Lottery_Index(int32 LotteryValue, int32* Index, int32 SelectVal, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFPassiveSkillCollectItemLotteryData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void GetRandVal(int32 Max, int32* RandVal, int32 Rank, int32 Min, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Min_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetRank_ReturnValue);
	void Is_Actor_Active(bool* IsActive, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetActiveActorFlag_ReturnValue);
	void UpdateSkill(double DeltaTime, bool CallFunc_IsActorDead_IsDead, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FFPassiveSkillCollectItemLotteryData>& CallFunc_CreateLotteryTable_Result, bool CallFunc_Is_Actor_Active_IsActive, const struct FPalStaticItemIdAndNum& CallFunc_LotteryItem_ItemInfo, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void AddItem(const struct FPalStaticItemIdAndNum& ItemInfo, class UPalPlayerInventoryData* CallFunc_GetOwnerPlayerInventoryData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UClass* CallFunc_Get_Base_Camp_Action_Class_Class, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CanSpawnItem_ReturnValue, const struct FPalStaticItemIdAndNum& K2Node_MakeStruct_PalStaticItemIdAndNum, enum class EPalItemOperationResult CallFunc_AddItem_ServerInternal_ReturnValue);
	void LotteryItem(struct FPalStaticItemIdAndNum* ItemInfo, const struct FPalStaticItemIdAndNum& RetVal, int32 SelectVal, int32 RateSum, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Get_Lottery_Index_index, int32 Temp_int_Array_Index_Variable, const struct FPalStaticItemIdAndNum& K2Node_MakeStruct_PalStaticItemIdAndNum, int32 CallFunc_GetRandVal_RandVal, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFPassiveSkillCollectItemLotteryData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void ResetElapsedTime();
	void SetCollectItemTime(double CallFunc_Conv_IntToDouble_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void OnBeginStatus();
	void OnBreakStatus();
	void OnEndStatus();
	void TickStatus(float DeltaTime);
	void PlayAction_SpawnItem(const struct FPalStaticItemIdAndNum& AddItemInfo);
	void ExecuteUbergraph_BP_Status_CollectItem(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaTime, const struct FPalStaticItemIdAndNum& K2Node_CustomEvent_AddItemInfo, class AActor* CallFunc_GetOwner_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_MonsterAIController_BaseCamp_C* K2Node_DynamicCast_AsBP_Monster_AIController_Base_Camp, bool K2Node_DynamicCast_bSuccess, class UBP_AIAction_SpawnItemBase_C* CallFunc_SpawnObject_ReturnValue, TScriptInterface<class IPalMonsterControllerBaseCampInterface> CallFunc_InterruptPlayWorkerEventAction_self_CastInput, double CallFunc_UpdateSkill_DeltaTime_ImplicitCast);
};

}


