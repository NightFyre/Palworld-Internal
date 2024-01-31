#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x488 - 0x430)
// WidgetBlueprintGeneratedClass WBP_TechnologyUI.WBP_TechnologyUI_C
class UWBP_TechnologyUI_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InventoryEquipment_ItemInfo_C*    WBP_InventoryEquipment_ItemInfo;                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Technology_00_C*         WBP_MainMenu_Technology_00;                        // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   UnlockCheckMsgId;                                  // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWBP_MainMenu_Technology_Content_C*    LastSelectedButton;                                // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             MouseDragScrollMultiply;                           // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MainMenu_Technology_Content_C*    LastHoveredTechnologyPanel;                        // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAllClearedNewFlag;                               // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_TechnologyUI_C* GetDefaultObj();

	void On_Unlocked_Any_Technology(bool CallFunc_IsValid_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetTopFocusTarget_Target);
	void OnUnhoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget, class FName CallFunc_GetBindedTechnologyName_technologyName, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsExistNewUnlockedTechnology_ReturnValue, bool CallFunc_IsNewUnlockedTechnology_ReturnValue);
	void OnHoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget, class FName CallFunc_GetBindedTechnologyName_technologyName, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void On_Close_Dialog(bool bResult, bool CallFunc_IsValid_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, class FName CallFunc_GetBindedTechnologyName_technologyName);
	void OnClickedTechnology(class UWBP_MainMenu_Technology_Content_C* Widget, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, class FName CallFunc_GetBindedTechnologyName_technologyName, const struct FPalTechnologyDataTableRowBase& CallFunc_GetTechlonogyBaseData_ReturnValue, bool CallFunc_IsUnlockableRecipeTechnology_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, bool CallFunc_IsUnlockRecipeTechnology_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedText_ReturnValue_1, class FText CallFunc_Format_ReturnValue);
	void Setup(class UWidget* CallFunc_GetTopUnlockableFocusTarget_Target, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_3_OnClickedTchnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
	void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_4_OnHoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
	void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_5_OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
	void Destruct();
	void ExecuteUbergraph_WBP_TechnologyUI(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UWBP_MainMenu_Technology_Content_C* K2Node_ComponentBoundEvent_Widget_2, bool CallFunc_IsValid_ReturnValue, class UWBP_MainMenu_Technology_Content_C* K2Node_ComponentBoundEvent_Widget_1, class UWBP_MainMenu_Technology_Content_C* K2Node_ComponentBoundEvent_Widget, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void OnAllClearedNewFlag__DelegateSignature(enum class EPalUIInGameMainMenuTabType Tab);
};

}


