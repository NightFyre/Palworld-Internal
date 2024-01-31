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
// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.GetRestoreFocusTarget
struct UWBP_CharaCre_ScrollBoxContentBase_C_GetRestoreFocusTarget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.OnClosedSelectColorWindow_Internal
struct UWBP_CharaCre_ScrollBoxContentBase_C_OnClosedSelectColorWindow_Internal_Params
{
public:
	class UPalHUDDispatchParameterBase*          Param;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.OpenColorSelectWindow
struct UWBP_CharaCre_ScrollBoxContentBase_C_OpenColorSelectWindow_Params
{
public:
	class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* Parameter;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_Push_ReturnValue;                         // 0x1C(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.GetTopFocusTarget
struct UWBP_CharaCre_ScrollBoxContentBase_C_GetTopFocusTarget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C.ApplyMakeInfo
struct UWBP_CharaCre_ScrollBoxContentBase_C_ApplyMakeInfo_Params
{
public:
	struct FPalPlayerDataCharacterMakeInfo       MakeInfo;                                          // 0x0(0x94)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

}
}


