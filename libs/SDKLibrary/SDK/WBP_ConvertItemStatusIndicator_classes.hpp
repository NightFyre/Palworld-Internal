#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x440 - 0x408)
// WidgetBlueprintGeneratedClass WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C
class UWBP_ConvertItemStatusIndicator_C : public UPalUIMapObjectStatusIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalCraftInfo_C*                   WBP_PalCraftInfo;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsDisplayedDetail;                                 // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsValidRecipe;                                     // 0x419(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DisplayDetailRange;                                // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          LocationCheckTimerHandle;                          // 0x428(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstSetup;                                      // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectConvertItemModel*         Model;                                             // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ConvertItemStatusIndicator_C* GetDefaultObj();

	void OnUpdatedWorkerPal(class UPalWorkBase* Work, enum class EPalWorkSuitability CallFunc_GetWorkSuitability_ReturnValue, const struct FGuid& CallFunc_GetWorkId_ReturnValue, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetAssignedCharacters_IndividualSlots);
	void CloseDetail();
	void DisplayDetail(class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnReflectWorkProgress(class UPalWorkProgress* WorkProgress, float CallFunc_GetProgressRate_ReturnValue, double CallFunc_SetWorkProgressRate_rate_ImplicitCast);
	void OnUpdateProductSlot(class UPalItemSlot* Slot, int32 RemainCreateNum, int32 ProductStackCount, int32 CallFunc_GetRemainCreateNum_ReturnValue, const struct FPalItemRecipe& CallFunc_GetCurrentRecipe_ReturnValue, int32 CallFunc_GetRemainCreateNum_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_IsProductNumInfinite_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetStackCount_ReturnValue);
	void UpdateProductNum(class UPalMapObjectConvertItemModel* Model, class UPalItemSlot* CallFunc_GetProductSlot_ReturnValue);
	void OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model, const struct FPalItemRecipe& CurrentRecipe, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalItemRecipe& CallFunc_GetCurrentRecipe_ReturnValue);
	void Initialize(class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue, class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue_1, class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue_1, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UPalItemSlot* CallFunc_GetProductSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectEnergyModule* CallFunc_GetEnergyModule_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUIMapObjectStatusIndicatorParameterBase* K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base, bool K2Node_DynamicCast_bSuccess, class UPalMapObjectConcreteModelBase* CallFunc_GetConcreteModel_ReturnValue, class UPalMapObjectConvertItemModel* K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model, bool K2Node_DynamicCast_bSuccess_1);
	void OnSetup();
	void Construct();
	void CheckLocationEvent();
	void Destruct();
	void ExecuteUbergraph_WBP_ConvertItemStatusIndicator(int32 EntryPoint, const struct FVector& CallFunc_GetMapObjectLocation_outVector, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
};

}


