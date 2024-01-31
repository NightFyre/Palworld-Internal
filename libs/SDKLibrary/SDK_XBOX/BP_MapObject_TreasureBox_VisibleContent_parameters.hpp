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
// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.SetupEventToItemContainer
struct ABP_MapObject_TreasureBox_VisibleContent_C_SetupEventToItemContainer_Params
{
public:
	class UPalItemContainer*                     ItemContainer;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.IsShowOutlineInReticleTargetting
struct ABP_MapObject_TreasureBox_VisibleContent_C_IsShowOutlineInReticleTargetting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.OnReadyItemContainerModule
struct ABP_MapObject_TreasureBox_VisibleContent_C_OnReadyItemContainerModule_Params
{
public:
	class UPalMapObjectConcreteModelBase*        Model;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelModuleBase*  Module;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.TryGetStaticItemId
struct ABP_MapObject_TreasureBox_VisibleContent_C_TryGetStaticItemId_Params
{
public:
	class UPalMapObjectPickupItemOnLevelModel*   PickupItemModel;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  StaticItemId;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectPickupItemOnLevelModel*   ConcreteModel;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.SetupVisual
struct ABP_MapObject_TreasureBox_VisibleContent_C_SetupVisual_Params
{
public:
	class UPalMapObjectConcreteModelBase*        ConcreteModel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                StaticItemData;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectPickupItemOnLevelModel*   ConcreteModel;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalTreasureBoxVisualType         VisualType;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EF5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemIDManager*                     ItemIDManager;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectPickupItemOnLevelModel*   K2Node_DynamicCast_AsPal_Map_Object_Pickup_Item_on_Level_Model; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EF6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetVisualStaticItemId_ReturnValue;        // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x40(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x58(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA8(0x10)(ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xB8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xE0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EF8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemIDManager*                     CallFunc_GetItemIDManager_ReturnValue;             // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                CallFunc_GetStaticItemData_ReturnValue;            // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class AActor>                  CallFunc_GetVisualBlueprintClass_ReturnValue;      // 0x130(0x30)(UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B
struct ABP_MapObject_TreasureBox_VisibleContent_C_OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.LoadVisualActor
struct ABP_MapObject_TreasureBox_VisibleContent_C_LoadVisualActor_Params
{
public:
	TSoftClassPtr<class AActor>                  BlueprintClassSoft;                                // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.BP_OnSetConcreteModel
struct ABP_MapObject_TreasureBox_VisibleContent_C_BP_OnSetConcreteModel_Params
{
public:
	class UPalMapObjectConcreteModelBase*        ConcreteModel;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C.ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent
struct ABP_MapObject_TreasureBox_VisibleContent_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsActor;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EFA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AActor>                  K2Node_CustomEvent_BlueprintClassSoft;             // 0x30(0x30)(HasGetValueTypeHash)
	TSubclassOf<class UObject>                   K2Node_CustomEvent_Loaded;                         // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelBase*        K2Node_Event_ConcreteModel;                        // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


