#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x598 - 0x578)
// WidgetBlueprintGeneratedClass WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C
class UWBP_PlayerSideInfo_Separated_C : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Ingame_PlayerGauge_Separated_C*   WBP_Ingame_PlayerGauge_Separated;                  // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          CheckCaptureCountTimerHandle;                      // 0x588(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CheckFirstActivationPalTimerHandle;                // 0x590(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerSideInfo_Separated_C* GetDefaultObj();

	void OnTimer_CheckActivationOtomo(class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void DisableFirstSummonPalGuide();
	void EnableFirstSummonPalGuide(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnTimer_CheckCaptureCount(class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetupFirstPalThrowGuide(class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Map_Length_ReturnValue, class UPalPlayerRecordData* CallFunc_GetLocalRecordData_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void OnUpdateUsableHandFlag(bool CanUseLeftHandFlag, bool CanUseRightHandFlag);
	void OnEndAim();
	void OnAim();
	void OnChangedBodyTenperatureState(enum class EPalBodyTemperatureState BodyState, bool K2Node_SwitchEnum_CmpSuccess);
	void OnChangedTenperatureRegistRate(int32 NextResistHeat, int32 NextResistCold);
	void OnGetOff(class AActor* RideActor);
	void OnRideon(class AActor* RideActor);
	void Setup(class APalPlayerCharacter* Palmi, class UPalTechnologyData* CallFunc_GetLocalTechnologyData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalBodyTemperatureComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UPalItemSlot* CallFunc_TryGetItemSlotFromEquipmentType_outSlot, bool CallFunc_TryGetItemSlotFromEquipmentType_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UPalRiderComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_IsValid_ReturnValue_5, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNowSelectedIndex_ReturnValue, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, const struct FFixedPoint64& CallFunc_GetShieldMaxHP_ReturnValue, const struct FFixedPoint64& CallFunc_GetShieldHP_ReturnValue, bool CallFunc_IsValid_ReturnValue_9);
	void OnUpdatePlayerInventory(class UPalItemContainer* Container);
	void OnUpdatePlayerEquipment(class UPalItemSlot* ItemSlot, enum class EPalPlayerEquipItemSlotType SlotType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnDamagePlayer(const struct FPalDamageResult& DamageResult);
	void OnChangeOtomoIndex(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue);
	void OnChangedLoadoutIndex(enum class EPalPlayerInventoryType InventoryType, int32 Index, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class FName CallFunc_GetNowEquipedBallItemID_OutBallItemID, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_CountItemNum_ReturnValue);
	void OnChangedTemperature(int32 NextTemperature);
	void OnInitialized();
	void Destruct();
	void UpdateHunger_Binded(double NowHunger, double NowMaxHunger);
	void ExecuteUbergraph_WBP_PlayerSideInfo_Separated(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_CustomEvent_nowHunger, double K2Node_CustomEvent_nowMaxHunger, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Divide_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


