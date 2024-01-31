#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C
// (None)

class UClass* UWBP_IngameCompass_CustomMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameCompass_CustomMarker_C");

	return Clss;
}


// WBP_IngameCompass_CustomMarker_C WBP_IngameCompass_CustomMarker.Default__WBP_IngameCompass_CustomMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameCompass_CustomMarker_C* UWBP_IngameCompass_CustomMarker_C::GetDefaultObj()
{
	static class UWBP_IngameCompass_CustomMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameCompass_CustomMarker_C*>(UWBP_IngameCompass_CustomMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.UpdateDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance2D_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_CustomMarker_C::UpdateDistance(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameCompass_CustomMarker_C", "UpdateDistance");

	Params::UWBP_IngameCompass_CustomMarker_C_UpdateDistance_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Vector_Distance2D_ReturnValue = CallFunc_Vector_Distance2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.UpdateVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InDistance                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance2D_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_CustomMarker_C::UpdateVisibility(bool* InDistance, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Vector_Distance2D_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameCompass_CustomMarker_C", "UpdateVisibility");

	Params::UWBP_IngameCompass_CustomMarker_C_UpdateVisibility_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Vector_Distance2D_ReturnValue = CallFunc_Vector_Distance2D_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InDistance != nullptr)
		*InDistance = Parms.InDistance;

}


// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.SetCustomMarkerTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_CustomMarker_C::SetCustomMarkerTexture(int32 IconType, class UTexture2D* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameCompass_CustomMarker_C", "SetCustomMarkerTexture");

	Params::UWBP_IngameCompass_CustomMarker_C_SetCustomMarkerTexture_Params Parms{};

	Parms.IconType = IconType;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameCompass_CustomMarker.WBP_IngameCompass_CustomMarker_C.SetDistanceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Length                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_DoubleToInt64_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_IngameCompass_CustomMarker_C::SetDistanceText(double Length, double CallFunc_Multiply_DoubleDouble_ReturnValue, int64 CallFunc_Conv_DoubleToInt64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameCompass_CustomMarker_C", "SetDistanceText");

	Params::UWBP_IngameCompass_CustomMarker_C_SetDistanceText_Params Parms{};

	Parms.Length = Length;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToInt64_ReturnValue = CallFunc_Conv_DoubleToInt64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


