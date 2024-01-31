#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2F0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_MainMenu_Technology_List.WBP_MainMenu_Technology_List_C
class UWBP_MainMenu_Technology_List_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_LockToUnlock;                                  // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_TechnologyButton;                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Line;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_TechnologyLevel;                              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Technology_Content_C*    WBP_MainMenu_Technology_Content_Boss;              // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedTechnology;                               // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoveredTechnoogy;                                // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhoveredTechnology;                             // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CachedPlayerLevel;                                 // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedTechnologyLevel;                             // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_MainMenu_Technology_Content_C*> TechnologyContents;                                // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_Technology_List_C* GetDefaultObj();

	void UpdateAllButtonDetail(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_MainMenu_Technology_Content_C* K2Node_DynamicCast_AsWBP_Main_Menu_Technology_Content, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateListActive(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnUpdatePlayerLevel(int32 AddLevel, int32 NowLevel, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_MainMenu_Technology_Content_C* K2Node_DynamicCast_AsWBP_Main_Menu_Technology_Content, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void UnregisterPlayerEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void RegisterPlayerEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_GetLevel_ReturnValue);
	void UnregisterAllButtonEvent(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_MainMenu_Technology_Content_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void GetFocusTargetByIndex(int32 ButtonIndex, class UWidget** Widget, class UWBP_MainMenu_Technology_Content_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void GetButtonIndex(class UWBP_MainMenu_Technology_Content_C* ButtonWidget, int32* Index, int32 CallFunc_Array_Find_ReturnValue);
	void GetButtonNum(int32* Num, int32 CallFunc_Array_Length_ReturnValue);
	void OnUnhoveredTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
	void OnHoveredTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
	void OnClickedTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
	void RegisterButtonEvent(class UWBP_MainMenu_Technology_Content_C* TechnologyContentWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void Get_Top_Focus_Target(class UWidget** Target, class UWBP_MainMenu_Technology_Content_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void SetTechnologyLevel(int32 Level, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetTechnologyData(const struct FF_PalUITechnologyDataMapContent& DisplayTechnologyData, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, const struct FPalTechnologyRecipeUnlockDataTableRow& CallFunc_GetRecipeTechlonogy_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_MainMenu_Technology_Content_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AnmEvent_Unlock();
	void AnmEvent_Lock();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_MainMenu_Technology_List(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
	void OnHoveredTechnoogy__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget, class UWBP_MainMenu_Technology_List_C* ListWidget);
	void OnClickedTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
};

}


