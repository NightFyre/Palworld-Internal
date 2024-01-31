#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x4A0 - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalItemSlotBase.WBP_PalItemSlotBase_C
class UWBP_PalItemSlotBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalItemIconBase_C*                MyIconWidget;                                      // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                          TargetSlot;                                        // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnUpdateSlot;                                      // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSetEmpty;                                        // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSetValidSlot;                                    // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsDisplayEmpty;                                    // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_417D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLiftedSlot;                                      // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFinishedLiftSlot;                                // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          CheckDurabilityTimerHandle;                        // 0x478(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNotifyDurability;                                // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCorruptionUpdate;                                // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PalItemSlotBase_C* GetDefaultObj();

	void OnUpdateSlotCorruption_Internal(class UPalItemSlot* Slot, bool CallFunc_IsEmpty_ReturnValue);
	void OnTimer_CheckDurability(bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalDynamicItemDataBase* CallFunc_TryGetDynamicItemData_OutDynamicItemData, bool CallFunc_TryGetDynamicItemData_ReturnValue, TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDurability_ReturnValue, float CallFunc_GetMaxDurability_ReturnValue, double K2Node_CallDelegate_NowDurability_ImplicitCast, double K2Node_CallDelegate_MaxDurability_ImplicitCast);
	void StartCheckDurabilityTimer(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalDynamicItemDataBase* CallFunc_TryGetDynamicItemData_OutDynamicItemData, bool CallFunc_TryGetDynamicItemData_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMaxDurability_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void ClearCheckDurabilityTimer();
	void OnFinishedLiftItem_Internal();
	void Setup(class UPalItemSlot* TargetSlot, bool CallFunc_IsValid_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue);
	void OnLiftedSlot_Internal(int32 LiftItemNum);
	void Unbind_Event(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void BindEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void On_Update_Slot_Internal(class UPalItemSlot* Slot, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget);
	void OnInitialized();
	void Destruct();
	void ExecuteUbergraph_WBP_PalItemSlotBase(int32 EntryPoint, class UWBP_PalItemIconBase_C* CallFunc_RegisterItemIconWidget_iconWidget);
	void OnCorruptionUpdate__DelegateSignature();
	void OnNotifyDurability__DelegateSignature(double MaxDurability, double NowDurability);
	void OnFinishedLiftSlot__DelegateSignature();
	void OnLiftedSlot__DelegateSignature(int32 LiftedItemNum);
	void OnSetValidSlot__DelegateSignature();
	void OnSetEmpty__DelegateSignature();
	void OnUpdateSlot__DelegateSignature(class UPalItemSlot* TargetSlot);
};

}


