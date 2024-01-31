#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EnemyGauge_SAN.WBP_EnemyGauge_SAN_C
// (None)

class UClass* UWBP_EnemyGauge_SAN_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EnemyGauge_SAN_C");

	return Clss;
}


// WBP_EnemyGauge_SAN_C WBP_EnemyGauge_SAN.Default__WBP_EnemyGauge_SAN_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EnemyGauge_SAN_C* UWBP_EnemyGauge_SAN_C::GetDefaultObj()
{
	static class UWBP_EnemyGauge_SAN_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EnemyGauge_SAN_C*>(UWBP_EnemyGauge_SAN_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EnemyGauge_SAN.WBP_EnemyGauge_SAN_C.SetSanityValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowSanityValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxSanityValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_SAN_C::SetSanityValue(double NowSanityValue, double MaxSanityValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_SAN_C", "SetSanityValue");

	Params::UWBP_EnemyGauge_SAN_C_SetSanityValue_Params Parms{};

	Parms.NowSanityValue = NowSanityValue;
	Parms.MaxSanityValue = MaxSanityValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue_1 = CallFunc_FCeil_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyGauge_SAN.WBP_EnemyGauge_SAN_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_EnemyGauge_SAN_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_SAN_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyGauge_SAN.WBP_EnemyGauge_SAN_C.ExecuteUbergraph_WBP_EnemyGauge_SAN
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_SAN_C::ExecuteUbergraph_WBP_EnemyGauge_SAN(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyGauge_SAN_C", "ExecuteUbergraph_WBP_EnemyGauge_SAN");

	Params::UWBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


