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

// 0x20 (0x20 - 0x0)
// Function BP_PalInvaderManager.BP_PalInvaderManager_C.RequestIncidentVisitorNPC_BP
struct UBP_PalInvaderManager_C_RequestIncidentVisitorNPC_BP_Params
{
public:
	class UObject*                               OccuredBaseCamp;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterInvader*   Parameter;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*               CallFunc_RequestIncident_ReturnValue;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PalInvaderManager.BP_PalInvaderManager_C.RequestIncidentInvaderEnemy_BP
struct UBP_PalInvaderManager_C_RequestIncidentInvaderEnemy_BP_Params
{
public:
	class UObject*                               OccuredBaseCamp;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterInvader*   Parameter;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*               CallFunc_RequestIncident_ReturnValue;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BP_PalInvaderManager.BP_PalInvaderManager_C.RequestIncident
struct UBP_PalInvaderManager_C_RequestIncident_Params
{
public:
	class FName                                  IncidentName;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OccuredBaseCamp;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterInvader*   Parameter;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentBase*                      NewIncident;                                       // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderIncidentBase*               K2Node_DynamicCast_AsPal_Invader_Incident_Base;    // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIncidentSystem*                    CallFunc_GetIncidentSystem_ReturnValue;            // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentBase*                      CallFunc_RequestIncident_ReturnValue;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIncidentSystem*                    CallFunc_GetIncidentSystem_ReturnValue_1;          // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_PalInvaderManager.BP_PalInvaderManager_C.OnIncidentStateNotify
struct UBP_PalInvaderManager_C_OnIncidentStateNotify_Params
{
public:
	class UPalIncidentNotifyListener*            Listener;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalIncidentState                 IncidentState;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalIncidentNotifyParameter           Parameter;                                         // 0x10(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function BP_PalInvaderManager.BP_PalInvaderManager_C.ExecuteUbergraph_BP_PalInvaderManager
struct UBP_PalInvaderManager_C_ExecuteUbergraph_BP_PalInvaderManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIncidentNotifyListener*            K2Node_CustomEvent_Listener;                       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalIncidentState                 K2Node_CustomEvent_IncidentState;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalIncidentNotifyParameter           K2Node_CustomEvent_Parameter;                      // 0x28(0x28)(ConstParm, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27C5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PalIncidentNotifyListener_C*       CallFunc_SpawnObject_ReturnValue;                  // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


