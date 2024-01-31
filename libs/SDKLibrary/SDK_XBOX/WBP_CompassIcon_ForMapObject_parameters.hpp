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

// 0x141 (0x141 - 0x0)
// Function WBP_CompassIcon_ForMapObject.WBP_CompassIcon_ForMapObject_C.SetupTexture
struct UWBP_CompassIcon_ForMapObject_C_SetupTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftTexture;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FPalLocationUIData_TableRow           CallFunc_GetDataTableRowFromName_OutRow;           // 0x30(0xA8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalLocationManager*                   CallFunc_GetLocationManager_ReturnValue;           // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalLocationBase*                      CallFunc_GetLocation_ReturnValue;                  // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint_MapObject*           K2Node_DynamicCast_AsPal_Location_Point_Map_Object; // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetMapObjectName_MapObjectName;           // 0x104(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMapObjectName_ReturnValue;             // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5070[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_Map_Find_Value;                           // 0x110(0x30)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function WBP_CompassIcon_ForMapObject.WBP_CompassIcon_ForMapObject_C.ExecuteUbergraph_WBP_CompassIcon_ForMapObject
struct UWBP_CompassIcon_ForMapObject_C_ExecuteUbergraph_WBP_CompassIcon_ForMapObject_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5071[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Copy_ReturnValue;                           // 0x10(0xD0)(None)
	struct FSlateBrush                           K2Node_SetFieldsInStruct_StructOut;                // 0xE0(0xD0)(None)
};

}
}


