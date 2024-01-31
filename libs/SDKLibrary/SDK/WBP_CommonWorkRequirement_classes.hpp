#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x418 - 0x408)
// WidgetBlueprintGeneratedClass WBP_CommonWorkRequirement.WBP_CommonWorkRequirement_C
class UWBP_CommonWorkRequirement_C : public UPalUIMapObjectStatusIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_RequirePalInfo_C*                 WBP_RequirePalInfo;                                // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CommonWorkRequirement_C* GetDefaultObj();

	void On_Updated_Worker_Pal(class UPalWorkBase* Work, bool HasAssign, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetAssignedCharacters_IndividualSlots, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsAssignedToAnyWork_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void OnSetup();
	void ExecuteUbergraph_WBP_CommonWorkRequirement(int32 EntryPoint, enum class EPalWorkSuitability CallFunc_GetWorkSuitability_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUIMapObjectStatusIndicatorParameterBase* K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base, bool K2Node_DynamicCast_bSuccess, enum class EPalWorkSuitability CallFunc_GetWorkSuitability_ReturnValue_1, class UPalMapObjectConcreteModelBase* CallFunc_GetConcreteModel_ReturnValue, class UPalMapObjectEnergyModule* CallFunc_GetEnergyModule_ReturnValue, class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue, class UPalWorkBase* CallFunc_GetWork_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


