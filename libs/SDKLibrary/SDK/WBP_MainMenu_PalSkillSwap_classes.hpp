#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x4A0 - 0x430)
// WidgetBlueprintGeneratedClass WBP_MainMenu_PalSkillSwap.WBP_MainMenu_PalSkillSwap_C
class UWBP_MainMenu_PalSkillSwap_C : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Open;                                          // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BaseBlack;                                         // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    BP_PalTextBlock_Title;                             // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_SkillList;                             // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Active_C*      WBP_MainMenu_Pal_Skill_Active;                     // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Active_C*      WBP_MainMenu_Pal_Skill_Active_1;                   // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_PalSkillInfo_C*          WBP_MainMenu_PalSkillInfo;                         // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   SkillSwapMsgID;                                    // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SkillSwapNothingMsgID;                             // 0x490(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_PalSkillSwap_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UWBP_MainMenu_Pal_Skill_Active_C* K2Node_DynamicCast_AsWBP_Main_Menu_Pal_Skill_Active, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply On_BaseBlack_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnClicked_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget, enum class EPalWazaID CallFunc_GetBindedWazaID_wazaID);
	void OnUnhovered_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget);
	void OnHovered_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget, enum class EPalWazaID CallFunc_GetBindedWazaID_wazaID, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Setup(TArray<enum class EPalWazaID>& MasteredSkills, TArray<enum class EPalWazaID>& EquipedSkills, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, enum class EPalWazaID CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USpacer* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_MainMenu_Pal_Skill_Active_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FDataTableRowHandle& K2Node_Select_Default, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	void OnSetup();
	void OnClosed();
	void Destruct();
	void ExecuteUbergraph_WBP_MainMenu_PalSkillSwap(int32 EntryPoint, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_MainMenuSkillSwapParameter_C* K2Node_DynamicCast_AsBP_Main_Menu_Skill_Swap_Parameter, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<enum class EPalWazaID>& CallFunc_GetEquipWaza_ReturnValue, TArray<enum class EPalWazaID>& CallFunc_GetMasteredWaza_ReturnValue);
	void OnSelected__DelegateSignature(enum class EPalWazaID SelectedWazaId);
};

}


