#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_Fluid_FunctionLibrary.BP_Fluid_FunctionLibrary_C
class UBP_Fluid_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_Fluid_FunctionLibrary_C* GetDefaultObj();

	void DrawFluidSim_Capture(class ABP_FluidController_C*& Fluid_Controller, class UMaterialInstanceDynamic*& Draw_Material, const struct FVector& Draw_Location, class UObject* __WorldContext, bool Temp_bool_Variable, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, class UTextureRenderTarget2D* CallFunc_GetRT_RenderTarget, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, double K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Conv_IntToFloat_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_8, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, double K2Node_Select_Default_1, bool Temp_bool_Variable_3, double K2Node_Select_Default_2, double K2Node_Select_Default_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_Divide_VectorFloat_B_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast_1, double K2Node_Select_Option_0_ImplicitCast_1, double K2Node_Select_Option_1_ImplicitCast_2, double K2Node_Select_Option_0_ImplicitCast_2, double K2Node_Select_Option_0_ImplicitCast_3, double K2Node_Select_Option_1_ImplicitCast_3, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast);
	void DistanceCheck(const struct FVector& Location_1, const struct FVector& Location_2, double Distance_Radius, class UObject* __WorldContext, double* Distance, bool* OutOfRadius, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void DrawFluidSim(class ABP_FluidController_C*& Fluid_Controller, class UMaterialInstanceDynamic*& Draw_Material, const struct FVector& Draw_Location, double Draw_Size, double Draw_Intensity, class UObject* __WorldContext, bool Temp_bool_Variable, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, class UTextureRenderTarget2D* CallFunc_GetRT_Height_RenderTarget, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, double K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Conv_IntToFloat_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_8, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, double K2Node_Select_Default_1, bool Temp_bool_Variable_3, double K2Node_Select_Default_2, double K2Node_Select_Default_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, double CallFunc_Divide_VectorFloat_B_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast_1, double K2Node_Select_Option_0_ImplicitCast_1, double K2Node_Select_Option_1_ImplicitCast_2, double K2Node_Select_Option_0_ImplicitCast_2, double K2Node_Select_Option_0_ImplicitCast_3, double K2Node_Select_Option_1_ImplicitCast_3, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast);
};

}


