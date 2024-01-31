#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x168 (0x3E0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Guild.WBP_Guild_C
class UWBP_Guild_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Log_NormalToFocus;                             // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_GuildName;                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          GuildMember;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_60;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_NameBase;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_NameBase_1;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Symbol;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_GuildMemberNum;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildButton_C*                    WBP_GuildButton_Leave;                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildButton_C*                    WBP_GuildButton_Rename;                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildHeadButton_C*                WBP_GuildHeadButton;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildHeadButton_C*                WBP_GuildHeadButton_GuildLog;                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*            WBP_PalCommonScrollList_Members;                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*            WBP_PalCommonScrollListLog;                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedEditGuildNameButton;                      // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangedGuildLogCategory;                         // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedGuildMemberButton;                        // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UWBP_Guild_MemberList_C> LastHoveredSoftGuildButton;                        // 0x330(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedLeaveButton;                              // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedGuildSettingButton;                       // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCommiedGuildName;                                // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<struct FGuid, class UWBP_Guild_MemberList_C*> DisplayWidgetMap;                                  // 0x390(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_Guild_C* GetDefaultObj();

	void SetEnableGuildNameEditButton(bool IsEnableFlag, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsUGCFilter_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	class UWidget* CustomNavi_ToGuildLeaveOrNameEdit(enum class EUINavigation Navigation, bool CallFunc_IsVisible_ReturnValue);
	void IsNameEditMode(bool* IsEditing, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetGuildMemberNum(int32 NowMemberNum, int32 MaxMemberNum, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetFocusToExitGuildButton();
	void SetEnableGuildExitButton(bool CanExit);
	class UWidget* CustomNavi_LastHoveredGuildMember(enum class EUINavigation Navigation, bool Temp_bool_Variable, class UWidget* CallFunc_GetTopMemberFocusTarget_TopButton, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess, class UWidget* K2Node_Select_Default);
	void OnHoveredGuildMemberButton_Internal(class UWBP_Guild_MemberList_C* Widget, TSoftObjectPtr<class UWBP_Guild_MemberList_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue);
	void OnClickedGuildMemberButton_Internal(class UWBP_Guild_MemberList_C* Widget);
	void GetTopMemberFocusTarget(class UWidget** TopButton, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess);
	void SetGuildLogCategoryOptions(TArray<class FString>& Options);
	void EndGuildNameEditMode();
	void StartGuildNameMode();
	void RemoveMemberInfo(const struct FGuid& PlayerUId, bool CallFunc_Map_Remove_ReturnValue, class UWBP_Guild_MemberList_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ClearMemberList();
	void UpdateMemberInfo(const struct FGuid& PlayerUId, const struct FPalUIGuildMemberDisplayInfo& NewDisplayInfo, class UWBP_Guild_MemberList_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void AddGuildMemberInfo(const struct FGuid& PlayerUId, const struct FPalUIGuildMemberDisplayInfo& DisplayInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Map_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UScrollBoxSlot* CallFunc_SlotAsScrollBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, bool Temp_bool_Variable, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FMargin& K2Node_Select_Default, class UWBP_Guild_MemberList_C* CallFunc_Create_ReturnValue);
	void AddGuildMemberInfoMap(TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo> DisplayInfoMap, TArray<struct FGuid>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, const struct FPalUIGuildMemberDisplayInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetGuildName(const class FString& InGuildName, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__WBP_Guild_WBP_GuildHeadButton_GuildLog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature(const class FString& SelectedOption);
	void BndEvt__WBP_Guild_WBP_GuildButton_Leave_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void Destruct();
	void BndEvt__WBP_Guild_WBP_GuildButton_Rename_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_Guild(int32 EntryPoint, bool CallFunc_IsUGCFilter_ReturnValue, bool Temp_bool_Variable, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Len_ReturnValue_1, bool Temp_bool_Variable_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedOption, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Left_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText K2Node_Select_Default, const class FString& CallFunc_Left_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default_1);
	void OnCommiedGuildName__DelegateSignature(const class FString& NewName);
	void OnClickedGuildSettingButton__DelegateSignature();
	void OnClickedLeaveButton__DelegateSignature();
	void OnClickedGuildMemberButton__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
	void OnChangedGuildLogCategory__DelegateSignature(const class FString& SelectedCategoryName);
	void OnClickedEditGuildNameButton__DelegateSignature();
};

}


