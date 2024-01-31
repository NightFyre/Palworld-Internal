#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x488 - 0x458)
// WidgetBlueprintGeneratedClass WBP_LoupeBase.WBP_LoupeBase_C
class UWBP_LoupeBase_C : public UPalUIOffScreenLoupeBase
{
public:
	struct FVector2D                             TargetPosition;                                    // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             NowPosition;                                       // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstUpdate;                                     // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInterpolationTranslate;                          // 0x479(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41FC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       InterpolationRate;                                 // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_LoupeBase_C* GetDefaultObj();

	void AdjustAlpha(const struct FVector2D& FinalScreenPos, double* Alpha, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Abs_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_FMin_ReturnValue_1, double CallFunc_Abs_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_FMax_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_FMin_ReturnValue_2);
	void GetTranslationTarget(class UWidget** Widget);
	void SetFinalWidgetOpacity(double CalcedOpacity);
	void RoundScreenPosition(const struct FVector2D& ScreenPosition, struct FVector2D* CalcedPosition);
	void UpdateLoupeTranslation(double CallFunc_AdjustAlpha_alpha, const struct FVector2D& CallFunc_RoundScreenPosition_calcedPosition, class UWidget* CallFunc_GetTranslationTarget_widget, class UWidget* CallFunc_GetTranslationTarget_widget_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
	void GetLoupeWidgetSize(struct FVector2D* WidgetSize);
	void UpdateArrowImageAngle(double NewAngle);
	void UpdatePositionAndVisibility(double Dot, const struct FVector& RootLocation, const struct FVector& TargetLocation, const struct FVector2D& NewLocation, double TmpY, double TmpX, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_GetLoupeWidgetSize_widgetSize, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, float CallFunc_GetViewportScale_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Abs_ReturnValue_1, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, double CallFunc_FMax_ReturnValue, double CallFunc_DegAtan2_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreenBehindCamera_ScreenPosition, bool CallFunc_ProjectWorldToScreenBehindCamera_bTargetBehindCamera, bool CallFunc_ProjectWorldToScreenBehindCamera_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_tmpY_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, double CallFunc_MakeVector2D_X_ImplicitCast);
};

}


