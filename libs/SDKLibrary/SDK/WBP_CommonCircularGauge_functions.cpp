#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CommonCircularGauge.WBP_CommonCircularGauge_C
// (None)

class UClass* UWBP_CommonCircularGauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CommonCircularGauge_C");

	return Clss;
}


// WBP_CommonCircularGauge_C WBP_CommonCircularGauge.Default__WBP_CommonCircularGauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CommonCircularGauge_C* UWBP_CommonCircularGauge_C::GetDefaultObj()
{
	static class UWBP_CommonCircularGauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CommonCircularGauge_C*>(UWBP_CommonCircularGauge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CommonCircularGauge.WBP_CommonCircularGauge_C.SetTargetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGaugeInterpolationTargetValue_TargetValue_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonCircularGauge_C::SetTargetValue(double Value, float CallFunc_SetGaugeInterpolationTargetValue_TargetValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonCircularGauge_C", "SetTargetValue");

	Params::UWBP_CommonCircularGauge_C_SetTargetValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_SetGaugeInterpolationTargetValue_TargetValue_ImplicitCast = CallFunc_SetGaugeInterpolationTargetValue_TargetValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonCircularGauge.WBP_CommonCircularGauge_C.ReflectRateToImage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonCircularGauge_C::ReflectRateToImage(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonCircularGauge_C", "ReflectRateToImage");

	Params::UWBP_CommonCircularGauge_C_ReflectRateToImage_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonCircularGauge.WBP_CommonCircularGauge_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonCircularGauge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonCircularGauge_C", "Tick");

	Params::UWBP_CommonCircularGauge_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonCircularGauge.WBP_CommonCircularGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CommonCircularGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonCircularGauge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonCircularGauge.WBP_CommonCircularGauge_C.ExecuteUbergraph_WBP_CommonCircularGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonCircularGauge_C::ExecuteUbergraph_WBP_CommonCircularGauge(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonCircularGauge_C", "ExecuteUbergraph_WBP_CommonCircularGauge");

	Params::UWBP_CommonCircularGauge_C_ExecuteUbergraph_WBP_CommonCircularGauge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


