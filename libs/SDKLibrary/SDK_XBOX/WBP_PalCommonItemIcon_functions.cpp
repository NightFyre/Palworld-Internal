#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C
// (None)

class UClass* UWBP_PalCommonItemIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonItemIcon_C");

	return Clss;
}


// WBP_PalCommonItemIcon_C WBP_PalCommonItemIcon.Default__WBP_PalCommonItemIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonItemIcon_C* UWBP_PalCommonItemIcon_C::GetDefaultObj()
{
	static class UWBP_PalCommonItemIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonItemIcon_C*>(UWBP_PalCommonItemIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.OnEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemIcon_C::OnEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemIcon_C", "OnEmpty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.OnLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LoadedTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemIcon_C::OnLoaded(class UTexture2D* LoadedTexture, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemIcon_C", "OnLoaded");

	Params::UWBP_PalCommonItemIcon_C_OnLoaded_Params Parms{};

	Parms.LoadedTexture = LoadedTexture;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.OnStartLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemIcon_C::OnStartLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemIcon_C", "OnStartLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PalCommonItemIcon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemIcon_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C.ExecuteUbergraph_WBP_PalCommonItemIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCommonItemIcon_C::ExecuteUbergraph_WBP_PalCommonItemIcon(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PalCommonItemIcon_C", "ExecuteUbergraph_WBP_PalCommonItemIcon");

	Params::UWBP_PalCommonItemIcon_C_ExecuteUbergraph_WBP_PalCommonItemIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


