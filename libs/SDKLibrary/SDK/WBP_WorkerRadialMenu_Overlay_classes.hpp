#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x458 - 0x430)
// WidgetBlueprintGeneratedClass WBP_WorkerRadialMenu_Overlay.WBP_WorkerRadialMenu_Overlay_C
class UWBP_WorkerRadialMenu_Overlay_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_WorkerRadialMenu_C*               WBP_WorkerRadialMenu;                              // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  DisableCrouchFlagName;                             // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    CloseShortcutINputAction;                          // 0x448(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    DecideMenuAction;                                  // 0x450(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_WorkerRadialMenu_Overlay_C* GetDefaultObj();

	void Construct();
	void OnClosed();
	void OnInitialized();
	void OnSelectedEvent(enum class EPalWorkerRadialMenuResult Result);
	void OnAnyUIPushed(struct FGuid& PushedWidgetID);
	void Destruct();
	void CancelEvent();
	void ExecuteUbergraph_WBP_WorkerRadialMenu_Overlay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPalWorkerRadialMenuResult K2Node_CustomEvent_Result, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_WorkerRadialMenu* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Worker_Radial_Menu, bool K2Node_DynamicCast_bSuccess, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, const struct FGuid& K2Node_CustomEvent_pushedWidgetID, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsSameWidget_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}


