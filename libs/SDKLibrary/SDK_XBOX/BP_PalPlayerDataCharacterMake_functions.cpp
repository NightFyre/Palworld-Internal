#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C
// (None)

class UClass* UBP_PalPlayerDataCharacterMake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPlayerDataCharacterMake_C");

	return Clss;
}


// BP_PalPlayerDataCharacterMake_C BP_PalPlayerDataCharacterMake.Default__BP_PalPlayerDataCharacterMake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalPlayerDataCharacterMake_C* UBP_PalPlayerDataCharacterMake_C::GetDefaultObj()
{
	static class UBP_PalPlayerDataCharacterMake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalPlayerDataCharacterMake_C*>(UBP_PalPlayerDataCharacterMake_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomRawNameByDataTable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        RawName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetRandomRawNameByDataTable(class UDataTable* DataTable, class FName* RawName, class FName Temp_name_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetRandomRawNameByDataTable");

	Params::UBP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RawName != nullptr)
		*RawName = Parms.RawName;

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomHeadMeshName
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomRawNameByDataTable_RawName                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_PalPlayerDataCharacterMake_C::GetRandomHeadMeshName(class FName CallFunc_GetRandomRawNameByDataTable_RawName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetRandomHeadMeshName");

	Params::UBP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName_Params Parms{};

	Parms.CallFunc_GetRandomRawNameByDataTable_RawName = CallFunc_GetRandomRawNameByDataTable_RawName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomHairMeshName
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomRawNameByDataTable_RawName                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_PalPlayerDataCharacterMake_C::GetRandomHairMeshName(class FName CallFunc_GetRandomRawNameByDataTable_RawName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetRandomHairMeshName");

	Params::UBP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName_Params Parms{};

	Parms.CallFunc_GetRandomRawNameByDataTable_RawName = CallFunc_GetRandomRawNameByDataTable_RawName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomBodyMeshName
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRandomRawNameByDataTable_RawName                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_PalPlayerDataCharacterMake_C::GetRandomBodyMeshName(class FName CallFunc_GetRandomRawNameByDataTable_RawName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetRandomBodyMeshName");

	Params::UBP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName_Params Parms{};

	Parms.CallFunc_GetRandomRawNameByDataTable_RawName = CallFunc_GetRandomRawNameByDataTable_RawName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.ConvertMakeInfo_RGBToHSV
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfoMakeInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             SVLimitValur                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfoConvertedMakeInfo                                                (Parm, OutParm, NoDestructor)
// struct FLinearColor                CallFunc_GetBodyShiftRGB_OutRGB                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RGBToHSV_OutHSV                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_CalcSubsurfaceColor_SubsurfaceRGB                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RGBToHSV_OutHSV_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RGBToHSV_OutHSV_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RecalcHSV_OutHSV                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RGBToHSV_OutHSV_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetHairShiftRGB_OutRGB                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetEyeShiftRGB_OutRGB                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RecalcHSV_OutHSV_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RecalcHSV_OutHSV_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBrowShiftRGB_OutRGB                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RecalcHSV_OutHSV_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfoK2Node_MakeStruct_PalPlayerDataCharacterMakeInfo                 (NoDestructor)

void UBP_PalPlayerDataCharacterMake_C::ConvertMakeInfo_RGBToHSV(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, double SVLimitValur, struct FPalPlayerDataCharacterMakeInfo* ConvertedMakeInfo, const struct FLinearColor& CallFunc_GetBodyShiftRGB_OutRGB, const struct FLinearColor& CallFunc_RGBToHSV_OutHSV, const struct FLinearColor& CallFunc_CalcSubsurfaceColor_SubsurfaceRGB, const struct FLinearColor& CallFunc_RGBToHSV_OutHSV_1, const struct FLinearColor& CallFunc_RGBToHSV_OutHSV_2, const struct FLinearColor& CallFunc_RecalcHSV_OutHSV, const struct FLinearColor& CallFunc_RGBToHSV_OutHSV_3, const struct FLinearColor& CallFunc_GetHairShiftRGB_OutRGB, const struct FLinearColor& CallFunc_GetEyeShiftRGB_OutRGB, const struct FLinearColor& CallFunc_RecalcHSV_OutHSV_1, const struct FLinearColor& CallFunc_RecalcHSV_OutHSV_2, const struct FLinearColor& CallFunc_GetBrowShiftRGB_OutRGB, const struct FLinearColor& CallFunc_RecalcHSV_OutHSV_3, const struct FPalPlayerDataCharacterMakeInfo& K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "ConvertMakeInfo_RGBToHSV");

	Params::UBP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV_Params Parms{};

	Parms.MakeInfo = MakeInfo;
	Parms.SVLimitValur = SVLimitValur;
	Parms.CallFunc_GetBodyShiftRGB_OutRGB = CallFunc_GetBodyShiftRGB_OutRGB;
	Parms.CallFunc_RGBToHSV_OutHSV = CallFunc_RGBToHSV_OutHSV;
	Parms.CallFunc_CalcSubsurfaceColor_SubsurfaceRGB = CallFunc_CalcSubsurfaceColor_SubsurfaceRGB;
	Parms.CallFunc_RGBToHSV_OutHSV_1 = CallFunc_RGBToHSV_OutHSV_1;
	Parms.CallFunc_RGBToHSV_OutHSV_2 = CallFunc_RGBToHSV_OutHSV_2;
	Parms.CallFunc_RecalcHSV_OutHSV = CallFunc_RecalcHSV_OutHSV;
	Parms.CallFunc_RGBToHSV_OutHSV_3 = CallFunc_RGBToHSV_OutHSV_3;
	Parms.CallFunc_GetHairShiftRGB_OutRGB = CallFunc_GetHairShiftRGB_OutRGB;
	Parms.CallFunc_GetEyeShiftRGB_OutRGB = CallFunc_GetEyeShiftRGB_OutRGB;
	Parms.CallFunc_RecalcHSV_OutHSV_1 = CallFunc_RecalcHSV_OutHSV_1;
	Parms.CallFunc_RecalcHSV_OutHSV_2 = CallFunc_RecalcHSV_OutHSV_2;
	Parms.CallFunc_GetBrowShiftRGB_OutRGB = CallFunc_GetBrowShiftRGB_OutRGB;
	Parms.CallFunc_RecalcHSV_OutHSV_3 = CallFunc_RecalcHSV_OutHSV_3;
	Parms.K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo = K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (ConvertedMakeInfo != nullptr)
		*ConvertedMakeInfo = std::move(Parms.ConvertedMakeInfo);

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.CalcSubsurfaceColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                OriginalRGB                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                SubsurfaceRGB                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::CalcSubsurfaceColor(const struct FLinearColor& OriginalRGB, struct FLinearColor* SubsurfaceRGB, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_2, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "CalcSubsurfaceColor");

	Params::UBP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor_Params Parms{};

	Parms.OriginalRGB = OriginalRGB;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue = CallFunc_Multiply_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1 = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_2 = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_2;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (SubsurfaceRGB != nullptr)
		*SubsurfaceRGB = std::move(Parms.SubsurfaceRGB);

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.RecalcHSV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                BaseHSV                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ShiftRGB                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SVLimit                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                OutHSV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RGBLinearToHSV_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::RecalcHSV(const struct FLinearColor& BaseHSV, const struct FLinearColor& ShiftRGB, double SVLimit, struct FLinearColor* OutHSV, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_RGBLinearToHSV_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float K2Node_MakeStruct_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "RecalcHSV");

	Params::UBP_PalPlayerDataCharacterMake_C_RecalcHSV_Params Parms{};

	Parms.BaseHSV = BaseHSV;
	Parms.ShiftRGB = ShiftRGB;
	Parms.SVLimit = SVLimit;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_RGBLinearToHSV_ReturnValue = CallFunc_RGBLinearToHSV_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakColor_R_1 = CallFunc_BreakColor_R_1;
	Parms.CallFunc_BreakColor_G_1 = CallFunc_BreakColor_G_1;
	Parms.CallFunc_BreakColor_B_1 = CallFunc_BreakColor_B_1;
	Parms.CallFunc_BreakColor_A_1 = CallFunc_BreakColor_A_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHSV != nullptr)
		*OutHSV = std::move(Parms.OutHSV);

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetEyeShiftRGB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        HeadMeshName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EyeMaterialName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                OutRGB                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FPalCharacterCreationEyeMaterialDataRowCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationMeshPresetDataRowCallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetEyeShiftRGB(class FName HeadMeshName, class FName EyeMaterialName, struct FLinearColor* OutRGB, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FPalCharacterCreationEyeMaterialDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetEyeShiftRGB");

	Params::UBP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB_Params Parms{};

	Parms.HeadMeshName = HeadMeshName;
	Parms.EyeMaterialName = EyeMaterialName;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRGB != nullptr)
		*OutRGB = std::move(Parms.OutRGB);

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetBrowShiftRGB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        HaorMeshName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                OutRGB                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationMeshPresetDataRowCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetBrowShiftRGB(class FName HaorMeshName, struct FLinearColor* OutRGB, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetBrowShiftRGB");

	Params::UBP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB_Params Parms{};

	Parms.HaorMeshName = HaorMeshName;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRGB != nullptr)
		*OutRGB = std::move(Parms.OutRGB);

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetHairShiftRGB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        HaorMeshName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                OutRGB                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationMeshPresetDataRowCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetHairShiftRGB(class FName HaorMeshName, struct FLinearColor* OutRGB, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetHairShiftRGB");

	Params::UBP_PalPlayerDataCharacterMake_C_GetHairShiftRGB_Params Parms{};

	Parms.HaorMeshName = HaorMeshName;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRGB != nullptr)
		*OutRGB = std::move(Parms.OutRGB);

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetBodyShiftRGB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        BodyMeshName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                OutRGB                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationMeshPresetDataRowCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetBodyShiftRGB(class FName BodyMeshName, struct FLinearColor* OutRGB, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetBodyShiftRGB");

	Params::UBP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB_Params Parms{};

	Parms.BodyMeshName = BodyMeshName;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRGB != nullptr)
		*OutRGB = std::move(Parms.OutRGB);

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.RGBtoHSV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                InRGB                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                OutHSV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_RGBLinearToHSV_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::RGBtoHSV(const struct FLinearColor& InRGB, struct FLinearColor* OutHSV, const struct FLinearColor& CallFunc_RGBLinearToHSV_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "RGBtoHSV");

	Params::UBP_PalPlayerDataCharacterMake_C_RGBtoHSV_Params Parms{};

	Parms.InRGB = InRGB;
	Parms.CallFunc_RGBLinearToHSV_ReturnValue = CallFunc_RGBLinearToHSV_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHSV != nullptr)
		*OutHSV = std::move(Parms.OutHSV);

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetOriginalPresetMakeInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfoOutMakeInfo                                                      (Parm, OutParm, NoDestructor)
// struct FPalPlayerDataCharacterMakeInfoK2Node_MakeStruct_PalPlayerDataCharacterMakeInfo                 (NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FPalCharacterCreationPresetDataRowCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetOriginalPresetMakeInfo(class FName PresetName, struct FPalPlayerDataCharacterMakeInfo* OutMakeInfo, const struct FPalPlayerDataCharacterMakeInfo& K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FPalCharacterCreationPresetDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetOriginalPresetMakeInfo");

	Params::UBP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo_Params Parms{};

	Parms.PresetName = PresetName;
	Parms.K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo = K2Node_MakeStruct_PalPlayerDataCharacterMakeInfo;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMakeInfo != nullptr)
		*OutMakeInfo = std::move(Parms.OutMakeInfo);

}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetPresetMakeInfo
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        PresetName                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfoOutMakeInfo                                                      (Parm, OutParm, NoDestructor)
// struct FPalPlayerDataCharacterMakeInfoCallFunc_GetOriginalPresetMakeInfo_OutMakeInfo                   (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfoCallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo              (NoDestructor)
// double                             CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetPresetMakeInfo(class UObject* WorldContextObject, class FName& PresetName, struct FPalPlayerDataCharacterMakeInfo* OutMakeInfo, const struct FPalPlayerDataCharacterMakeInfo& CallFunc_GetOriginalPresetMakeInfo_OutMakeInfo, bool CallFunc_IsValid_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const struct FPalPlayerDataCharacterMakeInfo& CallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo, double CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetPresetMakeInfo");

	Params::UBP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PresetName = PresetName;
	Parms.CallFunc_GetOriginalPresetMakeInfo_OutMakeInfo = CallFunc_GetOriginalPresetMakeInfo_OutMakeInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo = CallFunc_ConvertMakeInfo_RGBToHSV_ConvertedMakeInfo;
	Parms.CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast = CallFunc_ConvertMakeInfo_RGBToHSV_SVLimitValur_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMakeInfo != nullptr)
		*OutMakeInfo = std::move(Parms.OutMakeInfo);

}

}


