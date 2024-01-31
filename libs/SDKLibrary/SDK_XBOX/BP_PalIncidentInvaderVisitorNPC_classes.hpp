#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x281 - 0x281)
// BlueprintGeneratedClass BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C
class UBP_PalIncidentInvaderVisitorNPC_C : public UBP_PalIncidentInvaderBase_C
{
public:

	static class UClass* StaticClass();
	static class UBP_PalIncidentInvaderVisitorNPC_C* GetDefaultObj();

	void IsSquad(bool* Result, const struct FPalVisitorNPCDatabaseRow& CallFunc_Get_Chosen_Row_Data_ChosenRowData);
	void Get_Chosen_Row_Data(struct FPalVisitorNPCDatabaseRow* ChosenRowData, const struct FPalVisitorNPCDatabaseRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController, int32 Temp_int_Array_Index_Variable, const struct FPalVisitorNPCDatabaseRow& CallFunc_Get_Chosen_Row_Data_ChosenRowData, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_GetTargetBaseCampPosition_Location, int32 CallFunc_Add_IntInt_ReturnValue, class APalAIController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_NPCAIController_Visitor_C* K2Node_DynamicCast_AsBP_NPCAIController_Visitor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, int32 CallFunc_GetVisitorNPCReturnTimeMinutes_ReturnValue, const struct FVector& CallFunc_GetTargetBaseCampPosition_Location_1);
	void Get_Character_Location_Type(enum class EPalCharacterLocationType* CharacterLocationType);
	bool GetInvaderStartPoint(struct FVector* Result, const struct FVector& RetVal, double MinLength, const struct FVector& BaseCampLocation, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalBaseCampModel* CallFunc_GetTargetCampModel_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, TArray<struct FVector>& CallFunc_GetCandidateStartLocations_Result, int32 CallFunc_GetCandidateStartLocations_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void EndProc();
	void StartProc();
};

}


