#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x451 - 0x410)
// WidgetBlueprintGeneratedClass WBP_PalAim.WBP_PalAim_C
class UWBP_PalAim_C : public UPalUIAimReticleBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_In;                                        // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          AimCanvas;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_101;                                         // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Reticle_Cancel_C*                 WBP_Reticle_Cancel;                                // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Reticle_Pal_C*                    WBP_Reticle_Pal;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       TargetScale;                                       // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NowScale;                                          // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsThrowPalMode;                                    // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PalAim_C* GetDefaultObj();

	void OnUpdateOtomIndex(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsDeadSelectedOtomo_ReturnValue);
	void DisplayOutlineTarget(struct FHitResult& HitResult);
	void RaycastReticleDirectionBody(const struct FHitResult& ReticleHitResult, const struct FHitResult& CallFunc_GetReticleHitResult_hitResult);
	void EndThrowPalMode();
	void StartThrowPalMode(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsALLEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void GetReticleHitResult(struct FHitResult* HitResult, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	void GetNowSelectedOtomoParameter(class UPalCharacterParameterComponent** Parameter, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetOtomoIndividualHandle_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
	void ShowAssignableThrowingPal(struct FHitResult& HitResult, class UPalCharacterParameterComponent* CallFunc_GetNowSelectedOtomoParameter_parameter, bool CallFunc_IsValid_ReturnValue, const struct FPalUIAimReticleMapObjectAssignableData& CallFunc_IsAssignableToHitResult_outAssignableData, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void OnChangedWeaon(class APalWeaponBase* Weapon, class ABP_ThrowPalWeapon_C* K2Node_DynamicCast_AsBP_Throw_Pal_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, enum class EPalPlayerInventoryType CallFunc_GetPrimaryInventoryType_ReturnValue, class APalWeaponBase* CallFunc_GetHasWeapon_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_ThrowWeapon_Dummy_C* K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void Setup_AfterCreatedPlayer(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_PalAim(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetCurrentBulletBlurRate_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
};

}


