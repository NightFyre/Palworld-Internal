#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x5B8 - 0x430)
// WidgetBlueprintGeneratedClass WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C
class UWBP_Guild_ForDisplay_C : public UPalUIGuildMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                     CircularThrobber_11;                               // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_20;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Waiting;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Guild_C*                          WBP_Guild;                                         // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildMemberMenu_C*                WBP_GuildMemberMenu;                               // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class E_PalUIGuildMenuLogCategory, struct FDataTableRowHandle> GuildLogCategoryTextMap;                           // 0x460(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, enum class E_PalUIGuildMenuLogCategory> GuildLogStringCategoryMap;                         // 0x4B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   GuildExitDialogMsgID_Admin;                        // 0x500(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   GuildExitDialogMsgID_Warning;                      // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          WaitingExitGuildTimeoutTimerHandle;                // 0x520(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CheckNewGroupTimerHandle;                          // 0x528(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelectingMemberMenu;                             // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   BanPlayerDialogMsgID;                              // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ChangeAdminDialogMsgID;                            // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSoftObjectPtr<class UWBP_Guild_MemberList_C> SelectionPlayerWidget;                             // 0x558(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	struct FTimerHandle                          CheckBanPlayerTimerHandle;                         // 0x588(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CheckbanPlayerTimeoutTimerHandle;                  // 0x590(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 BanPlayerUId;                                      // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ChangeAdminTimeoutTimerHandle;                     // 0x5A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CheckChangeAdminTimerHandle;                       // 0x5B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Guild_ForDisplay_C* GetDefaultObj();

	void CanClose(bool* CanCloseFlag, bool CallFunc_IsNameEditMode_IsEditing, bool CallFunc_BooleanOR_ReturnValue);
	void OnTimer_CheckChangeAdmin(bool CallFunc_IsAdminLocalPlayer_ReturnValue);
	void OnTimer_TimeoutChangeAdmin();
	void OnTimer_CheckBanPlayer(bool CallFunc_IsExistPlayer_ReturnValue);
	void OnTimer_TimeoutBanPlayer();
	void CloseWaitingWindow();
	void OpenWaitingWindow();
	void OnCloseChangeAdminDialog(bool bResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess);
	void OpenChangeAdminDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess, const struct FPalUIGuildMemberDisplayInfo& CallFunc_GetDisplayInfo_DisplayInfo, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnCloseBanPlayerDialog(bool bResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess);
	void OpenBanPlayerDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess, const struct FPalUIGuildMemberDisplayInfo& CallFunc_GetDisplayInfo_DisplayInfo, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void CloseMemberSettingWindow(class UWidget* CallFunc_GetTopMemberFocusTarget_TopButton, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_DynamicCast_AsWBP_Guild_Member_List, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UWidget* CallFunc_GetFocusTarget_TargetWidget);
	void OnTimer_CheckNewGroup_WaitingExitGuild(class UPalGroupGuildBase* CallFunc_GetMyGuild_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnUpdateGroupId_WaitingExitGuild(struct FGuid& NewGroupId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualCharacterParameterByActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnTimer_TimeoutExitGuild();
	void OnClosed_GuildExitDialog(bool bResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualCharacterParameterByActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnClosed_GuildExitFailedDialog_Admin(bool bResult);
	void OpenExitGuildDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsAdminLocalPlayer_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, bool CallFunc_CanExitGuild_ReturnValue);
	void OnUpdatedGuildName(const class FString& NewGuildName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetTopFocusTarget_TargetWidget, class UWidget* CallFunc_GetTopMemberFocusTarget_TopButton);
	void SetupGuildLogCategoryButton(const TArray<class FString>& TmpCategoryString, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class E_PalUIGuildMenuLogCategory>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class E_PalUIGuildMenuLogCategory CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Setup(bool CallFunc_IsAdminLocalPlayer_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo> CallFunc_GetGuildMemberInfo_OutDisplayInfoMap, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetGuildName_OutGuildName);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_0_OnClickedEditGuildNameButton__DelegateSignature();
	void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_3_OnClickedGuildMemberButton__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
	void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_4_OnClickedLeaveButton__DelegateSignature();
	void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_2_OnCommiedGuildName__DelegateSignature(const class FString& NewName);
	void Destruct();
	void OnUpdatedMemberInfo(struct FGuid& PlayerUId, struct FPalUIGuildMemberDisplayInfo& PlayerInfo);
	void OnRemovedMemberInfo(struct FGuid& PlayerUId);
	void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_6_OnClickedChangeAdmin__DelegateSignature();
	void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_7_OnClickedBanPlayer__DelegateSignature();
	void ExecuteUbergraph_WBP_Guild_ForDisplay(int32 EntryPoint, bool CallFunc_IsUGCFilter_ReturnValue, const class FString& K2Node_ComponentBoundEvent_NewName, const class FString& CallFunc_GetGuildName_OutGuildName, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FGuid& K2Node_Event_PlayerUId_1, const struct FPalUIGuildMemberDisplayInfo& K2Node_Event_PlayerInfo, const struct FGuid& K2Node_Event_PlayerUId, class UWidget* CallFunc_GetTopFocusTarget_TargetWidget, bool CallFunc_IsAdminLocalPlayer_ReturnValue, class UWBP_Guild_MemberList_C* K2Node_ComponentBoundEvent_Widget, TSoftObjectPtr<class UWBP_Guild_MemberList_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FPalUIGuildMemberDisplayInfo& CallFunc_GetDisplayInfo_DisplayInfo, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FGuid& CallFunc_GetLocalPlayerUID_ReturnValue, bool CallFunc_NotEqual_GuidGuid_ReturnValue, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo> CallFunc_GetGuildMemberInfo_OutDisplayInfoMap, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, int32 CallFunc_Map_Length_ReturnValue);
};

}


