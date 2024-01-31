#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0x5D - 0x48)
// BlueprintGeneratedClass BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C
class UBP_Status_WithVisualEffect_C : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPalVisualEffectID                VisualEffectID;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoRemoveWhenOtherElemetAdd;                      // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalElementType                   DamageUpElement;                                   // 0x52(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalElementType                   DamageDownElement;                                 // 0x53(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CommonFlagName;                                    // 0x54(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         IsHideEffect;                                      // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Status_WithVisualEffect_C* GetDefaultObj();

	void HideReAddEffectWhenCapture(class AActor* CallFunc_GetOwner_ReturnValue, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalVisualEffectBase* CallFunc_AddVisualEffect_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_GetIsCapturedProcessing_ReturnValue);
	void ResetDamageDown(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void ResetDamageUp(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void SetDamageDown(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void SetDamageUp(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void HasSelfPalElement(enum class EPalElementType MyElement, bool* Has, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasElementType_ReturnValue);
	void OnBeginStatus();
	void OnEndStatus();
	void _________OtherStatusAdd(class UPalStatusComponent* StatusComponent, enum class EPalStatusID StatusId, class UPalStatusBase* Status);
	void _________Dead(const struct FPalDeadInfo& DeadInfo);
	void TickStatus(float DeltaTime);
	void ExecuteUbergraph_BP_Status_WithVisualEffect(int32 EntryPoint, float K2Node_Event_DeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, class UPalVisualEffectBase* CallFunc_AddVisualEffect_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalStatusComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalStatusComponent* CallFunc_GetComponentByClass_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class UPalVisualEffectComponent* CallFunc_GetComponentByClass_ReturnValue_3, class UPalStatusComponent* K2Node_CustomEvent_StatusComponent, enum class EPalStatusID K2Node_CustomEvent_StatusID, class UPalStatusBase* K2Node_CustomEvent_Status, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue_4, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_4);
};

}


