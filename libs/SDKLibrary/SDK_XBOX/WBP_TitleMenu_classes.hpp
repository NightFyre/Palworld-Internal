#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x390 - 0x278)
// WidgetBlueprintGeneratedClass WBP_TitleMenu.WBP_TitleMenu_C
class UWBP_TitleMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_TitleClose;                                    // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_TitleOpen;                                     // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_118;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_EarlyAccess;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Ver;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_Ver_UserInfo;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*               WBP_Title_MenuButton_Credit;                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*               WBP_Title_MenuButton_ExitGame;                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*               WBP_Title_MenuButton_News;                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*               WBP_Title_MenuButton_Option;                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*               WBP_Title_MenuButton_StartLocalGame;               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*               WBP_Title_MenuButton_StartMultiGame_InviteCode;    // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*               WBP_Title_MenuButton_StartMultiGame_JoinServer;    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Title_MenuButton_C*               WBP_Title_MenuButton_Tips;                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedMenu;                                     // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FString, class FString>           BuildConfigDisplayTextMap;                         // 0x300(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   EarlyAccessDialogMsgID_GDK;                        // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EarlyAccessMsgID_GDK;                              // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   EarlyAccessMsgID_Windows;                          // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ServerNoticeMsgID;                                 // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_TitleMenu_C* GetDefaultObj();

	void GetTopButton(class UWidget** TargetWidget);
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_ExitGame_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_Tips_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_StartMultiGame_InviteCode_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_StartMultiGame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_Option_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_News_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_Credit_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__WBP_TitleMenu_WBP_Title_MenuButton_StartLocalGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ________(bool bResult);
	void ExecuteUbergraph_WBP_TitleMenu(int32 EntryPoint, bool CallFunc_IsXSX_ReturnValue, class UPocketpairUserSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UPocketpairUserInfo* CallFunc_GetLocalUserInfo_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalGameInstance* K2Node_DynamicCast_AsPal_Game_Instance, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetOnlineSubsystemName_ReturnValue, const class FString& CallFunc_GetNickname_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_GetBuildConfiguration_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsMultiplayRestricted_ReturnValue, const class FString& CallFunc_GetDisplayVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsCanPlayDedicatedServer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, bool CallFunc_IsGDK_ReturnValue, bool CallFunc_IsCanOpenExternalWebSite_ReturnValue, bool CallFunc_IsCanPlayInviteCode_ReturnValue, bool CallFunc_IsCanPlaySinglePlay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bResult, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, bool CallFunc_IsXB1_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnClickedMenu__DelegateSignature(class UWBP_Title_MenuButton_C* ButtonWidget);
};

}


