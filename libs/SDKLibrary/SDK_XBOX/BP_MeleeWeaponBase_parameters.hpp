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

// 0x1 (0x1 - 0x0)
// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.SeekRightHandOpen
struct ABP_MeleeWeaponBase_C_SeekRightHandOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.SeekLeftHandOpen
struct ABP_MeleeWeaponBase_C_SeekLeftHandOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.GetLeftHandTransform
struct ABP_MeleeWeaponBase_C_GetLeftHandTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.IsUseLeftHandAttach
struct ABP_MeleeWeaponBase_C_IsUseLeftHandAttach_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.GetEquipSocketName
struct ABP_MeleeWeaponBase_C_GetEquipSocketName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


