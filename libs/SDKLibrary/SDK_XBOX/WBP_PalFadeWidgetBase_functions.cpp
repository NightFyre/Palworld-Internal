#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalFadeWidgetBase.WBP_PalFadeWidgetBase_C
// (None)

class UClass* UWBP_PalFadeWidgetBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalFadeWidgetBase_C");

	return Clss;
}


// WBP_PalFadeWidgetBase_C WBP_PalFadeWidgetBase.Default__WBP_PalFadeWidgetBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalFadeWidgetBase_C* UWBP_PalFadeWidgetBase_C::GetDefaultObj()
{
	static class UWBP_PalFadeWidgetBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalFadeWidgetBase_C*>(UWBP_PalFadeWidgetBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalFadeWidgetBase.WBP_PalFadeWidgetBase_C.NotifyEndFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalFadeWidgetBase_C::NotifyEndFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalFadeWidgetBase_C", "NotifyEndFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalFadeWidgetBase.WBP_PalFadeWidgetBase_C.NotifyStartFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalFadeWidgetBase_C::NotifyStartFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalFadeWidgetBase_C", "NotifyStartFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalFadeWidgetBase.WBP_PalFadeWidgetBase_C.NotifyEndFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalFadeWidgetBase_C::NotifyEndFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalFadeWidgetBase_C", "NotifyEndFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalFadeWidgetBase.WBP_PalFadeWidgetBase_C.NotifyStartFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalFadeWidgetBase_C::NotifyStartFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalFadeWidgetBase_C", "NotifyStartFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalFadeWidgetBase.WBP_PalFadeWidgetBase_C.Setup_ForOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalFadeWidgetBase_C::Setup_ForOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalFadeWidgetBase_C", "Setup_ForOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalFadeWidgetBase.WBP_PalFadeWidgetBase_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameter_FadeWidget*FadeParameter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalFadeWidgetBase_C::Setup(class UPalHUDDispatchParameter_FadeWidget* FadeParameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalFadeWidgetBase_C", "Setup");

	Params::UWBP_PalFadeWidgetBase_C_Setup_Params Parms{};

	Parms.FadeParameter = FadeParameter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalFadeWidgetBase.WBP_PalFadeWidgetBase_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalFadeWidgetBase_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalFadeWidgetBase_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalFadeWidgetBase.WBP_PalFadeWidgetBase_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalFadeWidgetBase_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalFadeWidgetBase_C", "FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}

}


