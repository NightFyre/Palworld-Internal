#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x340 - 0x278)
// WidgetBlueprintGeneratedClass WBP_MainMenu_Technology_00.WBP_MainMenu_Technology_00_C
class UWBP_MainMenu_Technology_00_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_MainMenu_Technology_Point_C*      WBP_MainMenu_Technology_Point;                     // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Technology_Point_C*      WBP_MainMenu_Technology_Point_Boss;                // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*            WBP_PalCommonScrollList;                           // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, struct FF_PalUITechnologyDataMapContent> TechnologyMap;                                     // 0x298(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_MainMenu_Technology_List_C*> TechnologyListWidgetArray;                         // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnClickedTchnology;                                // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredTechnology;                               // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhoveredTechnology;                             // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        MaxTechnologyLevel;                                // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinTechnologyLevel;                                // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MainMenu_Technology_List_C*       LastHoveredListWidget;                             // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_MainMenu_Technology_Content_C*    LastHoveredButtonWidget;                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_Technology_00_C* GetDefaultObj();

	void UpdateAllTechnologyButton(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_MainMenu_Technology_List_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void GetTopUnlockableFocusTarget(class UWidget** Target, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_GetTopFocusTarget_Target, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_MainMenu_Technology_List_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UWBP_MainMenu_Technology_Content_C* K2Node_DynamicCast_AsWBP_Main_Menu_Technology_Content, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_GetBindedTechnologyName_technologyName, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsUnlockRecipeTechnology_ReturnValue);
	class UWidget* CustomNavi_Up(enum class EUINavigation Navigation, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UWidget* CallFunc_GetCustomNavigationTarget_Widget);
	void GetCustomNavigationTarget(int32 TargetListOffset, int32 NowListIndex, class UWidget** Widget, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetButtonIndex_Index, int32 CallFunc_Array_Length_ReturnValue, class UWBP_MainMenu_Technology_List_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetButtonNum_Num, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UWidget* CallFunc_GetFocusTargetByIndex_Widget);
	class UWidget* CustomNavi_Down(enum class EUINavigation Navigation, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UWidget* CallFunc_GetCustomNavigationTarget_Widget);
	void OnHoveredAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget, class UWBP_MainMenu_Technology_List_C* ListWidget);
	void OnUnhoveredAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
	void OnClickedAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
	void GetTopFocusTarget(class UWidget** Target, class UWBP_MainMenu_Technology_List_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Get_Top_Focus_Target_Target, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetupTechnologyList(const struct FDateTime& NewLocalVar, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalMilliseconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_MainMenu_Technology_List_C* CallFunc_Create_ReturnValue, const struct FF_PalUITechnologyDataMapContent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast);
	void CreateTechnologyMap(const TArray<class FName>& TmpTechnologyNameArray, bool CallFunc_IsClientDedicatedServer_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, TArray<class FName>& CallFunc_GetRecipeTechnologyRowNameArray_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, const struct FPalTechnologyRecipeUnlockDataTableRow& CallFunc_GetRecipeTechlonogy_ReturnValue, const struct FF_PalUITechnologyDataMapContent& K2Node_MakeStruct_F_PalUITechnologyDataMapContent, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Min_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, const struct FF_PalUITechnologyDataMapContent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FF_PalUITechnologyDataMapContent& K2Node_Copy_ReturnValue, const struct FF_PalUITechnologyDataMapContent& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Map_Contains_ReturnValue);
	void Setup();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_MainMenu_Technology_00(int32 EntryPoint);
	void OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
	void OnHoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
	void OnClickedTchnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
};

}


