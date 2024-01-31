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

// 0x20 (0x20 - 0x0)
// Function WBP_InventoryListContent.WBP_InventoryListContent_C.GetAllContents
struct UWBP_InventoryListContent_C_GetAllContents_Params
{
public:
	TArray<class UWidget*>                       Contents;                                          // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function WBP_InventoryListContent.WBP_InventoryListContent_C.AddWidget
struct UWBP_InventoryListContent_C_AddWidget_Params
{
public:
	class UWidget*                               InWidgett;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                          CallFunc_AddChildToWrapBox_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_InventoryListContent.WBP_InventoryListContent_C.SetCategoryName
struct UWBP_InventoryListContent_C_SetCategoryName_Params
{
public:
	class FText                                  CategoryName;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


