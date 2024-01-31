#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x168 (0x570 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalBuildObjectThumbnailButton.WBP_PalBuildObjectThumbnailButton_C
class UWBP_PalBuildObjectThumbnailButton_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_121;                                   // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_130;                                         // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    NameText;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                WBP_PalCommonButton;                               // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             CanvasSize;                                        // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             DefaultCanvasSize;                                 // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalBuildObjectData                   BuildObjectData;                                   // 0x480(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x4F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateFontInfo                        DefaultFontInfo;                                   // 0x508(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	double                                       Scale;                                             // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalBuildObjectThumbnailButton_C* GetDefaultObj();

	struct FVector2D GetScaledCanvasSize(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue);
	void SetScale(double NewScale, const struct FVector2D& CallFunc_GetScaledCanvasSize_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetBaseImageVisibility(enum class ESlateVisibility InVisibility);
	void GetBuildObjectData(struct FPalBuildObjectData* BuildObjectData);
	void OnUnhoveredButton_Internal();
	void OnClickedButton_Internal();
	void OnHoveredButton_Internal();
	void SetButtonFocus();
	void Setup(const struct FPalBuildObjectData& BuildObjectData, class UPalMasterDataTableAccess_BuildObjectIconData* CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectIconData& CallFunc_BP_FindRow_ReturnValue, class FText CallFunc_GetMapObjectName_outName);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalBuildObjectThumbnailButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnUnhovered__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* SelftWidget);
	void OnHovered__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget);
	void OnClicked__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* SelfWidget);
};

}


