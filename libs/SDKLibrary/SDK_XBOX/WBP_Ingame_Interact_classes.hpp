#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x3B0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Ingame_Interact.WBP_Ingame_Interact_C
class UWBP_Ingame_Interact_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Press;                                         // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Push_long_nogauge;                             // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Push;                                          // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Push_long_Arrow;                               // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Push_long;                                     // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Close;                                         // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur_117;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_C_101;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_btn;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BlockInteract;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Interact_PushEff_00;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Interact_PushEff_01;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                InteractArrow;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                InteractBase;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                KeyGuide;                                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_111;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class EPalInteractiveObjectActionType, TSoftObjectPtr<class UTexture2D>> IconMap;                                           // 0x308(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       RightPadding;                                      // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPalInteractiveObjectActionType, struct FDataTableRowHandle> ActionInputMap;                                    // 0x360(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Ingame_Interact_C* GetDefaultObj();

	void SetIsValidInteract(bool IsValidFlag);
	void SetVisibilityLongPushParts(enum class ESlateVisibility NewVisibility);
	void SetPartsSize(class UWidget* TargetWidget, const struct FVector2D& InSize, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void GetPartsSize(class UWidget* TargetWidget, struct FVector2D* Size, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void FitImageSize(float CallFunc_GetViewportScale_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetPartsSize_size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetPartsSize_size_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_GetPartsSize_size_2, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_GetPartsSize_size_3, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X_6, double CallFunc_BreakVector2D_Y_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_5, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_6, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X_7, double CallFunc_BreakVector2D_Y_7, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast);
	void SetInteractText(class FText Text);
	void SetActionType(enum class EPalInteractiveObjectActionType ActionType, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetInteractable(bool IsInteractable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void AnmEvent_Open();
	void AnmEven_Press();
	void AnmEvent_Reset_ForClose();
	void AnmEvent_Close();
	void AnmEvernt_LongPush_withGauge(double Time);
	void AnmEvent_Button_Start(enum class EPalInteractiveObjectButtonType buttonType, double Time);
	void AnmEvent_LongPush_WithoutGauge();
	void AnmEvent_Button_End(enum class EPalInteractiveObjectButtonType buttonType);
	void AnmEvent_Reset_ForOpen();
	void ExecuteUbergraph_WBP_Ingame_Interact(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, double K2Node_CustomEvent_time_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, enum class EPalInteractiveObjectButtonType K2Node_CustomEvent_buttonType_1, double K2Node_CustomEvent_time, float CallFunc_GetEndTime_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, enum class EPalInteractiveObjectButtonType K2Node_CustomEvent_buttonType, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
};

}


