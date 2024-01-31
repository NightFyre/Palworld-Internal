#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x508 - 0x420)
// WidgetBlueprintGeneratedClass WBP_PalBuilding.WBP_PalBuilding_C
class UWBP_PalBuilding_C : public UPalUIBuilding
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x428(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_BuildingReticle_C*                WBP_BuildingReticle;                               // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameConstruction_C*             WBP_IngameConstruction;                            // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalUIBuildingModel_C*              Model;                                             // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TMap<enum class EPalMapObjectOperationResult, struct FDataTableRowHandle> FailedMessageMap;                                  // 0x448(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   FailedMessageOther;                                // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UPalBuilderComponent*                  BuilderComponent;                                  // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalMapObjectOperationResult      LastWarningType;                                   // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsExitMaterial;                                    // 0x4B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1582[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalDataTableRowName_UIInputAction    CancelBuildingActionInput;                         // 0x4B4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    CancelBuildingActionInput_02;                      // 0x4BC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    CancelBuildingActionInput_03;                      // 0x4C4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ForceCloseBuildingActionInput;                     // 0x4CC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    BuildObjectActionInput;                            // 0x4D4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    BuildObjectContinuousActionInput;                  // 0x4DC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    CancelBuildingActionInput_ForRadialMenu;           // 0x4E4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    BuildRotateRightActionInput;                       // 0x4EC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    BuildRotateLeftActionInput;                        // 0x4F4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         NewVar;                                            // 0x4FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1584[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          UpdateDisplayTimer;                                // 0x500(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalBuilding_C* GetDefaultObj();

	void RotateLeft();
	void RotateRight();
	void Get_Build_Operation_Result(enum class EPalMapObjectOperationResult* Result, enum class EPalMapObjectOperationResult MaterialResult, bool IsExistsMaterial, class UDataTable* CallFunc_GetBuildObjectDataTable_ReturnValue, const struct FPalBuildObjectData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class EPalMapObjectOperationResult CallFunc_IsEnableBuild_ReturnValue, bool CallFunc_IsExistsMaterialForBuildObject_ReturnValue, enum class EPalMapObjectOperationResult CallFunc_SelectPriorityResult_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void EmptyFunction();
	void GetWarningText(enum class EPalMapObjectOperationResult Result, class FText* Text, class FText CallFunc_GetMapObjectOperationResultText_outName);
	void BuildObjectContinuous();
	void BuildObject();
	void Finish_Building();
	void ReturnToMainMenu(int32 ObjectType, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_BuildingUIParameter_C* K2Node_DynamicCast_AsBP_Building_UIParameter, bool K2Node_DynamicCast_bSuccess, class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectData& CallFunc_BP_FindRow_ReturnValue, int32 CallFunc_ToInt_ReturnValue);
	void SetupInputAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_2, class UBP_BuildingUIParameter_C* K2Node_DynamicCast_AsBP_Building_UIParameter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_4, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_5, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_7);
	void ResetUI(const struct FPalBuildObjectData& BuildObjectData, class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectData& CallFunc_BP_FindRow_ReturnValue);
	void SetupUI(const struct FPalBuildObjectData& BuildObjectData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void DisposeModel(bool CallFunc_IsValid_ReturnValue);
	void Setup_Model(class UBP_BuildingUIParameter_C* Parameter, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UBP_BuildingUIParameter_C* K2Node_DynamicCast_AsBP_Building_UIParameter, bool K2Node_DynamicCast_bSuccess, class UBP_PalUIBuildingModel_C* CallFunc_SpawnObject_ReturnValue);
	void OnSetup();
	void Destruct();
	void UpdateDisplay();
	void ExecuteUbergraph_WBP_PalBuilding(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class EPalMapObjectOperationResult CallFunc_Get_Build_Operation_Result_Result, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UPalBuilderComponent* CallFunc_GetComponentByClass_ReturnValue, class FText CallFunc_GetWarningText_text, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsInstallAtReticle_ReturnValue, class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectData& CallFunc_BP_FindRow_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


