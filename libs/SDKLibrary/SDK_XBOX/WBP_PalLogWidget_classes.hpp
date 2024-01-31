#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x510 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalLogWidget.WBP_PalLogWidget_C
class UWBP_PalLogWidget_C : public UPalLogWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_22;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ImportantBorder;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalScrollBox*                         ScrollBox_NormalLog;                               // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               VeryImportantBorder;                               // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPalLogWidgetBase*>             NormalLogList;                                     // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UPalLogWidgetBase*>             ImportantLogList;                                  // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       MoveTime;                                          // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxDisplayImportantLog;                            // 0x460(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       Icon_Path;                                         // 0x468(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FGuid, class UPalLogWidgetBase*> VeryImportantLogMap;                               // 0x488(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        Normal_Log_Display_Time;                           // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Important_Log_Display_Time;                        // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 NowDisplayVeryImportantLog;                        // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VeryImportantLogDisplayTime;                       // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VeryImportantLogDisplayTimer;                      // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuid>                         VeryImportantLogIDArray;                           // 0x500(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_PalLogWidget_C* GetDefaultObj();

	void DisplayNextVeryImportantLog(class UPalLogWidgetBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalLogWidgetBase* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FGuid& CallFunc_Array_Get_Item);
	void CheckVeryImportantLog(double DeltaTime, const struct FGuid& NextLogId, bool IsFinded, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void OnRemovedVeryImportantLog(struct FGuid& LogId, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UPalLogWidgetBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Contains_ReturnValue);
	void OnAddedVeryImportantLog(struct FGuid& LogId, class FText& LogText, struct FPalLogAdditionalData& LogAdditionalData, class UPalLogWidgetBase* NewLocalVar_0, class UPalLogWidgetBase* CallFunc_CreateLogWidget_createdWidget, class UPalLogWidgetBase* CallFunc_CreateLogWidget_createdWidget_1, bool CallFunc_IsValidClass_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void CreateLogWidget(class UClass* LogWidgeClass, class FText Text, const struct FPalLogAdditionalData& AdditionalData, class UPalLogWidgetBase** CreatedWidget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UPalLogWidgetBase* CallFunc_Create_ReturnValue);
	void CheckImportantLog(bool* IsRemoved, bool CallFunc_CheckRemoveLog_Removed);
	void CheckRemoveLog(TArray<class UPalLogWidgetBase*>& TargetArray, bool* Removed, bool IsRemoved, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UPalLogWidgetBase* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetupWidgetTranslation(class UPalLogWidgetBase* TargetWidget, class UCanvasPanelSlot* RelationSlot, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FAnchors& CallFunc_GetAnchors_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue);
	void OnAddedImportantLog(class FText& LogText, struct FPalLogAdditionalData& LogAdditionalData, class UPalLogWidgetBase* CallFunc_CreateLogWidget_createdWidget, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	void On_Added_Normal_Log(class FText& LogText, struct FPalLogAdditionalData& LogAdditionalData, class UPalLogWidgetBase* CreatedWidget, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UPalLogWidgetBase* CallFunc_CreateLogWidget_createdWidget, bool CallFunc_IsValidClass_ReturnValue, class UPalLogWidgetBase* CallFunc_CreateLogWidget_createdWidget_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UPalLogWidgetBase* CallFunc_Array_Get_Item, class FText CallFunc_CreateItemGetLogText_ReturnValue, bool CallFunc_LessEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FPalStaticItemIdAndNum& K2Node_MakeStruct_PalStaticItemIdAndNum, bool CallFunc_BooleanAND_ReturnValue, class UPalLogWidgetBase* CallFunc_Array_Get_Item_1, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalLogWidget(int32 EntryPoint, bool CallFunc_CheckImportantLog_isRemoved, bool CallFunc_CheckRemoveLog_Removed, class UPalLogManager* CallFunc_GetLogManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalLogManager* CallFunc_GetLogManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPalLogWidgetBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double K2Node_VariableSet_veryImportantLogDisplayTime_ImplicitCast, double CallFunc_CheckVeryImportantLog_deltaTime_ImplicitCast);
};

}


