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

// 0x50 (0x50 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupPrice
struct UWBP_InventoryEquipment_ItemInfo_C_SetupPrice_Params
{
public:
	class UPalGameSetting*                       CallFunc_GetGameSetting_ReturnValue;               // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E98[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0xC(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                K2Node_MakeStruct_PalStaticItemIdAndNum;           // 0x34(0xC)(NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E9A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CalcItemSellPrice_ReturnValue;            // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11C (0x11C - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupItemRarity
struct UWBP_InventoryEquipment_ItemInfo_C_SetupItemRarity_Params
{
public:
	class FName                                  ItemStaticId;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalMasterDataTableAccess_ItemRecipe*  CallFunc_GetItemRecipeDataTableAccess_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Min_ReturnValue;                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x30(0x10)(NoDestructor)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x40(0x18)(None)
	bool                                         CallFunc_BP_FindRow_bResult;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemRecipe                        CallFunc_BP_FindRow_ReturnValue;                   // 0x60(0x70)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0xD4(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast; // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupItemDurability
struct UWBP_InventoryEquipment_ItemInfo_C_SetupItemDurability_Params
{
public:
	class UPalDynamicItemDataBase*               CallFunc_TryGetDynamicItemData_OutDynamicItemData; // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetDynamicItemData_ReturnValue;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMaxDurability_ReturnValue;             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDurability_ReturnValue;                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EBA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x80(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EBB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE8(0x18)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D8 (0x2D8 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.Setup Tech Mat Details
struct UWBP_InventoryEquipment_ItemInfo_C_Setup_Tech_Mat_Details_Params
{
public:
	struct FPalTechnologyRecipeUnlockDataTableRow TechData;                                          // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsMasked;                                          // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalStaticItemIdAndNum>        MatDetail;                                         // 0x68(0x10)(Edit, BlueprintVisible)
	TMap<class FName, int32>                     MaterialDetails;                                   // 0x78(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0xCC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue; // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0xF0(0x10)(ReferenceParm)
	class FName                                  CallFunc_BP_FindRowByMapObjectId_OutRowName;       // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BP_FindRowByMapObjectId_bResult;          // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalBuildObjectData                   CallFunc_BP_FindRowByMapObjectId_ReturnValue;      // 0x110(0x78)(None)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     K2Node_MakeMap_Map;                                // 0x198(0x50)(None)
	int32                                        CallFunc_Map_Find_Value;                           // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EDA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                K2Node_MakeStruct_PalStaticItemIdAndNum;           // 0x1F4(0xC)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EDC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalMasterDataTableAccess_ItemRecipe*  CallFunc_GetItemRecipeDataTableAccess_ReturnValue; // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BP_FindRow_bResult;                       // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemRecipe                        CallFunc_BP_FindRow_ReturnValue;                   // 0x218(0x70)(None)
	TMap<class FName, int32>                     K2Node_MakeMap_Map_1;                              // 0x288(0x50)(None)
};

// 0x170 (0x170 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.Get Display Technology Category Name
struct UWBP_InventoryEquipment_ItemInfo_C_Get_Display_Technology_Category_Name_Params
{
public:
	class FName                                  TechnologyName;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CategoryText;                                      // 0x8(0x18)(Parm, OutParm)
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMasterDataTableAccess_BuildObjectData* CallFunc_GetBuildObjectDataTableAccess_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTechnologyData*                    CallFunc_GetLocalTechnologyData_ReturnValue;       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalTechnologyRecipeUnlockDataTableRow CallFunc_GetRecipeTechlonogy_ReturnValue;          // 0x38(0x60)(ConstParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x9C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EE5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EE6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetItemTypeAName_outName;                 // 0xB8(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EE7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0xD4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BP_FindRow_bResult;                       // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EE9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalBuildObjectData                   CallFunc_BP_FindRow_ReturnValue;                   // 0xE0(0x78)(None)
	class FText                                  CallFunc_GetBuildObjectCategoryAName_outName;      // 0x158(0x18)(None)
};

// 0x1E8 (0x1E8 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupByTechnologyName
struct UWBP_InventoryEquipment_ItemInfo_C_SetupByTechnologyName_Params
{
public:
	class FName                                  TechnologyName;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMasked;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            IconTexture;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetTechnologyDescription_OutDescription;  // 0x20(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x40(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x58(0x18)(None)
	class FText                                  CallFunc_SelectText_ReturnValue;                   // 0x70(0x18)(None)
	class FText                                  CallFunc_Get_Display_Technology_Category_Name_CategoryText; // 0x88(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalTechnologyData*                    CallFunc_GetLocalTechnologyData_ReturnValue;       // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUnlockRecipeTechnology_ReturnValue;     // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalTechnologyRecipeUnlockDataTableRow CallFunc_GetRecipeTechlonogy_ReturnValue;          // 0xB8(0x60)(ConstParm)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedText_ReturnValue;             // 0x120(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x138(0x18)(None)
	class FText                                  CallFunc_SelectText_ReturnValue_1;                 // 0x150(0x18)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUnlockRecipeTechnology_ReturnValue_1;   // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EFA[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalTechnologyRecipeUnlockDataTableRow CallFunc_GetRecipeTechlonogy_ReturnValue_1;        // 0x170(0x60)(ConstParm)
	class FText                                  CallFunc_GetLocalizedText_ReturnValue_1;           // 0x1D0(0x18)(None)
};

// 0x59 (0x59 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.Is Equipable Item
struct UWBP_InventoryEquipment_ItemInfo_C_Is_Equipable_Item_Params
{
public:
	class UPalItemSlot*                          Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEquipable;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EFE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0xC(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EFF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalPlayerInventoryData*               CallFunc_GetLocalInventoryData_ReturnValue;        // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEquipSlot_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F02[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.OnUpdateTargetSlot
struct UWBP_InventoryEquipment_ItemInfo_C_OnUpdateTargetSlot_Params
{
public:
	class UPalItemSlot*                          Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.UnbindEvent
struct UWBP_InventoryEquipment_ItemInfo_C_UnbindEvent_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.OnInputMethodChanged
struct UWBP_InventoryEquipment_ItemInfo_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F05[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetStackCount_ReturnValue;                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3F (0x3F - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupUseableKeyGuide_Internal
struct UWBP_InventoryEquipment_ItemInfo_C_SetupUseableKeyGuide_Internal_Params
{
public:
	class FName                                  StaticItemId;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F07[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F08[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F09[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupSkillInfo
struct UWBP_InventoryEquipment_ItemInfo_C_SetupSkillInfo_Params
{
public:
	class FName                                  ItemStaticId;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F11[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalWazaDatabase*                      CallFunc_GetWazaDatabase_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F13[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMasterDataTableAccess_ItemRecipe*  CallFunc_GetItemRecipeDataTableAccess_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticConsumeItemData*             K2Node_DynamicCast_AsPal_Static_Consume_Item_Data; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BP_FindRow_bResult;                       // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F14[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemRecipe                        CallFunc_BP_FindRow_ReturnValue;                   // 0x48(0x70)(None)
	struct FPalWazaDatabaseRaw                   CallFunc_FindWazaForBP_OutData;                    // 0xB8(0x50)(None)
	bool                                         CallFunc_FindWazaForBP_ReturnValue;                // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F16[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x110(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x128(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F18[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0x144(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x16D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F1B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupTechDetails
struct UWBP_InventoryEquipment_ItemInfo_C_SetupTechDetails_Params
{
public:
	TArray<struct FPalStaticItemIdAndNum>        MatDetail;                                         // 0x0(0x10)(Edit, BlueprintVisible)
	TMap<class FName, int32>                     MaterialDetails;                                   // 0x10(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F23[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x70(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F24[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F25[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalStaticItemIdAndNum                K2Node_MakeStruct_PalStaticItemIdAndNum;           // 0x98(0xC)(NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalMasterDataTableAccess_ItemRecipe*  CallFunc_GetItemRecipeDataTableAccess_ReturnValue; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BP_FindRow_bResult;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F26[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemRecipe                        CallFunc_BP_FindRow_ReturnValue;                   // 0xB8(0x70)(None)
	TMap<class FName, int32>                     K2Node_MakeMap_Map;                                // 0x128(0x50)(None)
};

// 0xA7 (0xA7 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupKeyGuide
struct UWBP_InventoryEquipment_ItemInfo_C_SetupKeyGuide_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F30[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F31[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalPlayerInventoryData*               CallFunc_GetLocalInventoryData_ReturnValue;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F35[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F38[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalUILiftSlotModel*                   CallFunc_GetLiftSlotModel_ReturnValue;             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLift_ReturnValue;                       // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F39[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0x44(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Equipable_Item_IsEquipable;            // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEquipSlot_ReturnValue;                  // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_Select_Default_1;                           // 0x70(0x10)(NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F3A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x88(0x18)(None)
	int32                                        CallFunc_GetStackCount_ReturnValue;                // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0xA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetImportanyAdditionalText
struct UWBP_InventoryEquipment_ItemInfo_C_SetImportanyAdditionalText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetSimpleAdditionalText
struct UWBP_InventoryEquipment_ItemInfo_C_SetSimpleAdditionalText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x310 (0x310 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.Setup Parameter
struct UWBP_InventoryEquipment_ItemInfo_C_Setup_Parameter_Params
{
public:
	class UPalStaticItemDataBase*                TmpDisplayStaticItemData;                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                       CallFunc_GetGameSetting_ReturnValue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetPassiveSkill_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsBP_Glider_Item_Base;     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F55[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetPassiveSkillName_outName;              // 0x38(0x18)(None)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F56[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticArmorItemData*               K2Node_DynamicCast_AsPal_Static_Armor_Item_Data;   // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetHPValue_ReturnValue;                   // 0x6C(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_LoadClassAsset_Blocking_ReturnValue_1;    // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShieldValue_ReturnValue;               // 0x78(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBP_Capture_Prism;        // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F59[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetDefenseValue_ReturnValue;              // 0x8C(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCaptureLevelBySphereType_ReturnValue;  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F5A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticConsumeItemData*             K2Node_DynamicCast_AsPal_Static_Consume_Item_Data; // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F5C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRestoreSanity_ReturnValue;             // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F5D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRestoreSatiety_ReturnValue;            // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F5F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticWeaponItemData*              K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data;  // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F60[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadClassAsset_Blocking_ReturnValue_2;    // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsPal_Weapon_Base;         // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_2;                // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F63[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F65[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetItemName_outName;                      // 0xF0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x108(0x50)(HasGetValueTypeHash)
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0x158(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x180(0x18)(None)
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F66[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Map_Find_Value;                           // 0x1A8(0x10)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F67[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalPlayerInventoryData*               CallFunc_GetLocalInventoryData_ReturnValue;        // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_CountItemNum_ReturnValue;                 // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x1D0(0x18)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1F0(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemTypeAName_outName;                 // 0x240(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x258(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x2A8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2B8(0x18)(None)
	struct FDataTableRowHandle                   CallFunc_Map_Find_Value_1;                         // 0x2D0(0x10)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F6B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_2;        // 0x2E8(0x18)(None)
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast_1;                  // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.Setup Item Weight
struct UWBP_InventoryEquipment_ItemInfo_C_Setup_Item_Weight_Params
{
public:
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F88[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0xC(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStackCount_ReturnValue;                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F8A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x58(0x18)(None)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupItemNum
struct UWBP_InventoryEquipment_ItemInfo_C_SetupItemNum_Params
{
public:
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x0(0x18)(None)
};

// 0xD9 (0xD9 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupItemDescription
struct UWBP_InventoryEquipment_ItemInfo_C_SetupItemDescription_Params
{
public:
	class UPalMasterDataTableAccess_ItemRecipe*  CallFunc_GetItemRecipeDataTableAccess_ReturnValue; // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0x8(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BP_FindRow_bResult;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemRecipe                        CallFunc_BP_FindRow_ReturnValue;                   // 0x38(0x70)(None)
	class FText                                  CallFunc_GetItemDescription_outName;               // 0xA8(0x18)(None)
	class FText                                  CallFunc_GetItemDescription_outName_1;             // 0xC0(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x104 (0x104 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.Setup Item Name
struct UWBP_InventoryEquipment_ItemInfo_C_Setup_Item_Name_Params
{
public:
	class FName                                  ItemStaticId;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FB7[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetItemName_outName;                      // 0x10(0x18)(None)
	class UPalMasterDataTableAccess_ItemRecipe*  CallFunc_GetItemRecipeDataTableAccess_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BP_FindRow_bResult;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FBA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemRecipe                        CallFunc_BP_FindRow_ReturnValue;                   // 0x48(0x70)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FBF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetItemTypeAName_outName;                 // 0xC0(0x18)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FC1[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0xDC(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
};

// 0x57 (0x57 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetPalGearIcon
struct UWBP_InventoryEquipment_ItemInfo_C_SetPalGearIcon_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FD5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FD7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Split_LeftS;                              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FDB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.Setup Item Icon
struct UWBP_InventoryEquipment_ItemInfo_C_Setup_Item_Icon_Params
{
public:
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0x0(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FED[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetupByDisplayInfo
struct UWBP_InventoryEquipment_ItemInfo_C_SetupByDisplayInfo_Params
{
public:
	struct FPalUICommonItemInfoDisplayData       DisplayInfo;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	class UPalItemIDManager*                     ItemIDManager;                                     // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.Set Main Param Text
struct UWBP_InventoryEquipment_ItemInfo_C_Set_Main_Param_Text_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetMainParamValue
struct UWBP_InventoryEquipment_ItemInfo_C_SetMainParamValue_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_100A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetSubParamText
struct UWBP_InventoryEquipment_ItemInfo_C_SetSubParamText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.ChangeDisplayMode
struct UWBP_InventoryEquipment_ItemInfo_C_ChangeDisplayMode_Params
{
public:
	enum class E_PalUIItemInfoWindowDIsplayType  DisplayType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1019[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x8(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.SetSubParamValue
struct UWBP_InventoryEquipment_ItemInfo_C_SetSubParamValue_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_101E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo.WBP_InventoryEquipment_ItemInfo_C.ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo
struct UWBP_InventoryEquipment_ItemInfo_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1022[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


