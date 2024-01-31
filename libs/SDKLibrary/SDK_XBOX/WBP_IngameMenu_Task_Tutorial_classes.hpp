#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2D8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C
class UWBP_IngameMenu_Task_Tutorial_C : public UUserWidget
{
public:
	class UCanvasPanel*                          Canvas_TaskDetail;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_TaskDetail;                            // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class UWBP_IngameMenu_Task_Tutorial_List_C*, class UPalQuestData*> CreatedWidgetMap;                                  // 0x288(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_IngameMenu_Task_Tutorial_C* GetDefaultObj();

	void GetNowDisplayQuestWidgetNum(int32* Num, int32 CallFunc_Map_Length_ReturnValue);
	void OnClosedQuestWidget(class UWBP_IngameMenu_Task_Tutorial_List_C* Widget, bool CallFunc_Map_Remove_ReturnValue);
	void AddQuest(class UPalQuestData* QuestData, bool CallFunc_IsValid_ReturnValue, TArray<class UPalQuestData*>& CallFunc_Map_Values_Values, bool CallFunc_Array_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_IngameMenu_Task_Tutorial_List_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


