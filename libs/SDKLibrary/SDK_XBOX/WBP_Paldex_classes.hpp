#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x398 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Paldex.WBP_Paldex_C
class UWBP_Paldex_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_NoData_Encounted;                              // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_NoData_NotEncounted;                           // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_MapToPalinfo;                                  // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_PalinfoToMap;                                  // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Map;                                           // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_PalInfo;                                       // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_LongDesc;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobber_49;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                RichText_LongDesc;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_EncountPalNumValue;                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_RegisterPalNumValue;                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NoData_C*                         WBP_NoData;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_Map_C*                     WBP_Paldex_Map;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_PalInfo_00_C*              WBP_Paldex_PalInfo_00;                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Paldex_tabset_C*                  WBP_Paldex_tabset;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PaldexScrollList_C*               WBP_PaldexScrollList;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalMonsterInframeRender_C*        WBP_PalInframeRender;                              // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  NowRenderCharacterID;                              // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHoveredAnyPalPanel;                              // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   NoDataNoticeMsgID;                                 // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NoDistributionNoticeMsgID;                         // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            OnClickedModelTab;                                 // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedDistributionTab;                          // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   NoDistributionThisTimeNoticeMsgID;                 // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWBP_Paldex_List_C*                    LastHoveredPanel;                                  // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstSetup;                                      // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDIsplayDisrtibution;                             // 0x379(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClickedAnyPalPanel;                              // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Paldex_List_C*                    LastClickedPalPanel;                               // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Paldex_C* GetDefaultObj();

	void ScrollByCharacterID(class FName CharacterID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UScrollBox* CallFunc_GetScrollBox_ScrollBox_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Paldex_List_C* K2Node_DynamicCast_AsWBP_Paldex_List, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void ClickByCharacterID(class FName CharacterID);
	void ScrollByPanelIndex(int32 ScrollByPanelIndex, int32 CallFunc_GetAllChildrenNum_index, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Max_ReturnValue, class UWBP_Paldex_List_C* CallFunc_GetWidgetByIndex_Widget, bool CallFunc_IsValid_ReturnValue);
	void OnCompleteCapturePalActor();
	void ClickByIndex(int32 Index);
	void GetFocusTargetByCharacterID(class FName CharacterID, class UWidget** Target, class UWidget* CallFunc_GetFocusTargetByCharacterID_widget);
	void SetEncountedPalNum(int32 Num, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetRegisteredPalNum(int32 Num, class FText CallFunc_Conv_IntToText_ReturnValue);
	void ResetMapOffset();
	void SetZoomDisrtibutionMap(double Rate);
	void IsZoomMax(bool* IsMax, bool CallFunc_IsZoomMax_isMax);
	void AddZoomDistributionMap(double AddZoomRate);
	void AddCapturedActorRotation(const struct FRotator& Rotator);
	void AddDistributionMapOffset(const struct FVector2D& Offset);
	void PageSkip_Up(enum class EUINavigation Navigation, int32 CallFunc_GetIndexFromWidget_index, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PageSkip_Down(enum class EUINavigation Navigation, int32 CallFunc_GetIndexFromWidget_index, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void DisplayNoDataWidget(const struct FDataTableRowHandle& MsgIdHandle, class FText CallFunc_GetLocalizedTextFromHandle_Text);
	void HideNoDataWidget();
	void ChangeToModelDisplayModel();
	void ChangeToDistributionDIsplayMode(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Display_Distribution(const struct FPalUIPaldex_DisplayInfo& DisplayInfo, enum class E_PaldexDistributionTimeType TimeType, const struct FPalUIPaldexDistributionData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SetDistributionLocations_isNoDistribution);
	void DisplayPalInfo(const struct FPalUIPaldex_DisplayInfo& DisplayInfo, class FText CallFunc_GetPalLongDescription_outName, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor);
	void CapturePalActor(class FName CharacterID, bool CallFunc_NotEqual_NameName_ReturnValue, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor);
	void GetFocusTargetByIndex(int32 Index, class UWidget** Target, class UWidget* CallFunc_GetFocusTargetByIndex_target);
	void FocusByCharacterID(class FName CharacterID);
	void FocusByIndex(int32 Index);
	void SetupCaptureCameraActor(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor);
	void SetupPalPanelList(TArray<struct FPalUIPaldex_DisplayInfo>& DisplayInfoArray);
	void AnmEvent_ToModel();
	void AnmEvent_ToDistribution();
	void AnmEvent_FirstOpen();
	void AnmEvent_ChnageTimeType(enum class E_PaldexDistributionTimeType TimeType);
	void Construct();
	void BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_0_OnHoveredAnyPanel__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
	void Destruct();
	void OnInitialized();
	void BndEvt__WBP_Paldex_WBP_Paldex_tabset_K2Node_ComponentBoundEvent_1_OnSelectedModelTab__DelegateSignature();
	void BndEvt__WBP_Paldex_WBP_Paldex_tabset_K2Node_ComponentBoundEvent_2_OnSelectedDistributionTab__DelegateSignature();
	void BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_3_OnClickedAnyPanel__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* Widget);
	void ExecuteUbergraph_WBP_Paldex(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class E_PaldexDistributionTimeType K2Node_CustomEvent_timeType, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class FName K2Node_ComponentBoundEvent_CharacterID_1, class UWBP_Paldex_List_C* K2Node_ComponentBoundEvent_SelfWidget, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FName K2Node_ComponentBoundEvent_CharacterID, class UWBP_Paldex_List_C* K2Node_ComponentBoundEvent_Widget, bool CallFunc_IsValid_ReturnValue_1);
	void OnClickedAnyPalPanel__DelegateSignature(class FName CharacterID);
	void OnClickedDistributionTab__DelegateSignature();
	void OnClickedModelTab__DelegateSignature();
	void OnHoveredAnyPalPanel__DelegateSignature(class FName CharacterID);
};

}


