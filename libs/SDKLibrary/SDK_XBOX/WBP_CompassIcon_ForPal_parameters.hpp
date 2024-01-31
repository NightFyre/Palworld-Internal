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

// 0x300 (0x300 - 0x0)
// Function WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C.SetupTexture
struct UWBP_CompassIcon_ForPal_C_SetupTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftTexture;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationManager*                   CallFunc_GetLocationManager_ReturnValue;           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationBase*                      CallFunc_GetLocation_ReturnValue;                  // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5069[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalLocationPoint_DroppedCharacter*    K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character; // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectPickableCharacterModelBase* CallFunc_GetMapObjectConcreteModel_ReturnValue;    // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint_Character*           K2Node_DynamicCast_AsPal_Location_Point_Character; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalCharacterLocationType         CallFunc_GetCharacterLocationType_ReturnValue;     // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCharacterID_ReturnValue;               // 0x7C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalIndividualCharacterSaveParameter  CallFunc_GetCharacterSaveParameter_ReturnValue;    // 0x88(0x218)(ConstParm)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetCharacterIconTexture_ReturnValue;      // 0x2A0(0x30)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetCharacterIconTexture_ReturnValue_1;    // 0x2D0(0x30)(UObjectWrapper, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function WBP_CompassIcon_ForPal.WBP_CompassIcon_ForPal_C.ExecuteUbergraph_WBP_CompassIcon_ForPal
struct UWBP_CompassIcon_ForPal_C_ExecuteUbergraph_WBP_CompassIcon_ForPal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506C[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Copy_ReturnValue;                           // 0x10(0xD0)(None)
	struct FSlateBrush                           K2Node_SetFieldsInStruct_StructOut;                // 0xE0(0xD0)(None)
};

}
}


