#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C
// (None)

class UClass* UWBP_IngameMenu_TaskMaterial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_TaskMaterial_C");

	return Clss;
}


// WBP_IngameMenu_TaskMaterial_C WBP_IngameMenu_TaskMaterial.Default__WBP_IngameMenu_TaskMaterial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_TaskMaterial_C* UWBP_IngameMenu_TaskMaterial_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_TaskMaterial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_TaskMaterial_C*>(UWBP_IngameMenu_TaskMaterial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C.SetHIdeWhenZeroFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHideWhenZero                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_TaskMaterial_C::SetHIdeWhenZeroFlag(bool IsHideWhenZero)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_TaskMaterial_C", "SetHIdeWhenZeroFlag");

	Params::UWBP_IngameMenu_TaskMaterial_C_SetHIdeWhenZeroFlag_Params Parms{};

	Parms.IsHideWhenZero = IsHideWhenZero;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C.SetItemNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ItemNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              GaugeMaxBorderNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_Int64ToDouble_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// double                             CallFunc_Conv_Int64ToDouble_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLinearColorValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLinearColorValue_InTime_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_TaskMaterial_C::SetItemNum(int64 ItemNum, int64 GaugeMaxBorderNum, double CallFunc_Conv_Int64ToDouble_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, double CallFunc_Conv_Int64ToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_GetLinearColorValue_InTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_TaskMaterial_C", "SetItemNum");

	Params::UWBP_IngameMenu_TaskMaterial_C_SetItemNum_Params Parms{};

	Parms.ItemNum = ItemNum;
	Parms.GaugeMaxBorderNum = GaugeMaxBorderNum;
	Parms.CallFunc_Conv_Int64ToDouble_ReturnValue = CallFunc_Conv_Int64ToDouble_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Conv_Int64ToDouble_ReturnValue_1 = CallFunc_Conv_Int64ToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_GetLinearColorValue_ReturnValue = CallFunc_GetLinearColorValue_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_GetLinearColorValue_InTime_ImplicitCast = CallFunc_GetLinearColorValue_InTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C.SetupTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StaticItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_TaskMaterial_C::SetupTexture(class FName StaticItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_TaskMaterial_C", "SetupTexture");

	Params::UWBP_IngameMenu_TaskMaterial_C_SetupTexture_Params Parms{};

	Parms.StaticItemId = StaticItemId;

	UObject::ProcessEvent(Func, &Parms);

}

}


