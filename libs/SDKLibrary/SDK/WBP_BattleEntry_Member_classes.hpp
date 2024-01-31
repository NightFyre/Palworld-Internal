#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2B0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_BattleEntry_Member.WBP_BattleEntry_Member_C
class UWBP_BattleEntry_Member_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Listup;                                            // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_BaseCampName;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PalNum;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_All;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_BattleEntry_MemberList_C*> WBP_MemberLists;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_BattleEntry_Member_C* GetDefaultObj();

	void RemoveTaskDetailText();
	void AddTaslDetailText(class FText Text, int32 NowNum, int32 RequireNum, const TArray<class UMaterial*>& NewLocalVar_0);
	void OnChangedBossBattlePlayerListEvent(class FName BossType, TArray<class APalPlayerCharacter*>& PlayerList);
	void ExecuteUbergraph_WBP_BattleEntry_Member(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName K2Node_CustomEvent_BossType, TArray<class APalPlayerCharacter*>& K2Node_CustomEvent_PlayerList, class UPalBossBattleManager* CallFunc_GetBossBattleManager_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetMaxJoinablePlayerNum_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Array_IsNotEmpty_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_Format_ReturnValue, class UWBP_BattleEntry_MemberList_C* CallFunc_SpawnObject_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UWBP_BattleEntry_MemberList_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Add_ReturnValue, class APalPlayerCharacter* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, const struct FGuid& CallFunc_GetPlayerUIDByActor_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, const class FString& CallFunc_GetNickName_outName, const struct FGuid& CallFunc_GetLocalPlayerUID_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

}


