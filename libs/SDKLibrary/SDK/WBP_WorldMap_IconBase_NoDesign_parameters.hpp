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
// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.SetEnable
struct UWBP_WorldMap_IconBase_NoDesign_C_SetEnable_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.Setup
struct UWBP_WorldMap_IconBase_NoDesign_C_Setup_Params
{
public:
	class UPalLocationPoint*                     LocationPoint;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 LocationId;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetLocationPosition
struct UWBP_WorldMap_IconBase_NoDesign_C_GetLocationPosition_Params
{
public:
	struct FVector                               LocationPosition;                                  // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint*                     CallFunc_GetLocationPoint_LocationPoint;           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetLocation_ReturnValue;                  // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetLocationPoint
struct UWBP_WorldMap_IconBase_NoDesign_C_GetLocationPoint_Params
{
public:
	class UPalLocationPoint*                     LocationPoint;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationManager*                   CallFunc_GetLocationManager_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint*                     CallFunc_GetLocationPoint_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.Setup_Internal
struct UWBP_WorldMap_IconBase_NoDesign_C_Setup_Internal_Params
{
public:
	class UPalLocationPoint*                     LocationPoint;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.GetText
struct UWBP_WorldMap_IconBase_NoDesign_C_GetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign
struct UWBP_WorldMap_IconBase_NoDesign_C_ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnClicked__DelegateSignature
struct UWBP_WorldMap_IconBase_NoDesign_C_OnClicked__DelegateSignature_Params
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*     IconWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnUnhovered__DelegateSignature
struct UWBP_WorldMap_IconBase_NoDesign_C_OnUnhovered__DelegateSignature_Params
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*     IconWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C.OnHovered__DelegateSignature
struct UWBP_WorldMap_IconBase_NoDesign_C_OnHovered__DelegateSignature_Params
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*     IconWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


