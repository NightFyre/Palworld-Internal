#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x4E8 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalWorkProduct.WBP_PalWorkProduct_C
class UWBP_PalWorkProduct_C : public UPalUIMapObjectStatusIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_DetailToSimple;                                // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CircleGauge_Progress;                              // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_ItemName;                                     // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_MaxItemNum;                                   // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_NowItemNum;                                   // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonItemIcon_C*              WBP_PalCommonItemIcon;                             // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*               WBP_PalCraftInfo_Pal;                              // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*               WBP_PalCraftInfo_Pal_1;                            // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*               WBP_PalCraftInfo_Pal_2;                            // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*               WBP_PalCraftInfo_Pal_3;                            // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCraftInfo_Pal_C*               WBP_PalCraftInfo_Pal_4;                            // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RequirePalInfo_C*                 WBP_RequirePalInfo;                                // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class EPalFarmCropState, struct FDataTableRowHandle> StateMsgIdMap;                                     // 0x470(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class UWBP_PalCraftInfo_Pal_C*>       PalInfos;                                          // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                          DisplayCheckTimer;                                 // 0x4D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDisplayedDetail;                                 // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideNextState;                                     // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_569F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectProductItemModel*         Product_Item_Model;                                // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalWorkProduct_C* GetDefaultObj();

	void OnUpdateContainer(class UPalItemContainer* Container, class FName CallFunc_GetProductItemId_ReturnValue, int32 CallFunc_GetItemStackCount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void On_Updated_Worker_Pal(class UPalWorkBase* Work, bool HasAssign, bool Temp_bool_Variable, TArray<class UPalIndividualCharacterSlot*>& CallFunc_GetAssignedCharacters_IndividualSlots, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPalIndividualCharacterSlot* CallFunc_Array_Get_Item, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPalWorkAssign* CallFunc_GetWorkAssign_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsFixed_ReturnValue, const struct FGuid& CallFunc_GetWorkId_ReturnValue, bool CallFunc_IsAssignedToAnyWork_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const struct FGuid& CallFunc_GetWorkId_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UWBP_PalCraftInfo_Pal_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void OnUpdateProgress(class UPalWorkProgress* Progress, float CallFunc_GetProgressRate_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void OnSetup();
	void DisplayCheck();
	void Destruct();
	void Construct();
	void ExecuteUbergraph_WBP_PalWorkProduct(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UWBP_PalCraftInfo_Pal_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalUIMapObjectStatusIndicatorParameterBase* K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base, bool K2Node_DynamicCast_bSuccess, class UPalMapObjectConcreteModelBase* CallFunc_GetConcreteModel_ReturnValue, class UPalMapObjectProductItemModel* K2Node_DynamicCast_AsPal_Map_Object_Product_Item_Model, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, TArray<class UWBP_PalCraftInfo_Pal_C*>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, const struct FVector& CallFunc_GetMapObjectLocation_outVector, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UPalMapObjectEnergyModule* CallFunc_GetEnergyModule_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UPalMapObjectWorkeeModule* CallFunc_GetWorkeeModule_ReturnValue, class FName CallFunc_GetProductItemId_ReturnValue, class UPalWorkProgress* CallFunc_GetWorkProgress_ReturnValue, class FText CallFunc_GetItemName_outName, class UPalItemContainer* CallFunc_GetItemContainer_ReturnValue, class UPalItemContainer* CallFunc_GetItemContainer_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetMaxStackCount_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, int64 CallFunc_Conv_IntToInt64_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, enum class EPalWorkSuitability CallFunc_GetWorkSuitability_ReturnValue, class FText CallFunc_Format_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
};

}


