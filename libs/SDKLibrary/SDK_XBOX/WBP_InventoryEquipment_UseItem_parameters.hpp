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

// 0x242 (0x242 - 0x0)
// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.TryPlayEatSound
struct UWBP_InventoryEquipment_UseItem_C_TryPlayEatSound_Params
{
public:
	class FName                                  StaticItemId;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*      TargetCharacterParameter;                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter  CallFunc_GetSaveParameter_ReturnValue;             // 0x10(0x218)(ConstParm)
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.BP_GetDesiredFocusTarget
struct UWBP_InventoryEquipment_UseItem_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.Setup
struct UWBP_InventoryEquipment_UseItem_C_Setup_Params
{
public:
	class UPalItemSlot*                          SelectedItemSlot;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.UseItemTo
struct UWBP_InventoryEquipment_UseItem_C_UseItemTo_Params
{
public:
	class UPalIndividualCharacterHandle*         Individual;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.ResetCacheUseAmount
struct UWBP_InventoryEquipment_UseItem_C_ResetCacheUseAmount_Params
{
public:
	class UPalItemSlot*                          TargetSlot;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.OnWazaMachineUsed
struct UWBP_InventoryEquipment_UseItem_C_OnWazaMachineUsed_Params
{
public:
	class UPalIndividualCharacterParameter*      IndividualParameter;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalWazaID                        WazaID;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.Refresh
struct UWBP_InventoryEquipment_UseItem_C_Refresh_Params
{
public:
	bool                                         IsConfirm;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.ShowPalDetail
struct UWBP_InventoryEquipment_UseItem_C_ShowPalDetail_Params
{
public:
	class UPalIndividualCharacterHandle*         Individual;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x45B (0x45B - 0x0)
// Function WBP_InventoryEquipment_UseItem.WBP_InventoryEquipment_UseItem_C.ExecuteUbergraph_WBP_InventoryEquipment_UseItem
struct UWBP_InventoryEquipment_UseItem_C_ExecuteUbergraph_WBP_InventoryEquipment_UseItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0x14(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemSlot*                          K2Node_CustomEvent_SelectedItemSlot;               // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Menu_PalList_C*                   CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D98[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterParameterComponent*       CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D99[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOtomoHolderComponentBase*          CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D9A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPalIndividualCharacterHandle*> CallFunc_GetAllIndividualHandle_OutArray;          // 0x88(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_Menu_PalList_C*>           K2Node_MakeArray_Array;                            // 0xA8(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterHandle*         K2Node_CustomEvent_Individual_1;                   // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterParameter*      CallFunc_TryGetIndividualParameter_ReturnValue;    // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xD8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xEC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xFC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemSlot*                          K2Node_CustomEvent_targetSlot;                     // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x118(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalItemSlotId                        CallFunc_GetSlotId_ReturnValue;                    // 0x12C(0x14)(NoDestructor, HasGetValueTypeHash)
	struct FPalItemSlotIdAndNum                  K2Node_MakeStruct_PalItemSlotIdAndNum;             // 0x140(0x18)(NoDestructor)
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Menu_PalList_C*                   CallFunc_Array_Get_Item_1;                         // 0x170(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         CallFunc_Array_Get_Item_2;                         // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*      CallFunc_TryGetIndividualParameter_ReturnValue_1;  // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticConsumeItemData*             K2Node_DynamicCast_AsPal_Static_Consume_Item_Data; // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_InGameMainMenuUseItemParameter_C*  K2Node_DynamicCast_AsBP_in_Game_Main_Menu_Use_Item_Parameter; // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterParameter*      K2Node_CustomEvent_IndividualParameter;            // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalWazaID                        K2Node_CustomEvent_WazaId;                         // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetWazaName_outName;                      // 0x1D0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1E8(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_GetNickName_outName;                      // 0x238(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x248(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x260(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x2B0(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2C0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsConfirm;                      // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x2D4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x2E4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x2F8(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x310(0x18)(None)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x328(0x4)(NoDestructor)
	bool                                         CallFunc_IsStatusPointResetItem_ReturnValue;       // 0x32C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseTargetMedicine_ReturnValue;         // 0x32E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x32F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUseTargetMedicine_ReturnValue_1;       // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x334(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x348(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBaseCampWorkerSickType        CallFunc_GetWorkerSick_ReturnValue;                // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x362(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DAB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetNickName_outName_1;                    // 0x368(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x380(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x398(0x50)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x3E8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x3F8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x408(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x420(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         K2Node_CustomEvent_Individual;                     // 0x430(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x438(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x448(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x45A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


