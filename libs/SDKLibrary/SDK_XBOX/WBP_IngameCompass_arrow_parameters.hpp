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

// 0x1B0 (0x1B0 - 0x0)
// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.ChangeBorderDrawType
struct UWBP_IngameCompass_arrow_C_ChangeBorderDrawType_Params
{
public:
	enum class ESlateBrushDrawType               DrawType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4955[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Copy_ReturnValue;                           // 0x10(0xD0)(None)
	struct FSlateBrush                           K2Node_SetFieldsInStruct_StructOut;                // 0xE0(0xD0)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.ChangeBorderColor
struct UWBP_IngameCompass_arrow_C_ChangeBorderColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.SetupTexture
struct UWBP_IngameCompass_arrow_C_SetupTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftTexture;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.SetDistanceText
struct UWBP_IngameCompass_arrow_C_SetDistanceText_Params
{
public:
	double                                       Length;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_DoubleToInt64_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x18(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)(None)
};

}
}


