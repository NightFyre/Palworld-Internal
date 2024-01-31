#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x480 - 0x278)
// WidgetBlueprintGeneratedClass WBP_CharaCre.WBP_CharaCre_C
class UWBP_CharaCre_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_PlayerNameEdit_OffToOn;                        // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_PlayerName;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_85;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_CautionBase;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_CautionIcon;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_L;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_R;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PlayerName;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            WBP_CharaCre_MenuButton_Body;                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            WBP_CharaCre_MenuButton_Finish;                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            WBP_CharaCre_MenuButton_Hair;                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            WBP_CharaCre_MenuButton_Head;                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            WBP_CharaCre_MenuButton_Preset;                    // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            WBP_CharaCre_MenuButton_Voice;                     // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton_65;                               // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonScrollList_C*            WBP_PalCommonScrollList_Setting;                   // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnChangedTab;                                      // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CharaCre_ScrollBoxContentSet_C*   ScrollBoxContentSet;                               // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnLeftRotationButtonClicked;                       // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRightRotationButtonClicked;                      // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangedSkinColor;                                // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangedTorsoSize;                                // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangedLegSize;                                  // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangedArmSize;                                  // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangedEyeColor;                                 // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangedBrowColor;                                // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangedHairColor;                                // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSelectedBodyMesh;                                // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSelecteddHeadMesh;                               // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSelectedHairMesh;                                // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedCategoryButton;                           // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CharaCre_MenuButton_C*            LastClickedButton;                                 // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNotifyOpenSelectColorWindow;                     // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNotifyCloseSelectColorWIndow;                    // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedEditNameButton;                           // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSelectedEyeMaterial;                             // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedCompleteButton;                           // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSelectedPreset;                                  // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangedVoiceID;                                  // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_CharaCre_C* GetDefaultObj();

	void RequestPlaySampleVoice(int32 VoiceID);
	void OnSelectedVoiceID_Internal(int32 VoiceID);
	void OnSelectedPreset_Internal(class FName PresetName);
	class UWidget* CustomNavi_ToCategoryTop(enum class EUINavigation Navigation);
	void GetSelectedEyeHSV(struct FLinearColor* HSV, const struct FLinearColor& CallFunc_GetSelectedEyeHSV_HSV);
	void OnSelectedEyeMaterial_Internal(class FName BindedName);
	void SetEnableNameEdit(bool IsEnable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetPlayerName(class FText NewName);
	void OnNotifyClosenSelectColorWindow_Internal();
	void OnNotifyOpenSelectColorWindow_Internal();
	class UWidget* CustomNavi_ToNameChange(enum class EUINavigation Navigation, bool Temp_bool_Variable, class UWidget* Temp_object_Variable, bool CallFunc_IsVisible_ReturnValue, class UWidget* K2Node_Select_Default);
	void SetEnableSettingScrollList(bool IsEnable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void GetCategoryButtonByCategory(enum class E_UICharacterMakeCategory CategoryType, class UWBP_CharaCre_MenuButton_C** Button, bool K2Node_SwitchEnum_CmpSuccess);
	void OnClickedCategoryButton_Internal(class UWBP_CharaCre_MenuButton_C* Button, enum class E_UICharacterMakeCategory CallFunc_GetBindedCategory_CategoryType, bool CallFunc_IsValid_ReturnValue);
	void GetRestoreFocusTarget(enum class E_UICharacterMakeCategory CategoryType, class UWidget** Widget, class UWidget* CallFunc_GetRestoreFocusTarget_Widget);
	void OnClickedHairMesh_Internal(class FName BindedName);
	void OnClickedHeadMesh_Internal(class FName BindedName);
	void OnClickedBodyMesh_Internal(class FName BindedName);
	void OnChangedHairColor_Internal(const struct FLinearColor& Color);
	void OnChangedBrowColor_Internal(const struct FLinearColor& Color);
	void OnChangedEyeColor_Internal(const struct FLinearColor& Color);
	void OnChangedArmSizeInternal(double Value);
	void OnChangedLegSize_Internal(double Value);
	void OnChangedTorsoSize_Internal(double Value);
	void GetTopFocusTarget(enum class E_UICharacterMakeCategory NewCategory, class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget);
	void OnChangedArmSize_Internal(float Value, double K2Node_CallDelegate_Size_ImplicitCast);
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void ChangeMakeCategory(enum class E_UICharacterMakeCategory NewCategory);
	void Setup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12);
	void OnChangedSkinColor_Internal(const struct FLinearColor& Color);
	void OnChangedTab_Internal(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget, class UWBP_CharaCre_Tab_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Tab, bool K2Node_DynamicCast_bSuccess);
	void AnmEvent_NoRotation();
	void Construct();
	void OnInitialized();
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CommonButton_65_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Finish_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Preset_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Voice_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button);
	void ExecuteUbergraph_WBP_CharaCre(int32 EntryPoint, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharaCre_ScrollBoxContentSet_C* CallFunc_Create_ReturnValue, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button_5, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button_4, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button_2, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button_1);
	void OnChangedVoiceID__DelegateSignature(int32 VoiceID);
	void OnSelectedPreset__DelegateSignature(class FName PresetName);
	void OnClickedCompleteButton__DelegateSignature();
	void OnSelectedEyeMaterial__DelegateSignature(class FName EyeMaterialName);
	void OnClickedEditNameButton__DelegateSignature();
	void OnNotifyCloseSelectColorWIndow__DelegateSignature();
	void OnNotifyOpenSelectColorWindow__DelegateSignature();
	void OnClickedCategoryButton__DelegateSignature(enum class E_UICharacterMakeCategory CategoryType);
	void OnSelectedHairMesh__DelegateSignature(class FName MeshPresetRowName);
	void OnSelecteddHeadMesh__DelegateSignature(class FName MeshPresetRowName);
	void OnSelectedBodyMesh__DelegateSignature(class FName MeshPresetRowName);
	void OnChangedHairColor__DelegateSignature(const struct FLinearColor& Color);
	void OnChangedBrowColor__DelegateSignature(const struct FLinearColor& Color);
	void OnChangedEyeColor__DelegateSignature(const struct FLinearColor& Color);
	void OnChangedArmSize__DelegateSignature(double Size);
	void OnChangedLegSize__DelegateSignature(double Size);
	void OnChangedTorsoSize__DelegateSignature(double Size);
	void OnChangedSkinColor__DelegateSignature(const struct FLinearColor& Color);
	void OnRightRotationButtonClicked__DelegateSignature();
	void OnLeftRotationButtonClicked__DelegateSignature();
	void OnChangedTab__DelegateSignature(class UWBP_CharaCre_Tab_C* TabWidget);
};

}


