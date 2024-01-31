#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB8 - 0xA0)
// BlueprintGeneratedClass BP_VisualEffect_CameraMosaic.BP_VisualEffect_CameraMosaic_C
class UBP_VisualEffect_CameraMosaic_C : public UBP_VisualEffect_CameraBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Weight_Value;                                      // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  KeyName;                                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_CameraMosaic_C* GetDefaultObj();

	void Update_Mosaic(double Weight_Value, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APalCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FVector& CallFunc_BreakBoxSphereBounds_Origin, const struct FVector& CallFunc_BreakBoxSphereBounds_BoxExtent, float CallFunc_BreakBoxSphereBounds_SphereRadius, const struct FVector4& CallFunc_CalcScreenBounds_Rect, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast);
	void CalcScreenBounds(const struct FVector& Origin, const struct FVector& Box_Extents, class APlayerController* Player, struct FVector4* Rect, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_VSize_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, float CallFunc_GetFOVAngle_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_DegTan_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FVector4& CallFunc_MakeVector4_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void UpdateEffectValue(double WeightValue);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void ExecuteUbergraph_BP_VisualEffect_CameraMosaic(int32 EntryPoint, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float K2Node_Event_DeltaTime, class UPalVisualEffectDataBase* CallFunc_GetVisualEffectDatabase_ReturnValue, class FName CallFunc_GetMosaicKeyName_ReturnValue);
};

}


