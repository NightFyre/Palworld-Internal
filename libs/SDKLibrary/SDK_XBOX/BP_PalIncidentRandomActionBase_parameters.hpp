#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x19 - 0x0)
// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetSpawner
struct UBP_PalIncidentRandomActionBase_C_GetSpawner_Params
{
public:
	class APalRandomIncidentNPCSpawner*          Spawmer;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentRandom_C*               K2Node_DynamicCast_AsBP_Pal_Incident_Random;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetSettingTableRow
struct UBP_PalIncidentRandomActionBase_C_GetSettingTableRow_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3048[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalRandomIncidentSettings            Data;                                              // 0x8(0x28)(Parm, OutParm)
	class UBP_PalIncidentRandom_C*               CallFunc_GetOwnerIncident_Incident;                // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Setting_Table_Row_Result;             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3049[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalRandomIncidentSettings            CallFunc_Get_Setting_Table_Row_Data;               // 0x40(0x28)(None)
	class UBP_PalIncidentRandom_C*               CallFunc_GetOwnerIncident_Incident_1;              // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetParameter
struct UBP_PalIncidentRandomActionBase_C_GetParameter_Params
{
public:
	class UPalIncidentDynamicParameterRandom*    DynamicParameter;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentRandom_C*               CallFunc_GetOwnerIncident_Incident;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameter*          CallFunc_GetDynamicParameter_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterRandom*    K2Node_DynamicCast_AsPal_Incident_Dynamic_Parameter_Random; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.GetOwnerIncident
struct UBP_PalIncidentRandomActionBase_C_GetOwnerIncident_Params
{
public:
	class UBP_PalIncidentRandom_C*               Incident;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentRandom_C*               K2Node_DynamicCast_AsBP_Pal_Incident_Random;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PalIncidentRandomActionBase.BP_PalIncidentRandomActionBase_C.ExecuteUbergraph_BP_PalIncidentRandomActionBase
struct UBP_PalIncidentRandomActionBase_C_ExecuteUbergraph_BP_PalIncidentRandomActionBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


