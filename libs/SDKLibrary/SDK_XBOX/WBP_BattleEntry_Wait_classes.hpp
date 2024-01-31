#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x470 - 0x420)
// WidgetBlueprintGeneratedClass WBP_BattleEntry_Wait.WBP_BattleEntry_Wait_C
class UWBP_BattleEntry_Wait_C : public UPalBossEntryWaitInfoHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_Info;                              // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_BaseCampName;                                 // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_LevelValue;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_Timer_C*               WBP_BossBattle_Timer;                              // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          CurrentTimer;                                      // 0x448(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   WaitingMsgId;                                      // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EnterMsgId;                                        // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_BattleEntry_Wait_C* GetDefaultObj();

	void OnRequestRemove();
	void UpdateCountDown();
	void Count_Down();
	void OnSetup();
	void ExecuteUbergraph_WBP_BattleEntry_Wait(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, class FName CallFunc_GetBossBattleRowName_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPalBossBattleManager* CallFunc_GetBossBattleManager_ReturnValue, float CallFunc_GetBattleTimeLimit_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_CalcRemainBattleTime_ReturnValue, int32 K2Node_Select_Default, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalWaitInfoWorldHUDParameter* K2Node_DynamicCast_AsPal_Wait_Info_World_HUDParameter, bool K2Node_DynamicCast_bSuccess, const struct FDataTableRowHandle& K2Node_Select_Default_1, class UPalBossBattleManager* CallFunc_GetBossBattleManager_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, float CallFunc_GetBattleTimeLimit_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1);
};

}


