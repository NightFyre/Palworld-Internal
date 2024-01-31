#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x480 - 0x408)
// WidgetBlueprintGeneratedClass WBP_DungeonInfo.WBP_DungeonInfo_C
class UWBP_DungeonInfo_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BossExistsImage;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          DungeonInfo;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_DungeonName;                                  // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_LevelValue;                                   // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_Timer_C*               WBP_BossBattle_Timer;                              // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDungeonInfoParameter              DungeonInfoParameter;                              // 0x438(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DefaultDisappearText;                              // 0x460(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameDateTime                         DisappeatTimeAt;                                   // 0x478(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DungeonInfo_C* GetDefaultObj();

	void SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* DungeonInstanceModel, enum class EPalDungeonInstanceBossState CallFunc_GetBossState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateDungeonDisappearRemainTime(class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, float CallFunc_CalcRemainSecondsBy_ReturnValue, const class FString& CallFunc_PalTimeSecondsToString_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_SelectText_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void SetDungeonDisappearTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel, const struct FGameDateTime& CallFunc_GetDisappearTimeAt_ReturnValue);
	void SetDungeonLevel(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* DungeonInstanceModel, int32 CallFunc_GetLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel, class UPalDungeonInstanceModel* DungeonInstanceModel, class FText CallFunc_GetDungeonNameText_ReturnValue);
	void UpdateDisplayInfo(class UPalDungeonInstanceModel* DungeonInstanceModel);
	void SetupEvents(class UPalStageModelDungeon* StageModel, class UPalDungeonInstanceModel* InstanceModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalDungeonInstanceModel* CallFunc_GetInstanceModel_ReturnValue);
	void UpdateDungeonInfoByTick();
	void Setup_By_Stage_Model(class UPalStageModelDungeon* InStageModel, class UPalDungeonInstanceModel* InstanceModel, class UPalDungeonInstanceModel* CallFunc_GetInstanceModel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_DungeonInfo(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


