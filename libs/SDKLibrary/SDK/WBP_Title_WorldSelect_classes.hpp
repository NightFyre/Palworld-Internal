#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B0 (0x628 - 0x278)
// WidgetBlueprintGeneratedClass WBP_Title_WorldSelect.WBP_Title_WorldSelect_C
class UWBP_Title_WorldSelect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Multi_OpenMenu;                                // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_Solo_OpenMenu;                                 // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_WorldSearchTextColor;                          // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_MultiMode;                                     // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_SoloMode;                                      // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_JoinServer;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_WorldMenu;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_JoinByIP;                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_ServerSearch;                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          HorizontalBoxJoinByIP;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBoxRegion;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          HorizontalBoxWorldSearch;                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBoxWorldSelectHead_LocalWorldList;       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBoxWorldSelectHead_ServerList;           // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_22;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_43;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_OpenDirectory;                             // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             PasswordCheckbox_1;                                // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     RequestLoading;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             VersionIgnoreCheckbox;                             // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildHeadButton_C*                WBP_JoinByIPButton;                                // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildHeadButton_C*                WBP_NextButton;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*            WBP_PalCommonScrollList;                           // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton_OpenDirectory;              // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildHeadButton_C*                WBP_SearchButton;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildHeadButton_C*                WBP_SortoComboBox;                                 // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildHeadButton_C*                WBP_SortoComboBox_Region;                          // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SettingsButton_C*           WBP_Title_SettingsButton_DeleteCharacter;          // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SettingsButton_C*           WBP_Title_SettingsButton_DeleteWorld;              // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SettingsButton_C*           WBP_Title_SettingsButton_Start;                    // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_SettingsButton_C*           WBP_Title_SettingsButton_WorldSetting;             // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSelectButton_C*        WBP_Title_WorldSelectButton_ServerList_Community;  // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSelectButton_C*        WBP_Title_WorldSelectButton_ServerList_Help_Server; // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSelectButton_C*        WBP_Title_WorldSelectButton_ServerList_History;    // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSelectButton_C*        WBP_Title_WorldSelectButton_ServerList_Official;   // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_WorldSelectButton_C*        WBP_Title_WorldSelectButton_ServerList_StatusPage; // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedWorldButton;                              // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedNewWorldButton;                           // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedStartWorldButton;                         // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsOpenedLocalWorldMenu;                            // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Title_WorldSelect_ListContent_C*  CachedLastClickedWorldButton;                      // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedWorldSettingButton;                       // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Title_SettingsButton_C*           CachedLastClickLocalWorldMenuButton;               // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedDeleteWorldButton;                        // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedServerButton;                             // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   ServerSearchHintTextMsgID;                         // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ServerSearchButtonMsgID;                           // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            OnClickedServerSearchButton;                       // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSelectedServerSortType;                          // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<enum class EPalUIServerListSortType, struct FDataTableRowHandle> SortTypeMsgIDMap;                                  // 0x468(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, enum class EPalUIServerListSortType> SortTypeStringTypeMap;                             // 0x4B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPalUIServerListFilterType, struct FDataTableRowHandle> FilterTypeMsgIDMap;                                // 0x508(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, enum class EPalUIServerListFilterType> FilterStringTypeMap;                               // 0x558(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnClickedServerList_OfficialButton;                // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedServerList_CommunityButton;               // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedServerList_HistoryButton;                 // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   ServerNextButtonMsgID;                             // 0x5D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            OnClickedServerList_NextButton;                    // 0x5E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   ServerConnectButtonMsgID;                          // 0x5F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            OnClicked_JoinByIPButton;                          // 0x608(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedOpenDirectoryButton;                      // 0x618(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Title_WorldSelect_C* GetDefaultObj();

	void GetSelectRegion(class FString* Region, const class FString& CallFunc_GetSelectedOption_ReturnValue);
	void SetRegions(TArray<class FString>& Regions);
	class UWidget* CustomNavi_ToServerTop(enum class EUINavigation Navigation, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Title_WorldSelect_ListContent_C* K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content, bool K2Node_DynamicCast_bSuccess);
	void IsEditingSearchWord(bool* IsEditing, bool CallFunc_HasKeyboardFocus_ReturnValue, bool CallFunc_HasKeyboardFocus_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void FlterTypeStringToFilterType(const class FString& FilterTypeString, enum class EPalUIServerListFilterType* FilterType, enum class EPalUIServerListFilterType CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SortTypeStringToSortType(const class FString& SortTypeString, enum class EPalUIServerListSortType* SortType, enum class EPalUIServerListSortType CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetupComboboxStringData(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue_1, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FDataTableRowHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1);
	void GetServerSearchWord(class FString* Word);
	void OnClickedServerButton_Internal(class UWBP_Title_WorldSelect_ListContent_C* Widget);
	void Close_Local_World_Menu(bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OpenLocalWorldMenu(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void GetFocusTargetForServerList(class UWidget** Widget);
	void GetFocusTargetForLocalWorldList(class UWidget** TargetWidget, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* K2Node_DynamicCast_AsWBP_Title_World_Select_Create_World_List_Content, bool K2Node_DynamicCast_bSuccess, class UWBP_Title_WorldSelect_ListContent_C* K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content, bool K2Node_DynamicCast_bSuccess_1);
	void AddServerList(TArray<struct FPalUIServerDisplayData>& ServerDisplayData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UWBP_Title_WorldSelect_ListContent_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FPalUIServerDisplayData& CallFunc_Array_Get_Item, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnClickedNewWorldButton_Internal(class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* Widget);
	void OnClickedWorldButton_Internal(class UWBP_Title_WorldSelect_ListContent_C* Widget, bool CallFunc_IsValid_ReturnValue);
	void AddLocalWorldDisplayData(TArray<struct FPalUILocalWorldDisplayData>& DIsplayDataArray, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, const struct FPalUILocalWorldDisplayData& CallFunc_Array_Get_Item, class UPalSaveGameManager* CallFunc_GetSaveGameManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetMaxWorldSaveDataNum_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class UScrollBox* CallFunc_GetScrollBox_ScrollBox_1, class UWBP_Title_WorldSelect_ListContent_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void AnmEvent_ToStartGameMode();
	void AnmEvent_ToJoinServerMode();
	void BndEvt__WBP_Title_WorldSelect_WBP_Title_WorldSelectButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_Title_WorldSelect_WBP_Title_WorldSelectButton_ServerList_History_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_Title_WorldSelect_WBP_Title_WorldSelectButton_ServerList_History_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_Title_WorldSelect_WBP_Title_WorldSelectButton_ServerList_StatusPage_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__WBP_Title_WorldSelect_WBP_Title_WorldSelectButton_ServerList_Community_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__WBP_Title_WorldSelect_WBP_SortoComboBox_Region_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature(const class FString& SelectedOption);
	void BndEvt__WBP_Title_WorldSelect_WBP_NextButton_K2Node_ComponentBoundEvent_7_OnClickedSingleButton__DelegateSignature();
	void Construct();
	void Destruct();
	void BndEvt__WBP_Title_WorldSelect_WBP_Title_SettingsButton_DeleteWorld_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_Title_WorldSelect_WBP_Title_SettingsButton_WorldSetting_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_Title_WorldSelect_WBP_Title_SettingsButton_Start_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void OnInitialized();
	void BndEvt__WBP_Title_WorldSelect_WBP_GuildHeadButton_3_K2Node_ComponentBoundEvent_3_OnSelected__DelegateSignature(const class FString& SelectedOption);
	void BndEvt__WBP_Title_WorldSelect_WBP_SearchButton_K2Node_ComponentBoundEvent_4_OnClickedSingleButton__DelegateSignature();
	void SearchCommit(class FText& Text);
	void BndEvt__WBP_Title_WorldSelect_WBP_JoinByIPButton_K2Node_ComponentBoundEvent_5_OnClickedSingleButton__DelegateSignature();
	void BndEvt__WBP_Title_WorldSelect_WBP_PalInvisibleButton_OpenDirectory_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Title_WorldSelect(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_SelectedOption_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, const class FString& K2Node_ComponentBoundEvent_SelectedOption, enum class EPalUIServerListSortType CallFunc_SortTypeStringToSortType_SortType, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_CustomEvent_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class FText CallFunc_GetText_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_IsWindows_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnClickedOpenDirectoryButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* SelectedWorldButton);
	void OnClicked_JoinByIPButton__DelegateSignature(const class FString& Address);
	void OnClickedServerList_NextButton__DelegateSignature();
	void OnClickedServerList_HistoryButton__DelegateSignature();
	void OnClickedServerList_CommunityButton__DelegateSignature();
	void OnSelectedServerSortType__DelegateSignature(enum class EPalUIServerListSortType SortType);
	void OnClickedServerSearchButton__DelegateSignature(const class FString& SearchWord);
	void OnClickedServerButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* Widget);
	void OnClickedServerList_OfficialButton__DelegateSignature();
	void OnClickedDeleteWorldButton__DelegateSignature();
	void OnClickedWorldSettingButton__DelegateSignature();
	void OnClickedStartWorldButton__DelegateSignature();
	void OnClickedNewWorldButton__DelegateSignature(class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* ButtonWidget);
	void OnClickedWorldButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* ButtonWidget);
};

}


