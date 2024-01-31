#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x220 (0x678 - 0x458)
// WidgetBlueprintGeneratedClass WBP_JoinGame.WBP_JoinGame_C
class UWBP_JoinGame_C : public UPalUIJoinGameBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_69;                                          // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalDebugInfo_C*                   WBP_PalDebugInfo;                                  // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldMenu_Head_C*           WBP_Title_WorldMenu_Head;                          // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSelect_C*              WBP_Title_WorldSelect;                             // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EPalUIServerListSortType          SortType;                                          // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalUIServerListFilterType        ServerFilterType;                                  // 0x481(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C8D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUIServerDisplayData               ClickedServerInfo;                                 // 0x488(0x1A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   JoinServerDialogMsgID;                             // 0x628(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSoftObjectPtr<class UWBP_Title_WorldSelect_ListContent_C> LastClickedServerButton;                           // 0x638(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	TArray<class FString>                        OfficialServerAddress;                             // 0x668(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_JoinGame_C* GetDefaultObj();

	void RequestGetServerListBP(enum class EPalUIServerListFilterType Type, const class FString& Region, bool IsCleanCache, bool NextPage);
	void OnCloseJoinServerDialog(bool bResult, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UWBP_Title_WorldSelect_ListContent_C* K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content, bool K2Node_DynamicCast_bSuccess);
	void OpenJoinServerDialog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnCancelAction(bool CallFunc_IsEditingSearchWord_IsEditing);
	class UWidget* BP_GetDesiredFocusTarget(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UWidget* CallFunc_GetFocusTargetForServerList_Widget, class UWBP_Title_WorldSelect_ListContent_C* K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void DisplayServer(const class FString& SearchWord, const struct FPalUIServerDataCollectInfo& K2Node_MakeStruct_PalUIServerDataCollectInfo, TArray<struct FPalUIServerDisplayData>& CallFunc_CollectServerDisplayInfo_OutServerInfo, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Completed_B0C690024643A528EA9A2B9DAEA567A3(const class FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
	void Passworde__(class UPalHUDDispatchParameterBase* Param);
	void OnCompleteGetServerListEvent();
	void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_2_OnClickedServerList_OfficialButton__DelegateSignature();
	void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_7_OnClickedServerList_CommunityButton__DelegateSignature();
	void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_11_OnClickedServerList_HistoryButton__DelegateSignature();
	void OnChangeVersionIgnoreCheckbox(bool bIsChecked);
	void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedServerButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* Widget);
	void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedServerSearchButton__DelegateSignature(const class FString& SearchWord);
	void NextButton();
	void OnClicked_JoinByIPButton(const class FString& Address);
	void ________(bool bResult);
	void Construct();
	void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnSelectedServerSortType__DelegateSignature(enum class EPalUIServerListSortType SortType);
	void _________0(bool bResult);
	void OnInitialized();
	void _____K_e_(class UPalHUDDispatchParameterBase* Param);
	void ExecuteUbergraph_WBP_JoinGame(int32 EntryPoint, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_Param, const class FString& K2Node_CustomEvent_ResponseBody, bool K2Node_CustomEvent_bResponseOK, int32 K2Node_CustomEvent_ResponseCode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool Temp_bool_Variable, const class FString& Temp_string_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FJsonObjectWrapper& CallFunc_FromString_OutJsonObject, bool CallFunc_FromString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_GetField_OutValue, bool CallFunc_GetField_ReturnValue, TArray<class FString>& CallFunc_GetField_OutValue_1, bool CallFunc_GetField_ReturnValue_1, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UPalHUDDispatchParame_JoinGameInputCode* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGuid& CallFunc_Push_ReturnValue, class UPalHUDDispatchParameterBase* K2Node_CustomEvent_Param_1, const class FString& CallFunc_GetPassword_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_GetSelectRegion_Region, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_bIsChecked, class UWBP_Title_WorldSelect_ListContent_C* K2Node_ComponentBoundEvent_Widget, TSoftObjectPtr<class UWBP_Title_WorldSelect_ListContent_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FPalUIServerDisplayData& CallFunc_GetBindedServerDisplayData_DisplayData, const class FString& K2Node_ComponentBoundEvent_SearchWord, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const class FString& CallFunc_GetSelectRegion_Region_1, const class FString& K2Node_CustomEvent_Address, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool K2Node_CustomEvent_bResult_1, int32 CallFunc_Conv_StringToInt_ReturnValue, enum class EPalUIServerListSortType K2Node_ComponentBoundEvent_SortType, bool K2Node_CustomEvent_bResult, class UPalOptionSubsystem* CallFunc_GetOptionSubsystem_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsChecked_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UPalHUDDispatchParame_JoinGameInputCode* CallFunc_SpawnObject_ReturnValue_1, class UHTTPRequestAsyncFunction* CallFunc_HTTPRequestAsyncFunction_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7);
};

}


