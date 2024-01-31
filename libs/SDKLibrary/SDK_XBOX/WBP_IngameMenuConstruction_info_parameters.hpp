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

// 0x41 (0x41 - 0x0)
// Function WBP_IngameMenuConstruction_info.WBP_IngameMenuConstruction_info_C.Get Useable Material Item Num
struct UWBP_IngameMenuConstruction_info_C_Get_Useable_Material_Item_Num_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Num;                                               // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	TArray<struct FPalStaticItemIdAndNum>        CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos; // 0x20(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                CallFunc_Array_Get_Item;                           // 0x34(0xC)(NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F (0x1F - 0x0)
// Function WBP_IngameMenuConstruction_info.WBP_IngameMenuConstruction_info_C.SetMaterialInfo
struct UWBP_IngameMenuConstruction_info_C_SetMaterialInfo_Params
{
public:
	class UWBP_IngameMenuConstruction_InfoItem_C* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  ID;                                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NeedNum;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_Useable_Material_Item_Num_Num;        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function WBP_IngameMenuConstruction_info.WBP_IngameMenuConstruction_info_C.Set Build Object Data
struct UWBP_IngameMenuConstruction_info_C_Set_Build_Object_Data_Params
{
public:
	struct FPalBuildObjectData                   BuildObjectData;                                   // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                NewLocalVar_0;                                     // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_WorkAmountToManMonth_ReturnValue;         // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x90(0x18)(None)
	class FText                                  CallFunc_GetBuildObjectDesc_outDesc;               // 0xA8(0x18)(None)
	class FText                                  CallFunc_GetMapObjectName_outName;                 // 0xC0(0x18)(None)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


