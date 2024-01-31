#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x488 - 0x458)
// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C
class UWBP_InventoryEquipment_ForDisplay_C : public UPalUIInventoryEquipment
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryEquipment_C*             WBP_InventoryEquipment;                            // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_InGameMenuInventoryModel_C*        Model;                                             // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    SimulateStatusPointInput;                          // 0x478(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ConfirmStatusPointInput;                           // 0x480(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_InventoryEquipment_ForDisplay_C* GetDefaultObj();

	void OnEndGlide();
	void OnStartGlide();
	void Try_Start_Simulate_Status_Point(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsSimulatingStatusPoint_IsSimulating, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, int32 CallFunc_GetUnusedStatusPoint_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Setup_Static_Input_Action(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1);
	void CancelSimulateStatusPoint();
	void IsSimulatingStatusPoint(bool* IsSimulating);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsSimulatingStatusPoint_IsSimulating, class UWidget* CallFunc_GetStatusPointTopFocusTarget_TargetWidget, class UWidget* CallFunc_Get_Inventory_Last_Focus_Target_TargetWidget);
	void OnUpdateInventoryWeight(float NowWeight, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, double CallFunc_SetInventoryWeight_NowWeight_ImplicitCast, double CallFunc_SetInventoryWeight_MaxWeight_ImplicitCast);
	void Setup(class UBP_InGameMenuInventoryModel_C* Model);
	void Construct();
	void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_0_OnClickedItemDrop__DelegateSignature();
	void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_1_OnClickedItemDestroy__DelegateSignature();
	void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_2_OnConfirmStatusPointEdit__DelegateSignature(TMap<class FName, int32> PointMap);
	void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_3_OnRequestSwapEquipment__DelegateSignature(enum class EPalPlayerEquipItemSlotType EquipType);
	void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_4_OnClickedSortButton__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_WBP_InventoryEquipment_ForDisplay(int32 EntryPoint, TMap<class FName, int32> K2Node_ComponentBoundEvent_PointMap, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EPalPlayerEquipItemSlotType K2Node_ComponentBoundEvent_EquipType, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalGliderComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsGliding_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


