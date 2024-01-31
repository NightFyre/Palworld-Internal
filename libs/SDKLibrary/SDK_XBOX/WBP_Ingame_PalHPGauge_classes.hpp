#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x122 (0x69A - 0x578)
// WidgetBlueprintGeneratedClass WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C
class UWBP_Ingame_PalHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_KeyGuideAttentionLOOP;                         // 0x580(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_PalActive;                                     // 0x588(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_HoldOut;                                       // 0x590(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_HoldIn;                                        // 0x598(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_PalSelect_R;                                   // 0x5A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_PalSelect_L;                                   // 0x5A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_HP;                                         // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_PalStatus;                                  // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_Slot_Center;                                // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_SlotL1;                                     // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_SlotL2;                                     // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_SlotR1;                                     // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_SlotR2;                                     // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ActiveCircle_Center;                         // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ActiveCircle_L1;                             // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ActiveCircle_L2;                             // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ActiveCircle_R1;                             // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ActiveCircle_R2;                             // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_HPGauge;                               // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_HPGauge_Back;                          // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_LvValue;                                      // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PalName;                                      // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*         WBP_PalCommonCharacterSlot;                        // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*         WBP_PalCommonCharacterSlot_L;                      // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*         WBP_PalCommonCharacterSlot_L2;                     // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*         WBP_PalCommonCharacterSlot_R;                      // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*         WBP_PalCommonCharacterSlot_R2;                     // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                 WBP_PalElementIcon_Double_00;                      // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                 WBP_PalElementIcon_Double_01;                      // 0x660(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalElementIcon_C*                 WBP_PalElementIcon_Single;                         // 0x668(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*        WBP_PlayerInputKeyGuideIcon_Decrement_1;           // 0x670(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*        WBP_PlayerInputKeyGuideIcon_Increment;             // 0x678(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*        WBP_PlayerInputKeyGuideIcon_ThrowPal;              // 0x680(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*            DelayHPGauge;                                      // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedActivatedOtomoID;                            // 0x690(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedSelectedOtomoIndex;                          // 0x694(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEquipedOtomoThrowWeapon;                         // 0x698(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsThrowPalActiveAnimeFinished;                     // 0x699(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Ingame_PalHPGauge_C* GetDefaultObj();

	void Update_Level_Binded(int32 NewLevel, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default);
	void GetPrevOtomoSlot(class UPalIndividualCharacterSlot** Slot, bool* IsEmpty, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, int32 CallFunc_GetPreviousOtomoSlotID_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void GetNextOtomoSlot(class UPalIndividualCharacterSlot** Slot, bool* IsEmpty, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, int32 CallFunc_GetNextOtomoSlotID_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void OnDecrementedOtomo_FromController();
	void OnIncrementedOtomo_FromController();
	void OnStartAim();
	void OnEndAim(bool CallFunc_BooleanOR_ReturnValue);
	void OnChangedWeapon(class APalWeaponBase* Weapon, class ABP_ThrowPalWeapon_C* K2Node_DynamicCast_AsBP_Throw_Pal_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnDeactivatedOtomo();
	void OnActivatedOtomo(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue);
	void UpdateNickName_Binded(const class FString& NewNickName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue);
	void SetElementType(enum class EPalElementType Type1, enum class EPalElementType Type2, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void On_Update_Otomo_Index(int32 TmpSelectedIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue);
	void UpdateOtomoList(class UPalOtomoHolderComponentBase* TmpOtomoholder, class UPalIndividualCharacterSlot* CallFunc_GetPrevOtomoSlot_Slot, bool CallFunc_GetPrevOtomoSlot_IsEmpty, class UPalIndividualCharacterSlot* CallFunc_GetNextOtomoSlot_Slot, bool CallFunc_GetNextOtomoSlot_IsEmpty, int32 CallFunc_GetSelectedOtomoID_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsALLEmpty_ReturnValue, int32 CallFunc_GetOtomoCount_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1);
	void OnUpdateOtomoSlot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void Setup(class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class ABP_PalPlayerController_C* K2Node_DynamicCast_AsBP_Pal_Player_Controller, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess_1);
	void Finished_1811421C440B0864689BD0B33F2F9D51();
	void Finished_9B82422440F7C97D278AB2B15E642EE3();
	void Finished_1F59E19C478A6C6286266A9C072DA24B();
	void AnmEvent_OtomoActive();
	void AnmEvent_OtomoDeactivate();
	void AnmEvent_NextOtomo();
	void AnmEvent_PrevOtomo();
	void AnmEvent_ThrowActivate();
	void AnmEvent_ThrowOtomoDeactive();
	void AnmEvent_EnableSummonPalGuide(bool EnableFlag);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void CustomEvent(int32 AddLevel, int32 NowLevel);
	void OnSetup_AfterCreatedPlayer();
	void ExecuteUbergraph_WBP_Ingame_PalHPGauge(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalUIDelayGaugeCalculator* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool K2Node_CustomEvent_EnableFlag, int32 CallFunc_GetPreviousOtomoSlotID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetNextOtomoSlotID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_GetSelectedOtomoID_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, int32 K2Node_CustomEvent_addLevel, int32 K2Node_CustomEvent_nowLevel, class UPalIndividualCharacterParameter* CallFunc_GetIndividualCharacterParameterByActor_ReturnValue);
};

}


