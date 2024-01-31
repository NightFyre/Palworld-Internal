#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x618 - 0x5A8)
// WidgetBlueprintGeneratedClass WBP_WorkerRadialMenu.WBP_WorkerRadialMenu_C
class UWBP_WorkerRadialMenu_C : public UWBP_CommonRadialMenuBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  CameraModName;                                     // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelectedMenu;                                    // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   MsgID_ShowStatus;                                  // 0x5C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MsgID_MoveToOtomo;                                 // 0x5D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MsgID_MoveToBox;                                   // 0x5E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MsgID_Feed;                                        // 0x5F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MsgID_Pet;                                         // 0x608(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_WorkerRadialMenu_C* GetDefaultObj();

	void OnSelectedMenu_Internal(int32 Index, bool K2Node_SwitchInteger_CmpSuccess);
	void CreateContent(class FText Text, class UWBP_WorkerRadialMenuContent_C** CreatedWidget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_WorkerRadialMenuContent_C* CallFunc_Create_ReturnValue);
	void SetupContents(class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class UWBP_WorkerRadialMenuContent_C* CallFunc_CreateContent_createdWidget, class UWBP_WorkerRadialMenuContent_C* CallFunc_CreateContent_createdWidget_1, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class UWBP_WorkerRadialMenuContent_C* CallFunc_CreateContent_createdWidget_2, class UWBP_WorkerRadialMenuContent_C* CallFunc_CreateContent_createdWidget_3, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_2, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_3, class FText CallFunc_GetLocalizedTextFromHandle_Text_4, class UWBP_WorkerRadialMenuContent_C* CallFunc_CreateContent_createdWidget_4, float CallFunc_GetRenderTransformAngle_ReturnValue, class UCanvasPanelSlot* CallFunc_Set_Additional_Widget_Canvas_4);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void OnClosed();
	void ExecuteUbergraph_WBP_WorkerRadialMenu(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1);
	void OnSelectedMenu__DelegateSignature(enum class EPalWorkerRadialMenuResult Result);
};

}


