#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x478 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C
class UWBP_PalKeyGuideIcon_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalUIActionWidgetBase*                PalUIActionWidgetBase_24;                          // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    bindActionName;                                    // 0x420(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ECommonInputType, struct FSlateBrush> OverrideImageMap;                                  // 0x428(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UWBP_PalKeyGuideIcon_C* GetDefaultObj();

	void SetOverrideSize(const struct FVector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void OverrideImage(class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FSlateBrush& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetInputAction(class FName ActionName, const struct FDataTableRowHandle& CallFunc_GetUIInputActionRowHandle_outHandle, bool CallFunc_GetUIInputActionRowHandle_ReturnValue);
	void Construct();
	void OnInitialized();
	void BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_WBP_PalKeyGuideIcon(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_EqualEqual_NameName_ReturnValue);
};

}


