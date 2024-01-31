#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C
// (None)

class UClass* UWBP_PalCommonCharacterIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonCharacterIcon_C");

	return Clss;
}


// WBP_PalCommonCharacterIcon_C WBP_PalCommonCharacterIcon.Default__WBP_PalCommonCharacterIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonCharacterIcon_C* UWBP_PalCommonCharacterIcon_C::GetDefaultObj()
{
	static class UWBP_PalCommonCharacterIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonCharacterIcon_C*>(UWBP_PalCommonCharacterIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C.SetFraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Fraction                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterIcon_C::SetFraction(double Fraction, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterIcon_C", "SetFraction");

	Params::UWBP_PalCommonCharacterIcon_C_SetFraction_Params Parms{};

	Parms.Fraction = Fraction;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C.OnEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterIcon_C::OnEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterIcon_C", "OnEmpty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C.OnLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LoadedTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterIcon_C::OnLoaded(class UTexture2D* LoadedTexture, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterIcon_C", "OnLoaded");

	Params::UWBP_PalCommonCharacterIcon_C_OnLoaded_Params Parms{};

	Parms.LoadedTexture = LoadedTexture;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C.OnStartLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterIcon_C::OnStartLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterIcon_C", "OnStartLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonCharacterIcon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterIcon_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C.ExecuteUbergraph_WBP_PalCommonCharacterIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonCharacterIcon_C::ExecuteUbergraph_WBP_PalCommonCharacterIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonCharacterIcon_C", "ExecuteUbergraph_WBP_PalCommonCharacterIcon");

	Params::UWBP_PalCommonCharacterIcon_C_ExecuteUbergraph_WBP_PalCommonCharacterIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


