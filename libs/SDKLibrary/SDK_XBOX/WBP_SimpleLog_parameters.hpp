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

// 0x2 (0x2 - 0x0)
// Function WBP_SimpleLog.WBP_SimpleLog_C.OverrideBgColor
struct UWBP_SimpleLog_C_OverrideBgColor_Params
{
public:
	enum class EPalLogContentToneType            ToneType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SimpleLog.WBP_SimpleLog_C.OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A
struct UWBP_SimpleLog_C_OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_SimpleLog.WBP_SimpleLog_C.SetLogText
struct UWBP_SimpleLog_C_SetLogText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x30 (0x30 - 0x0)
// Function WBP_SimpleLog.WBP_SimpleLog_C.RequestLoadIconTexture
struct UWBP_SimpleLog_C_RequestLoadIconTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftTexturePtr;                                    // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_SimpleLog.WBP_SimpleLog_C.SetAdditionalData
struct UWBP_SimpleLog_C_SetAdditionalData_Params
{
public:
	struct FPalLogAdditionalData                 InAdditionalData;                                  // 0x0(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x118 (0x118 - 0x0)
// Function WBP_SimpleLog.WBP_SimpleLog_C.ExecuteUbergraph_WBP_SimpleLog
struct UWBP_SimpleLog_C_ExecuteUbergraph_WBP_SimpleLog_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5001[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5002[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_inText;                               // 0x20(0x18)(ConstParm)
	TSoftObjectPtr<class UTexture2D>             K2Node_Event_softTexturePtr;                       // 0x38(0x30)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5003[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalLogAdditionalData                 K2Node_Event_inAdditionalData;                     // 0x70(0x38)(ConstParm)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_Array_Get_Item;                           // 0xB0(0x30)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5004[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xE8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xF8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x108(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


