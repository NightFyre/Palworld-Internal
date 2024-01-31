#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x488 - 0x408)
// WidgetBlueprintGeneratedClass WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C
class UWBP_DungeonInfo_FixedDungeon_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BossExistsImage;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Dungeon_Info;                                      // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          DungeonInfo;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_DungeonName;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_LevelValue;                                   // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_Timer_C*               WBP_BossBattle_Timer;                              // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDungeonInfoParameter              DungeonInfoParameter;                              // 0x440(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DefaultDisappearText;                              // 0x468(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameDateTime                         BossRespawnTimeAt;                                 // 0x480(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DungeonInfo_FixedDungeon_C* GetDefaultObj();

	void SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* pDungeonInstanceModel, enum class EPalDungeonInstanceBossState CallFunc_GetBossState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateBossRespawnRemainTime(float RemainSeconds, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_CalcRemainSecondsBy_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast);
	void SetBossRespawnTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModelFixedDungeon* K2Node_DynamicCast_AsPal_Dungeon_Instance_Model_Fixed_Dungeon, bool K2Node_DynamicCast_bSuccess, const struct FGameDateTime& CallFunc_GetRespawnBossTimeAt_ReturnValue);
	void Set_Dungeon_Level(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* pDungeonInstanceModel, int32 CallFunc_GetLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* pDungeonInstanceModel, class FText CallFunc_GetDungeonNameText_ReturnValue);
	void Update_Display_Info(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void SetupEvents(class UPalStageModelDungeon* StageModel, class UPalDungeonInstanceModel* InstanceModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalDungeonInstanceModel* CallFunc_GetInstanceModel_ReturnValue);
	void UpdateDungeonInfoByTick();
	void Setup_By_Stage_Model(class UPalStageModelDungeon* InStageModel, class UPalDungeonInstanceModel* InstanceModel, class UPalDungeonInstanceModel* CallFunc_GetInstanceModel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


