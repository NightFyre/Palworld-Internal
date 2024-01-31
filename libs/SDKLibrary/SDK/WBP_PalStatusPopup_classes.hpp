#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x468 - 0x430)
// WidgetBlueprintGeneratedClass WBP_PalStatusPopup.WBP_PalStatusPopup_C
class UWBP_PalStatusPopup_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_MainMenu_bg_C*                    WBP_MainMenu_bg;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalStatus_C*                      WBP_PalStatus;                                     // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_InGamePalStatusModel_C*            StatusModel;                                       // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackGroundTextID;                                  // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_PalStatusPopup_C* GetDefaultObj();

	void OnCancelAction(bool CallFunc_Is_Editing_Nick_Name_isEditing);
	class UWidget* BP_GetDesiredFocusTarget();
	void OnSetup();
	void OnInitialized();
	void Construct();
	void BndEvt__WBP_PalStatusPopup_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_PalStatusPopup(int32 EntryPoint, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalHUDDispatchParameter_MonsterDetail* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Monster_Detail, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedText_ReturnValue);
};

}


