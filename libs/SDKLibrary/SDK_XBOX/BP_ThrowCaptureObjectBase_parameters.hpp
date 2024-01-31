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
// Function BP_ThrowCaptureObjectBase.BP_ThrowCaptureObjectBase_C.GetBodyClass
struct ABP_ThrowCaptureObjectBase_C_GetBodyClass_Params
{
public:
	class UClass*                                bodyClass;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ThrowCaptureObjectBase.BP_ThrowCaptureObjectBase_C.GetCaptureLevel
struct ABP_ThrowCaptureObjectBase_C_GetCaptureLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ThrowCaptureObjectBase.BP_ThrowCaptureObjectBase_C.SetCaptureLevel
struct ABP_ThrowCaptureObjectBase_C_SetCaptureLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_ThrowCaptureObjectBase.BP_ThrowCaptureObjectBase_C.OnCaptureStarted__DelegateSignature
struct ABP_ThrowCaptureObjectBase_C_OnCaptureStarted__DelegateSignature_Params
{
public:
	class AActor*                                CreatedBodyActor;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         TagretHandle;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBonus;                                           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


