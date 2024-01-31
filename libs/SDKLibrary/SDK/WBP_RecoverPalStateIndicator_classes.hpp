#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x450 - 0x408)
// WidgetBlueprintGeneratedClass WBP_RecoverPalStateIndicator.WBP_RecoverPalStateIndicator_C
class UWBP_RecoverPalStateIndicator_C : public UPalUIMapObjectStatusIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*   WBP_PalCommonCharacterSlotButton;                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*   WBP_PalCommonCharacterSlotButton_1;                // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*   WBP_PalCommonCharacterSlotButton_2;                // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*   WBP_PalCommonCharacterSlotButton_3;                // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*   WBP_PalCommonCharacterSlotButton_4;                // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_BlueBorder_C*     WBP_PalCommonWindow_BlueBorder;                    // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalUIRecoverPalStatusIndicatorParameter* Parameter;                                         // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RecoverPalStateIndicator_C* GetDefaultObj();

	void GetSlotWidget(int32 Index, class UWBP_PalCommonCharacterSlotButton_C** SlotWidget, int32 Temp_int_Variable, class UWBP_PalCommonCharacterSlotButton_C* K2Node_Select_Default);
	void Initialize(class UPalIndividualCharacterContainer* CharacterContainer, class UPalMapObjectRecoverOtomoModel* ConcreteModel, int32 Temp_int_Array_Index_Variable, class UWBP_PalCommonCharacterSlotButton_C* CallFunc_GetSlotWidget_SlotWidget, class UPalMapObjectCharacterContainerModule* CallFunc_GetCharacterContainerModule_ReturnValue, class UPalIndividualCharacterContainer* CallFunc_GetContainer_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetSlots_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPalMapObjectRecoverOtomoModel* CallFunc_TryGetConcreteModel_ConcreteModel, bool CallFunc_TryGetConcreteModel_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUIRecoverPalStatusIndicatorParameter* K2Node_DynamicCast_AsPal_UIRecover_Pal_Status_Indicator_Parameter, bool K2Node_DynamicCast_bSuccess);
	void OnSetup();
	void ExecuteUbergraph_WBP_RecoverPalStateIndicator(int32 EntryPoint);
};

}


