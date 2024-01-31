#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x318 - 0x278)
// WidgetBlueprintGeneratedClass WBP_PlayerListItem.WBP_PlayerListItem_C
class UWBP_PlayerListItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_Network_OnToOff;                               // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_RoleTextColor;                                 // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_NormalToFocus;                                 // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Base;                                              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PlayerName;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*             WBP_PalInvisibleButton;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   OnlineMsgID;                                       // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   OfflineMsgID;                                      // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalUIGuildMemberDisplayInfo          MyDisplayInfo;                                     // 0x2E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGuid                                 Player_UId;                                        // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerListItem_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** TargetWidget);
	void GetDisplayInfo(struct FPalUIGuildMemberDisplayInfo* DisplayInfo);
	void SetPlayerName(const class FString& PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Setup(const class FString& PlayerName, const struct FGuid& PlayerUId);
	void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ________(bool bResult);
	void BndEvt__WBP_PlayerListItem_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_PlayerListItem(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_ClipboardCopy_ReturnValue, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bResult, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_ClipboardCopy_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void OnHovered__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
	void OnClicked__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
};

}


