#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x4D0 - 0x430)
// WidgetBlueprintGeneratedClass WBP_PalStatus.WBP_PalStatus_C
class UWBP_PalStatus_C : public UPalUICharacterStatus
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Canvas_CaptureImage;                               // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Floor;                                       // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Floor_1;                                     // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_PalReflection;                               // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_NothingPal;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_00_C*                WBP_MainMenu_Pal_00;                               // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalMonsterInframeRender_C*        WBP_PalInframeRender;                              // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterHandle*> DisplayHandles;                                    // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTextureRenderTarget2D*                Render_Target;                                     // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        LastShowHandleIndex;                               // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastShowRenderPalIndex;                            // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    ToParameterDetailAction;                           // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  ToParameterDetailActionHandle;                     // 0x498(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FPalDataTableRowName_UIInputAction    ToSkillDetailAction;                               // 0x49C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  ToSkillDetailActionHandle;                         // 0x4A4(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsOnePalModel;                                     // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalDataTableRowName_UIInputAction    DropPalAction;                                     // 0x4AC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  DropPalActionHandle;                               // 0x4B4(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UPalIndividualCharacterHandle*         LastHoveredPalHandle;                              // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DropPalDialogMsgID;                                // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_PalStatus_C* GetDefaultObj();

	void OnClosedDropPalDialog(bool bResult, bool CallFunc_Array_RemoveItem_ReturnValue);
	void OnTriggerDropPal(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, const class FString& CallFunc_GetNickName_outName, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UnhoveredAnyPalPanel_Internal();
	void HoveredAnyPalPanel_Internal(class UPalIndividualCharacterHandle* Handle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Get_Panel_Index_from_Handle_index, bool CallFunc_Get_Panel_Index_from_Handle_isValid, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, bool CallFunc_IsShowingStatusWithList_isShowing, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor);
	void ToSkillDetail();
	void ToParameterDetail();
	void SetupInputAction(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue_1);
	void UnbindInputAction();
	void Is_Editing_Nick_Name(bool* IsEditing);
	void BackToList();
	void ShouldBackList(bool* ShouldBack, bool CallFunc_IsShowingStatusWithList_isShowing);
	void Setup_One_Pal(class UPalIndividualCharacterHandle* CharacterHandle, TArray<class UPalIndividualCharacterHandle*>& K2Node_MakeArray_Array, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetRestoreFocusSkillPanelTarget_TargetWidget, bool CallFunc_IsShowingStatusWithList_isShowing);
	void Get_Panel_Index_from_Handle(class UPalIndividualCharacterHandle* Handle, int32* Index, bool* IsValid, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Setup_MultiPal(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Setup_NothingPal();
	void Setup(TArray<class UPalIndividualCharacterHandle*>& Handles, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void ClampInputNickName(class FText InText, class FText* ClampedNickName, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Left_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void NickNameFinalCheck(class FText InText, enum class ETextCommit TextCommit, class FText* FinalNickName, class FText CallFunc_ClampInputNickName_clampedNickName, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_0_OnClickedAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_1_OnHoveredAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
	void Destruct();
	void OnCompletedCaptureActorSetup();
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_3_OnCommitedNickName__DelegateSignature(class FText NewNickName);
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_5_OnSelectedChangeActiveSkill__DelegateSignature(class UPalIndividualCharacterHandle* TargetHandle, enum class EPalWazaID ChangeWazaID, enum class EPalWazaID NewWazaID);
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_4_OnRequestedRemoveWaza__DelegateSignature(enum class EPalWazaID WazaID, class UPalIndividualCharacterHandle* TargetHandle);
	void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_2_OnUnhoveredAnyPalPanel__DelegateSignature();
	void ExecuteUbergraph_WBP_PalStatus(int32 EntryPoint, class UPalIndividualCharacterHandle* K2Node_ComponentBoundEvent_handle, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterHandle* K2Node_ComponentBoundEvent_handle_1, int32 CallFunc_Get_Panel_Index_from_Handle_index, bool CallFunc_Get_Panel_Index_from_Handle_isValid, class FText K2Node_ComponentBoundEvent_newNickName, class FText CallFunc_NickNameFinalCheck_finalNickName, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, class UPalIndividualCharacterHandle* K2Node_ComponentBoundEvent_TargetHandle_1, enum class EPalWazaID K2Node_ComponentBoundEvent_ChangeWazaID, enum class EPalWazaID K2Node_ComponentBoundEvent_NewWazaID, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPalWazaID K2Node_ComponentBoundEvent_WazaID, class UPalIndividualCharacterHandle* K2Node_ComponentBoundEvent_TargetHandle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


