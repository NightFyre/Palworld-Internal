#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x520 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C
class UWBP_PalCharacterSlotBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalCharacterIconBase_C*           MyIconWidget;                                      // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*           TargetSlot;                                        // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnUpdateSlot;                                      // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSetEmpty;                                        // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSetValidSlot;                                    // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTargetCharacterUpdateHP;                         // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          CheckTargetConditionTimerHandle;                   // 0x460(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LastCombatState;                                   // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNotifyWorkDetail;                                // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNotifyBattleModeChanged;                         // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBeginTargetCharacterSleep;                       // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEndTargetCharacterSleep;                         // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBeginTargetCharacterEat;                         // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEndTargetCharacterEat;                           // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalInstanceID                        SyncId;                                            // 0x4D0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSetRarity;                                       // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUpdateReviveTimer;                               // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PalCharacterSlotBase_C* GetDefaultObj();

	void OnUpdateReviveTimer_Internal(float NowReviveTimer, double K2Node_CallDelegate_NowTimer_ImplicitCast);
	void OnSyncIndividualParameter(const struct FPalInstanceID& InstanceId, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, bool CallFunc_IsValidInstanceID_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsRarePal_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, bool CallFunc_GetIsBoss_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue);
	void UnbindActorEvent(class UPalIndividualCharacterHandle* Handle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void BindActorEvent(class UPalIndividualCharacterHandle* Handle, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_ActionEat_C* K2Node_DynamicCast_AsBP_Action_Eat, bool K2Node_DynamicCast_bSuccess, class UBP_ActionSleep_C* K2Node_DynamicCast_AsBP_Action_Sleep, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnTargetCharacterActionNotify(class UPalActionBase* Action, class FName NotifyName, bool K2Node_SwitchName_CmpSuccess);
	void OnTargetBattleModeChanged(bool bIsBattleMode);
	void UnbindParameterEvent(class UPalIndividualCharacterHandle* Handle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void BindParameterEvent(class UPalIndividualCharacterHandle* Handle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_GetBattleMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_withBuff_ReturnValue, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void CheckTargetCondition(class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsAssignedToAnyWork_ReturnValue);
	void OnUpdateHp(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue, int64 CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1);
	void UnbindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnUpdateSlot_Internal(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValidInstanceID_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsRarePal_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, bool CallFunc_GetIsBoss_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
	void RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C** IconWidget);
	void Setup(class UPalIndividualCharacterSlot* NewTargetSlot, bool CallFunc_IsValid_ReturnValue, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValidInstanceID_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsRarePal_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, bool CallFunc_GetIsBoss_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsEmpty_ReturnValue);
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalCharacterSlotBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UWBP_PalCharacterIconBase_C* CallFunc_RegisterCharacterIconWidget_iconWidget);
	void OnUpdateReviveTimer__DelegateSignature(double NowTimer);
	void OnSetRarity__DelegateSignature(bool IsBoss, bool IsRare);
	void OnEndTargetCharacterEat__DelegateSignature();
	void OnBeginTargetCharacterEat__DelegateSignature();
	void OnEndTargetCharacterSleep__DelegateSignature();
	void OnBeginTargetCharacterSleep__DelegateSignature();
	void OnNotifyBattleModeChanged__DelegateSignature(bool IsBattleMode);
	void OnNotifyWorkDetail__DelegateSignature(bool IsWorking);
	void OnTargetCharacterUpdateHP__DelegateSignature(int64 NowHP, int64 NowMaxHP);
	void OnSetValidSlot__DelegateSignature();
	void OnSetEmpty__DelegateSignature();
	void OnUpdateSlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot);
};

}


