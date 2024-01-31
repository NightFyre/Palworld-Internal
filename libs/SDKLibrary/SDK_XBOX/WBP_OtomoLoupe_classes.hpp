#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4A0 - 0x488)
// WidgetBlueprintGeneratedClass WBP_OtomoLoupe.WBP_OtomoLoupe_C
class UWBP_OtomoLoupe_C : public UWBP_LoupeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalLoupe_C*                       WBP_PalLoupe;                                      // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         TargetHandle;                                      // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_OtomoLoupe_C* GetDefaultObj();

	void GetLoupeWidgetSize(struct FVector2D* WidgetSize, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue);
	void GetTranslationTarget(class UWidget** Widget);
	void RoundScreenPosition(const struct FVector2D& ScreenPosition, struct FVector2D* CalcedPosition, double borderY, double borderX, double ViewportHalfY, double ViewportHalfX, double OriginalY, double OriginalX, double RoundedScreenPosY, double RoundedScreenPosX, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_FMax_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_3, double CallFunc_FMin_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double CallFunc_FMin_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2);
	void UpdateArrowImageAngle(double NewAngle, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void SetFinalWidgetOpacity(double CalcedOpacity, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void CalcScreenPosition(const struct FVector& CallFunc_GetTargetWorldLocation_outVector, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue);
	bool IsEnableLoupe(class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRiding_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue);
	void GetTargetWidgetSize(struct FVector2D* OutVector, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue);
	void GetTargetWorldLocation(struct FVector* OutVector, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void Setup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, class UBP_OtomoPalHolderComponent_C* K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnInactiveOtomo();
	void OnActivateOtomo(class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderComponent_ReturnValue, int32 CallFunc_GetSelectedOtomoID_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterSlot* CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnInitialized();
	void ExecuteUbergraph_WBP_OtomoLoupe(int32 EntryPoint);
};

}


