#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameCompass_camp.WBP_IngameCompass_camp_C
// (None)

class UClass* UWBP_IngameCompass_camp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameCompass_camp_C");

	return Clss;
}


// WBP_IngameCompass_camp_C WBP_IngameCompass_camp.Default__WBP_IngameCompass_camp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameCompass_camp_C* UWBP_IngameCompass_camp_C::GetDefaultObj()
{
	static class UWBP_IngameCompass_camp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameCompass_camp_C*>(UWBP_IngameCompass_camp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameCompass_camp.WBP_IngameCompass_camp_C.SetupTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_IngameCompass_camp_C::SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameCompass_camp_C", "SetupTexture");

	Params::UWBP_IngameCompass_camp_C_SetupTexture_Params Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameCompass_camp.WBP_IngameCompass_camp_C.SetDistanceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Length                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_DoubleToInt64_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)

void UWBP_IngameCompass_camp_C::SetDistanceText(double Length, double CallFunc_Multiply_DoubleDouble_ReturnValue, int64 CallFunc_Conv_DoubleToInt64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameCompass_camp_C", "SetDistanceText");

	Params::UWBP_IngameCompass_camp_C_SetDistanceText_Params Parms{};

	Parms.Length = Length;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToInt64_ReturnValue = CallFunc_Conv_DoubleToInt64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameCompass_camp.WBP_IngameCompass_camp_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameCompass_camp_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameCompass_camp_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameCompass_camp.WBP_IngameCompass_camp_C.ExecuteUbergraph_WBP_IngameCompass_camp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_camp_C::ExecuteUbergraph_WBP_IngameCompass_camp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameCompass_camp_C", "ExecuteUbergraph_WBP_IngameCompass_camp");

	Params::UWBP_IngameCompass_camp_C_ExecuteUbergraph_WBP_IngameCompass_camp_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


