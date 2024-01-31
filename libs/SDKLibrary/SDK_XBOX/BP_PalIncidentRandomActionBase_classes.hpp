#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C
class UBP_PalIncidentRandomActionBase_C : public UPalRandomIncidentActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_PalIncidentRandomActionBase_C* GetDefaultObj();

	void GetSpawner(class APalRandomIncidentNPCSpawner** Spawmer, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_PalIncidentRandom_C* K2Node_DynamicCast_AsBP_Pal_Incident_Random, bool K2Node_DynamicCast_bSuccess);
	void GetSettingTableRow(bool* Result, struct FPalRandomIncidentSettings* Data, class UBP_PalIncidentRandom_C* CallFunc_GetOwnerIncident_Incident, bool CallFunc_Get_Setting_Table_Row_Result, const struct FPalRandomIncidentSettings& CallFunc_Get_Setting_Table_Row_Data, class UBP_PalIncidentRandom_C* CallFunc_GetOwnerIncident_Incident_1, bool CallFunc_IsValid_ReturnValue);
	void GetParameter(class UPalIncidentDynamicParameterRandom** DynamicParameter, class UBP_PalIncidentRandom_C* CallFunc_GetOwnerIncident_Incident, class UPalIncidentDynamicParameter* CallFunc_GetDynamicParameter_ReturnValue, class UPalIncidentDynamicParameterRandom* K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Random, bool K2Node_DynamicCast_bSuccess);
	void GetOwnerIncident(class UBP_PalIncidentRandom_C** Incident, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_PalIncidentRandom_C* K2Node_DynamicCast_AsBP_Pal_Incident_Random, bool K2Node_DynamicCast_bSuccess);
	void OnTerminate();
	void ExecuteUbergraph_BP_PalIncidentRandomActionBase(int32 EntryPoint);
};

}


