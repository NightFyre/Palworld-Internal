#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x49C - 0x408)
// WidgetBlueprintGeneratedClass WBP_PalDamageCanvas_OneShotText.WBP_PalDamageCanvas_OneShotText_C
class UWBP_PalDamageCanvas_OneShotText_C : public UPalDamageDisplayCanvas
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Damage;                                            // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Hit_Location;                                      // 0x428(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TSoftObjectPtr<class AActor>, class UPalUIDamageTextBase*> DisplayingDamageTextMap;                           // 0x440(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       DisplayTime;                                       // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageTextDisplayLength;                           // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalDamageCanvas_OneShotText_C* GetDefaultObj();

	void IsEquipAttacker(class AActor* Attacker, bool* IsEquip, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CalcLengthToPlayer(const struct FVector& HitLocation, double* Length, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue);
	void CalcTargetLocation(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, struct FVector* Location);
	void AddNewDamageText(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, float CallFunc_CalcDisplayDamage_outSpecialDamageRate, int32 CallFunc_CalcDisplayDamage_weakCount, int32 CallFunc_CalcDisplayDamage_ReturnValue, const struct FVector& CallFunc_CalcTargetLocation_location, bool CallFunc_Less_IntInt_ReturnValue, enum class EPalDamageTextType CallFunc_CalcDamageTextType_textType, double CallFunc_CalcLengthToPlayer_length, class UPalUIDamageTextBase* CallFunc_CreateDamageWidget_createdWdiget, bool CallFunc_Less_DoubleDouble_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UWBP_PalDamageText_C* K2Node_DynamicCast_AsWBP_Pal_Damage_Text, bool K2Node_DynamicCast_bSuccess, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_CalcDamageTextType_damageRate_ImplicitCast, float CallFunc_StartDisplay_inDisplayTime_ImplicitCast);
	void CreateDamageWidget(class UPalUIDamageTextBase** CreatedWdiget, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_PalDamageText_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
	void CalcDamageTextType(const struct FPalDamageInfo& DamageInfo, class AActor* Defender, double DamageRate, int32 WeakCount, enum class EPalDamageTextType* TextType, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsEquipAttacker_IsEquip, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetWeakCount_ForUI_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1);
	void OnSetup();
	void Destruct();
	void AddDamageTextEvent(struct FPalDamageInfo& DamageInfo, class AActor* Defender);
	void OnInitialized();
	void ExecuteUbergraph_WBP_PalDamageCanvas_OneShotText(int32 EntryPoint, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class UPalDamagePopUpManager* CallFunc_GetDamagePopUpManager_ReturnValue, class UPalDamagePopUpManager* CallFunc_GetDamagePopUpManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalDamageInfo& K2Node_CustomEvent_DamageInfo, class AActor* K2Node_CustomEvent_defender, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDead_ReturnValue);
};

}


