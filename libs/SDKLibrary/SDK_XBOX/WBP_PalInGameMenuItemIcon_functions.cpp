#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalInGameMenuItemIcon.WBP_PalInGameMenuItemIcon_C
// (None)

class UClass* UWBP_PalInGameMenuItemIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalInGameMenuItemIcon_C");

	return Clss;
}


// WBP_PalInGameMenuItemIcon_C WBP_PalInGameMenuItemIcon.Default__WBP_PalInGameMenuItemIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalInGameMenuItemIcon_C* UWBP_PalInGameMenuItemIcon_C::GetDefaultObj()
{
	static class UWBP_PalInGameMenuItemIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalInGameMenuItemIcon_C*>(UWBP_PalInGameMenuItemIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalInGameMenuItemIcon.WBP_PalInGameMenuItemIcon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemIcon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemIcon_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemIcon.WBP_PalInGameMenuItemIcon_C.StartLoadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemIcon_C::StartLoadEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemIcon_C", "StartLoadEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemIcon.WBP_PalInGameMenuItemIcon_C.LoadedTextureEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LoadedTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemIcon_C::LoadedTextureEvent(class UTexture2D* LoadedTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemIcon_C", "LoadedTextureEvent");

	Params::UWBP_PalInGameMenuItemIcon_C_LoadedTextureEvent_Params Parms{};

	Parms.LoadedTexture = LoadedTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalInGameMenuItemIcon.WBP_PalInGameMenuItemIcon_C.EmptyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalInGameMenuItemIcon_C::EmptyEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemIcon_C", "EmptyEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalInGameMenuItemIcon.WBP_PalInGameMenuItemIcon_C.ExecuteUbergraph_WBP_PalInGameMenuItemIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_loadedTexture                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInGameMenuItemIcon_C::ExecuteUbergraph_WBP_PalInGameMenuItemIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2D* K2Node_CustomEvent_loadedTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalInGameMenuItemIcon_C", "ExecuteUbergraph_WBP_PalInGameMenuItemIcon");

	Params::UWBP_PalInGameMenuItemIcon_C_ExecuteUbergraph_WBP_PalInGameMenuItemIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_loadedTexture = K2Node_CustomEvent_loadedTexture;

	UObject::ProcessEvent(Func, &Parms);

}

}


