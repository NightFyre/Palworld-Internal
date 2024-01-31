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

// 0x38 (0x38 - 0x0)
// Function WBP_Ingame_PlayerGauge_ThworObjectNone.WBP_Ingame_PlayerGauge_ThworObjectNone_C.SetDisplayMode
struct UWBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode_Params
{
public:
	enum class E_PalUIThrowObjectNoneMessageType DisplayType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Map_Find_Value;                           // 0x8(0x10)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x20(0x18)(None)
};

}
}


