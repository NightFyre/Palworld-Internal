#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x5A8 - 0x518)
// WidgetBlueprintGeneratedClass WBP_QuestAndBaseCampInfoCanvas.WBP_QuestAndBaseCampInfoCanvas_C
class UWBP_QuestAndBaseCampInfoCanvas_C : public UPalUIInsideBaseCampCanvas
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x518(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_Border_Bottom;                       // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Border_Top;                          // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox;                                       // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleEntry_Member_C*             WBP_BattleEntry_Member;                            // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_CampLevelUp_C*         WBP_IngameMenu_CampLevelUp;                        // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_Simple_C*         WBP_IngameMenu_Task_Simple;                        // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_Tutorial_C*       WBP_IngameMenu_Task_Tutorial;                      // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*        WBP_PlayerInputKeyGuideIcon;                       // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WorkerSimpleDetail_C*             WBP_WorkerSimpleDetail;                            // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          TackCheckTimerHandle;                              // 0x568(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TraceLength;                                       // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalCharacter>          NowDisplayInfoCharacter;                           // 0x578(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_QuestAndBaseCampInfoCanvas_C* GetDefaultObj();

	void ShowLevelUp(class UPalBaseCampModel* Model, int32 CallFunc_GetLevel_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue);
	void UpdateWindowBorder(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void ShowBaseCampInfo();
	void HideBaseCampInfo();
	void OnCompleteTutorialQuest(class UPalQuestData* CompletedQuest, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAllQuestComplete_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnUpdateTutorialQuest(class UPalQuestData* UpdatedQuest, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_GetNowDisplayQuestWidgetNum_Num, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void GetLocalPlayerGroupID(struct FGuid* GroupID, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, const struct FGuid& CallFunc_GetGroupId_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void TraceWorkerPal(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class APlayerCameraManager* CallFunc_GetOwningPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APalMonsterCharacter* K2Node_DynamicCast_AsPal_Monster_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsBaseCampPal_ReturnValue, TSoftObjectPtr<class APalMonsterCharacter> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue);
	void OnLeavePalBoxArea();
	void OnEnterPalBoxArea();
	void UpdateItemDetail(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FPalDataTableRowName_ItemData>& CallFunc_Map_Keys_Keys, const struct FPalDataTableRowName_ItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FPalInsideBaseCampUI_DisplayItemInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TMap<class FName, int64> CallFunc_CheckItemNum_outItemNumMap, int64 CallFunc_CheckItemNum_outFoodNum, int64 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void UpdatePalDetail(int32 CallFunc_GetBaseCampPalBedCount_ReturnValue, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetBaseCampPalSlots_outSlots, int32 CallFunc_Array_Length_ReturnValue);
	void UpdateTask(const struct FPalBaseCampTaskDataSet& CallFunc_GetTaskData_outTaskData, bool CallFunc_GetTaskData_ReturnValue, const struct FPalBaseCampTaskCheckedData& CallFunc_CheckTask_outCheckedData, bool CallFunc_CheckTask_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnUpdateBaseCampDetail();
	void On_Leave_Base_Camp(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalBaseCampManager* CallFunc_GetBaseCampManager_ReturnValue, class UPalBaseCampModel* CallFunc_TryGetModel_OutModel, bool CallFunc_TryGetModel_ReturnValue);
	void OnEnterBaseCamp(class UPalBaseCampModel* Model, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGuid& CallFunc_GetGroupIdBelongTo_ReturnValue, const struct FGuid& CallFunc_GetId_ReturnValue, class UPalBaseCampModel* CallFunc_GetInsideBaseCampModel_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetLocalPlayerGroupID_GroupID, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnSetup_AfterCreatedPlayer();
	void SetVerticalBoxVisible(bool IsVisible);
	void ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_Variable, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, class UPalInsideBaseCampCheckComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalBaseCampModel* CallFunc_GetInsideBaseCampModel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UPalInsideBaseCampCheckComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UPalBaseCampModel* CallFunc_GetInsideBaseCampModel_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UBP_BaseCampTaskChecker_C* CallFunc_SpawnObject_ReturnValue, class UPalQuestManager* CallFunc_GetQuestManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_CustomEvent_IsVisible, enum class ESlateVisibility K2Node_Select_Default, double CallFunc_SetRemainTimer_remainTime_ImplicitCast);
};

}


