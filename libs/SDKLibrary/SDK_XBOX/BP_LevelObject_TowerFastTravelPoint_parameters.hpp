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

// 0x8 (0x8 - 0x0)
// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnGetAkComponent
struct ABP_LevelObject_TowerFastTravelPoint_C_OnGetAkComponent_Params
{
public:
	class USceneComponent*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.GetUnlockAkAudioEvent
struct ABP_LevelObject_TowerFastTravelPoint_C_GetUnlockAkAudioEvent_Params
{
public:
	class UAkAudioEvent*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnUpdateUnlockState_Internal
struct ABP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Internal_Params
{
public:
	bool                                         IsUnlocked;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSpawnUnlockefFlashEffect;                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D2C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue_1;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnUpdateUnlockState
struct ABP_LevelObject_TowerFastTravelPoint_C_OnUpdateUnlockState_Params
{
public:
	class APalLevelObjectUnlockableFastTravelPoint* Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUnlocked_ReturnValue;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x250 (0x250 - 0x0)
// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.OnChangeWorldSettings
struct ABP_LevelObject_TowerFastTravelPoint_C_OnChangeWorldSettings_Params
{
public:
	struct FPalOptionWorldSettings               PrevSettings;                                      // 0x0(0x128)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPalOptionWorldSettings               NewSettings;                                       // 0x128(0x128)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3C0 (0x3C0 - 0x0)
// Function BP_LevelObject_TowerFastTravelPoint.BP_LevelObject_TowerFastTravelPoint_C.ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint
struct ABP_LevelObject_TowerFastTravelPoint_C_ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOptionSubsystem*                   CallFunc_GetOptionSubsystem_ReturnValue;           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D39[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalOptionWorldSettings               K2Node_CustomEvent_PrevSettings;                   // 0x48(0x128)(ConstParm)
	struct FPalOptionWorldSettings               K2Node_CustomEvent_NewSettings;                    // 0x170(0x128)(ConstParm)
	struct FPalOptionWorldSettings               CallFunc_GetOptionWorldSettings_ReturnValue;       // 0x298(0x128)(ConstParm)
};

}
}


