#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x448 - 0x408)
// WidgetBlueprintGeneratedClass WBP_CompassIconBase.WBP_CompassIconBase_C
class UWBP_CompassIconBase_C : public UPalUICompassIconBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               Target_Location;                                   // 0x410(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 MyLocationID;                                      // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HiddenDistance;                                    // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentDistance;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CompassIconBase_C* GetDefaultObj();

	void PostSetup();
	void UpdateDistance(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue);
	void SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture);
	void SetDistanceText(double Length);
	void UpdateVisibility(bool* InDistance, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsVisible_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Less_DoubleDouble_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
	void SetLocationId(const struct FGuid& LocationId);
	void SetTargetLocation(const struct FVector& TargetLocation);
	void Get_Offset_Value(double* OffSetValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Normal2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, double CallFunc_DotProduct2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_DotProduct2D_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1);
	void SetDisplayDistance(double Length, double CallFunc_Multiply_DoubleDouble_ReturnValue, double K2Node_VariableSet_CurrentDistance_ImplicitCast, float K2Node_VariableSet_HiddenDistance_ImplicitCast);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_CompassIconBase(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


