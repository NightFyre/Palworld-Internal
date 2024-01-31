#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2A8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_BossBattle_BattleInfo.WBP_BossBattle_BattleInfo_C
class UWBP_BossBattle_BattleInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_BossBattle_BossEliminated_C*      WBP_BossBattle_BossEliminated;                     // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_TimeOut_C*             WBP_BossBattle_TimeOut;                            // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_Timer_C*               WBP_BossBattle_Timer;                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APalBossTower*                         CurrentBossTower;                                  // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CurrentTimer;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_BossBattle_BattleInfo_C* GetDefaultObj();

	void Finished_3EF5F8014E85067431DFCC89EED868D4();
	void Finished_8C451D0644B19738D91CB8BD4A008BD2();
	void ActUICombatResult(enum class EPalBossBattleCombatResult CombatResult);
	void StartCombatTimer();
	void GetBossTower(class APalBossTower* BossTower);
	void Countdown();
	void CloseTimer();
	void ExecuteUbergraph_WBP_BossBattle_BattleInfo(int32 EntryPoint, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPalBossBattleCombatResult K2Node_CustomEvent_CombatResult, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class APalBossTower* K2Node_CustomEvent_BossTower, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, int32 CallFunc_CalcRemainBattleTime_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue);
};

}


